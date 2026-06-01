void __fastcall sub_715E80(__int64 a1, __int64 a2, void **a3)
{
  void **v3; // r14
  _QWORD *v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  _DWORD *v11; // r13
  void **v12; // rbp
  void **v13; // r9
  void **v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void **v18; // rax
  void *v19; // rax
  size_t v20; // rdx
  size_t v21; // r15
  int v22; // r8d
  _DWORD *v23; // rdi
  __int64 v24; // rdx
  char *v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  int v28; // edx
  void **v29; // rax
  void **v30; // rbp
  void **v31; // r14
  void **v32; // r15
  void **v33; // rax
  _DWORD *v34; // rdi
  char v35; // al
  void **v38; // [rsp+18h] [rbp-2B0h]
  void **v39; // [rsp+18h] [rbp-2B0h]
  int v40; // [rsp+18h] [rbp-2B0h]
  unsigned int v41; // [rsp+18h] [rbp-2B0h]
  void **v42; // [rsp+18h] [rbp-2B0h]
  void **v43; // [rsp+18h] [rbp-2B0h]
  int v44; // [rsp+18h] [rbp-2B0h]
  void **v45; // [rsp+18h] [rbp-2B0h]
  int v46; // [rsp+30h] [rbp-298h]
  void **v47; // [rsp+30h] [rbp-298h]
  void **v48; // [rsp+30h] [rbp-298h]
  int v49; // [rsp+30h] [rbp-298h]
  void **v50; // [rsp+30h] [rbp-298h]
  int v51; // [rsp+30h] [rbp-298h]
  _QWORD *v52; // [rsp+38h] [rbp-290h]
  int v53; // [rsp+48h] [rbp-280h]
  int v54; // [rsp+4Ch] [rbp-27Ch]
  void *v55[18]; // [rsp+50h] [rbp-278h] BYREF
  void *v56; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-1E0h]
  _BYTE v58[128]; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v59[18]; // [rsp+170h] [rbp-158h] BYREF
  void *ptr[25]; // [rsp+200h] [rbp-C8h] BYREF

  v3 = (void **)a2;
  *(_QWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD **)a1;
  memset(&ptr[1], 0, 0x88u);
  ptr[0] = &ptr[2];
  v5 = *(unsigned int *)(a1 + 16);
  HIDWORD(ptr[1]) = 32;
  v6 = &v4[19 * v5];
  if ( v4 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v4[1] = 0x2000000000LL;
        *v4 = v4 + 2;
        if ( LODWORD(ptr[1]) )
          break;
        v4 += 19;
        if ( v6 == v4 )
          goto LABEL_6;
      }
      v7 = (__int64)v4;
      v4 += 19;
      sub_6A7880(v7, (unsigned int **)ptr);
    }
    while ( v6 != v4 );
