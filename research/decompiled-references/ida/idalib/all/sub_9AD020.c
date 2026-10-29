void __fastcall sub_9AD020(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 *v10; // rsi
  __int64 v11; // r10
  __int64 v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // dl
  __int32 v17; // edx
  __int64 v18; // rax
  __int32 v19; // ecx
  int v20; // esi
  int v21; // r11d
  __int64 v22; // r10
  __m128i v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-A8h]
  __int32 v25; // [rsp+8h] [rbp-A0h]
  int v26; // [rsp+Ch] [rbp-9Ch]
  __m128i v27[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __m128i v29; // [rsp+38h] [rbp-70h] BYREF
  __m128i v30; // [rsp+48h] [rbp-60h]
  __m128i v31; // [rsp+58h] [rbp-50h]
  __int64 v32; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_WORD *)v5 & 0x1FF) == 0x3C && (*(_DWORD *)v5 & 0x80000) == 0 )
    v5 = *(_QWORD *)(v5 + 16);
  v6 = sub_BFB9F0(v5);
  v7 = *(unsigned int *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v10 = (__int64 *)(v8 + ((unsigned __int64)v9 << 6));
    v11 = *v10;
    if ( v6 == *v10 )
    {
LABEL_6:
      sub_9AC330((__m128 *)&v28, v10, (_QWORD *)((v7 << 6) + v8), a1 + 16, 1);
      v12 = v28;
      goto LABEL_7;
    }
    v20 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v21 = v20 + 1;
        v9 = (v7 - 1) & (v20 + v9);
        v10 = (__int64 *)(v8 + ((unsigned __int64)v9 << 6));
        v22 = *v10;
        if ( v6 == *v10 )
          goto LABEL_6;
        v20 = v21;
      }
      while ( v22 != -4096 );
    }
  }
  sub_9AC330(
    (__m128 *)&v28,
    (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v7 << 6)),
    (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v7 << 6)),
    a1 + 16,
    1);
  v12 = v28;
LABEL_7:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9AC330((__m128 *)&v28, v13, v13, a1 + 16, 1);
  if ( v28 != v12 )
  {
    v16 = *(_BYTE *)(a2 + 2) >> 3;
    if ( v16 == 4 )
    {
      v23 = _mm_loadu_si128((const __m128i *)(v12 + 8));
      v28 = a2;
      v29 = v23;
      v30 = _mm_loadu_si128((const __m128i *)(v12 + 24));
      v31 = _mm_loadu_si128((const __m128i *)(v12 + 40));
      v32 = *(_QWORD *)(v12 + 56);
LABEL_20:
      sub_9AC3A0(v27, a1 + 16, &v28, &v29, v14, v15);
      return;
    }
    if ( v16 == 9 )
    {
      v17 = *(_DWORD *)(v12 + 8);
      if ( (unsigned int)(v17 - 2) <= 1 )
      {
        if ( v17 == 2 )
        {
          v18 = *(_QWORD *)(v12 + 16);
          v19 = dword_23DAF90[*(unsigned int *)(v12 + 24)];
        }
        else
        {
          v2 = *(_QWORD *)(v12 + 48);
          v26 = dword_23DAF90[*(unsigned int *)(v12 + 56)];
          v17 = 3;
          v25 = dword_23DAF90[*(unsigned int *)(v12 + 40)];
          v24 = *(_QWORD *)(v12 + 32);
          v18 = *(_QWORD *)(v12 + 16);
          v19 = *(_DWORD *)(v12 + 24) == 0;
        }
        v29.m128i_i64[1] = v18;
        v28 = a2;
        v30.m128i_i64[1] = v24;
        v29.m128i_i32[0] = v17;
        v31.m128i_i32[0] = v25;
        v30.m128i_i32[0] = v19;
        v31.m128i_i64[1] = v2;
        LODWORD(v32) = v26;
        goto LABEL_20;
      }
    }
  }
}
