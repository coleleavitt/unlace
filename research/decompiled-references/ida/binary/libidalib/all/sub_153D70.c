unsigned __int64 __fastcall sub_153D70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // r12d
  int v21; // eax
  int v22; // eax
  const __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-68h] BYREF
  __m128i v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  unsigned __int64 v39; // [rsp+38h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 960) )
  {
    v2 = *(_QWORD *)(a2 + 16);
    if ( v2 == *(_QWORD *)(a1 + 968) )
    {
      v17 = a1 + 440;
      v18 = sub_15D8F0(a1 + 440);
      v19 = a1 + 440;
      v20 = *(__int16 *)(v18 + 28);
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 968) + 72LL);
      *(_BYTE *)(a1 + 961) = 1;
      if ( v20 < v21 )
        v20 = v21;
      v22 = *(_DWORD *)(a1 + 16) + v21;
      if ( v20 >= v22 )
        v20 = v22 - 1;
      if ( v20 != *(__int16 *)(sub_15D8F0(v19) + 28) )
      {
        v23 = (const __m128i *)sub_15D8D0(v17);
        v36.m128i_i64[0] = 0;
        v36.m128i_i64[1] = -1;
        v37 = 0;
        v38 = 0;
        v35 = 0;
        if ( v23 != &v35 )
        {
          v35 = _mm_loadu_si128(v23);
          v36 = _mm_loadu_si128(v23 + 1);
          v27 = v23[2].m128i_u32[0];
          LODWORD(v37) = v23[2].m128i_i32[0];
          v28 = v23[2].m128i_i64[1];
          if ( v28 )
            v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 16LL))(
                    v28,
                    a2,
                    v27,
                    v24,
                    v25,
                    v26,
                    v35.m128i_i64[0],
                    v35.m128i_i64[1],
                    v36.m128i_i64[0],
                    v36.m128i_i64[1],
                    v37);
        }
        v36.m128i_i16[6] = v20;
        sub_162240(v17, &v35, 7);
        if ( v38 )
          qfree();
      }
      v2 = *(_QWORD *)(a2 + 16);
    }
    if ( *(_QWORD *)(a1 + 976) == v2 )
    {
      v5 = *(int *)(v2 + 72);
      v6 = *(__int16 *)(a1 + 962);
      if ( (_DWORD)v5 != v6 )
      {
        if ( (_DWORD)v5 == v6 + 1 )
        {
          v32 = sub_15E9E0(a1);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 168LL))(v32, 0, 1);
        }
        else if ( (_DWORD)v5 == v6 - 1 )
        {
          v33 = sub_15E9E0(a1);
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 168LL))(v33, 1, 1);
        }
        else
        {
          v7 = *(_DWORD *)(a1 + 20);
          if ( (_DWORD)v5 != v6 + v7 )
          {
            if ( (_DWORD)v5 != v6 - v7 )
            {
              v8 = 0x7FFFFFFF;
              v9 = v5 * (*(_QWORD *)(a1 + 752) - *(_QWORD *)(a1 + 744)) / (unsigned __int64)*(__int16 *)(a1 + 736)
                 + *(_QWORD *)(a1 + 744);
              if ( *(_QWORD *)(a1 + 752) != v9 )
                v8 = 0;
              v10 = sub_15EFE0(a1, v9, v8);
              v11 = sub_15D8F0(a1 + 440);
              v12 = *(unsigned int *)(a1 + 44);
              LODWORD(v11) = *(__int16 *)(v11 + 28);
              v35.m128i_i64[0] = v10;
              v35.m128i_i32[2] = v11;
              sub_153500(a1, (__int64)&v35, v12, v13, v14, v15);
              qfree();
              goto LABEL_13;
            }
            v29 = a1;
            v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL);
            if ( v30 == sub_F4350 )
            {
              v34 = sub_15E9E0(a1);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 160LL))(v34, 1);
              goto LABEL_13;
            }
LABEL_31:
            v30(v29);
            goto LABEL_13;
          }
          v29 = a1;
          v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL);
          if ( v30 != sub_F4380 )
            goto LABEL_31;
          v31 = sub_15E9E0(a1);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 160LL))(v31, 0);
        }
LABEL_13:
        v16 = *(_DWORD *)(*(_QWORD *)(a1 + 976) + 72LL);
        *(_DWORD *)(a1 + 880) = 0;
        *(_WORD *)(a1 + 962) = v16;
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

