__int64 __fastcall sub_1FF5DD0(__int64 **a1, __int64 a2, const void *a3, size_t a4, _BYTE *a5, unsigned int a6)
{
  size_t v8; // rbx
  size_t v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // eax
  __int64 *v15; // rsi
  __int64 *v16; // r15
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  const void *v22; // r15
  const void *v23; // rax
  size_t v24; // rdx
  __int64 *v25; // r13
  __int64 *v26; // r15
  __int64 (__fastcall *v27)(__int64, const void *, __int64, const void *, size_t); // rax
  __int64 *v28; // rax
  __int64 *v29; // r13
  __int64 *v30; // r14
  __int64 *v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 **v36; // r13
  __int64 **v37; // r9
  __int64 *v38; // r14
  size_t v39; // rax
  __int64 **v40; // rbx
  size_t v41; // r15
  __int64 *v42; // rcx
  __int64 *v43; // r8
  int v44; // eax
  __int64 (__fastcall *v45)(__int64, const void *, __int64, const void *, size_t); // rax
  __int64 *v46; // rdx
  __int64 v47; // [rsp+8h] [rbp-100h]
  __int64 v48; // [rsp+10h] [rbp-F8h]
  __int64 *v49; // [rsp+10h] [rbp-F8h]
  size_t v51; // [rsp+28h] [rbp-E0h]
  __int64 *v52; // [rsp+30h] [rbp-D8h]
  __int64 *v53; // [rsp+38h] [rbp-D0h]
  char v54; // [rsp+4Fh] [rbp-B9h] BYREF
  void *v55[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A8h]
  const void *v57; // [rsp+70h] [rbp-98h] BYREF
  size_t v58; // [rsp+78h] [rbp-90h]
  __int16 v59; // [rsp+90h] [rbp-78h]
  __int64 *v60; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v61; // [rsp+A8h] [rbp-60h]
  __int16 v62; // [rsp+C0h] [rbp-48h]

  v8 = a4;
  if ( !*((_DWORD *)a1 + 11) )
  {
    v19 = sub_228AA60(a3, a4, 0);
    v21 = v20;
    v22 = (const void *)v19;
    v23 = (const void *)sub_228AA60(*a1, a1[1], 0);
    if ( v24 != v21 || v24 && memcmp(v23, v22, v24) )
      return 0;
    v25 = *a1;
    v26 = a1[1];
    v27 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)a2 + 16LL);
    if ( v27 == sub_1FF58F0 )
    {
      if ( v26 == (__int64 *)v8 && (!v8 || !memcmp(*a1, a3, v8)) )
        return (__int64)v25;
      v57 = a3;
      v59 = 261;
      v58 = v8;
      v62 = 261;
      v60 = v25;
      v61 = v26;
      if ( (unsigned int)sub_228C2E0(&v60, &v57, v55) || !LOBYTE(v55[0]) )
        return 0;
    }
    else if ( !(unsigned __int8)v27(a2, *a1, (__int64)a1[1], a3, v8) )
    {
      return 0;
    }
    return (__int64)*a1;
  }
  v10 = a4 - a6;
  if ( v10 > a4 )
    v10 = a4;
  v11 = sub_228AA60(a3, v10, 0);
  v48 = v12;
  v13 = sub_2244B30(v11, v12);
  v14 = sub_2244E60(a1 + 4, v11, v48, v13);
  if ( v14 == -1 )
    v15 = &a1[4][*((unsigned int *)a1 + 10)];
  else
    v15 = &a1[4][v14];
  sub_1FF5C50(&v60, v15, 1);
  v16 = v60;
  sub_1FF5C50(&v60, &a1[4][*((unsigned int *)a1 + 10)], 1);
  if ( v60 != v16 )
  {
    result = sub_1FF5DD0(*v16 + 8, a2, a3, v8, a5, a6 + (unsigned int)v48 + 1);
    if ( v18 || *a5 )
      return result;
  }
  if ( !a6 )
    return 0;
  v28 = a1[1];
  v56 = 0;
  *(_OWORD *)v55 = 0;
  if ( !v28 )
    return 0;
  if ( *((_DWORD *)a1 + 11) )
  {
    sub_1FF5C50(&v60, a1[4], *((_DWORD *)a1 + 10) == 0);
    v29 = v60;
    sub_1FF5C50(&v60, &a1[4][*((unsigned int *)a1 + 10)], 1);
    if ( v29 != v60 )
    {
      v30 = v60;
      v51 = v8;
      v31 = v29;
      do
      {
        if ( v16 != v31 )
        {
          v32 = *v31 + 8;
          sub_1FF5C50(&v60, &a1[4][*((unsigned int *)a1 + 10)], 1);
          sub_1FF5C90(v32, (__int64)v55, v60);
        }
        v33 = v31[1];
        if ( v33 != -8 && v33 )
        {
          ++v31;
        }
        else
        {
          v34 = v31 + 2;
          do
          {
            do
            {
              v35 = *v34;
              v31 = v34++;
            }
            while ( v35 == -8 );
          }
          while ( !v35 );
        }
      }
      while ( v30 != v31 );
      v8 = v51;
    }
    v36 = (__int64 **)v55[1];
    v37 = (__int64 **)v55[0];
  }
  else
  {
    v46 = *a1;
    v61 = v28;
    v60 = v46;
    sub_1075D80((__int64)v55, nullptr, &v60);
    v36 = (__int64 **)v55[1];
    v37 = (__int64 **)v55[0];
  }
  if ( v37 != v36 )
  {
    v38 = nullptr;
    v52 = nullptr;
    v39 = v8;
    v40 = v37;
    v41 = v39;
    while ( 1 )
    {
      v45 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)a2 + 16LL);
      if ( v45 == sub_1FF58F0 )
      {
        v42 = v40[1];
        v43 = *v40;
        if ( (__int64 *)v41 != v42
          || (v49 = v40[1], v41) && (v53 = *v40, v44 = memcmp(v43, a3, v41), v43 = v53, v42 = v49, v44) )
        {
          v62 = 261;
          v59 = 261;
          v57 = a3;
          v58 = v41;
          v60 = v43;
          v61 = v42;
          if ( (unsigned int)sub_228C2E0(&v60, &v57, &v54) || !v54 )
            goto LABEL_47;
        }
      }
      else if ( !(unsigned __int8)v45(a2, *v40, (__int64)v40[1], a3, v41) )
      {
        goto LABEL_47;
      }
      if ( v38 )
      {
        v36 = (__int64 **)v55[0];
        *a5 = 1;
        result = 0;
        goto LABEL_53;
      }
      v38 = v40[1];
      v52 = *v40;
LABEL_47:
      v40 += 2;
      if ( v36 == v40 )
      {
        v36 = (__int64 **)v55[0];
        goto LABEL_52;
      }
    }
  }
  v52 = nullptr;
LABEL_52:
  result = (__int64)v52;
LABEL_53:
  if ( v36 )
  {
    v47 = result;
    operator delete(v36);
    return v47;
  }
  return result;
}
