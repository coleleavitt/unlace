/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BCF0
// Address: 0x000000000042BCF0

//----- (000000000042BCF0) ----------------------------------------------------
__int64 __fastcall sub_42BCF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned int (__fastcall *v9)(__int64, __int64, __int64); // rbp
  __int64 v10; // r15

  v2 = a1[2];
  if ( v2 && (v3 = a1[6]) != 0 )
  {
    v4 = a1[9];
    v5 = v3 - 1;
    *(_QWORD *)(a2 + 8) = -1;
    if ( v3 - 2 < (unsigned __int64)(v2 - 1) )
    {
      v6 = a1[1];
      v7 = a1[5];
      v8 = v2 - v5;
      if ( v8 )
      {
        v9 = (unsigned int (__fastcall *)(__int64, __int64, __int64))&memcmp;
        if ( v4 )
          v9 = (unsigned int (__fastcall *)(__int64, __int64, __int64))sub_4820C0;
        v10 = 0;
        while ( v9(v6 + v10, v7, v5) )
        {
          if ( v8 == ++v10 )
            return 0;
        }
        *(_QWORD *)(a2 + 8) = v10;
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
