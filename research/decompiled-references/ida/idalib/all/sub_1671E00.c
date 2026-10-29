unsigned __int64 __fastcall sub_1671E00(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r15
  void **v9; // rbx
  void **v10; // r13
  void **v11; // rsi
  char *v12; // r12
  unsigned __int64 *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  int v23; // ebx
  char v24; // dl
  char v25; // bp
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  unsigned __int8 *v28; // rax
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 *v32; // rax
  void **v33; // r12
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbx
  void **v37; // r12
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  char *v40; // rcx
  size_t v41; // rdx
  char *v42; // rdi
  unsigned __int64 *v43; // [rsp+8h] [rbp-C0h]
  void **v44; // [rsp+8h] [rbp-C0h]
  void **v45; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v46; // [rsp+10h] [rbp-B8h]
  __int64 *v47; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+28h] [rbp-A0h]
  __int64 v49; // [rsp+28h] [rbp-A0h]
  void **v50; // [rsp+30h] [rbp-98h]
  __int64 v51; // [rsp+38h] [rbp-90h]
  unsigned __int64 v52; // [rsp+58h] [rbp-70h]
  unsigned __int64 v53; // [rsp+64h] [rbp-64h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  int v55; // [rsp+78h] [rbp-50h]
  _BYTE v56[72]; // [rsp+80h] [rbp-48h] BYREF

  v6 = a1;
  sub_A08520(&ptr, a2, *(_DWORD *)(a1 + 24), a4, a5, a6);
  if ( !v55 )
  {
    if ( ptr != v56 )
      goto LABEL_3;
    return v53;
  }
  v47 = *(__int64 **)ptr;
  v9 = (void **)operator new(0x40u);
  v10 = v9 + 3;
  v50 = v9;
  v11 = v9;
  v12 = (char *)(v9 + 3);
  v48 = 8;
  v46 = (unsigned __int64 *)operator new(0x200u);
  v13 = v46;
  v14 = v46 + 64;
  v11[3] = v46;
  v43 = v46;
  do
  {
    if ( v13 != v14 - 1 )
    {
      *v13++ = v6;
      goto LABEL_8;
    }
    if ( v48 - ((v12 - (char *)v50) >> 3) <= 1 )
    {
      v35 = (v12 - (char *)v10) >> 3;
      v36 = v35 + 1;
      if ( v48 <= 2 * (v35 + 2) )
      {
        if ( v48 )
        {
          v48 = 2 * v48 + 2;
          if ( v48 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
        }
        else
        {
          v48 = 3;
        }
        v51 = v35 + 2;
        v44 = (void **)operator new(8 * v48);
        v42 = (char *)&v44[(v48 - v51) >> 1];
        if ( v10 != (void **)(v12 + 8) )
          memmove(v42, v10, v12 + 8 - (char *)v10);
        v38 = v36;
        operator delete(v50);
        v10 = (void **)v42;
        v50 = v44;
        goto LABEL_43;
      }
      v37 = (void **)(v12 + 8);
      v38 = v36;
      v39 = (v48 - (v35 + 2)) >> 1;
      v40 = (char *)&v50[v39];
      v41 = (char *)v37 - (char *)v10;
      if ( v40 >= (char *)v10 )
      {
        if ( v10 != v37 )
        {
          v45 = &v50[v39];
          memmove(&v40[v38 * 8 - v41], v10, v41);
          v10 = v45;
          goto LABEL_43;
        }
      }
      else if ( v10 != v37 )
      {
        v10 = (void **)memmove(&v50[v39], v10, v41);
LABEL_43:
        v12 = (char *)&v10[v38 - 1];
        goto LABEL_27;
      }
      v10 = &v50[v39];
      goto LABEL_43;
    }
LABEL_27:
    v12 += 8;
    v32 = (unsigned __int64 *)operator new(0x200u);
    *v13 = v6;
    *(_QWORD *)v12 = v32;
    v13 = v32;
    v14 = v32 + 64;
    v43 = v32;
LABEL_8:
    v16 = *(_QWORD *)(sub_B8C1B0(v6 + 64) + 16);
    if ( (v16 & 4) != 0 )
      v19 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v19 + 8) & 0x7Fu) - 58 > 4 )
      break;
    v19 -= 64LL;
    v6 = v19;
  }
  while ( v19 );
  v20 = (__int64)v13;
  if ( v13 == v43 )
    v20 = *((_QWORD *)v12 - 1) + 512LL;
  v21 = *(_QWORD *)(*(_QWORD *)(v20 - 8) + 16LL);
  v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v21 & 4) != 0 )
    v22 = (_QWORD *)*v22;
  v52 = sub_1671980((__int64)v22, a2, v15, v19, v17, v18);
  v23 = v52;
  v25 = v24;
  v26 = HIDWORD(v52);
  if ( v13 == v46 )
  {
LABEL_28:
    LODWORD(v52) = v23;
    BYTE4(v52) = v26;
    v53 = v52;
  }
  else
  {
    while ( 1 )
    {
      if ( v13 == v43 )
      {
        v31 = *((_QWORD *)v12 - 1);
        v12 -= 8;
        v49 = *(_QWORD *)(v31 + 504);
        operator delete(v13);
        v43 = *(unsigned __int64 **)v12;
        v13 = (unsigned __int64 *)(*(_QWORD *)v12 + 504LL);
        v27 = v49;
      }
      else
      {
        v27 = *--v13;
      }
      v28 = (unsigned __int8 *)sub_995750(v27);
      v30 = sub_A0D280(v47, v28, v29, v23, v25);
      if ( !BYTE4(v30) )
        break;
      v23 = v30;
      LOBYTE(v26) = 3;
      if ( !v25 )
        v25 = 1;
      if ( v46 == v13 )
        goto LABEL_28;
    }
  }
  v33 = (void **)(v12 + 8);
  while ( v33 > v10 )
  {
    v34 = *v10++;
    operator delete(v34);
  }
  operator delete(v50);
  if ( ptr != v56 )
LABEL_3:
    free(ptr);
  return v53;
}
