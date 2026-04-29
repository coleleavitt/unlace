__int64 __fastcall sub_1CF000(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // r14
  __int64 v14; // rax
  int frame_retsize; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  __m128i v25; // xmm1
  __int64 v26; // xmm0_8
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *func; // rax
  __int64 v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-98h] BYREF
  __int128 v33; // [rsp+8h] [rbp-90h]
  _QWORD v34[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  sub_1CE950((unsigned __int64 *)(a1 + 1440));
  if ( (unsigned __int8)sub_1CE4F0(a1, a2, a3, 1) )
  {
    v10 = sub_33E140(*(_QWORD *)(a1 + 1496), 1, a1, (int)a1 + 1192, v8, v9);
    if ( v10 || *(int *)(a1 + 312) > 0 )
      return v10;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      sub_1CD380(a1, &v32, v34);
      *(_QWORD *)(a1 + 136) = v34[0] - v32;
    }
    v13 = a4;
    if ( !a4 )
    {
      v13 = *(_QWORD **)(a1 + 8);
      if ( !v13 )
      {
        if ( (*(_BYTE *)(a1 + 5) & 0x40) != 0
          || (func = (_QWORD *)get_func()) == nullptr
          || *func != *(_QWORD *)(a1 + 40) )
        {
          v17 = *(_QWORD **)(a1 + 1192);
          v31 = 2LL * *(_QWORD *)(a1 + 1200);
          v18 = &v17[v31];
          if ( v31 * 8 )
            goto LABEL_9;
          goto LABEL_41;
        }
        v13 = func;
      }
    }
    v14 = v13[6];
    *(_DWORD *)(a1 + 68) = v14;
    if ( !(_DWORD)v14 && (*((_BYTE *)v13 + 17) & 0x40) == 0 )
      *(_DWORD *)(a1 + 68) = -1;
    *(_QWORD *)(a1 + 88) = v13[4];
    *(_QWORD *)(a1 + 96) = *((unsigned __int16 *)v13 + 20);
    *(_QWORD *)(a1 + 104) = v13[7];
    *(_DWORD *)(a1 + 112) = v13[2];
    frame_retsize = get_frame_retsize();
    v16 = *(_QWORD *)(a1 + 1200);
    *(_DWORD *)(a1 + 116) = frame_retsize;
    v17 = *(_QWORD **)(a1 + 1192);
    v16 *= 16;
    v18 = (_QWORD *)((char *)v17 + v16);
    if ( v16 )
    {
LABEL_9:
      v19 = nullptr;
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = v17[1];
        if ( v22 > v21 )
        {
          v21 = v17[1];
          v19 = v17;
        }
        if ( v20 > v22 )
          v20 = v17[1];
        v17 += 2;
      }
      while ( v18 != v17 );
      if ( a4 )
      {
        v23 = 0;
        if ( v21 <= 0 )
          v23 = v21;
        v24 = v23 - v20;
        if ( v23 - v20 >= v23 )
          goto LABEL_19;
      }
      else
      {
        v24 = v21 - v20;
        if ( v21 - v20 >= v21 )
        {
          if ( v21 > 0 )
          {
            sub_3311F0(a1, *v19, 40, v21, v11, v12);
            v34[1] = a1;
            v32 = 0;
            v34[2] = a2;
            v34[3] = &v32;
            v35 = 0;
            v36 = 0;
            v34[0] = off_4DE908;
            v37 = v21;
            v33 = 0;
            sub_1CD6C0((_QWORD *)a1, a2, v34);
            v34[0] = &unk_4EC028;
            qfree(v35);
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree(v32);
            }
            nullsub_115();
            *(_QWORD *)(a1 + 176) = v21;
          }
LABEL_19:
          if ( *(_QWORD *)(a1 + 136) < v24 )
            *(_QWORD *)(a1 + 136) = v24;
          v25 = _mm_loadu_si128((const __m128i *)(a1 + 88));
          v26 = _mm_add_epi64(_mm_srli_si128(v25, 8), v25).m128i_u64[0];
          if ( v26 >= v25.m128i_i64[0] )
          {
            v27 = *(_QWORD *)(a1 + 136);
            if ( v27 < v26 )
            {
              *(_QWORD *)(a1 + 136) = v26;
              v27 = v26;
            }
            v28 = (v27 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1) & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            *(_QWORD *)(a1 + 136) = v28;
            if ( v28 <= 0x100000 )
              return sub_1CEB10(a1, v13);
          }
        }
      }
      return (unsigned int)-9;
    }
    v24 = 0;
    if ( a4 )
      goto LABEL_19;
LABEL_41:
    v24 = 0;
    goto LABEL_19;
  }
  return (unsigned int)-13;
}
