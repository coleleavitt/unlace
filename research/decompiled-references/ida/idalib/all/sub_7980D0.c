__int64 __fastcall sub_7980D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  char v16[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+18h] [rbp-30h]
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  v19 = __readfsqword(0x28u);
  v8 = (__m128i *)(v7 + 32 * v6 - 32);
  if ( !(unsigned int)idcv_string(v8, a2, v7, a4, a5, a6) )
  {
    v9 = v8->m128i_i64[1];
    v10 = *(_QWORD *)a2;
    v16[0] = 2;
    v11 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v9;
    *(_QWORD *)(a2 + 8) = v8[1].m128i_i64[0];
    *(_QWORD *)(a2 + 16) = v8[1].m128i_i64[1];
    v8[1] = v11;
    v8->m128i_i64[1] = v10;
    v17 = 0;
    v18 = 0;
    copy_idcv(v16);
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      v15 = v12 - 1;
      *(_QWORD *)(a1 + 32) = v15;
      free_idcv(*(_QWORD *)(a1 + 24) + 32 * v15);
    }
    free_idcv(v16);
    v13 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    if ( *(_BYTE *)v13 == 5 )
      return *(_QWORD *)(v13 + 8);
    set_qerrno(1532);
  }
  return 0;
}
