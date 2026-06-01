void __fastcall sub_698F50(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // rbp
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rbp
  volatile signed __int32 *v13; // rdx
  signed __int32 v14; // eax
  volatile signed __int32 *v15; // rbp
  volatile signed __int32 *v16; // rdx
  signed __int32 v17; // eax
  volatile signed __int32 *v18; // rbp
  volatile signed __int32 *v19; // rdx
  signed __int32 v20; // eax
  volatile signed __int32 *v21; // rbp
  volatile signed __int32 *v22; // rdx
  signed __int32 v23; // eax
  _QWORD *v24; // r12
  bool v25; // zf
  volatile signed __int32 *v26; // rbp
  volatile signed __int32 *v27; // rdx
  signed __int32 v28; // eax
  volatile signed __int32 *v29; // rbp
  volatile signed __int32 *v30; // rdx
  signed __int32 v31; // eax
  _QWORD *v32; // r12
  volatile signed __int32 *v33; // rbp
  volatile signed __int32 *v34; // rdx
  signed __int32 v35; // eax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rdx
  signed __int32 v38; // eax
  char *v39; // rdi
  char *v40; // rdi
  char *v41; // rdi
  char *v42; // rdi
  __int64 v43; // r14
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rbp
  void *v47; // rdi
  __int64 v48; // r13
  __int64 v49; // rbp
  __int64 v50; // r13
  __int64 v51; // rbp
  __int64 v52; // r13
  __int64 v53; // rbp
  __int64 v54; // r13
  __int64 v55; // rbp
  __int64 v56; // r13
  __int64 v57; // rbp
  __int64 v58; // r13
  __int64 v59; // rbp
  __int64 v60; // r13
  __int64 v61; // rbp
  char *v62; // rdi
  char *v63; // rdi
  char *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rdi

  v3 = (volatile signed __int32 *)a1[23];
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v84 = *(_QWORD *)v3;
      v85 = a1[23];
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v84 + 16))(v85, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_6111C0(v3);
    }
  }
  v6 = (volatile signed __int32 *)a1[21];
  if ( v6 )
  {
    v7 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v70 = *(_QWORD *)v6;
      v71 = a1[21];
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v70 + 16))(v71, a2, v7);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      }
      else
      {
        v8 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v8 - 1;
      }
      if ( v8 == 1 )
        sub_6111C0(v6);
    }
  }
  v9 = (volatile signed __int32 *)a1[19];
  if ( v9 )
  {
    v10 = v9 + 2;
    if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
    {
      v72 = *(_QWORD *)v9;
      v73 = a1[19];
      *((_QWORD *)v9 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v72 + 16))(v73, a2, v10);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
      }
      else
      {
        v11 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v11 - 1;
      }
      if ( v11 == 1 )
        sub_6111C0(v9);
    }
  }
  v12 = (volatile signed __int32 *)a1[17];
  if ( v12 )
  {
    v13 = v12 + 2;
    if ( *((_QWORD *)v12 + 1) == 0x100000001LL )
    {
      v74 = *(_QWORD *)v12;
      v75 = a1[17];
      *((_QWORD *)v12 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v74 + 16))(v75, a2, v13);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v14 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
      }
      else
      {
        v14 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v14 - 1;
      }
      if ( v14 == 1 )
        sub_6111C0(v12);
    }
  }
  v15 = (volatile signed __int32 *)a1[15];
  if ( v15 )
  {
    v16 = v15 + 2;
    if ( *((_QWORD *)v15 + 1) == 0x100000001LL )
    {
      v76 = *(_QWORD *)v15;
      v77 = a1[15];
      *((_QWORD *)v15 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v76 + 16))(v77, a2, v16);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v17 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
      }
      else
      {
        v17 = *((_DWORD *)v15 + 2);
        *((_DWORD *)v15 + 2) = v17 - 1;
      }
      if ( v17 == 1 )
        sub_6111C0(v15);
    }
  }
  v18 = (volatile signed __int32 *)a1[13];
  if ( v18 )
  {
    v19 = v18 + 2;
    if ( *((_QWORD *)v18 + 1) == 0x100000001LL )
    {
      v78 = *(_QWORD *)v18;
      v79 = a1[13];
      *((_QWORD *)v18 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v78 + 16))(v79, a2, v19);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v20 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
      }
      else
      {
        v20 = *((_DWORD *)v18 + 2);
        *((_DWORD *)v18 + 2) = v20 - 1;
      }
      if ( v20 == 1 )
        sub_6111C0(v18);
    }
  }
  v21 = (volatile signed __int32 *)a1[11];
  if ( v21 )
  {
    v22 = v21 + 2;
    if ( *((_QWORD *)v21 + 1) == 0x100000001LL )
    {
      v80 = *(_QWORD *)v21;
      v81 = a1[11];
      *((_QWORD *)v21 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v80 + 16))(v81, a2, v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
      }
      else
      {
        v23 = *((_DWORD *)v21 + 2);
        *((_DWORD *)v21 + 2) = v23 - 1;
      }
      if ( v23 == 1 )
        sub_6111C0(v21);
    }
  }
  v24 = (_QWORD *)a1[9];
  if ( v24 )
  {
    v25 = (*(_DWORD *)v24)-- == 1;
    if ( v25 )
    {
      v39 = (char *)v24[20];
      if ( v39 != (char *)(v24 + 22) )
        operator delete(v39, v24[22] + 1LL);
      v40 = (char *)v24[16];
      if ( v40 != (char *)(v24 + 18) )
        operator delete(v40, v24[18] + 1LL);
      v41 = (char *)v24[12];
      if ( v41 != (char *)(v24 + 14) )
        operator delete(v41, v24[14] + 1LL);
      v42 = (char *)v24[7];
      if ( *((_DWORD *)v24 + 17) )
      {
        v43 = *((unsigned int *)v24 + 16);
        if ( (_DWORD)v43 )
        {
          v44 = 8 * v43;
          v45 = 0;
          do
          {
            v46 = *(_QWORD *)&v42[v45];
            if ( v46 && v46 != -8 )
            {
              v47 = *(void **)(v46 + 8);
              if ( v47 != (void *)(v46 + 24) )
                operator delete(v47, *(_QWORD *)(v46 + 24) + 1LL);
              operator delete();
              v42 = (char *)v24[7];
            }
            v45 += 8;
          }
          while ( v45 != v44 );
        }
      }
      free(v42);
      v48 = v24[5];
      v49 = v24[4];
      if ( v48 != v49 )
      {
        do
        {
          if ( *(_QWORD *)v49 != v49 + 16 )
            operator delete(*(void **)v49, *(_QWORD *)(v49 + 16) + 1LL);
          v49 += 32;
        }
        while ( v48 != v49 );
        v49 = v24[4];
      }
      if ( v49 )
        operator delete((void *)v49, v24[6] - v49);
      v50 = v24[2];
      v51 = v24[1];
      if ( v50 != v51 )
      {
        do
        {
          if ( *(_QWORD *)v51 != v51 + 16 )
            operator delete(*(void **)v51, *(_QWORD *)(v51 + 16) + 1LL);
          v51 += 40;
        }
        while ( v50 != v51 );
        v51 = v24[1];
      }
      if ( v51 )
        operator delete((void *)v51, v24[3] - v51);
      a2 = 488;
      operator delete(v24, 0x1E8u);
    }
  }
  v26 = (volatile signed __int32 *)a1[8];
  if ( v26 )
  {
    v27 = v26 + 2;
    if ( *((_QWORD *)v26 + 1) == 0x100000001LL )
    {
      v82 = *(_QWORD *)v26;
      v83 = a1[8];
      *((_QWORD *)v26 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v82 + 16))(v83, a2, v27);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 24LL))(v26);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v28 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      }
      else
      {
        v28 = *((_DWORD *)v26 + 2);
        *((_DWORD *)v26 + 2) = v28 - 1;
      }
      if ( v28 == 1 )
        sub_6111C0(v26);
    }
  }
  v29 = (volatile signed __int32 *)a1[6];
  if ( v29 )
  {
    v30 = v29 + 2;
    if ( *((_QWORD *)v29 + 1) == 0x100000001LL )
    {
      v65 = *(_QWORD *)v29;
      v66 = a1[6];
      *((_QWORD *)v29 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v65 + 16))(v66, a2, v30);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v31 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
      }
      else
      {
        v31 = *((_DWORD *)v29 + 2);
        *((_DWORD *)v29 + 2) = v31 - 1;
      }
      if ( v31 == 1 )
        sub_6111C0(v29);
    }
  }
  v32 = (_QWORD *)a1[4];
  if ( v32 )
  {
    v25 = (*(_DWORD *)v32)-- == 1;
    if ( v25 )
    {
      v52 = v32[31];
      v53 = v32[30];
      if ( v52 != v53 )
      {
        do
        {
          if ( *(_QWORD *)v53 != v53 + 16 )
            operator delete(*(void **)v53, *(_QWORD *)(v53 + 16) + 1LL);
          v53 += 32;
        }
        while ( v52 != v53 );
        v53 = v32[30];
      }
      if ( v53 )
        operator delete((void *)v53, v32[32] - v53);
      v54 = v32[28];
      v55 = v32[27];
      if ( v54 != v55 )
      {
        do
        {
          if ( *(_QWORD *)v55 != v55 + 16 )
            operator delete(*(void **)v55, *(_QWORD *)(v55 + 16) + 1LL);
          v55 += 32;
        }
        while ( v54 != v55 );
        v55 = v32[27];
      }
      if ( v55 )
        operator delete((void *)v55, v32[29] - v55);
      v56 = v32[25];
      v57 = v32[24];
      if ( v56 != v57 )
      {
        do
        {
          if ( *(_QWORD *)v57 != v57 + 16 )
            operator delete(*(void **)v57, *(_QWORD *)(v57 + 16) + 1LL);
          v57 += 32;
        }
        while ( v56 != v57 );
        v57 = v32[24];
      }
      if ( v57 )
        operator delete((void *)v57, v32[26] - v57);
      v58 = v32[22];
      v59 = v32[21];
      if ( v58 != v59 )
      {
        do
        {
          if ( *(_QWORD *)v59 != v59 + 16 )
            operator delete(*(void **)v59, *(_QWORD *)(v59 + 16) + 1LL);
          v59 += 32;
        }
        while ( v58 != v59 );
        v59 = v32[21];
      }
      if ( v59 )
        operator delete((void *)v59, v32[23] - v59);
      v60 = v32[19];
      v61 = v32[18];
      if ( v60 != v61 )
      {
        do
        {
          if ( *(_QWORD *)v61 != v61 + 16 )
            operator delete(*(void **)v61, *(_QWORD *)(v61 + 16) + 1LL);
          v61 += 32;
        }
        while ( v60 != v61 );
        v61 = v32[18];
      }
      if ( v61 )
        operator delete((void *)v61, v32[20] - v61);
      v62 = (char *)v32[14];
      if ( v62 != (char *)(v32 + 16) )
        operator delete(v62, v32[16] + 1LL);
      v63 = (char *)v32[10];
      if ( v63 != (char *)(v32 + 12) )
        operator delete(v63, v32[12] + 1LL);
      v64 = (char *)v32[6];
      if ( v64 != (char *)(v32 + 8) )
        operator delete(v64, v32[8] + 1LL);
      a2 = 264;
      operator delete(v32, 0x108u);
    }
  }
  v33 = (volatile signed __int32 *)a1[3];
  if ( v33 )
  {
    v34 = v33 + 2;
    if ( *((_QWORD *)v33 + 1) == 0x100000001LL )
    {
      v67 = *(_QWORD *)v33;
      v68 = a1[3];
      *((_QWORD *)v33 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v67 + 16))(v68, a2, v34);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 24LL))(v33);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v35 = _InterlockedExchangeAdd(v34, 0xFFFFFFFF);
      }
      else
      {
        v35 = *((_DWORD *)v33 + 2);
        *((_DWORD *)v33 + 2) = v35 - 1;
      }
      if ( v35 == 1 )
        sub_6111C0(v33);
    }
  }
  v36 = (volatile signed __int32 *)a1[1];
  if ( v36 )
  {
    v37 = v36 + 2;
    if ( *((_QWORD *)v36 + 1) == 0x100000001LL )
    {
      v69 = *(_QWORD *)v36;
      *((_QWORD *)v36 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v69 + 16))(v36, a2, v37);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 24LL))(v36);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v38 = _InterlockedExchangeAdd(v37, 0xFFFFFFFF);
      }
      else
      {
        v38 = *((_DWORD *)v36 + 2);
        *((_DWORD *)v36 + 2) = v38 - 1;
      }
      if ( v38 == 1 )
        sub_6111C0(v36);
    }
  }
}

