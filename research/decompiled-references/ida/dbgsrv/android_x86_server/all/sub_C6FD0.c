/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6FD0
// Address: 0x000C6FD0

//----- (000C6FD0) --------------------------------------------------------
int __fastcall sub_C6FD0(_DWORD *a1)
{
  _BYTE *v2; // eax
  _BYTE *v3; // ecx
  int v4; // edi
  _BYTE *v5; // edx
  char *v6; // eax
  _BYTE *v7; // ecx
  _DWORD *v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  char *v13; // [esp+8h] [ebp-14h]

  v2 = (_BYTE *)*a1;
  v3 = (_BYTE *)a1[1];
  v4 = 0;
  if ( v2 != v3 && *v2 == 68 )
  {
    v5 = v2 + 1;
    *a1 = v2 + 1;
    if ( v2 + 1 != v3 && (*v5 == 116 || *v5 == 84) )
    {
      *a1 = v2 + 2;
      v6 = sub_C8090((int)a1);
      if ( v6 )
      {
        v7 = (_BYTE *)*a1;
        if ( *a1 != a1[1] && *v7 == 69 )
        {
          v13 = v6;
          *a1 = v7 + 1;
          v8 = (_DWORD *)a1[1116];
          v9 = v8[1];
          if ( (unsigned int)(v9 + 32) < 0xFF8 )
          {
            v11 = v8 + 1;
          }
          else
          {
            v10 = operator new[](0x1000u);
            *v10 = v8;
            v10[1] = 0;
            a1[1116] = v10;
            v9 = 0;
            v11 = v10 + 1;
            v8 = v10;
          }
          *v11 = v9 + 32;
          *(_DWORD *)((char *)v8 + v9 + 12) = 16843050;
          *(_DWORD *)((char *)v8 + v9 + 8) = off_13A38C;
          *(_DWORD *)((char *)v8 + v9 + 16) = "decltype(";
          *(_DWORD *)((char *)v8 + v9 + 20) = "";
          *(_DWORD *)((char *)v8 + v9 + 24) = v13;
          *(_DWORD *)((char *)v8 + v9 + 28) = ")";
          *(_DWORD *)((char *)v8 + v9 + 32) = "";
          return (int)v8 + v9 + 8;
        }
      }
    }
  }
  return v4;
}
// 13A38C: using guessed type int (*off_13A38C[3])();
