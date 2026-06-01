__int64 __fastcall sub_C775A0(__int64 a1, int *a2, _QWORD *a3, unsigned int a4, _BYTE *a5, int a6)
{
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v14; // r12
  int v15; // edx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  void *v19; // rdi
  int *v20; // rsi
  int *v21; // rdx
  int v22; // edx
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rax
  __int64 i; // r12
  __int64 v27; // r12
  _QWORD *v28; // rax
  _QWORD *v29; // rbp
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int **v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // rdx
  _DWORD *v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // edx
  _QWORD *v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  unsigned int v51; // edx
  __int64 v52; // rsi
  __int64 v53; // rdx
  void *v54; // rdi
  char **exception; // rbp
  __int64 v56; // rdx
  void *v57; // [rsp+0h] [rbp-B8h]
  void *v58; // [rsp+0h] [rbp-B8h]
  __int64 v59; // [rsp+0h] [rbp-B8h]
  __int64 v60; // [rsp+0h] [rbp-B8h]
  void *v61; // [rsp+8h] [rbp-B0h]
  void *v62; // [rsp+10h] [rbp-A8h]
  int *v63; // [rsp+18h] [rbp-A0h]
  __int64 v64; // [rsp+20h] [rbp-98h] BYREF
  __int64 v65; // [rsp+28h] [rbp-90h]
  __int64 v66; // [rsp+30h] [rbp-88h]
  __int64 v67; // [rsp+38h] [rbp-80h]
  int v68; // [rsp+40h] [rbp-78h] BYREF
  char v69; // [rsp+44h] [rbp-74h]
  __int64 v70; // [rsp+48h] [rbp-70h]
  int v71; // [rsp+50h] [rbp-68h] BYREF
  char v72; // [rsp+54h] [rbp-64h]
  __int64 v73; // [rsp+58h] [rbp-60h]
  __int64 v74; // [rsp+60h] [rbp-58h] BYREF
  __int64 v75; // [rsp+68h] [rbp-50h]
  int v76; // [rsp+70h] [rbp-48h] BYREF
  char v77; // [rsp+74h] [rbp-44h]
  __int64 v78; // [rsp+78h] [rbp-40h]

  if ( !a2[2] )
  {
    if ( (a2[1] & 0x1FFFFFFF) != 0 )
      goto LABEL_6;
    goto LABEL_3;
  }
  v64 = 0;
  v65 = 0;
  v63 = a2 + 10;
  v66 = 1;
  v67 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v64, a2 + 10);
  if ( (int)v64 < 0 )
    sub_1831620(qword_1C7F2C0, &v64);
  v14 = 0;
  if ( a2[2] )
  {
    while ( (v64 & 0x100000000LL) != 0 || (_DWORD)v64 != 1 || (v66 & 0x100000000LL) != 0 || (_DWORD)v66 != 1 )
    {
      v19 = qword_1C7F2C0;
      v20 = (int *)(*((_QWORD *)a2 + 4) + 32 * v14);
      if ( *v20 > 0 )
      {
        BYTE4(v74) &= 0xFCu;
        v77 &= 0xFCu;
        LODWORD(v74) = 0;
        v75 = 0;
        v76 = 1;
        v78 = 0;
        sub_1832C70(qword_1C7F2C0, v20, &v64, &v74);
        sub_182CBA0(v19, &v76);
        v15 = v74;
        ++v14;
        LODWORD(v74) = v64;
        LODWORD(v64) = v15;
        v16 = v75;
        v75 = v65;
        v65 = v16;
        v17 = BYTE4(v74) & 1;
        LOBYTE(v16) = BYTE4(v64) & 0xFC | BYTE4(v74) & 2;
        v61 = qword_1C7F2C0;
        BYTE4(v74) = BYTE4(v64) & 1 | BYTE4(v74) & 0xFC | BYTE4(v64) & 2;
        BYTE4(v64) = v17 | v16;
        v76 = v66;
        v18 = v67;
        v67 = v78;
        v78 = v18;
        LODWORD(v66) = 1;
        LOBYTE(v18) = BYTE4(v66) & 1 | BYTE4(v66) & 2 | v77 & 0xFC;
        BYTE4(v66) = BYTE4(v66) & 0xFC | v77 & 2;
        v77 = v18;
        sub_182CBA0(qword_1C7F2C0, &v74);
        sub_182CBA0(v61, &v76);
        if ( (unsigned int)v14 >= a2[2] )
          goto LABEL_19;
      }
      else
      {
        v21 = (int *)(*((_QWORD *)a2 + 4) + 32 * v14);
        BYTE4(v74) &= 0xFCu;
        v77 &= 0xFCu;
        LODWORD(v74) = 0;
        v75 = 0;
        v76 = 1;
        v78 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v74, v21);
        sub_1831620(qword_1C7F2C0, &v74);
        v69 &= 0xFCu;
        v72 &= 0xFCu;
        v68 = 0;
        v70 = 0;
        v71 = 1;
        v73 = 0;
        v62 = qword_1C7F2C0;
        sub_1832C70(qword_1C7F2C0, &v74, &v64, &v68);
        sub_182CBA0(v62, &v71);
        v22 = v68;
        ++v14;
        v68 = v64;
        LODWORD(v64) = v22;
        v23 = v70;
        v70 = v65;
        v65 = v23;
        v24 = v69 & 1;
        LOBYTE(v23) = BYTE4(v64) & 0xFC | v69 & 2;
        v69 = BYTE4(v64) & 1 | v69 & 0xFC | BYTE4(v64) & 2;
        BYTE4(v64) = v24 | v23;
        v71 = v66;
        v25 = v67;
        v67 = v73;
        v73 = v25;
        LODWORD(v66) = 1;
        v57 = qword_1C7F2C0;
        LOBYTE(v25) = BYTE4(v66) & 1 | BYTE4(v66) & 2 | v72 & 0xFC;
        BYTE4(v66) = BYTE4(v66) & 0xFC | v72 & 2;
        v72 = v25;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v57, &v71);
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v74);
        sub_182CBA0(v58, &v76);
        if ( (unsigned int)v14 >= a2[2] )
          goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_19:
    if ( (v64 & 0x100000000LL) != 0 )
      goto LABEL_20;
  }
  if ( (_DWORD)v64 != 1 || (v66 & 0x100000000LL) != 0 || (_DWORD)v66 != 1 )
  {
LABEL_20:
    sub_3ED4D0((__int64)qword_1C7F2C0, v63, (__int64)&v64, (__int64)v63);
    for ( i = 0; (unsigned int)i < a2[2]; ++i )
      sub_3ED4D0(
        (__int64)qword_1C7F2C0,
        (int *)(*((_QWORD *)a2 + 4) + 32 * i),
        (__int64)&v64,
        *((_QWORD *)a2 + 4) + 32 * i);
  }
  sub_25A130((char *)&v64);
  a4 = a2[2];
  if ( !(a4 | a2[1] & 0x1FFFFFFF) )
  {
LABEL_3:
    v8 = a2[10];
    if ( v8 < 0 || (*((_BYTE *)a2 + 7) & 0x20) != 0 && !v8 )
    {
      sub_C76990((__int64 *)a1, a2);
      *(_BYTE *)(a1 + 772) = 1;
      return 0;
    }
LABEL_6:
    v9 = *(_QWORD *)(a1 + 704);
    v10 = *((_QWORD *)a2 + 9);
    v11 = sub_C6FBE0((_QWORD *)a1, (__int64)a2, (int)a3, a4, a5, a6);
    sub_EDB570(v9, v11, 0, v10);
    sub_C76990((__int64 *)a1, a2);
    return 0;
  }
  if ( !a4 )
    goto LABEL_6;
  v27 = 0;
  v12 = 0;
  do
  {
    a3 = *(_QWORD **)(a1 + 608);
    v34 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 4 * v27);
    if ( !*((_BYTE *)a3 + v34) )
    {
      v35 = 8 * v34;
      if ( *(int *)(*((_QWORD *)a2 + 4) + 32 * v27) >= 0 )
      {
        v28 = (_QWORD *)(*(_QWORD *)(a1 + 672) + v35);
        a3 = (_QWORD *)*v28;
        v29 = v28;
        if ( *v28 )
        {
          v30 = *((_DWORD *)a3 - 1);
          if ( v30 == *((_DWORD *)a3 - 2) )
          {
            v37 = (3 * v30 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v38 || v30 >= v37 )
            {
LABEL_68:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_161886(&v74, "Overflow encountered when expanding vector", v56);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v74);
              sub_233E40((__int64)&v74);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_36;
          }
LABEL_27:
          v31 = v30;
          v32 = v30 + 1;
          v33 = (int **)&a3[v31];
LABEL_28:
          *v33 = a2;
          v12 = 1;
          *((_DWORD *)a3 - 1) = v32;
          a4 = a2[2];
          goto LABEL_29;
        }
      }
      else
      {
        v36 = (_QWORD *)(*(_QWORD *)(a1 + 664) + v35);
        a3 = (_QWORD *)*v36;
        v29 = v36;
        if ( *v36 )
        {
          v30 = *((_DWORD *)a3 - 1);
          if ( v30 == *((_DWORD *)a3 - 2) )
          {
            v37 = (3 * v30 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v38 || v30 >= v37 )
              goto LABEL_68;
LABEL_36:
            v39 = (unsigned int *)sub_186B300(a3 - 1, v38);
            v40 = v39[1];
            a3 = v39 + 2;
            *v29 = v39 + 2;
            *v39 = v37;
            LODWORD(v39) = v40;
            v33 = (int **)&a3[v40];
            v32 = (_DWORD)v39 + 1;
            goto LABEL_28;
          }
          goto LABEL_27;
        }
      }
      v48 = (_QWORD *)sub_186B270(0x18u);
      a3 = v48 + 1;
      *v48 = 2;
      v32 = 1;
      *v29 = a3;
      v33 = (int **)a3;
      goto LABEL_28;
    }
