__int64 __fastcall sub_320C0(__int64 a1, __int64 *a2, int a3, _QWORD *a4, _QWORD *a5, _QWORD *a6, int a7)
{
  __int64 v8; // r13
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rbx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // r13d
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r15
  void *v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int128 v32; // xmm0
  __int64 i; // r10
  __int64 v34; // r10
  __int64 v35; // r15
  void *v36; // rax
  size_t n; // [rsp+10h] [rbp-C0h]
  size_t na; // [rsp+10h] [rbp-C0h]
  size_t nc; // [rsp+10h] [rbp-C0h]
  _QWORD *v41; // [rsp+18h] [rbp-B8h]
  _QWORD *v42; // [rsp+18h] [rbp-B8h]
  _QWORD *v43; // [rsp+20h] [rbp-B0h]
  __int64 (__fastcall **v44)(); // [rsp+28h] [rbp-A8h] BYREF
  char v45; // [rsp+30h] [rbp-A0h]
  int v46; // [rsp+34h] [rbp-9Ch]
  __int64 v47; // [rsp+38h] [rbp-98h]
  __int128 v48; // [rsp+40h] [rbp-90h]
  __int64 v49; // [rsp+50h] [rbp-80h]
  __int128 v50; // [rsp+58h] [rbp-78h]
  __int64 v51; // [rsp+68h] [rbp-68h]
  __int128 v52; // [rsp+70h] [rbp-60h]
  int v53; // [rsp+80h] [rbp-50h]
  bool v54; // [rsp+84h] [rbp-4Ch]
  unsigned __int64 v55; // [rsp+90h] [rbp-40h]

  v8 = a4[1];
  v55 = __readfsqword(0x28u);
  v45 = 84;
  v44 = &off_1621C8;
  v46 = a3;
  v47 = 0;
  v48 = 0;
  if ( v8 )
  {
    v29 = 0;
    v30 = sub_96030(24 * v8);
    *((_QWORD *)&v48 + 1) = v8;
    v31 = a4;
    v32 = 0;
    v47 = v30;
    for ( i = v30; ; i = v47 )
    {
      v34 = 24 * v29 + i;
      v35 = *v31 + 24 * v29;
      *(_QWORD *)v34 = 0;
      *(_OWORD *)(v34 + 8) = v32;
      if ( *(_QWORD *)(v35 + 8) )
      {
        v43 = v31;
        ++v29;
        v42 = (_QWORD *)v34;
        nc = *(_QWORD *)(v35 + 8);
        v36 = (void *)sub_96030(nc);
        v42[2] = nc;
        *v42 = v36;
        memcpy(v36, *(const void **)v35, nc);
        v32 = 0;
        v31 = v43;
        v42[1] = nc;
        if ( v8 == v29 )
        {
LABEL_27:
          *(_QWORD *)&v48 = v8;
          break;
        }
      }
      else if ( v8 == ++v29 )
      {
        goto LABEL_27;
      }
    }
  }
  v10 = a5[1];
  v49 = 0;
  v50 = 0;
  if ( !v10 )
    goto LABEL_3;
  v49 = sub_96030(24 * v10);
  v24 = v49;
  v25 = 0;
  *((_QWORD *)&v50 + 1) = v10;
  while ( 1 )
  {
    v26 = 24 * v25 + v24;
    v27 = *a5 + 24 * v25;
    *(_QWORD *)v26 = 0;
    *(_OWORD *)(v26 + 8) = 0;
    if ( *(_QWORD *)(v27 + 8) )
      break;
    if ( v10 == ++v25 )
      goto LABEL_21;
LABEL_18:
    v24 = v49;
  }
  v41 = (_QWORD *)v26;
  na = *(_QWORD *)(v27 + 8);
  v28 = (void *)sub_96030(na);
  ++v25;
  v41[2] = na;
  *v41 = v28;
  memcpy(v28, *(const void **)v27, na);
  v41[1] = na;
  if ( v10 != v25 )
    goto LABEL_18;
LABEL_21:
  *(_QWORD *)&v50 = v10;
LABEL_3:
  v11 = a6[1];
  v51 = 0;
  v52 = 0;
  if ( v11 )
  {
    v51 = sub_96030(24 * v11);
    v19 = v51;
    v20 = 0;
    *((_QWORD *)&v52 + 1) = v11;
    while ( 1 )
    {
      v21 = 24 * v20 + v19;
      v22 = 24 * v20 + *a6;
      *(_QWORD *)v21 = 0;
      *(_OWORD *)(v21 + 8) = 0;
      if ( *(_QWORD *)(v22 + 8) )
      {
        n = *(_QWORD *)(v22 + 8);
        v23 = (void *)sub_96030(n);
        *(_QWORD *)v21 = v23;
        ++v20;
        *(_QWORD *)(v21 + 16) = n;
        memcpy(v23, *(const void **)v22, n);
        *(_QWORD *)(v21 + 8) = n;
        if ( v11 == v20 )
        {
LABEL_15:
          *(_QWORD *)&v52 = v11;
          break;
        }
      }
      else if ( v11 == ++v20 )
      {
        goto LABEL_15;
      }
      v19 = v51;
    }
  }
  v53 = a7;
  v54 = a2 != nullptr;
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                    a1 + 40,
                    &v44);
  v15 = sub_2A6A0((_QWORD *)(a1 + 40), (__int64)v12, 85, nullptr, v13, v14);
  if ( !v15 && a2 )
  {
    v16 = *a2;
    v17 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v12[2];
    a2[1] = v12[3];
    a2[2] = v12[4];
    v12[2] = v16;
    *(__m128i *)(v12 + 3) = v17;
  }
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  sub_40E40(&v44);
  return v15;
}

