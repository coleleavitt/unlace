__int64 __fastcall sub_89DD80(__int64 a1, const char *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  char *v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 i; // r10
  __int64 v21; // r13
  __int64 v22; // rbx
  size_t v23; // r14
  void *v24; // rax
  bool v25; // [rsp+1h] [rbp-91h]
  int v26; // [rsp+2h] [rbp-90h]
  int v27; // [rsp+6h] [rbp-8Ch]
  __int64 v28; // [rsp+Ah] [rbp-88h]
  __int64 v29; // [rsp+12h] [rbp-80h]
  __int64 (__fastcall **v30)(); // [rsp+1Ah] [rbp-78h] BYREF
  char v31; // [rsp+22h] [rbp-70h]
  __int64 v32; // [rsp+2Ah] [rbp-68h]
  __int128 v33; // [rsp+32h] [rbp-60h]
  int v34; // [rsp+42h] [rbp-50h]
  int v35; // [rsp+46h] [rbp-4Ch]
  bool v36; // [rsp+4Ah] [rbp-48h]
  unsigned __int64 v37; // [rsp+52h] [rbp-40h]

  v5 = a1;
  v6 = (char *)a2;
  v7 = a3[1];
  v26 = a4;
  v27 = a5;
  v37 = __readfsqword(0x28u);
  v31 = 79;
  v25 = a2 != nullptr;
  v33 = 0;
  v30 = &off_2B14E18;
  v32 = 0;
  if ( v7 )
  {
    v17 = qalloc_or_throw(24 * v7, a2, a3, a4, a5, a1);
    *((_QWORD *)&v33 + 1) = v7;
    v18 = 0;
    v19 = 0;
    v32 = v17;
    v5 = a1;
    for ( i = v17; ; i = v32 )
    {
      v21 = i + 24 * v18;
      v22 = 24 * v18 + *a3;
      *(_QWORD *)v21 = 0;
      *(_OWORD *)(v21 + 8) = v19;
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
      {
        v29 = v5;
        v28 = v18;
        v24 = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 8), a2);
        *(_QWORD *)(v21 + 16) = v23;
        *(_QWORD *)v21 = v24;
        a2 = *(const char **)v22;
        memcpy(v24, *(const void **)v22, v23);
        *(_QWORD *)(v21 + 8) = v23;
        v19 = 0;
        v5 = v29;
        v18 = v28 + 1;
        if ( v7 == v28 + 1 )
        {
LABEL_13:
          *(_QWORD *)&v33 = v7;
          break;
        }
      }
      else if ( v7 == ++v18 )
      {
        goto LABEL_13;
      }
    }
  }
  v8 = (_QWORD *)(v5 + 40);
  v34 = v26;
  v36 = v25;
  v35 = v27;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(v5 + 40) + 80LL))(
                   v5 + 40,
                   &v30);
  v12 = sub_89A5C0(v8, (__int64)v9, 80, nullptr, v10, v11);
  if ( !v12 && v25 )
  {
    v13 = *(_QWORD *)v6;
    v14 = _mm_loadu_si128((const __m128i *)(v6 + 8));
    *(_QWORD *)v6 = v9[2];
    *((_QWORD *)v6 + 1) = v9[3];
    *((_QWORD *)v6 + 2) = v9[4];
    v9[2] = v13;
    *(__m128i *)(v9 + 3) = v14;
  }
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  sub_8B4A90(&v30);
  return v12;
}

