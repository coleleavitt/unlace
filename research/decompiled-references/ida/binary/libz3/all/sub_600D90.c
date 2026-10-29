__int64 __fastcall sub_600D90(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char **exception; // rbx
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edi
  __int64 *v13; // rsi
  unsigned int v14; // edx
  __int64 *v15; // r11
  __int64 v16; // rdx
  __int64 *v17; // r9
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 **v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 **v23; // r11
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  _DWORD *v27; // rbp
  int v28; // eax
  __int64 v29; // r9
  unsigned int v30; // r12d
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rbp
  _DWORD *v36; // r15
  __int64 v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  unsigned __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbp
  unsigned int v46; // ebx
  unsigned int v47; // eax
  unsigned int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned int v51; // r13d
  unsigned int v52; // ebx
  size_t v53; // rsi
  unsigned int *v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rsi
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  int v60; // eax
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // [rsp+8h] [rbp-D0h]
  _DWORD *v65; // [rsp+8h] [rbp-D0h]
  __int64 v66; // [rsp+10h] [rbp-C8h]
  __int64 v67; // [rsp+10h] [rbp-C8h]
  __int64 v68; // [rsp+10h] [rbp-C8h]
  __int64 v69; // [rsp+10h] [rbp-C8h]
  __int64 v70; // [rsp+18h] [rbp-C0h]
  __int64 v71; // [rsp+18h] [rbp-C0h]
  __int64 v72; // [rsp+18h] [rbp-C0h]
  __int64 v73; // [rsp+20h] [rbp-B8h]
  unsigned int v74; // [rsp+20h] [rbp-B8h]
  __int64 v75; // [rsp+28h] [rbp-B0h]
  __int64 v76; // [rsp+30h] [rbp-A8h]
  __int64 v77; // [rsp+38h] [rbp-A0h]
  __int64 v78; // [rsp+40h] [rbp-98h]
  __int64 **v79; // [rsp+48h] [rbp-90h]
  __int64 v80; // [rsp+50h] [rbp-88h]
  _QWORD *v82; // [rsp+60h] [rbp-78h]
  __int64 v83; // [rsp+68h] [rbp-70h]
  __int64 v84[11]; // [rsp+80h] [rbp-58h] BYREF

  v80 = a1;
  if ( (unsigned __int8)sub_62A4D0(a2) )
    return 0;
  v6 = *(_QWORD *)(a3 + 144);
  v75 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  if ( !*(_DWORD *)(a2 + 64) )
    return 0;
  v77 = *(unsigned int *)(a2 + 64);
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v82 = a4;
LABEL_4:
  while ( 1 )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v7 + 8 * v9 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( v75 != v10 )
      break;
LABEL_25:
    if ( v77 == ++v9 )
      return 0;
  }
  v11 = *(unsigned int *)(v8 + 104);
  v12 = *(_DWORD *)(v10 + 12);
  v13 = *(__int64 **)(v8 + 96);
  v14 = v11 - 1;
  v11 *= 8;
  v15 = (__int64 *)((char *)v13 + v11);
  v16 = 8LL * (v12 & v14);
  v17 = &v13[(unsigned __int64)v16 / 8];
  if ( v16 != v11 )
  {
    for ( i = &v13[(unsigned __int64)v16 / 8]; v15 != i; ++i )
    {
      v19 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v12 && v10 == v19 )
          goto LABEL_25;
      }
      else if ( !v19 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v17 != v13; ++v13 )
  {
    v38 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
    {
      if ( *(_DWORD *)(v38 + 12) == v12 && v10 == v38 )
        goto LABEL_25;
    }
    else if ( !v38 )
    {
      break;
    }
  }
