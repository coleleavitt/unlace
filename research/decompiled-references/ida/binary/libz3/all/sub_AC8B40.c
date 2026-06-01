__int64 __fastcall sub_AC8B40(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int16 v12; // ax
  __int64 v13; // r13
  bool v14; // zf
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  int v17; // eax
  __int64 *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // r13
  int v21; // esi
  __int64 v22; // r14
  __int64 *v23; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rbx
  __int64 result; // rax
  __int64 v37; // rdx
  __int64 v38; // rbp
  _QWORD *v39; // rdi
  int v40; // ecx
  _QWORD *v41; // rdx
  unsigned int v42; // esi
  _QWORD *v43; // rax
  unsigned int v44; // r12d
  __int64 v45; // r13
  void *v46; // rcx
  _QWORD *v47; // rdi
  int v48; // ecx
  _QWORD *v49; // rdx
  unsigned int v50; // esi
  _QWORD *v51; // rax
  unsigned int v52; // r12d
  __int64 v53; // r13
  void *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r12d
  int v58; // r15d
  __int64 v59; // rax
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rbp
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int16 v73; // ax
  unsigned int v74; // ebx
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rcx
  __int64 *v78; // rax
  size_t v79; // r8
  void *v80; // rdi
  unsigned int v81; // ecx
  _QWORD *v82; // rax
  unsigned int v83; // esi
  unsigned int v84; // esi
  __int64 *v85; // [rsp+0h] [rbp-88h]
  size_t v86; // [rsp+0h] [rbp-88h]
  __int64 v87; // [rsp+8h] [rbp-80h]
  int v88; // [rsp+10h] [rbp-78h]
  __int64 v89; // [rsp+18h] [rbp-70h] BYREF
  __int64 v90; // [rsp+20h] [rbp-68h] BYREF
  __int64 v91; // [rsp+28h] [rbp-60h]
  __int64 v92; // [rsp+30h] [rbp-58h] BYREF
  __int64 v93; // [rsp+38h] [rbp-50h]

  v5 = sub_186B270(0x80u);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v5;
  v12 = *(_WORD *)(v9 + 4);
  if ( v12 )
  {
    if ( v12 != 2 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(v9 + 30) & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a2 + 56) != *(_QWORD *)(v10 + 936) )
  {
    v91 = *(_QWORD *)(a1 + 8);
    v93 = v10;
    v90 = 0;
    v92 = 0;
    v85 = &v89;
    sub_13AC880(&v89, v91, v9, v6, v7, v8);
    sub_13AD310(&v89, a2, &v92, &v90);
    v13 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    sub_13AC9F0(&v89);
    sub_AC6F60(v92, v93);
    v28 = v90;
    if ( v90 )
    {
      v29 = v91;
      v14 = (*(_DWORD *)(v90 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v29, v28);
    }
    sub_137FC40(v11, v10, v13);
    if ( !v13 )
      goto LABEL_6;
    goto LABEL_4;
  }
LABEL_3:
  ++*(_DWORD *)(a2 + 8);
  sub_137FC40(v11, v10, a2);
  v13 = a2;
LABEL_4:
  v14 = (*(_DWORD *)(v13 + 8))-- == 1;
  if ( v14 )
    sub_15D7BC0(v10, v13);
LABEL_6:
  v15 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v11 + 88) = a1;
  *(_QWORD *)v11 = &off_1C56BE0;
  v16 = 2 * v15;
  v17 = *(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56);
  *(_QWORD *)(v11 + 96) = a2;
  *(_QWORD *)(v11 + 104) = v10;
  *(_OWORD *)(v11 + 112) = 0;
  ++*(_DWORD *)(a2 + 8);
  if ( 3 * v15 < 4 * v17 )
  {
    v15 *= 2;
    v86 = 16LL * v16;
    v78 = (__int64 *)sub_186B270(v86);
    v79 = v86;
    v18 = v78;
    v20 = &v78[v86 / 8];
    if ( v15 )
    {
      if ( (v86 & 0x10) == 0 || (*(_OWORD *)v78 = 0, v78 += 2, v20 != v78) )
      {
        do
        {
          *(_OWORD *)v78 = 0;
          v78 += 4;
          *((_OWORD *)v78 - 1) = 0;
        }
        while ( v20 != v78 );
      }
    }
    LODWORD(v85) = v15;
    v87 = v79;
    sub_AD64E0(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 48), v18);
    v80 = *(void **)(a1 + 40);
    v81 = v15;
    v19 = v87;
    if ( v80 )
    {
      LODWORD(v87) = v15;
      v85 = (__int64 *)v19;
      sub_186B220(v80);
      v81 = v15;
      v19 = (__int64)v85;
    }
    *(_QWORD *)(a1 + 40) = v18;
    *(_DWORD *)(a1 + 48) = v81;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v18 = *(__int64 **)(a1 + 40);
    v19 = 16LL * v15;
    v20 = (__int64 *)((char *)v18 + v19);
  }
  v21 = *(_DWORD *)(a2 + 12);
  v22 = 16LL * (v21 & (v15 - 1));
  v23 = &v18[(unsigned __int64)v22 / 8];
  if ( v22 != v19 )
  {
    v24 = &v18[(unsigned __int64)v22 / 8];
    v25 = nullptr;
    while ( 1 )
    {
      v26 = *v24;
      if ( (unsigned __int64)*v24 > 1 )
      {
        if ( *(_DWORD *)(v26 + 12) == v21 && v26 == a2 )
        {
          *v24 = a2;
          v24[1] = v11;
          goto LABEL_34;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v25 )
            goto LABEL_102;
          v25 = v24;
          goto LABEL_103;
        }
        v25 = v24;
      }
      v24 += 2;
      if ( v20 == v24 )
        goto LABEL_19;
    }
  }
  v25 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( v23 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v27 = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
    {
      if ( v27 )
      {
        v25 = v18;
        goto LABEL_18;
      }
      if ( v25 )
LABEL_102:
        --*(_DWORD *)(a1 + 56);
      else
        v25 = v18;
LABEL_103:
      v30 = *(__int64 **)(a1 + 64);
      *v25 = a2;
      v25[1] = v11;
      ++*(_DWORD *)(a1 + 52);
      if ( v30 )
        goto LABEL_35;
LABEL_104:
      v82 = (_QWORD *)sub_186B270(0x18u);
      v30 = v82 + 1;
      *v82 = 2;
      v33 = 1;
      *(_QWORD *)(a1 + 64) = v30;
      v34 = v30;
      goto LABEL_37;
    }
    if ( *(_DWORD *)(v27 + 12) == v21 && v27 == a2 )
      break;
LABEL_18:
    v18 += 2;
  }
  *v18 = a2;
  v18[1] = v11;
