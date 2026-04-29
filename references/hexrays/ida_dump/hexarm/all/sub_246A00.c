unsigned __int64 __fastcall sub_246A00(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  const char *v21; // rsi
  char *v22; // rbp
  char v23; // r15
  char *v24; // r13
  unsigned __int8 i; // r14
  unsigned __int8 v26; // bl
  bool v27; // al
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+18h] [rbp-4B0h]
  __int64 v45; // [rsp+20h] [rbp-4A8h]
  __int64 v46; // [rsp+38h] [rbp-490h] BYREF
  __int64 v47; // [rsp+40h] [rbp-488h] BYREF
  __int64 v48; // [rsp+48h] [rbp-480h] BYREF
  _QWORD v49[2]; // [rsp+50h] [rbp-478h] BYREF
  _BYTE v50[24]; // [rsp+60h] [rbp-468h] BYREF
  int v51; // [rsp+78h] [rbp-450h]
  __int16 v52; // [rsp+7Ch] [rbp-44Ch]
  char v53; // [rsp+80h] [rbp-448h] BYREF
  char v54; // [rsp+81h] [rbp-447h] BYREF
  unsigned __int64 v55; // [rsp+488h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v5 = qalloc_or_throw(40);
  *(_QWORD *)v5 = 0;
  v6 = (__int64 **)v5;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = 2;
  *(_OWORD *)(v5 + 8) = 0;
  v45 = v5;
  sub_2465C0((_QWORD *)v5, 1u);
  copy_tinfo_t(*v6 + 8, a2 + 6);
  v7 = *v6;
  v44 = *a2;
  v8 = *a2;
  *a2 = **v6;
  v9 = *((_DWORD *)v7 + 2);
  *v7 = v8;
  v10 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v9;
  v11 = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 2) = v10;
  v12 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v11;
  v13 = v7[3];
  *((_DWORD *)v7 + 3) = v12;
  v14 = a2[3];
  a2[3] = v13;
  v15 = v7[4];
  v7[3] = v14;
  v16 = a2[4];
  a2[4] = v15;
  v17 = v7[5];
  v7[4] = v16;
  v18 = a2[5];
  a2[5] = v17;
  v19 = v7[6];
  v7[5] = v18;
  v20 = a2[6];
  a2[6] = v19;
  LODWORD(v19) = *((_DWORD *)v7 + 14);
  v7[6] = v20;
  LODWORD(v20) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a2 + 14) = v19;
  *((_DWORD *)v7 + 14) = v20;
  v46 = 0;
  copy_tinfo_t(&v46, a3);
  if ( (get_tinfo_property(v46, 2) & 0xF) == 0xB && !*(_BYTE *)(a1 + 148) )
  {
    v49[0] = 0;
    v49[1] = 0;
    if ( (unsigned __int8)get_tinfo_details(v46, 11, v49) )
    {
      v48 = 0;
      v47 = 0;
      *(_OWORD *)v50 = 0;
      copy_tinfo_t(&v50[8], &v47);
      *(_QWORD *)&v50[16] = 0;
      copy_tinfo_t(&v50[16], &v48);
      v51 = 0;
      v52 = 0;
      clear_tinfo_t(&v47);
      clear_tinfo_t(&v48);
      v43 = *(_QWORD *)v50;
      *(_QWORD *)v50 = v49[0];
      v49[0] = v43;
      create_tinfo(&v46, 10, 10, v50);
      clear_tinfo_t(&v50[16]);
      clear_tinfo_t(&v50[8]);
      clear_tinfo_t(v50);
    }
    clear_tinfo_t(v49);
  }
  memset(v50, 0, sizeof(v50));
  sub_32BB20(v50, a3, 0, 0);
  v21 = s1;
  if ( *(_QWORD *)&v50[8] )
    v21 = *(const char **)v50;
  v22 = &v53;
  qstrncpy(&v53, v21, 1024);
  v23 = v53;
  if ( v53 )
  {
    v24 = &v54;
    for ( i = 0; ; i = v26 )
    {
      if ( (unsigned int)v23 <= 0x7F && isalnum(v23) )
      {
        v26 = v23;
        v27 = v23 == 95;
      }
      else
      {
        v27 = 1;
        v26 = 95;
      }
      if ( i != 95 || !v27 )
        *v22++ = toupper(v26);
      v23 = *v24++;
      if ( !v23 )
        break;
    }
  }
  else
  {
    v22 = &v53;
  }
  v28 = *(_QWORD *)v50;
  *v22 = 0;
  if ( v28 )
  {
    *(_QWORD *)&v50[8] = 0;
    qfree(v28);
  }
  v29 = sub_F1080((__int64)&v46, v45, (__int64)"COERCE_%s", &v53);
  *(_DWORD *)(v29 + 56) |= 2u;
  v30 = v29;
  *(_QWORD *)v29 = v44;
  v31 = *a2;
  *a2 = v44;
  v32 = *(_DWORD *)(v30 + 8);
  *(_QWORD *)v30 = v31;
  LODWORD(v31) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v32;
  v33 = *(_DWORD *)(v30 + 12);
  *(_DWORD *)(v30 + 8) = v31;
  LODWORD(v31) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v33;
  v34 = *(_QWORD *)(v30 + 24);
  *(_DWORD *)(v30 + 12) = v31;
  v35 = a2[3];
  a2[3] = v34;
  v36 = *(_QWORD *)(v30 + 32);
  *(_QWORD *)(v30 + 24) = v35;
  v37 = a2[4];
  a2[4] = v36;
  v38 = *(_QWORD *)(v30 + 40);
  *(_QWORD *)(v30 + 32) = v37;
  v39 = a2[5];
  a2[5] = v38;
  v40 = *(_QWORD *)(v30 + 48);
  *(_QWORD *)(v30 + 40) = v39;
  v41 = a2[6];
  a2[6] = v40;
  *(_QWORD *)(v30 + 48) = v41;
  LODWORD(v41) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a2 + 14) = *(_DWORD *)(v30 + 56);
  *(_DWORD *)(v30 + 56) = v41;
  if ( v30 )
  {
    sub_2559F0(v30);
    clear_tinfo_t(v30 + 48);
    j__qfree(v30);
  }
  clear_tinfo_t(&v46);
  return v55 - __readfsqword(0x28u);
}
