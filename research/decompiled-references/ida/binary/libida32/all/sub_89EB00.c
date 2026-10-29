__int64 __fastcall sub_89EB00(__int64 a1, const char *a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  __int64 v6; // r10
  char *v7; // rbp
  __int64 v9; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // r12
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r14d
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v21; // rax
  __int64 v22; // r9
  __int128 v23; // xmm0
  __int64 v24; // r12
  __int64 v25; // rdx
  size_t v26; // r15
  void *v27; // rax
  char v28; // [rsp+7h] [rbp-99h]
  const void **v31; // [rsp+10h] [rbp-90h]
  __int64 v32; // [rsp+18h] [rbp-88h]
  __int64 v33; // [rsp+20h] [rbp-80h]
  __int64 (__fastcall **v34)(); // [rsp+28h] [rbp-78h] BYREF
  char v35; // [rsp+30h] [rbp-70h]
  __int64 v36; // [rsp+38h] [rbp-68h]
  __int128 v37; // [rsp+40h] [rbp-60h]
  int v38; // [rsp+50h] [rbp-50h]
  int v39; // [rsp+54h] [rbp-4Ch]
  char v40; // [rsp+58h] [rbp-48h]
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v6 = a1;
  v7 = (char *)a2;
  v9 = a4[1];
  v41 = __readfsqword(0x28u);
  v35 = 50;
  v37 = 0;
  v36 = 0;
  v28 = (a2 != nullptr) | (2 * (a3 != nullptr));
  v34 = &off_2B148A8;
  if ( v9 )
  {
    v21 = qalloc_or_throw(24 * v9, a2);
    *((_QWORD *)&v37 + 1) = v9;
    v22 = 0;
    v23 = 0;
    v36 = v21;
    v6 = a1;
    while ( 1 )
    {
      v24 = v21 + 24 * v22;
      v25 = *a4 + 24 * v22;
      *(_QWORD *)v24 = 0;
      *(_OWORD *)(v24 + 8) = v23;
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v33 = v6;
        v32 = v22;
        v31 = (const void **)v25;
        v27 = (void *)qalloc_or_throw(*(_QWORD *)(v25 + 8), a2);
        *(_QWORD *)(v24 + 16) = v26;
        *(_QWORD *)v24 = v27;
        a2 = (const char *)*v31;
        memcpy(v27, *v31, v26);
        *(_QWORD *)(v24 + 8) = v26;
        v23 = 0;
        v6 = v33;
        v22 = v32 + 1;
        if ( v9 == v32 + 1 )
        {
LABEL_15:
          *(_QWORD *)&v37 = v9;
          break;
        }
      }
      else if ( v9 == ++v22 )
      {
        goto LABEL_15;
      }
      v21 = v36;
    }
  }
  v10 = (_QWORD *)(v6 + 40);
  v38 = a5;
  v39 = a6;
  v40 = v28;
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(v6 + 40) + 80LL))(
                    v6 + 40,
                    &v34);
  v14 = sub_89A5C0(v10, (__int64)v11, 51, nullptr, v12, v13);
  if ( !v14 )
  {
    if ( v7 )
    {
      v15 = *(_QWORD *)v7;
      v16 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      *(_QWORD *)v7 = v11[2];
      *((_QWORD *)v7 + 1) = v11[3];
      *((_QWORD *)v7 + 2) = v11[4];
      v11[2] = v15;
      *(__m128i *)(v11 + 3) = v16;
    }
    if ( a3 )
    {
      v17 = *a3;
      v18 = _mm_loadu_si128((const __m128i *)(a3 + 1));
      *a3 = v11[5];
      a3[1] = v11[6];
      a3[2] = v11[7];
      v11[5] = v17;
      *((__m128i *)v11 + 3) = v18;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
  sub_8B4790(&v34);
  return v14;
}

