__int64 __fastcall sub_89E200(__int64 a1, const char *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  char *v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rbx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r14d
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // r8
  __int128 v20; // xmm0
  __int64 i; // r14
  __int64 v22; // r14
  __int64 v23; // rbx
  size_t v24; // r13
  void *v25; // rax
  bool v26; // [rsp+3h] [rbp-8Dh]
  int v27; // [rsp+4h] [rbp-8Ch]
  __int64 v28; // [rsp+8h] [rbp-88h]
  _QWORD *v30; // [rsp+10h] [rbp-80h]
  __int64 (__fastcall **v31)(); // [rsp+18h] [rbp-78h] BYREF
  char v32; // [rsp+20h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-68h]
  __int128 v34; // [rsp+30h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-50h]
  bool v36; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v37; // [rsp+50h] [rbp-40h]

  v5 = a1;
  v6 = (char *)a2;
  v7 = a3[1];
  v27 = a4;
  v37 = __readfsqword(0x28u);
  v32 = 70;
  v26 = a2 != nullptr;
  v34 = 0;
  v31 = &off_2B14C68;
  v33 = 0;
  if ( v7 )
  {
    v17 = 0;
    v18 = qalloc_or_throw(24 * v7, a2, a3, a4, a5, a1);
    *((_QWORD *)&v34 + 1) = v7;
    v19 = a3;
    v20 = 0;
    v33 = v18;
    v5 = a1;
    for ( i = v18; ; i = v33 )
    {
      v22 = 24 * v17 + i;
      v23 = 24 * v17 + *v19;
      *(_QWORD *)v22 = 0;
      *(_OWORD *)(v22 + 8) = v20;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v30 = v19;
        ++v17;
        v28 = v5;
        v25 = (void *)qalloc_or_throw(*(_QWORD *)(v23 + 8), a2);
        *(_QWORD *)(v22 + 16) = v24;
        *(_QWORD *)v22 = v25;
        a2 = *(const char **)v23;
        memcpy(v25, *(const void **)v23, v24);
        *(_QWORD *)(v22 + 8) = v24;
        v19 = v30;
        v20 = 0;
        v5 = v28;
        if ( v7 == v17 )
        {
LABEL_13:
          *(_QWORD *)&v34 = v7;
          break;
        }
      }
      else if ( v7 == ++v17 )
      {
        goto LABEL_13;
      }
    }
  }
  v8 = (_QWORD *)(v5 + 40);
  v35 = v27;
  v9 = *(_QWORD *)(v5 + 40);
  v36 = v26;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v9 + 80))(v5 + 40, &v31);
  v13 = sub_89A5C0(v8, (__int64)v10, 71, nullptr, v11, v12);
  if ( !v13 && v26 )
  {
    v14 = *(_QWORD *)v6;
    v15 = _mm_loadu_si128((const __m128i *)(v6 + 8));
    *(_QWORD *)v6 = v10[2];
    *((_QWORD *)v6 + 1) = v10[3];
    *((_QWORD *)v6 + 2) = v10[4];
    v10[2] = v14;
    *(__m128i *)(v10 + 3) = v15;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  sub_8B4990(&v31);
  return v13;
}

