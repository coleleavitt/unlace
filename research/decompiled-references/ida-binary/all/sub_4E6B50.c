void *__fastcall sub_4E6B50(
        char *src,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        void *srca,
        __int64 a12)
{
  __int64 *v12; // r14
  char *v13; // rbp
  size_t v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  double v19; // xmm4_8
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r15
  size_t v25; // r12
  char *v26; // r10
  char *v27; // r11
  char *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  double v33; // xmm4_8
  char v34; // al
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 *v38; // r15
  signed __int64 v40; // rdx
  char *v41; // rdi
  char *v42; // rsi
  __int64 v43; // rax
  __int64 *v44; // [rsp+8h] [rbp-90h]
  char *v45; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  char *v47; // [rsp+10h] [rbp-88h]
  char *dest; // [rsp+18h] [rbp-80h]
  char *v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+30h] [rbp-68h] BYREF
  __int64 v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v12 = (__int64 *)a2;
  v13 = a6;
  dest = src;
  v44 = a3;
  v54 = __readfsqword(0x28u);
  if ( a4 <= a5 )
  {
    v14 = a2 - src;
    if ( a2 - src <= 8 )
    {
      if ( a2 - src == 8 )
        *(_QWORD *)a6 = *(_QWORD *)src;
    }
    else
    {
      memmove(a6, src, v14);
    }
    v45 = &v13[v14];
    if ( a2 != (char *)v44 && v13 != &v13[v14] )
    {
      do
      {
        v21 = *(_QWORD *)v13;
        v22 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a12 + 48LL))(a12, srca, *v12);
        v23 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a12 + 48LL))(a12, srca, v21);
        v24 = v23;
        if ( v22
          && v23
          && (v15 = sub_4D89F0((__int64)srca, *(_DWORD *)(*(_QWORD *)v23 + 24LL * *(int *)(v23 + 96)), 0),
              v53 = v16,
              v52 = v15,
              v17 = sub_4D89F0((__int64)srca, *(_DWORD *)(*(_QWORD *)v22 + 24LL * *(int *)(v22 + 96)), 0),
              v51 = v18,
              v50 = v17,
              sub_4D9280(v22 + 48, (__int64)&v50, v24 + 48, (unsigned __int64 *)&v52, a7, a8, a9, a10, v19)) )
        {
          v20 = *v12++;
        }
        else
        {
          v20 = *(_QWORD *)v13;
          v13 += 8;
        }
        *(_QWORD *)dest = v20;
        dest += 8;
      }
      while ( v13 != v45 && v44 != v12 );
    }
    if ( v45 != v13 )
    {
      v40 = v45 - v13;
      if ( v45 - v13 > 8 )
      {
        v41 = dest;
        v42 = v13;
        return memmove(v41, v42, v40);
      }
      if ( v45 - v13 == 8 )
        *(_QWORD *)dest = *(_QWORD *)v13;
    }
    return (void *)(v54 - __readfsqword(0x28u));
  }
  v25 = (char *)a3 - a2;
  if ( (char *)a3 - a2 <= 8 )
  {
    if ( (char *)a3 - a2 == 8 )
    {
      v43 = *(_QWORD *)a2;
      v26 = a6 + 8;
      *(_QWORD *)a6 = *(_QWORD *)a2;
      if ( a2 == src )
      {
        *(a3 - 1) = v43;
        return (void *)(v54 - __readfsqword(0x28u));
      }
    }
    else
    {
      v26 = &a6[v25];
      if ( a2 == src )
        return (void *)(v54 - __readfsqword(0x28u));
    }
  }
  else
  {
    memmove(a6, a2, (char *)a3 - a2);
    v26 = &v13[v25];
    if ( a2 == src )
      return memmove(a2, v13, v25);
  }
  if ( v13 == v26 )
    return (void *)(v54 - __readfsqword(0x28u));
  v27 = a2 - 8;
  v28 = v26 - 8;
  while ( 1 )
  {
    v35 = *(_QWORD *)v27;
    v47 = v27;
    v36 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a12 + 48LL))(a12, srca, *(_QWORD *)v28);
    v37 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a12 + 48LL))(a12, srca, v35);
    v27 = v47;
    v38 = v44 - 1;
    if ( v36 )
    {
      if ( v37 )
      {
        v49 = v47;
        v46 = v37;
        v29 = sub_4D89F0((__int64)srca, *(_DWORD *)(*(_QWORD *)v37 + 24LL * *(int *)(v37 + 96)), 0);
        v53 = v30;
        v52 = v29;
        v31 = sub_4D89F0((__int64)srca, *(_DWORD *)(*(_QWORD *)v36 + 24LL * *(int *)(v36 + 96)), 0);
        v51 = v32;
        v50 = v31;
        v34 = sub_4D9280(v36 + 48, (__int64)&v50, v46 + 48, (unsigned __int64 *)&v52, a7, a8, a9, a10, v33);
        v27 = v49;
        if ( v34 )
          break;
      }
    }
    *v38 = *(_QWORD *)v28;
    if ( v13 == v28 )
      return (void *)(v54 - __readfsqword(0x28u));
    v28 -= 8;
LABEL_22:
    --v44;
  }
  *(v44 - 1) = *(_QWORD *)v49;
  if ( src != v49 )
  {
    v27 = v49 - 8;
    goto LABEL_22;
  }
  v40 = v28 + 8 - v13;
  if ( v40 <= 8 )
  {
    if ( v40 == 8 )
      *(v44 - 2) = *(_QWORD *)v13;
    return (void *)(v54 - __readfsqword(0x28u));
  }
  v42 = v13;
  v41 = (char *)v38 - v40;
  return memmove(v41, v42, v40);
}