LABEL_34:
  v30 = *(__int64 **)(a1 + 64);
  if ( !v30 )
    goto LABEL_104;
LABEL_35:
  v31 = *((_DWORD *)v30 - 1);
  if ( v31 == *((_DWORD *)v30 - 2) )
  {
    v74 = (3 * v31 + 1) >> 1;
    v75 = 8 * v74 + 8;
    if ( 8 * v31 + 8 >= (unsigned int)v75 || v31 >= v74 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v92, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v92);
      sub_233E40((__int64)&v92);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v76 = (unsigned int *)sub_186B300(v30 - 1, v75);
    v77 = v76[1];
    v30 = (__int64 *)(v76 + 2);
    *v76 = v74;
    *(_QWORD *)(a1 + 64) = v76 + 2;
    LODWORD(v76) = v77;
    v34 = &v30[v77];
    v33 = (_DWORD)v76 + 1;
  }
  else
  {
    v32 = v31;
    v33 = v31 + 1;
    v34 = &v30[v32];
  }
LABEL_37:
  v35 = *(_QWORD *)(a1 + 24);
  *v34 = a2;
  *((_DWORD *)v30 - 1) = v33;
  result = *(_QWORD *)(v11 + 16);
  v37 = *(_QWORD *)(v35 + 8);
  *(_QWORD *)(v35 + 392) = v11;
  if ( *(_QWORD *)(result + 56) == *(_QWORD *)(v37 + 936) )
    return result;
  v38 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v35 + 412) || *(_DWORD *)(v35 + 416) )
  {
    v39 = *(_QWORD **)(v35 + 400);
    v40 = 0;
    v41 = &v39[*(unsigned int *)(v35 + 408)];
    v42 = *(_DWORD *)(v35 + 408);
    v43 = v39;
    if ( v39 != v41 )
    {
      do
      {
        while ( *v43 )
        {
          *v43++ = 0;
          if ( v41 == v43 )
            goto LABEL_45;
        }
        ++v43;
        ++v40;
      }
      while ( v41 != v43 );
LABEL_45:
      if ( v42 > 0x10 && 3 * v42 < 4 * v40 )
      {
        if ( v39 )
        {
          sub_186B220(v39);
          v44 = *(_DWORD *)(v35 + 408);
          *(_QWORD *)(v35 + 400) = 0;
          v44 >>= 1;
          *(_DWORD *)(v35 + 408) = v44;
          v45 = v44;
          v46 = (void *)sub_186B270(8LL * v44);
          if ( v44 )
            goto LABEL_49;
        }
        else
        {
          *(_QWORD *)(v35 + 400) = 0;
          v83 = v42 >> 1;
          v45 = v83;
          *(_DWORD *)(v35 + 408) = v83;
          v46 = (void *)sub_186B270(8LL * v83);
LABEL_49:
          v46 = memset(v46, 0, 8 * v45);
        }
        *(_QWORD *)(v35 + 400) = v46;
      }
    }
    *(_QWORD *)(v35 + 412) = 0;
  }
  if ( *(_DWORD *)(v35 + 436) || *(_DWORD *)(v35 + 440) )
  {
    v47 = *(_QWORD **)(v35 + 424);
    v48 = 0;
    v49 = &v47[*(unsigned int *)(v35 + 432)];
    v50 = *(_DWORD *)(v35 + 432);
    v51 = v47;
    if ( v47 != v49 )
    {
      do
      {
        while ( *v51 )
        {
          *v51++ = 0;
          if ( v49 == v51 )
            goto LABEL_59;
        }
        ++v51;
        ++v48;
      }
      while ( v49 != v51 );
LABEL_59:
      if ( v50 > 0x10 && 3 * v50 < 4 * v48 )
      {
        if ( v47 )
        {
          sub_186B220(v47);
          v52 = *(_DWORD *)(v35 + 432);
          *(_QWORD *)(v35 + 424) = 0;
          v52 >>= 1;
          *(_DWORD *)(v35 + 432) = v52;
          v53 = v52;
          v54 = (void *)sub_186B270(8LL * v52);
          if ( v52 )
            goto LABEL_63;
        }
        else
        {
          *(_QWORD *)(v35 + 424) = 0;
          v84 = v50 >> 1;
          v53 = v84;
          *(_DWORD *)(v35 + 432) = v84;
          v54 = (void *)sub_186B270(8LL * v84);
LABEL_63:
          v54 = memset(v54, 0, 8 * v53);
        }
        *(_QWORD *)(v35 + 424) = v54;
      }
    }
    *(_QWORD *)(v35 + 436) = 0;
  }
  result = sub_18290A0(*(_QWORD *)(v35 + 8));
  if ( !(_BYTE)result )
    return result;
  v55 = *(_QWORD *)(v35 + 456);
  if ( v55 )
    *(_DWORD *)(v55 - 4) = 0;
  v56 = *(_QWORD *)(v35 + 448);
  if ( v56 )
    *(_DWORD *)(v56 - 4) = 0;
  if ( (unsigned __int8)sub_15EBF00(*(_QWORD *)(v35 + 8), v38) )
  {
    v57 = 0;
    v58 = sub_15EC030(*(_QWORD *)(v35 + 8), v38);
    if ( v58 )
    {
      do
      {
        v59 = sub_15EC0F0(*(_QWORD *)(v35 + 8), v38, v57);
        sub_15EBE60(*(_QWORD *)(v35 + 8), v59, &v92, &v90);
        if ( *(_WORD *)(v92 + 4) || (*(_BYTE *)(v92 + 30) & 1) == 0 )
          sub_ACFAE0(v35, v92, (unsigned __int8)v90, v60, v61, v62, (_DWORD)v85, v87, v88, v89, v90);
        ++v57;
      }
      while ( v58 != v57 );
    }
  }
  else
  {
    sub_ACF220(v35, v38, 0);
  }
  while ( 2 )
  {
    v63 = *(_QWORD *)(v35 + 448);
    if ( v63 )
    {
LABEL_78:
      if ( *(_DWORD *)(v63 - 4) )
        goto LABEL_79;
    }
LABEL_87:
    result = *(_QWORD *)(v35 + 456);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
      {
LABEL_79:
        sub_AD0060(v35);
        v64 = *(_QWORD *)(v35 + 456);
        if ( v64 )
        {
          while ( 1 )
          {
            v65 = *(_DWORD *)(v64 - 4);
            if ( !v65 )
              break;
            v66 = (unsigned int)(v65 - 1);
            v67 = *(_QWORD *)(v35 + 8);
            v68 = *(_QWORD *)(v64 + 8 * v66);
            *(_DWORD *)(v64 - 4) = v66;
            if ( (unsigned __int8)sub_15D2CB0(v67, v68) )
            {
              sub_ACF220(v35, v68, 0);
              sub_ACF220(v35, v68, 1);
            }
            else
            {
              v73 = *(_WORD *)(v68 + 4);
              if ( v73 )
              {
                if ( v73 == 1 )
                  *(_BYTE *)(*(_QWORD *)(v35 + 392) + 32LL) = 0;
              }
              else
              {
                sub_ACF4A0(v35, v68, v69, v70, v71, v72, (_DWORD)v85, v87, v88, v89, v90, v91, v92);
              }
            }
            v64 = *(_QWORD *)(v35 + 456);
            if ( !v64 )
            {
              v63 = *(_QWORD *)(v35 + 448);
              if ( v63 )
                goto LABEL_78;
              goto LABEL_87;
            }
          }
        }
        continue;
      }
    }
    break;
  }
  *(_QWORD *)(v35 + 392) = 0;
  return result;
}