LABEL_12:
  v66 = v7;
  v64 = v9;
  v20 = (__int64 **)sub_63BA90(a3, v10);
  v21 = v64;
  v22 = v66;
  v23 = v20;
  v24 = *v20;
  if ( !v24 )
    goto LABEL_72;
  v25 = *((unsigned int *)v24 - 1);
  if ( !(_DWORD)v25 )
    goto LABEL_72;
  if ( (_DWORD)v25 != 1 )
  {
    v79 = v23;
    v42 = 0;
    v78 = 8 * v25;
    v72 = 0;
    v83 = v6;
    v43 = v66;
    while ( 1 )
    {
      v44 = v24[v42 / 8];
      v45 = *(_QWORD *)(v8 + 480) + 16LL;
      v46 = sub_648530(v45, v44);
      v47 = sub_648530(v45, v43);
      if ( v46 < v47 )
        v46 = v47;
      sub_FA3BF0(v8 + 920);
      v48 = v46 + 1;
      if ( *(_DWORD *)(v8 + 936) <= 1u || *(_DWORD *)(v8 + 940) < v48 )
        break;
LABEL_57:
      v60 = *(_DWORD *)(v8 + 944) + 1;
      *(_DWORD *)(v8 + 944) = v60;
      if ( v60 == -1 )
      {
        v62 = *(_QWORD *)(v8 + 928);
        if ( v62 )
        {
          v63 = v62 + 24LL * *(unsigned int *)(v62 - 4);
          if ( v62 != v63 )
          {
            if ( ((24 * (unsigned __int8)*(_DWORD *)(v62 - 4)) & 8) == 0
              || (*(_DWORD *)(v62 + 16) = 0, v62 += 24, v63 != v62) )
            {
              do
              {
                *(_DWORD *)(v62 + 16) = 0;
                v62 += 48;
                *(_DWORD *)(v62 - 8) = 0;
              }
              while ( v63 != v62 );
            }
          }
        }
        *(_DWORD *)(v8 + 944) = 1;
      }
      v61 = sub_FB5F20((int)v8 + 1048);
      *(_BYTE *)(v8 + 1112) = v61;
      if ( v61 )
      {
        *(_DWORD *)(v8 + 1120) = v48;
        *(_DWORD *)(v8 + 1116) = 0;
        if ( v72 )
        {
          v7 = v43;
          v6 = v83;
          v9 = v64 + 1;
          if ( v77 == v64 + 1 )
            return 0;
          goto LABEL_4;
        }
        v72 = v44;
      }
      v42 += 8LL;
      if ( v78 == v42 )
      {
        v22 = v43;
        v26 = v72;
        v21 = v64;
        v6 = v83;
        goto LABEL_16;
      }
      v24 = *v79;
    }
    v49 = *(_QWORD *)(v8 + 928);
    v50 = 2 * v48;
    if ( v49 )
    {
      if ( *(_DWORD *)(v49 - 4) < (unsigned int)v50 )
      {
        v69 = v44;
        v51 = *(_DWORD *)(v49 - 4);
        v74 = v48;
LABEL_49:
        while ( 1 )
        {
          v55 = *(_DWORD *)(v49 - 8);
          if ( v55 >= (unsigned int)v50 )
            break;
          v52 = (3 * v55 + 1) >> 1;
          v53 = 8 * (v52 + ((3 * v55 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v55 + 8 >= (unsigned int)v53 || v55 >= v52 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v84, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v84);
            sub_233E40((__int64)v84);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = (unsigned int *)sub_186B300((void *)(v49 - 8), v53);
          v49 = (__int64)(v54 + 2);
          *(_QWORD *)(v8 + 928) = v54 + 2;
          *v54 = v52;
        }
        *(_DWORD *)(v49 - 4) = v50;
        v48 = v74;
        v56 = 3LL * v51;
        v44 = v69;
        v56 *= 8;
        v57 = v49 + v56;
        v58 = (_QWORD *)(24 * v50 + v49);
        if ( v56 != 24 * v50 )
        {
          v59 = (_QWORD *)v57;
          do
          {
            *v59 = 0;
            v59 += 3;
            *((_DWORD *)v59 - 2) = 0;
          }
          while ( v58 != v59 );
          if ( (((_BYTE)v58 - (_BYTE)v57) & 8) == 0 || (*(_DWORD *)(v57 + 8) = 0, v57 += 24, v58 != (_QWORD *)v57) )
          {
            do
            {
              *(_DWORD *)(v57 + 8) = 0;
              v57 += 48;
              *(_DWORD *)(v57 - 16) = 0;
            }
            while ( v58 != (_QWORD *)v57 );
          }
        }
        goto LABEL_56;
      }
      *(_DWORD *)(v49 - 4) = v50;
    }
    else if ( (_DWORD)v50 )
    {
      v69 = v44;
      v49 = sub_186B270(0x38u) + 8;
      v74 = v48;
      v51 = 0;
      *(_QWORD *)(v49 - 8) = 2;
      *(_QWORD *)(v8 + 928) = v49;
      goto LABEL_49;
    }
LABEL_56:
    *(_DWORD *)(v8 + 940) = v48;
    *(_DWORD *)(v8 + 936) = 2;
    goto LABEL_57;
  }
  v26 = *v24;
LABEL_16:
  if ( !v26 )
  {
LABEL_72:
    if ( *v82 )
      sub_62A410(v82[1], *v82);
    *v82 = 0;
    sub_6481D0(*(_QWORD *)(v80 + 464));
    return 1;
  }
  v73 = v22;
  v70 = v21;
  v27 = *(_DWORD **)(*(_QWORD *)(v26 + 40) + 16LL);
  v67 = v26;
  v65 = v27;
  v28 = sub_63D060(v6, v27);
  v29 = v67;
  v30 = v27[8];
  v31 = v28;
  v32 = v70;
  v33 = *(unsigned int *)(v67 + 64);
  if ( (_DWORD)v33 )
  {
    v76 = v67;
    v34 = v67;
    v35 = v67 + 8 * v33;
    v68 = v70;
    v71 = v8;
    do
    {
      v36 = *(_DWORD **)((*(_QWORD *)(v34 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( v31 == (unsigned int)sub_63D060(v6, v36) && (v30 < v36[8] || v30 == v36[8] && *v36 >= *v65) )
      {
        v9 = v68;
        v8 = v71;
        v7 = v73;
        goto LABEL_25;
      }
      v34 += 8;
    }
    while ( v35 != v34 );
    v29 = v76;
    v32 = v68;
    v39 = v73;
    v80 = v71;
    v40 = v82;
    v41 = v71;
  }
  else
  {
    v40 = v82;
    v41 = v80;
    v39 = v73;
  }
  if ( !(unsigned __int8)sub_600B70(v41, v39, v29, v32, v40) )
  {
    sub_6481D0(*(_QWORD *)(v80 + 464));
    if ( *v40 )
      sub_62A410(v40[1], *v40);
    *v40 = 0;
  }
  return 1;
}