LABEL_6:
    if ( ptr[0] != &ptr[2] )
      free(ptr[0]);
  }
  v8 = 0;
  v57 = 0x2000000000LL;
  v9 = 36;
  v10 = 32;
  memset(&v55[1], 0, 0x88u);
  v55[0] = &v55[2];
  HIDWORD(v55[1]) = 32;
  v56 = v58;
  while ( 1 )
  {
    if ( v10 >= (unsigned __int64)v8 + 1 )
    {
      *((_DWORD *)v56 + v8) = -1;
    }
    else
    {
      sub_25D6060(&v56, v58, v8 + 1LL, 4);
      *((_DWORD *)v56 + (unsigned int)v57) = -1;
    }
    v8 = v57 + 1;
    LODWORD(v57) = v57 + 1;
    if ( !--v9 )
      break;
    v10 = HIDWORD(v57);
  }
  v11 = (_DWORD *)(a2 + 16);
  v12 = v55;
  if ( (void **)a2 != a3 )
  {
    do
    {
      if ( (unsigned __int8)sub_25ABE00(v3, v12) || (unsigned __int8)sub_25ABE00(v3, &v56) )
        goto LABEL_16;
      v13 = nullptr;
      v14 = nullptr;
      v46 = *(_DWORD *)(a1 + 16);
      if ( !v46 )
        goto LABEL_40;
      ptr[1] = (void *)0x2000000000LL;
      v15 = 36;
      v16 = 32;
      v52 = *(_QWORD **)a1;
      memset(&v59[1], 0, 0x88u);
      HIDWORD(v59[1]) = 32;
      v59[0] = &v59[2];
      ptr[0] = &ptr[2];
      v17 = 0;
      while ( 1 )
      {
        if ( v16 >= v17 + 1 )
        {
          *((_DWORD *)ptr[0] + v17) = -1;
        }
        else
        {
          sub_25D6060(ptr, &ptr[2], v17 + 1, 4);
          *((_DWORD *)ptr[0] + LODWORD(ptr[1])) = -1;
        }
        v17 = (unsigned int)++LODWORD(ptr[1]);
        if ( !--v15 )
          break;
        v16 = HIDWORD(ptr[1]);
      }
      v27 = sub_6999F0(*v3, (__int64)*v3 + 4 * *((unsigned int *)v3 + 2));
      v28 = v46;
      v53 = 1;
      v48 = nullptr;
      v54 = v28 - 1;
      v41 = (v28 - 1) & v27;
      v29 = v12;
      v30 = v3;
      v31 = v29;
      while ( 1 )
      {
        v32 = (void **)&v52[19 * v41];
        if ( (unsigned __int8)sub_25ABE00(v30, v32) )
        {
          v33 = v31;
          v3 = v30;
          v12 = v33;
          goto LABEL_52;
        }
        if ( (unsigned __int8)sub_25ABE00(v32, v59) )
          break;
        v35 = sub_25ABE00(v32, ptr);
        if ( !v48 )
        {
          if ( !v35 )
            v32 = nullptr;
          v48 = v32;
        }
        v41 = (v53 + v41) & v54;
        ++v53;
      }
      v13 = v48;
      v18 = v31;
      v3 = v30;
      v12 = v18;
      if ( v48 )
        goto LABEL_35;
LABEL_52:
      v13 = (void **)&v52[19 * v41];
LABEL_35:
      if ( ptr[0] != &ptr[2] )
      {
        v38 = v13;
        free(ptr[0]);
        v13 = v38;
      }
      if ( v59[0] != &v59[2] )
      {
        v39 = v13;
        free(v59[0]);
        v13 = v39;
      }
      v14 = v13;
      if ( v13 != v3 )
      {
LABEL_40:
        v19 = *v3;
        if ( *v3 != v11 )
        {
          if ( *v13 != v13 + 2 )
          {
            v42 = v13;
            free(*v13);
            v19 = *v3;
            v13 = v42;
          }
          *v13 = v19;
          *((_DWORD *)v13 + 2) = *((_DWORD *)v3 + 2);
          *((_DWORD *)v13 + 3) = *((_DWORD *)v3 + 3);
          *v3 = v11;
          v3[1] = nullptr;
          goto LABEL_48;
        }
        v20 = *((unsigned int *)v3 + 2);
        v21 = *((unsigned int *)v13 + 2);
        v22 = *((_DWORD *)v3 + 2);
        if ( v21 >= v20 )
        {
          if ( *((_DWORD *)v3 + 2) )
          {
            v34 = *v13;
            if ( v20 == 1 )
            {
              *v34 = *v11;
            }
            else
            {
              v44 = *((_DWORD *)v3 + 2);
              v50 = v13;
              memmove(v34, v11, 4 * v20);
              v22 = v44;
              v13 = v50;
            }
          }
          goto LABEL_58;
        }
        if ( *((_DWORD *)v13 + 3) < (unsigned int)v20 )
        {
          v51 = *((_DWORD *)v3 + 2);
          v21 = 0;
          *((_DWORD *)v13 + 2) = 0;
          v45 = v13;
          sub_25D6060(v14, v13 + 2, v20, 4);
          v25 = (char *)*v3;
          v24 = *((unsigned int *)v3 + 2);
          v13 = v45;
          v22 = v51;
        }
        else
        {
          if ( !*((_DWORD *)v13 + 2) )
          {
            v26 = 4 * v20;
            v25 = (char *)v11;
LABEL_57:
            v49 = v22;
            v43 = v13;
            memcpy((char *)*v13 + v21, v25, v26 - v21);
            v22 = v49;
            v13 = v43;
LABEL_58:
            *((_DWORD *)v13 + 2) = v22;
            *((_DWORD *)v3 + 2) = 0;
            goto LABEL_48;
          }
          v21 *= 4LL;
          v23 = *v13;
          if ( v21 == 4 )
          {
            *v23 = *v11;
            v24 = *((unsigned int *)v3 + 2);
            v25 = (char *)*v3 + 4;
          }
          else
          {
            v40 = *((_DWORD *)v3 + 2);
            v47 = v13;
            memmove(v23, v11, v21);
            v24 = *((unsigned int *)v3 + 2);
            v22 = v40;
            v13 = v47;
            v25 = (char *)*v3 + v21;
          }
        }
        v26 = 4 * v24;
        if ( v26 != v21 )
          goto LABEL_57;
        *((_DWORD *)v13 + 2) = v22;
        *((_DWORD *)v3 + 2) = 0;
      }
LABEL_48:
      v13[18] = v3[18];
      ++*(_DWORD *)(a1 + 8);
LABEL_16:
      if ( *v3 != v11 )
        free(*v3);
      v3 += 19;
      v11 += 38;
    }
    while ( a3 != v3 );
  }
  if ( v56 != v58 )
    free(v56);
  if ( v55[0] != &v55[2] )
    free(v55[0]);
}

