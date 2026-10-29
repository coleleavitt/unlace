/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E070
// Address: 0x000000000005E070

//----- (000000000005E070) ----------------------------------------------------
unsigned __int64 __fastcall sub_5E070(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  char *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  void *v13[3]; // [rsp+0h] [rbp-98h] BYREF
  void *ptr; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  unsigned __int64 v17; // [rsp+60h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 < a2 )
    {
      v5 = *(char **)a1;
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 > a3 || (unsigned __int64)&v5[96 * v6] <= a3 )
      {
        if ( v6 < a2 )
        {
          v5 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x60u);
          *(_QWORD *)a1 = v5;
          v3 = *(_QWORD *)(a1 + 8);
        }
        if ( v3 < a2 )
        {
          sub_5D190((__int64)&v5[96 * v3], a3);
          if ( v3 + 1 != a2 )
          {
            v10 = 96 * v3 + 96;
            v11 = a2 - 1 - v3;
            do
            {
              sub_5D190(v10 + *(_QWORD *)a1, a3);
              v10 += 96;
              --v11;
            }
            while ( v11 );
          }
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
      else
      {
        sub_5D190((__int64)v13, a3);
        if ( *(_QWORD *)(a1 + 16) < a2 )
          *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x60u);
        v7 = *(_QWORD *)(a1 + 8);
        if ( v7 < a2 )
        {
          v8 = a2 - v7;
          v9 = 96 * v7;
          do
          {
            sub_5D190(v9 + *(_QWORD *)a1, (__int64)v13);
            v9 += 96;
            --v8;
          }
          while ( v8 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( ptr )
        {
          v15 = 0;
          qfree(ptr);
          ptr = nullptr;
          v16 = 0;
        }
        if ( v13[0] )
        {
          v13[1] = nullptr;
          qfree(v13[0]);
          v13[0] = nullptr;
          v13[2] = nullptr;
        }
      }
    }
  }
  else
  {
    sub_5BEB0((__int64 *)a1, a2);
  }
  return __readfsqword(0x28u);
}
