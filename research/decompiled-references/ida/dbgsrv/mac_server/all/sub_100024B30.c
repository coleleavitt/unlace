/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024B30
// Address: 0x0000000100024B30

//----- (0000000100024B30) ----------------------------------------------------
__int64 __fastcall sub_100024B30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  bool v3; // cf
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned int (__fastcall *v15)(__int64, __int64, __int64); // [rsp+10h] [rbp-30h]

  v2 = a1[2];
  v3 = v2 == 0;
  v4 = v2 - 1;
  if ( v3 )
    v4 = 0;
  v5 = a1[6];
  v3 = v5 == 0;
  v6 = v5 - 1;
  if ( v3 )
    v6 = 0;
  v7 = a1[9];
  *(_QWORD *)(a2 + 8) = -1;
  if ( v6 - 1 < v4 )
  {
    v8 = v4 + 1 - v6;
    if ( v8 )
    {
      if ( v7 )
        v9 = (unsigned int (__fastcall *)(__int64, __int64, __int64))memicmp;
      else
        v9 = (unsigned int (__fastcall *)(__int64, __int64, __int64))&_memcmp;
      v15 = v9;
      v10 = a1[5];
      v11 = a1[1];
      v12 = (v8 == 0) + v8;
      v13 = 0;
      while ( v15(v11 + v13, v10, v6) )
      {
        if ( v12 == ++v13 )
          return 0;
      }
      *(_QWORD *)(a2 + 8) = v13;
    }
  }
  return 0;
}
