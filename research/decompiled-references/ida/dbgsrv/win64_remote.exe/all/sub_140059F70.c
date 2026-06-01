/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059F70
// Address: 0x0000000140059F70

//----- (0000000140059F70) ----------------------------------------------------
__int64 __fastcall sub_140059F70(unsigned int a1)
{
  int v3; // r11d
  int v4; // r10d
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  _DWORD *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // rax

  if ( a1 < 0x80 )
    return (unsigned int)dword_14009A840[a1];
  if ( a1 < 0x110000 )
  {
    v3 = 0;
    v4 = 3200;
    while ( v3 < 3200 )
    {
      if ( v4 > 3200 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1520);
      }
      v5 = (v4 + v3) / 2;
      v6 = 12LL * v5;
      v7 = v5 + 1;
      if ( (unsigned __int64)v5 < 0xC80 )
      {
        v8 = (_DWORD *)((char *)&qword_1400A1D90 + v6);
        v9 = v7 >= 0xC80 ? 1114112 : dword_1400A1D9C[3 * v5];
        if ( a1 >= *v8 && a1 < v9 && v8 )
        {
          v10 = (unsigned int)v8[1];
          if ( !v8[2] )
            v10 = a1 - *v8 + (unsigned int)v10;
          if ( (unsigned int)v10 >= 0x1D52 )
          {
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(1519);
          }
          return (unsigned int)dword_14009A840[v10];
        }
      }
      if ( *(_DWORD *)((char *)&qword_1400A1D90 + v6) >= a1 )
      {
        v7 = v3;
        v4 = v5 - 1;
      }
      v3 = v7;
      if ( (int)v7 > v4 )
        return 0;
    }
  }
  return 0;
}
// 14009A840: using guessed type int dword_14009A840[];
// 1400A1D90: using guessed type __int64 qword_1400A1D90;
// 1400A1D9C: using guessed type int dword_1400A1D9C[];
// 1400CB61C: using guessed type char byte_1400CB61C;
