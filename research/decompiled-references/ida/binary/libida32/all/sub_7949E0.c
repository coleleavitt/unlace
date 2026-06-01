__int64 __fastcall sub_7949E0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v10; // r13
  unsigned int v12; // eax
  unsigned int v13; // r14d
  unsigned int v14; // eax
  char *v15; // rax
  char v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  __int64 *v21; // rdi
  __int64 v22; // rax
  char *v23; // rdx
  __int64 v24; // rcx
  bool v25; // cf
  void *v26; // rdi
  char *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 *v30; // rdi
  __int64 v31; // rax
  char *v32; // rdx
  __int64 v33; // rcx
  char *v34; // rax
  unsigned int v35; // ecx
  char v36; // r8
  char *v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r15
  __int64 *v41; // rdi
  __int64 v42; // rax
  char *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 *v46; // rdi
  __int64 v47; // rax
  char *v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // [rsp+0h] [rbp-90h]
  char *v51; // [rsp+0h] [rbp-90h]
  int v52; // [rsp+0h] [rbp-90h]
  int v53; // [rsp+8h] [rbp-88h]
  unsigned __int32 v54; // [rsp+Ch] [rbp-84h]
  __int64 v55; // [rsp+10h] [rbp-80h]
  char v56; // [rsp+10h] [rbp-80h]
  __int64 v57; // [rsp+10h] [rbp-80h]
  char v58; // [rsp+10h] [rbp-80h]
  __int64 v61; // [rsp+20h] [rbp-70h]
  __int64 v62; // [rsp+20h] [rbp-70h]
  __int64 v63; // [rsp+30h] [rbp-60h] BYREF
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v65; // [rsp+40h] [rbp-50h]
  unsigned __int64 v66; // [rsp+50h] [rbp-40h]

  v6 = a3 + a5;
  v66 = __readfsqword(0x28u);
  v65 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( a3 )
      v12 = sub_794710(a1, a2, a3 - 1, a6);
    else
      v12 = sub_7946D0(a1, a2, a6);
    v13 = v12;
    v14 = a6;
    BYTE1(v14) = BYTE1(a6) | 0x10;
    v50 = v14;
    while ( v13 < v6 )
    {
      BYTE4(v63) = sub_791FA0(a1, a2, v13, v50);
      v16 = BYTE4(v63);
      v17 = (char *)ptr;
      v18 = v65;
      LODWORD(v63) = v13;
      v19 = v65 + 1;
      if ( &v63 < ptr || &v63 >= (__int64 *)((char *)ptr + 8 * *((_QWORD *)&v65 + 1)) )
      {
        if ( *((_QWORD *)&v65 + 1) < v19 )
        {
          v55 = *((_QWORD *)&v65 + 1);
          v17 = (char *)qvector_reserve(&ptr, 0, v19, 8);
          v20 = *((_QWORD *)&v65 + 1);
          v21 = (__int64 *)ptr;
          *((_QWORD *)&v65 + 1) = v55;
          v22 = v65 - 1;
          if ( (__int64)v65 - 1 >= 0 )
          {
            v23 = v17;
            do
            {
              v24 = *v21;
              v23 += 8;
              ++v21;
              *((_QWORD *)v23 - 1) = v24;
              v25 = v22-- == 0;
            }
            while ( !v25 );
            v21 = (__int64 *)ptr;
          }
          qfree(v21);
          v18 = v65;
          *((_QWORD *)&v65 + 1) = v20;
          ptr = v17;
        }
        *(_QWORD *)&v17[8 * v18] = v63;
      }
      else
      {
        if ( *((_QWORD *)&v65 + 1) < v19 )
        {
          v61 = *((_QWORD *)&v65 + 1);
          v56 = BYTE4(v63);
          v17 = (char *)qvector_reserve(&ptr, 0, v19, 8);
          v29 = *((_QWORD *)&v65 + 1);
          v30 = (__int64 *)ptr;
          v31 = v65 - 1;
          *((_QWORD *)&v65 + 1) = v61;
          if ( (__int64)v65 - 1 >= 0 )
          {
            v32 = v17;
            do
            {
              v33 = *v30;
              v32 += 8;
              ++v30;
              *((_QWORD *)v32 - 1) = v33;
              v25 = v31-- == 0;
            }
            while ( !v25 );
            v30 = (__int64 *)ptr;
          }
          qfree(v30);
          v18 = v65;
          *((_QWORD *)&v65 + 1) = v29;
          v16 = v56;
          ptr = v17;
        }
        v15 = &v17[8 * v18];
        *(_DWORD *)v15 = v13;
        v15[4] = v16;
      }
      *(_QWORD *)&v65 = v65 + 1;
      sub_792400(a1, a2, v13, a6);
      if ( a2 == -1 )
        break;
      if ( (a6 & 0x100) != 0 && unk_2CAA7A8 )
        v13 = unk_2CAA7A8(v13);
      *(_BYTE *)(a1 + 52) = a6;
      *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
      if ( (a6 & 0x800) != 0 )
        *(_BYTE *)(a1 + 53) = v13;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v13);
      *(_WORD *)(a1 + 45) = (a6 & 0x800) == 0 ? 10 : 7;
      v13 = sub_7928A0(a1, a6, a2, 1);
    }
  }
  else
  {
    if ( a2 == -1 )
      return 0;
    v52 = a6 & 0x800;
    v53 = a6 & 0x100;
    v54 = _byteswap_ulong(a2);
    while ( 1 )
    {
      if ( v53 && unk_2CAA7A8 )
        v6 = unk_2CAA7A8(v6);
      *(_BYTE *)(a1 + 52) = a6;
      *(_DWORD *)(a1 + 48) = v54;
      if ( v52 )
        *(_BYTE *)(a1 + 53) = v6;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v6);
      *(_WORD *)(a1 + 45) = v52 == 0 ? 10 : 7;
      v6 = sub_7928A0(a1, a6, a2, 0);
      if ( v6 < a3 || v6 == -1 )
        break;
      v35 = a6;
      BYTE1(v35) = BYTE1(a6) | 0x10;
      BYTE4(v63) = sub_791FA0(a1, a2, v6, v35);
      v36 = BYTE4(v63);
      v37 = (char *)ptr;
      v38 = v65;
      LODWORD(v63) = v6;
      v39 = v65 + 1;
      if ( &v63 < ptr || &v63 >= (__int64 *)((char *)ptr + 8 * *((_QWORD *)&v65 + 1)) )
      {
        if ( *((_QWORD *)&v65 + 1) < v39 )
        {
          v57 = *((_QWORD *)&v65 + 1);
          v37 = (char *)qvector_reserve(&ptr, 0, v39, 8);
          v40 = *((_QWORD *)&v65 + 1);
          v41 = (__int64 *)ptr;
          *((_QWORD *)&v65 + 1) = v57;
          v42 = v65 - 1;
          if ( (__int64)v65 - 1 >= 0 )
          {
            v43 = v37;
            do
            {
              v44 = *v41;
              v43 += 8;
              ++v41;
              *((_QWORD *)v43 - 1) = v44;
              v25 = v42-- == 0;
            }
            while ( !v25 );
            v41 = (__int64 *)ptr;
          }
          qfree(v41);
          v38 = v65;
          *((_QWORD *)&v65 + 1) = v40;
          ptr = v37;
        }
        *(_QWORD *)&v37[8 * v38] = v63;
      }
      else
      {
        if ( *((_QWORD *)&v65 + 1) < v39 )
        {
          v62 = *((_QWORD *)&v65 + 1);
          v58 = BYTE4(v63);
          v37 = (char *)qvector_reserve(&ptr, 0, v39, 8);
          v45 = *((_QWORD *)&v65 + 1);
          v46 = (__int64 *)ptr;
          v47 = v65 - 1;
          *((_QWORD *)&v65 + 1) = v62;
          if ( (__int64)v65 - 1 >= 0 )
          {
            v48 = v37;
            do
            {
              v49 = *v46;
              v48 += 8;
              ++v46;
              *((_QWORD *)v48 - 1) = v49;
              v25 = v47-- == 0;
            }
            while ( !v25 );
            v46 = (__int64 *)ptr;
          }
          qfree(v46);
          v38 = v65;
          *((_QWORD *)&v65 + 1) = v45;
          v36 = v58;
          ptr = v37;
        }
        v34 = &v37[8 * v38];
        *(_DWORD *)v34 = v6;
        v34[4] = v36;
      }
      *(_QWORD *)&v65 = v65 + 1;
      sub_792400(a1, a2, v6, a6);
    }
  }
  v26 = ptr;
  v10 = v65;
  v51 = (char *)ptr + 8 * v65;
  if ( v51 != ptr )
  {
    v27 = (char *)ptr;
    do
    {
      v28 = a4 - a3 + *(_DWORD *)v27;
      LOBYTE(v63) = v27[4];
      sub_791DB0((const char *)a1, a2, v28, (const char *)&v63, 1u, a6);
      v27 += 8;
    }
    while ( v51 != v27 );
    v26 = ptr;
    v10 = v65;
  }
  if ( v26 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v26);
  }
  return v10;
}

