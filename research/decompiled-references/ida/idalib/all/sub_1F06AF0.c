void __fastcall sub_1F06AF0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  int v16; // r14d
  __int64 v17; // r13
  int v18; // r14d
  int v19; // edi
  unsigned int i; // eax
  __int64 v21; // rsi
  unsigned int v22; // eax
  char *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbp
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r13d
  int v30; // r14d
  char *v31; // rax
  int v32; // r12d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  int v35; // r15d
  int v36; // eax
  __int64 v37; // rdx
  unsigned __int64 *v38; // rsi
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 *v43; // rbx
  unsigned __int64 *v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 *v47; // rsi
  __int64 v48; // rdi
  __int64 *v49; // rcx
  __int64 *v50; // rax
  __int64 *v51; // rsi
  __int64 *v52; // rax
  __int64 v53; // r13
  __int64 v54; // rax
  __int64 *v55; // [rsp+0h] [rbp-E8h]
  int v56; // [rsp+8h] [rbp-E0h]
  int v57; // [rsp+Ch] [rbp-DCh]
  _QWORD *v58; // [rsp+20h] [rbp-C8h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  char *v60; // [rsp+40h] [rbp-A8h] BYREF
  char *v61; // [rsp+48h] [rbp-A0h] BYREF
  int v62; // [rsp+50h] [rbp-98h] BYREF
  __int64 v63; // [rsp+58h] [rbp-90h]
  unsigned __int64 **v64; // [rsp+60h] [rbp-88h] BYREF
  __int64 v65; // [rsp+68h] [rbp-80h]
  __int64 v66; // [rsp+70h] [rbp-78h]
  unsigned int v67; // [rsp+78h] [rbp-70h]
  unsigned __int64 *v68; // [rsp+80h] [rbp-68h] BYREF
  __int64 v69; // [rsp+88h] [rbp-60h]
  _BYTE v70[88]; // [rsp+90h] [rbp-58h] BYREF

  v8 = (char *)a2;
  v68 = (unsigned __int64 *)v70;
  v69 = 0x400000000LL;
  v9 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 8) & 4) != 0 )
  {
    a2 = *(unsigned int *)(v9 + 8);
    if ( !(_DWORD)a2 )
      goto LABEL_3;
LABEL_17:
    sub_1F06970(v8, a2, v9, a4, a5, a6);
    goto LABEL_3;
  }
  if ( v9 )
    goto LABEL_17;
LABEL_3:
  if ( (*(_QWORD *)v8 & 2) != 0 && *(_DWORD *)((*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL) + 8) > 4u )
    sub_1EF7120((unsigned __int64 *)v8);
  sub_1EAAB80((__int64)&v64, *a3);
  v62 = (int)v64;
  v63 = v65;
  v56 = sub_1EADE10((__int64)&v62);
  v10 = *(_QWORD *)v8;
  v11 = *(_QWORD *)v8;
  v12 = (*(__int64 *)v8 >> 1) & 1;
  if ( ((*(__int64 *)v8 >> 1) & 1) != 0 )
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !*(_DWORD *)(v13 + 8) || (v14 = **(_QWORD **)v13) == 0 || (v14 & 4) == 0 )
    {
      v67 = 0;
      v65 = 0;
      v64 = &v68;
      v66 = 0;
      goto LABEL_22;
    }
LABEL_10:
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 40);
      v17 = *(_QWORD *)(v15 + 24);
      if ( v16 )
      {
        v18 = v16 - 1;
        v19 = 1;
        for ( i = v18 & sub_1EADE10((__int64)&v62); ; i = v18 & v22 )
        {
          v21 = v17 + ((unsigned __int64)i << 6);
          if ( v62 == *(_DWORD *)v21 && v63 == *(_QWORD *)(v21 + 8) )
            break;
          if ( *(_DWORD *)v21 == -1 && *(_QWORD *)(v21 + 8) == 1 )
            goto LABEL_73;
          v22 = v19 + i;
          ++v19;
        }
        if ( v21 != *(_QWORD *)(v15 + 24) + ((unsigned __int64)*(unsigned int *)(v15 + 40) << 6) )
          sub_1ECCD50((__int64 *)&v68, (__int64 *)(v21 + 16));
LABEL_73:
        v10 = *(_QWORD *)v8;
      }
      v13 = v10 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = (v10 >> 1) & 1;
    }
    v67 = 0;
    v65 = 0;
    v64 = &v68;
    v66 = 0;
    if ( !v12 )
    {
      if ( !v13 )
        goto LABEL_27;
      goto LABEL_67;
    }
LABEL_22:
    if ( !*(_DWORD *)(v13 + 8) )
    {
      v13 = 0;
      goto LABEL_27;
    }
    v23 = *(char **)v13;
    goto LABEL_24;
  }
  v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v13 )
  {
    v67 = 0;
    v65 = 0;
    v64 = &v68;
    v66 = 0;
    goto LABEL_27;
  }
  v14 = *(_QWORD *)v8;
  if ( v10 && (v10 & 4) != 0 )
    goto LABEL_10;
  v67 = 0;
  v65 = 0;
  v64 = &v68;
  v66 = 0;
