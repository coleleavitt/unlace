__int64 __fastcall sub_356EC0(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // rax
  void *v6; // r13
  int v7; // eax
  __int64 *v8; // r12
  void *v9; // r13
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 *v12; // r14
  __int64 v13; // rdi
  __int64 *v14; // r15
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r9d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rsi
  int v26; // eax
  void *v27; // rdi
  int v28; // eax
  void *v29; // r13
  void *v30; // r13
  void *v31; // r13
  void *v32; // r13
  __int64 v33; // rax
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 *v38; // r13
  _QWORD *v39; // rax
  char **exception; // rbp
  void *v41; // [rsp+8h] [rbp-F0h]
  void *v42; // [rsp+8h] [rbp-F0h]
  void *v43; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 v46; // [rsp+18h] [rbp-E0h]
  __int64 v47; // [rsp+18h] [rbp-E0h]
  unsigned int v48; // [rsp+24h] [rbp-D4h]
  __int64 v49; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v50; // [rsp+48h] [rbp-B0h]
  __int64 v51; // [rsp+50h] [rbp-A8h] BYREF
  _DWORD *v52; // [rsp+58h] [rbp-A0h]
  _QWORD v53[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-88h] BYREF
  int v55; // [rsp+80h] [rbp-78h] BYREF
  char v56; // [rsp+84h] [rbp-74h]
  __int64 v57; // [rsp+88h] [rbp-70h]
  int v58; // [rsp+90h] [rbp-68h] BYREF
  char v59; // [rsp+94h] [rbp-64h]
  __int64 v60; // [rsp+98h] [rbp-60h]
  __int64 v61; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-50h]
  __int64 v63; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-40h]

  sub_356580((__int64)a1, a2);
  v5 = a1[1];
  v61 = 0;
  v62 = 0;
  v44 = v5;
  v63 = 1;
  v64 = 0;
  v6 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v61, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v61) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v7 = *(_DWORD *)(a3 + 16);
      BYTE4(v63) &= ~1u;
      LODWORD(v63) = v7;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, &v63, a3 + 16);
LABEL_4:
  v50 = nullptr;
  v49 = v44;
  sub_3493D0(a1, a2, (__int64)&v49);
  v8 = v50;
  v45 = v49;
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v61);
  result = sub_182CBA0(v9, &v63);
  if ( v8 )
  {
    v11 = *((unsigned int *)v8 - 1);
    v12 = &v8[v11];
    if ( (unsigned int)v11 > 0xF )
    {
      v13 = a1[1];
      v14 = v8;
      v52 = nullptr;
      v51 = v13;
      while ( 1 )
      {
        v18 = sub_15EC2C0(v13, *v14);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v20 = v52;
        if ( !v52 )
          break;
        v21 = *(v52 - 1);
        if ( v21 != *(v52 - 2) )
        {
          v15 = v21;
          v16 = v21 + 1;
          v17 = (__int64 *)&v52[2 * v15];
          goto LABEL_8;
        }
        v22 = (3 * v21 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v61, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v61);
          sub_233E40((__int64)&v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v48 = (3 * v21 + 1) >> 1;
        v46 = v19;
        v24 = (unsigned int *)sub_186B300(v52 - 2, v23);
        v25 = v24[1];
        ++v14;
        v52 = v24 + 2;
        *v24 = v48;
        *(_QWORD *)&v24[2 * v25 + 2] = v46;
        v24[1] = v25 + 1;
        if ( v12 == v14 )
        {
LABEL_17:
          v26 = *((_DWORD *)v8 - 1);
          v53[0] = 0;
          v53[1] = 0;
          v54[0] = 1;
          v27 = qword_1C7F2C0;
          v54[1] = 0;
          v28 = v26 - 1;
          if ( v28 < 0 )
          {
            v43 = qword_1C7F2C0;
            sub_1830C40(qword_1C7F2C0, v53, (unsigned int)v28);
            v27 = v43;
          }
          else
          {
            LODWORD(v53[0]) = v28;
          }
          sub_182CBA0(v27, v54);
          BYTE4(v54[0]) &= ~1u;
          LODWORD(v54[0]) = 1;
          v61 = 0;
          v29 = qword_1C7F2C0;
          v62 = 0;
          v63 = 1;
          v64 = 0;
          if ( (v53[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v61, v53);
          else
            LODWORD(v61) = v53[0];
          if ( (v54[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v29, &v63, v54);
          }
          else
          {
            BYTE4(v63) &= ~1u;
            LODWORD(v63) = v54[0];
          }
          if ( (v63 & 0x100000000LL) != 0
            || (_DWORD)v63 != 1
            || (*(_BYTE *)(a3 + 20) & 1) != 0
            || *(_DWORD *)(a3 + 16) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v61, a3);
          }
          else
          {
            v42 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v61, a3);
            sub_182CBA0(v42, &v63);
            BYTE4(v63) &= ~1u;
            LODWORD(v63) = 1;
          }
          v56 &= 0xFCu;
          v59 &= 0xFCu;
          v55 = 0;
          v30 = qword_1C7F2C0;
          v57 = 0;
          v58 = 1;
          v60 = 0;
          if ( (v61 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v55, &v61);
          else
            v55 = v61;
          if ( (v63 & 0x100000000LL) != 0 )
          {
            sub_182C690(v30, &v58, &v63);
          }
          else
          {
            v59 &= ~1u;
            v58 = v63;
          }
          v31 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v61);
          sub_182CBA0(v31, &v63);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 80), (__int64)&v55, (__int64)(a1 + 80));
          v41 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v41, &v58);
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v53);
          sub_182CBA0(v32, v54);
          v33 = sub_355880((__int64)a1, (__int64)&v51, 0, (int *)a3);
          sub_34FB60((__int64)a1, v33, a3);
          sub_2334C0(&v51);
          goto LABEL_31;
        }
LABEL_9:
        v13 = a1[1];
      }
      v47 = v18;
      v39 = (_QWORD *)sub_186B270(0x18u);
      v20 = v39 + 1;
      *v39 = 2;
      v19 = v47;
      v16 = 1;
      v52 = v20;
      v17 = v20;
LABEL_8:
      ++v14;
      *v17 = v19;
      *((_DWORD *)v20 - 1) = v16;
      if ( v12 == v14 )
        goto LABEL_17;
      goto LABEL_9;
    }
    v38 = v8;
    if ( v8 != v12 )
    {
      do
        sub_34FB60((__int64)a1, *v38++, a3);
      while ( v12 != v38 );
LABEL_31:
      v34 = v8;
      v35 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v35 )
      {
        do
        {
          while ( 1 )
          {
            v36 = *v34;
            if ( *v34 )
            {
              if ( (*(_DWORD *)(v36 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v34 >= v35 )
              return sub_186B220(v8 - 1);
          }
          ++v34;
          sub_15D7BC0(v45, v36);
        }
        while ( (unsigned __int64)v34 < v35 );
      }
    }
    return sub_186B220(v8 - 1);
  }
  return result;
}

