/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423B70
// Address: 0x00423B70

//----- (00423B70) --------------------------------------------------------
void __stdcall sub_423B70(int a1)
{
  _DWORD *v2; // esi
  bool v3; // zf
  unsigned int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  void *v8; // eax
  void *v9; // [esp-4h] [ebp-74h]
  _DWORD v10[9]; // [esp+10h] [ebp-60h] BYREF
  void *v11; // [esp+34h] [ebp-3Ch] BYREF
  int v12; // [esp+38h] [ebp-38h]
  unsigned int v13; // [esp+3Ch] [ebp-34h]
  unsigned int v14; // [esp+60h] [ebp-10h]
  int v15; // [esp+6Ch] [ebp-4h]
  int v16; // [esp+78h] [ebp+8h]

  if ( !a1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2656);
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    v2 = *(_DWORD **)(a1 + 8);
    v3 = v2[2]-- == 1;
    if ( v3 )
    {
      v4 = v2[3];
      while ( v4 )
      {
        v5 = sub_427F00(v4);
        v3 = *(_DWORD *)(v5 + 36) == -1;
        v4 = *(_DWORD *)(v5 + 8);
        v14 = v4;
        if ( !v3 )
        {
          v2[2] += 32;
          sub_41C8A0((char *)v10, 0, 1);
          v6 = v12;
          v7 = *(_DWORD *)(v5 + 36);
          v16 = v10[4];
          v15 = 1;
          if ( v12 + 1 <= v13 )
          {
            v8 = v11;
          }
          else
          {
            v8 = sub_453B00((int)&v11, v11, v12 + 1, 4u);
            v6 = v12;
            v11 = v8;
          }
          *((_DWORD *)v8 + v6) = v16;
          ++v12;
          sub_4234F0((char *)v10, (char *)a1);
          sub_420C30(v10, a1, nullptr, nullptr, v7);
          v15 = -1;
          sub_41CD20(v10);
          v3 = v2[2] == 32;
          v2[2] -= 32;
          if ( !v3 )
            break;
          v4 = v14;
        }
      }
      if ( !v2[2] )
      {
        sub_41C390(v2, (int)v2, *(int **)(*v2 + 4));
        sub_4627F2((void *)*v2);
        sub_4627F2(v2);
      }
    }
  }
  else if ( *(_BYTE *)a1 == 7 )
  {
    v15 = 0;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v9 = *(void **)(a1 + 8);
      *(_DWORD *)(a1 + 12) = 0;
      sub_453A20(v9);
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  *(_BYTE *)a1 = 2;
  *(_DWORD *)(a1 + 8) = 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
