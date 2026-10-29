/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F040
// Address: 0x000000014001F040

//----- (000000014001F040) ----------------------------------------------------
__int64 __fastcall sub_14001F040(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  bool v4; // zf
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  int (__cdecl *v13)(const void *, const void *, size_t); // rbp

  v2 = a1[2];
  v3 = 0;
  v4 = v2 == 0;
  v6 = v2 - 1;
  v7 = a1[6];
  if ( v4 )
    v6 = 0;
  v4 = v7 == 0;
  v8 = v7 - 1;
  v9 = a1[9];
  if ( v4 )
    v8 = 0;
  *(_QWORD *)(a2 + 8) = -1;
  if ( v8 <= v6 )
  {
    if ( v8 )
    {
      v10 = a1[1];
      v11 = a1[5];
      v12 = v6 - v8 + 1;
      if ( v12 )
      {
        v13 = memcmp;
        if ( v9 )
          v13 = memicmp;
        while ( ((unsigned int (__fastcall *)(__int64, __int64, unsigned __int64))v13)(v10, v11, v8) )
        {
          ++v3;
          ++v10;
          if ( v3 >= v12 )
            return 0;
        }
        *(_QWORD *)(a2 + 8) = v3;
      }
    }
  }
  return 0;
}
