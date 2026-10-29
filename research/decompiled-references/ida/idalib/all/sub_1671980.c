__int64 __fastcall sub_1671980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdi
  void **v7; // rbx
  void **v8; // r15
  void **v9; // rsi
  unsigned __int64 v10; // rbx
  char *v11; // r14
  unsigned __int64 *v12; // rbp
  _QWORD *v13; // r12
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // r13
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int8 *v22; // rax
  size_t v23; // rdx
  __int64 v24; // rax
  void **v25; // r14
  void *v26; // rdi
  unsigned __int64 *v28; // rax
  void **v29; // r15
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  void **v33; // r14
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  void **v37; // r12
  size_t v38; // rdx
  void **v39; // rsi
  void **v40; // r12
  char *v41; // rdi
  __int64 v42; // rdi
  void **v43; // rsi
  unsigned __int64 *v44; // [rsp+0h] [rbp-C8h]
  __int64 *v45; // [rsp+8h] [rbp-C0h]
  __int64 **v46; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+10h] [rbp-B8h]
  void **v48; // [rsp+18h] [rbp-B0h]
  unsigned __int64 *v49; // [rsp+20h] [rbp-A8h]
  void **v50; // [rsp+20h] [rbp-A8h]
  void *v51; // [rsp+20h] [rbp-A8h]
  void *v52; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+30h] [rbp-98h]
  __int64 **v55; // [rsp+40h] [rbp-88h]
  __int64 v56; // [rsp+48h] [rbp-80h]
  __int64 v57; // [rsp+64h] [rbp-64h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-50h]
  _BYTE v60[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0x18 )
    return v57;
  v54 = a1 - 48;
  if ( a1 == 48 )
    return v57;
  sub_A08520(&ptr, a2, *(_DWORD *)(a1 - 24), a4, a5, a6);
  v6 = ptr;
  v55 = (__int64 **)((char *)ptr + 8 * v59);
  if ( v55 == ptr )
    goto LABEL_24;
  v46 = (__int64 **)ptr;
  while ( 2 )
  {
    v45 = *v46;
    v7 = (void **)operator new(0x40u);
    v8 = v7 + 3;
    v48 = v7;
    v9 = v7;
    v10 = v54;
    v11 = (char *)v8;
    v44 = (unsigned __int64 *)operator new(0x200u);
    v12 = v44;
    v13 = v44 + 64;
    v9[3] = v44;
    v49 = v44;
    v53 = 8;
    do
    {
      if ( sub_B8E160(v10 + 48) )
        goto LABEL_9;
      if ( v12 != v13 - 1 )
      {
        *v12++ = v10;
        goto LABEL_9;
      }
      if ( v53 - ((v11 - (char *)v48) >> 3) <= 1 )
      {
        v31 = (v11 - (char *)v8) >> 3;
        v32 = v31 + 1;
        if ( v53 <= 2 * (v31 + 2) )
        {
          if ( v53 )
          {
            v53 = 2 * v53 + 2;
            if ( v53 > 0x1FFFFFFFFFFFFFFFLL )
              std::__throw_bad_alloc();
          }
          else
          {
            v53 = 3;
          }
          v56 = v31 + 2;
          v40 = (void **)operator new(8 * v53);
          v41 = (char *)&v40[(v53 - v56) >> 1];
          if ( v8 != (void **)(v11 + 8) )
            memmove(v41, v8, v11 + 8 - (char *)v8);
          operator delete(v48);
          v48 = v40;
          v8 = (void **)v41;
          v36 = 8 * v32;
          goto LABEL_45;
        }
        v33 = (void **)(v11 + 8);
        v34 = 8 * v32;
        v35 = (v53 - (v31 + 2)) >> 1;
        v36 = v34;
        v37 = &v48[v35];
        v38 = (char *)v33 - (char *)v8;
        if ( v8 <= v37 )
        {
          if ( v8 != v33 )
          {
            v42 = v34;
            v52 = (void *)v34;
            v43 = v8;
            v8 = &v48[v35];
            memmove((char *)v37 + v42 - v38, v43, v38);
            v36 = (__int64)v52;
            goto LABEL_45;
          }
        }
        else if ( v8 != v33 )
        {
          v51 = (void *)v34;
          v39 = v8;
          v8 = &v48[v35];
          memmove(v8, v39, v38);
          v36 = (__int64)v51;
LABEL_45:
          v11 = (char *)v8 + v36 - 8;
          goto LABEL_29;
        }
        v8 = &v48[v35];
        goto LABEL_45;
      }
LABEL_29:
      v11 += 8;
      v28 = (unsigned __int64 *)operator new(0x200u);
      *v12 = v10;
      *(_QWORD *)v11 = v28;
      v12 = v28;
      v13 = v28 + 64;
      v49 = v28;
LABEL_9:
      v14 = *(_QWORD *)(sub_B8C1B0(v10 + 48) + 16);
      if ( (v14 & 4) != 0 )
        v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v15 + 8) & 0x7F) != 0x18 )
        break;
      v10 = v15 - 48;
    }
    while ( v10 );
    if ( v12 == v44 )
    {
      v25 = (void **)(v11 + 8);
      while ( v25 > v8 )
      {
        v26 = *v8++;
        operator delete(v26);
      }
      operator delete(v48);
      if ( v55 == ++v46 )
      {
        v6 = ptr;
LABEL_24:
        if ( v6 != v60 )
          free(v6);
        return v57;
      }
      continue;
    }
    break;
  }
  v16 = v49;
  v50 = v8;
  v17 = 0;
  v18 = 0;
  v19 = (__int64)v12;
  v20 = 0;
  do
  {
    if ( v16 == (unsigned __int64 *)v19 )
    {
      v24 = *((_QWORD *)v11 - 1);
      v11 -= 8;
      v47 = *(_QWORD *)(v24 + 504);
      operator delete(v16);
      v16 = *(unsigned __int64 **)v11;
      v21 = v47;
      v19 = *(_QWORD *)v11 + 504LL;
    }
    else
    {
      v21 = *(_QWORD *)(v19 - 8);
      v19 -= 8;
    }
    v22 = (unsigned __int8 *)sub_995750(v21);
    v20 = sub_A0D1F0(v45, v22, v23, (v18 << 32) | v17 & 0xFFFFFF00FFFFFFFFLL | v20 & 0xFFFFFF0000000000LL);
    v17 = (unsigned int)v20;
    v18 = BYTE4(v20);
    if ( !BYTE4(v20) )
    {
      v29 = v50;
      goto LABEL_31;
    }
  }
  while ( (unsigned __int64 *)v19 != v44 );
  v29 = v50;
  LODWORD(v57) = v20;
  BYTE4(v57) = 2;
LABEL_31:
  while ( v11 + 8 > (char *)v29 )
  {
    v30 = *v29++;
    operator delete(v30);
  }
  operator delete(v48);
  if ( ptr != v60 )
    free(ptr);
  return v57;
}
