/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD520
// Address: 0x080BD520

//----- (080BD520) --------------------------------------------------------
int __cdecl sub_80BD520(int a1, int a2)
{
  char v2; // dl
  bool v3; // zf
  socklen_t v4; // eax
  struct sockaddr *p_addr; // edi
  int v6; // eax
  int result; // eax
  int *v8; // edx
  int v9; // eax
  int *v10; // [esp+8h] [ebp-60h]
  socklen_t v11; // [esp+18h] [ebp-50h] BYREF
  char v12; // [esp+1Ch] [ebp-4Ch] BYREF
  struct sockaddr addr; // [esp+2Ch] [ebp-3Ch] BYREF
  unsigned int v14; // [esp+48h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  if ( a2 )
  {
    v2 = *(_BYTE *)(a2 + 52);
    v3 = *(_DWORD *)(a1 + 28) == -1;
    *(_BYTE *)(a1 + 52) = v2;
    if ( v3 )
    {
      while ( 1 )
      {
        if ( v2 )
        {
          v4 = 28;
          p_addr = &addr;
        }
        else
        {
          p_addr = (struct sockaddr *)&v12;
          v4 = 16;
        }
        v11 = v4;
        v6 = accept4(*(_DWORD *)(a2 + 28), p_addr, &v11, 0x80000);
        *(_DWORD *)(a1 + 28) = v6;
        if ( v6 != -1 )
          break;
        v8 = __errno_location();
        if ( *v8 == 38 )
        {
          v10 = v8;
          v9 = accept(*(_DWORD *)(a2 + 28), p_addr, &v11);
          *(_DWORD *)(a1 + 28) = v9;
          if ( v9 != -1 )
            break;
          v8 = v10;
          if ( *v10 != 4 )
          {
LABEL_15:
            *(_DWORD *)(a1 + 44) = "accept";
            *(_DWORD *)(a1 + 48) = *v8;
            goto LABEL_16;
          }
        }
        else if ( *v8 != 4 )
        {
          goto LABEL_15;
        }
        v2 = *(_BYTE *)(a1 + 52);
      }
    }
    result = 1;
  }
  else
  {
LABEL_16:
    result = 0;
  }
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B2C0: using guessed type int __cdecl accept4(_DWORD, _DWORD, _DWORD, _DWORD);
