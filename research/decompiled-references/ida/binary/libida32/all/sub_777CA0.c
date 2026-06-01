__int64 __fastcall sub_777CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  char v15[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v18 = __readfsqword(0x28u);
  v4 = (__m128i *)(v3 + 32 * v2 - 32);
  if ( !(unsigned int)idcv_string(v4) )
  {
    v5 = v4->m128i_i64[1];
    v6 = *(_QWORD *)a2;
    v15[0] = 2;
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = v4[1].m128i_i64[0];
    *(_QWORD *)(a2 + 16) = v4[1].m128i_i64[1];
    v4[1] = v7;
    v4->m128i_i64[1] = v6;
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(_QWORD *)(a1 + 24);
    v16 = 0;
    v17 = 0;
    v10 = v9 + 32 * v8 - 32;
    copy_idcv(v15);
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      v14 = v11 - 1;
      *(_QWORD *)(a1 + 32) = v14;
      free_idcv(*(_QWORD *)(a1 + 24) + 32 * v14);
    }
    free_idcv(v15);
    v12 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    if ( *(_BYTE *)v12 == 5 )
      return *(_QWORD *)(v12 + 8);
    set_qerrno(1532, v10);
  }
  return 0;
}

