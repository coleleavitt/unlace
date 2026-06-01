unsigned __int64 __fastcall sub_63F420(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __m128i *v4; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+40h] [rbp-28h]
  int v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16) & 0x8000LL;
    if ( (*(_QWORD *)(a2 + 16) & 0x8000) == 0 )
    {
      v4 = (__m128i *)*(int *)(a2 + 96);
      if ( *(_DWORD *)(a2 + 96) )
      {
        if ( !*(_QWORD *)(a2 + 104) )
        {
          v6 = *(_QWORD *)a2;
          ptr = nullptr;
          v17 = 0;
          v7 = sub_3BDD60(a1, v6);
          if ( netnode_qgetblob(v7, &ptr, 1, 20480, 83) <= 0 )
          {
            *(_DWORD *)(a2 + 96) = 0;
            sub_368890();
          }
          v8 = 16;
          v9 = v4;
          v15 = _mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)ptr,
                  (__m128i)(unsigned __int64)((unsigned __int64)ptr + v17));
          v10 = qcalloc(v4, 16);
          v12 = (__int64 *)v10;
          if ( !v10 )
            sub_3BC000((int)"read_llabels");
          *(_QWORD *)(a2 + 104) = v10;
          while ( 1 )
          {
            if ( (unsigned __int8)is_cvt64(v9, v8, v11) )
            {
              v13 = (unsigned int)v6 + (unsigned int)unpack_dd(&v15);
              if ( v13 == 0xFFFFFFFFLL )
                v13 = -1;
            }
            else
            {
              v13 = v6 + unpack_dq(&v15);
            }
            *v12 = v13;
            v8 = v15.m128i_i64[1];
            v9 = &v15;
            v14 = unpack_ds(&v15, v15.m128i_i64[1], 0);
            v12[1] = v14;
            v6 = *v12;
            if ( !v14 )
              break;
            ++v3;
            v12 += 2;
            if ( v4 == (__m128i *)v3 )
              goto LABEL_18;
          }
          sub_84F5B0(
            "empty label at %a\n",
            v15.m128i_i64[0],
            v15.m128i_i32[2],
            (int)ptr,
            v17,
            SDWORD2(v17),
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          *(_DWORD *)(a2 + 96) = v3;
LABEL_18:
          if ( ptr )
          {
            *(_QWORD *)&v17 = 0;
            qfree(ptr);
          }
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
