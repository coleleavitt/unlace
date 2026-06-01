__int64 __fastcall sub_1300E70(__int64 a1, const char **src, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  volatile signed __int32 *v9; // rbp
  unsigned int v10; // r12d
  volatile signed __int32 *v11; // rbp
  volatile signed __int32 *v12; // rbp
  volatile signed __int32 *v13; // rbp
  volatile signed __int32 *v14; // rbp
  volatile signed __int32 *v15; // rbp
  volatile signed __int32 *v16; // rbp
  volatile signed __int32 *v17; // rbp
  volatile signed __int32 *v18; // rbp
  volatile signed __int32 *v19; // rbp
  volatile signed __int32 *v20; // rbp
  volatile signed __int32 *v21; // rbp
  volatile signed __int32 *v22; // rbp
  int v24; // eax
  signed __int32 v25; // eax
  int v26; // eax
  signed __int32 v27; // eax
  int v28; // eax
  signed __int32 v29; // eax
  int v30; // eax
  signed __int32 v31; // eax
  int v32; // eax
  signed __int32 v33; // eax
  int v34; // eax
  signed __int32 v35; // eax
  int v36; // eax
  signed __int32 v37; // eax
  int v38; // eax
  signed __int32 v39; // eax
  int v40; // eax
  signed __int32 v41; // eax
  int v42; // eax
  signed __int32 v43; // eax
  int v44; // eax
  signed __int32 v45; // eax
  int v46; // eax
  signed __int32 v47; // eax
  int v48; // eax
  signed __int32 v49; // eax
  int v50; // [rsp+Eh] [rbp-10Ah] BYREF
  __m128 v51; // [rsp+10h] [rbp-108h] BYREF
  volatile signed __int32 *v52; // [rsp+28h] [rbp-F0h]
  volatile signed __int32 *v53; // [rsp+38h] [rbp-E0h]
  volatile signed __int32 *v54; // [rsp+48h] [rbp-D0h]
  volatile signed __int32 *v55; // [rsp+58h] [rbp-C0h]
  volatile signed __int32 *v56; // [rsp+68h] [rbp-B0h]
  volatile signed __int32 *v57; // [rsp+78h] [rbp-A0h]
  volatile signed __int32 *v58; // [rsp+88h] [rbp-90h]
  volatile signed __int32 *v59; // [rsp+98h] [rbp-80h]
  volatile signed __int32 *v60; // [rsp+A8h] [rbp-70h]
  volatile signed __int32 *v61; // [rsp+B8h] [rbp-60h]
  volatile signed __int32 *v62; // [rsp+C8h] [rbp-50h]
  volatile signed __int32 *v63; // [rsp+D8h] [rbp-40h]

  sub_12FFD10(&v51);
  v8 = sub_12FEF20(
         (unsigned int (__fastcall *)(__int64, __int64, const char **, __int64, __int64, __int64))sub_1351450,
         (__int64)&v50,
         (void (__fastcall *)(__int64, __int64, void **, __int64 (__fastcall *)(_QWORD *), void ****))sub_1345BE0,
         (__int64)&v50 + 1,
         a1,
         (__int64)&v51,
         src,
         a3,
         a4,
         a5,
         0,
         0);
  v9 = v63;
  v10 = v8;
  if ( v63 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v32 = *((_DWORD *)v63 + 2);
      *((_DWORD *)v63 + 2) = v32 - 1;
      if ( v32 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( &_pthread_key_create )
    {
      v33 = _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
    }
    else
    {
      v33 = *((_DWORD *)v9 + 3);
      *((_DWORD *)v9 + 3) = v33 - 1;
    }
    if ( v33 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
  }
LABEL_4:
  v11 = v62;
  if ( !v62 )
    goto LABEL_7;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_7;
  }
  else
  {
    v30 = *((_DWORD *)v62 + 2);
    *((_DWORD *)v62 + 2) = v30 - 1;
    if ( v30 != 1 )
      goto LABEL_7;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( &_pthread_key_create )
  {
    v31 = _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
  }
  else
  {
    v31 = *((_DWORD *)v11 + 3);
    *((_DWORD *)v11 + 3) = v31 - 1;
  }
  if ( v31 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
LABEL_7:
  v12 = v61;
  if ( !v61 )
    goto LABEL_10;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_10;
  }
  else
  {
    v28 = *((_DWORD *)v61 + 2);
    *((_DWORD *)v61 + 2) = v28 - 1;
    if ( v28 != 1 )
      goto LABEL_10;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( &_pthread_key_create )
  {
    v29 = _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF);
  }
  else
  {
    v29 = *((_DWORD *)v12 + 3);
    *((_DWORD *)v12 + 3) = v29 - 1;
  }
  if ( v29 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
LABEL_10:
  v13 = v60;
  if ( !v60 )
    goto LABEL_13;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_13;
  }
  else
  {
    v26 = *((_DWORD *)v60 + 2);
    *((_DWORD *)v60 + 2) = v26 - 1;
    if ( v26 != 1 )
      goto LABEL_13;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( &_pthread_key_create )
  {
    v27 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
  }
  else
  {
    v27 = *((_DWORD *)v13 + 3);
    *((_DWORD *)v13 + 3) = v27 - 1;
  }
  if ( v27 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
LABEL_13:
  v14 = v59;
  if ( !v59 )
    goto LABEL_16;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_16;
  }
  else
  {
    v40 = *((_DWORD *)v59 + 2);
    *((_DWORD *)v59 + 2) = v40 - 1;
    if ( v40 != 1 )
      goto LABEL_16;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( &_pthread_key_create )
  {
    v41 = _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
  }
  else
  {
    v41 = *((_DWORD *)v14 + 3);
    *((_DWORD *)v14 + 3) = v41 - 1;
  }
  if ( v41 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
LABEL_16:
  v15 = v58;
  if ( !v58 )
    goto LABEL_19;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_19;
  }
  else
  {
    v38 = *((_DWORD *)v58 + 2);
    *((_DWORD *)v58 + 2) = v38 - 1;
    if ( v38 != 1 )
      goto LABEL_19;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( &_pthread_key_create )
  {
    v39 = _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF);
  }
  else
  {
    v39 = *((_DWORD *)v15 + 3);
    *((_DWORD *)v15 + 3) = v39 - 1;
  }
  if ( v39 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
LABEL_19:
  v16 = v57;
  if ( !v57 )
    goto LABEL_22;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_22;
  }
  else
  {
    v36 = *((_DWORD *)v57 + 2);
    *((_DWORD *)v57 + 2) = v36 - 1;
    if ( v36 != 1 )
      goto LABEL_22;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( &_pthread_key_create )
  {
    v37 = _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF);
  }
  else
  {
    v37 = *((_DWORD *)v16 + 3);
    *((_DWORD *)v16 + 3) = v37 - 1;
  }
  if ( v37 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 24LL))(v16);
LABEL_22:
  v17 = v56;
  if ( !v56 )
    goto LABEL_25;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_25;
  }
  else
  {
    v34 = *((_DWORD *)v56 + 2);
    *((_DWORD *)v56 + 2) = v34 - 1;
    if ( v34 != 1 )
      goto LABEL_25;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( &_pthread_key_create )
  {
    v35 = _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF);
  }
  else
  {
    v35 = *((_DWORD *)v17 + 3);
    *((_DWORD *)v17 + 3) = v35 - 1;
  }
  if ( v35 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
LABEL_25:
  v18 = v55;
  if ( !v55 )
    goto LABEL_28;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_28;
  }
  else
  {
    v48 = *((_DWORD *)v55 + 2);
    *((_DWORD *)v55 + 2) = v48 - 1;
    if ( v48 != 1 )
      goto LABEL_28;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( &_pthread_key_create )
  {
    v49 = _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF);
  }
  else
  {
    v49 = *((_DWORD *)v18 + 3);
    *((_DWORD *)v18 + 3) = v49 - 1;
  }
  if ( v49 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
LABEL_28:
  v19 = v54;
  if ( !v54 )
    goto LABEL_31;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_31;
  }
  else
  {
    v46 = *((_DWORD *)v54 + 2);
    *((_DWORD *)v54 + 2) = v46 - 1;
    if ( v46 != 1 )
      goto LABEL_31;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( &_pthread_key_create )
  {
    v47 = _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF);
  }
  else
  {
    v47 = *((_DWORD *)v19 + 3);
    *((_DWORD *)v19 + 3) = v47 - 1;
  }
  if ( v47 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
LABEL_31:
  v20 = v53;
  if ( !v53 )
    goto LABEL_34;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_34;
  }
  else
  {
    v44 = *((_DWORD *)v53 + 2);
    *((_DWORD *)v53 + 2) = v44 - 1;
    if ( v44 != 1 )
      goto LABEL_34;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( &_pthread_key_create )
  {
    v45 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
  }
  else
  {
    v45 = *((_DWORD *)v20 + 3);
    *((_DWORD *)v20 + 3) = v45 - 1;
  }
  if ( v45 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
LABEL_34:
  v21 = v52;
  if ( !v52 )
    goto LABEL_37;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_37;
  }
  else
  {
    v42 = *((_DWORD *)v52 + 2);
    *((_DWORD *)v52 + 2) = v42 - 1;
    if ( v42 != 1 )
      goto LABEL_37;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( &_pthread_key_create )
  {
    v43 = _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF);
  }
  else
  {
    v43 = *((_DWORD *)v21 + 3);
    *((_DWORD *)v21 + 3) = v43 - 1;
  }
  if ( v43 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
LABEL_37:
  v22 = (volatile signed __int32 *)v51.m128_u64[1];
  if ( v51.m128_u64[1] )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v51.m128_u64[1] + 8), 0xFFFFFFFF) != 1 )
        return v10;
    }
    else
    {
      v24 = *(_DWORD *)(v51.m128_u64[1] + 8);
      *(_DWORD *)(v51.m128_u64[1] + 8) = v24 - 1;
      if ( v24 != 1 )
        return v10;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( &_pthread_key_create )
    {
      v25 = _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF);
    }
    else
    {
      v25 = *((_DWORD *)v22 + 3);
      *((_DWORD *)v22 + 3) = v25 - 1;
    }
    if ( v25 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
  }
  return v10;
}