LABEL_67:
  v23 = v8;
LABEL_24:
  v24 = *(_QWORD *)v23;
  v13 = 0;
  if ( v24 && (v24 & 4) != 0 )
    v13 = (v24 & 0xFFFFFFFFFFFFFFF8LL) != 0;
LABEL_27:
  v25 = (_QWORD *)sub_1EAA820(v8, v13);
  v58 = v26;
  if ( v26 != v25 )
  {
    v59 = a1;
    do
    {
      v27 = *v25 & 0xFFFFFFFFFFFFFFF8LL;
      v28 = *(unsigned int *)(*(_QWORD *)(v27 + 16) + 4LL * (v56 & (unsigned int)(*(_DWORD *)(v27 + 8) - 1)));
      if ( (_DWORD)v28 )
      {
        v29 = 0;
        v60 = (char *)(*(_QWORD *)(v27 + 24) + v28);
        v30 = *(unsigned __int16 *)v60;
        v31 = v60 + 2;
        v60 += 2;
        v55 = (__int64 *)(v27 + 32);
        if ( v30 )
        {
          while ( 1 )
          {
            v32 = *(_DWORD *)v31;
            v60 = v31 + 4;
            v33 = sub_1EA91E0(&v60);
            v57 = v33;
            v34 = HIDWORD(v33);
            v35 = HIDWORD(v33) + v33;
            if ( v56 == v32 )
            {
              v61 = v60;
              v36 = sub_1EF5660(v55, &v61);
              if ( v36 == v62 && v37 == v63 )
                break;
            }
            ++v29;
            v31 = &v60[v35];
            v60 = v31;
            if ( v30 == v29 )
              goto LABEL_38;
          }
          v38 = (unsigned __int64 *)&v60[v57];
          if ( v38 )
            sub_1EE1CA0(v55, v38, v34, (__int64 *)&v64);
        }
      }
LABEL_38:
      ++v25;
    }
    while ( v58 != v25 );
    a1 = v59;
  }
  operator delete(v65, 8LL * v67, 8);
  v43 = v68;
  v44 = &v68[(unsigned int)v69];
  if ( v68 != v44 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = sub_1EDB980(*(_QWORD **)a1, *v43, v39, v40, v41, v42);
        if ( **(_QWORD **)(a1 + 8) == *(_QWORD *)(v45 + 40) )
          break;
LABEL_42:
        if ( v44 == ++v43 )
          goto LABEL_62;
      }
      v46 = *(_QWORD *)(a1 + 16);
      v39 = *(unsigned __int8 *)(v46 + 20);
      if ( !(_BYTE)v39 )
        goto LABEL_68;
      v47 = *(__int64 **)v46;
      v41 = *(unsigned int *)(v46 + 12);
      v48 = 8 * v41;
      v49 = (__int64 *)(*(_QWORD *)v46 + 8 * v41);
      if ( *(__int64 **)v46 != v49 )
      {
        v50 = *(__int64 **)v46;
        if ( v45 == *v47 )
        {
LABEL_78:
          v39 = 0;
          goto LABEL_52;
        }
        while ( v49 != ++v50 )
        {
          if ( v45 == *v50 )
            goto LABEL_78;
        }
      }
      if ( (unsigned int)v41 < *(_DWORD *)(v46 + 8) )
      {
        v41 = (unsigned int)(v41 + 1);
        *(_DWORD *)(v46 + 12) = v41;
        *v49 = v45;
        v47 = *(__int64 **)v46;
        v50 = (__int64 *)(*(_QWORD *)v46 + v48);
      }
      else
      {
LABEL_68:
        v50 = (__int64 *)sub_2236760(*(_QWORD *)(a1 + 16), v45);
        v47 = *(__int64 **)v46;
        if ( !*(_BYTE *)(v46 + 20) )
        {
          v40 = *(unsigned int *)(v46 + 8);
          v51 = &v47[v40];
          goto LABEL_53;
        }
      }
LABEL_52:
      v40 = *(unsigned int *)(v46 + 12);
      v51 = &v47[v40];
LABEL_53:
      if ( v50 != v51 && (unsigned __int64)*v50 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v52 = v50 + 1;
        do
        {
          v40 = (unsigned __int64)v52;
          if ( v51 == v52 )
            break;
          ++v52;
        }
        while ( *(_QWORD *)v40 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( !(_BYTE)v39 )
        goto LABEL_42;
      v53 = *(_QWORD *)(a1 + 24);
      v54 = *(unsigned int *)(v53 + 8);
      v40 = *(unsigned int *)(v53 + 12);
      if ( v54 + 1 > v40 )
      {
        sub_2237220(*(_QWORD *)(a1 + 24), v53 + 16, v54 + 1, 8);
        v54 = *(unsigned int *)(v53 + 8);
      }
      v39 = *(_QWORD *)v53;
      ++v43;
      *(_QWORD *)(*(_QWORD *)v53 + 8 * v54) = v45;
      ++*(_DWORD *)(v53 + 8);
      if ( v44 == v43 )
      {
LABEL_62:
        v44 = v68;
        break;
      }
    }
  }
  if ( v44 != (unsigned __int64 *)v70 )
    free(v44);
}