LABEL_29:
    ++v27;
  }
  while ( (unsigned int)v27 < a4 );
  if ( !(_BYTE)v12 )
    goto LABEL_6;
  v41 = (unsigned int)*a2;
  v42 = *(_QWORD *)(a1 + 792);
  v43 = v41 + 1;
  if ( v42 )
  {
    v44 = *(unsigned int *)(v42 - 4);
    if ( (unsigned int)v44 >= v43 )
      goto LABEL_49;
    v59 = 4 * v44;
LABEL_60:
    while ( !v42 || *(_DWORD *)(v42 - 8) < v43 )
    {
      sub_2FD3F0((unsigned int **)(a1 + 792));
      v42 = *(_QWORD *)(a1 + 792);
    }
    v52 = v59;
    *(_DWORD *)(v42 - 4) = v43;
    v53 = 4LL * v43;
    v54 = (void *)(v42 + v59);
    if ( v53 != v59 )
    {
      v60 = v42;
      memset(v54, 255, v53 - v52);
      v42 = v60;
    }
  }
  else if ( (_DWORD)v41 != -1 )
  {
    v59 = 0;
    goto LABEL_60;
  }
LABEL_49:
  v45 = (_DWORD *)(v42 + 4 * v41);
  if ( *v45 == -1 )
  {
    v49 = *(_QWORD *)(a1 + 800);
    if ( v49 )
    {
      v50 = *(_DWORD *)(v49 - 4);
      *v45 = v50;
      if ( v50 != *(_DWORD *)(v49 - 8) )
      {
LABEL_56:
        v51 = *(_DWORD *)(v49 - 4);
        *(_QWORD *)(v49 + 8LL * v51) = a2;
        *(_DWORD *)(v49 - 4) = v51 + 1;
        goto LABEL_50;
      }
    }
    else
    {
      *v45 = 0;
    }
    sub_C774C0((unsigned int **)(a1 + 800));
    v49 = *(_QWORD *)(a1 + 800);
    goto LABEL_56;
  }
LABEL_50:
  v46 = *(_QWORD *)(a1 + 544);
  if ( !v46 || (v47 = *(_DWORD *)(v46 - 4), v47 == *(_DWORD *)(v46 - 8)) )
  {
    sub_C774C0((unsigned int **)(a1 + 544));
    v46 = *(_QWORD *)(a1 + 544);
    v47 = *(_DWORD *)(v46 - 4);
  }
  *(_QWORD *)(v46 + 8LL * v47) = a2;
  *(_DWORD *)(v46 - 4) = v47 + 1;
  return v12;
}

