__int64 __fastcall sub_A1F780(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  unsigned int v7; // r15d
  int v8; // edx
  void *v9; // rdi
  unsigned int v10; // r8d
  unsigned int *v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rax
  void *v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 result; // rax
  unsigned int v21; // r14d
  void *v22; // rbx
  _QWORD *v23; // rax
  unsigned int v24; // r14d
  int v25; // edx
  void *v26; // rdi
  unsigned int v27; // r8d
  unsigned int **v28; // rcx
  unsigned int *v29; // rdx
  __int64 v30; // rax
  unsigned int *v31; // rax
  void *v32; // rbx
  __int64 v33; // rax
  void *v34; // rdi
  unsigned int v35; // r9d
  size_t v36; // rsi
  unsigned int *v37; // rax
  unsigned int v38; // ebx
  __int64 v39; // r15
  void *v40; // r14
  _QWORD *v41; // rax
  char **exception; // rbp
  unsigned int v44; // [rsp+10h] [rbp-98h]
  unsigned int **v45; // [rsp+10h] [rbp-98h]
  unsigned int **v46; // [rsp+10h] [rbp-98h]
  unsigned int v47; // [rsp+18h] [rbp-90h]
  unsigned int **v48; // [rsp+18h] [rbp-90h]
  unsigned int v49; // [rsp+18h] [rbp-90h]
  unsigned int v50; // [rsp+18h] [rbp-90h]
  void *v51; // [rsp+20h] [rbp-88h]
  void *v52; // [rsp+20h] [rbp-88h]
  __int64 v53; // [rsp+20h] [rbp-88h]
  unsigned int v54; // [rsp+20h] [rbp-88h]
  void *v55; // [rsp+20h] [rbp-88h]
  void *v56; // [rsp+20h] [rbp-88h]
  void *v57; // [rsp+20h] [rbp-88h]
  __int64 v58; // [rsp+20h] [rbp-88h]
  unsigned int v59; // [rsp+20h] [rbp-88h]
  void *v60; // [rsp+20h] [rbp-88h]
  __int64 v61; // [rsp+28h] [rbp-80h]
  _QWORD *v62; // [rsp+28h] [rbp-80h]
  __int64 v63; // [rsp+28h] [rbp-80h]
  int v64; // [rsp+30h] [rbp-78h] BYREF
  char v65; // [rsp+34h] [rbp-74h]
  __int64 v66; // [rsp+38h] [rbp-70h]
  int v67; // [rsp+40h] [rbp-68h] BYREF
  char v68; // [rsp+44h] [rbp-64h]
  __int64 v69; // [rsp+48h] [rbp-60h]
  __int64 v70; // [rsp+50h] [rbp-58h] BYREF
  __int64 v71; // [rsp+58h] [rbp-50h]
  __int64 v72; // [rsp+60h] [rbp-48h] BYREF
  __int64 v73; // [rsp+68h] [rbp-40h]

  v6 = a1[15];
  if ( !v6 )
  {
    result = a1[16];
    if ( !result )
      return result;
    if ( !a4 )
      goto LABEL_27;
    goto LABEL_59;
  }
  if ( a4 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= *(_DWORD *)(v6 - 4) )
      {
LABEL_58:
        result = a1[16];
        if ( !result )
          return result;
LABEL_59:
        v38 = 0;
        do
        {
          if ( v38 >= *(_DWORD *)(result - 4) )
            break;
          sub_3EBE30((__int64)&v70, a3, a1[18] + 32LL * v38);
          v39 = *(_QWORD *)(a2 + 8);
          sub_98CA20((__m128i **)(v39 + 8), (const __m128i *)(a1[16] + 16LL * v38));
          sub_98D840((__int64 *)(v39 + 24), (__int64)&v70);
          ++v38;
          v40 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v70);
          sub_182CBA0(v40, &v72);
          result = a1[16];
        }
        while ( result );
        return result;
      }
      v70 = 0;
      v33 = a1[17] + 32LL * v24;
      v71 = 0;
      v34 = qword_1C7F2C0;
      v72 = 1;
      v73 = 0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
      {
        v63 = v33;
        v57 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v70, a3);
        v33 = v63;
        v34 = v57;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        {
LABEL_37:
          v25 = *(_DWORD *)(a3 + 16);
          BYTE4(v72) &= ~1u;
          LODWORD(v72) = v25;
          goto LABEL_38;
        }
      }
      else
      {
        LODWORD(v70) = *(_DWORD *)a3;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
          goto LABEL_37;
      }
      v58 = v33;
      sub_182C690(v34, &v72, a3 + 16);
      v33 = v58;
LABEL_38:
      if ( (v72 & 0x100000000LL) != 0
        || (_DWORD)v72 != 1
        || (*(_BYTE *)(v33 + 20) & 1) != 0
        || *(_DWORD *)(v33 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v70, v33);
      }
      else
      {
        v60 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v70, v33);
        sub_182CBA0(v60, &v72);
        BYTE4(v72) &= ~1u;
        LODWORD(v72) = 1;
      }
      v65 &= 0xFCu;
      v26 = qword_1C7F2C0;
      v68 &= 0xFCu;
      v64 = 0;
      v66 = 0;
      v67 = 1;
      v69 = 0;
      if ( (v70 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v64, &v70);
      else
        v64 = v70;
      if ( (v72 & 0x100000000LL) != 0 )
      {
        sub_182C690(v26, &v67, &v72);
      }
      else
      {
        v68 &= ~1u;
        v67 = v72;
      }
      v56 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v70);
      sub_182CBA0(v56, &v72);
      v27 = *(_DWORD *)(a1[15] + 4LL * v24);
      v28 = *(unsigned int ***)(a2 + 8);
      v29 = *v28;
      if ( *v28 )
      {
        v30 = *(v29 - 1);
        if ( (_DWORD)v30 == *(v29 - 2) )
        {
          v35 = (unsigned int)(3 * v30 + 1) >> 1;
          v36 = 4 * v35 + 8;
          if ( 4 * (int)v30 + 8 >= (unsigned int)v36 || (unsigned int)v30 >= v35 )
          {
LABEL_70:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(&v70, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v70);
            sub_233E40((__int64)&v70);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v59 = *(_DWORD *)(a1[15] + 4LL * v24);
          v49 = (unsigned int)(3 * v30 + 1) >> 1;
          v45 = *(unsigned int ***)(a2 + 8);
          v37 = (unsigned int *)sub_186B300(v29 - 2, v36);
          v28 = v45;
          v29 = v37 + 2;
          v27 = v59;
          *v45 = v37 + 2;
          *v37 = v49;
          v31 = &v37[v37[1] + 2];
        }
        else
        {
          v31 = &v29[v30];
        }
      }
      else
      {
        v50 = *(_DWORD *)(a1[15] + 4LL * v24);
        v46 = *(unsigned int ***)(a2 + 8);
        v41 = (_QWORD *)sub_186B270(0x10u);
        v28 = v46;
        v29 = (unsigned int *)(v41 + 1);
        v27 = v50;
        *v41 = 2;
        v31 = v29;
        *v46 = v29;
      }
      *v31 = v27;
      ++*(v29 - 1);
      sub_98D840((__int64 *)v28 + 2, (__int64)&v64);
      v32 = qword_1C7F2C0;
      ++v24;
      sub_182CBA0(qword_1C7F2C0, &v64);
      sub_182CBA0(v32, &v67);
      v6 = a1[15];
      if ( !v6 )
        goto LABEL_58;
    }
  }
  v7 = 0;
  while ( v7 < *(_DWORD *)(v6 - 4) )
  {
    v70 = 0;
    v15 = a1[17] + 32LL * v7;
    v71 = 0;
    v16 = qword_1C7F2C0;
    v72 = 1;
    v73 = 0;
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      v61 = v15;
      v52 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v70, a3);
      v16 = v52;
      v15 = v61;
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
      {
LABEL_20:
        v53 = v15;
        sub_182C690(v16, &v72, a3 + 16);
        v15 = v53;
        goto LABEL_6;
      }
    }
    else
    {
      LODWORD(v70) = *(_DWORD *)a3;
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
        goto LABEL_20;
    }
    v8 = *(_DWORD *)(a3 + 16);
    BYTE4(v72) &= ~1u;
    LODWORD(v72) = v8;
LABEL_6:
    if ( (v72 & 0x100000000LL) != 0 || (_DWORD)v72 != 1 || (*(_BYTE *)(v15 + 20) & 1) != 0 || *(_DWORD *)(v15 + 16) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v70, v15);
    }
    else
    {
      v55 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v70, v15);
      sub_182CBA0(v55, &v72);
      BYTE4(v72) &= ~1u;
      LODWORD(v72) = 1;
    }
    v65 &= 0xFCu;
    v9 = qword_1C7F2C0;
    v68 &= 0xFCu;
    v64 = 0;
    v66 = 0;
    v67 = 1;
    v69 = 0;
    if ( (v70 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v64, &v70);
    else
      v64 = v70;
    if ( (v72 & 0x100000000LL) != 0 )
    {
      sub_182C690(v9, &v67, &v72);
    }
    else
    {
      v68 &= ~1u;
      v67 = v72;
    }
    v51 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v70);
    sub_182CBA0(v51, &v72);
    v10 = *(_DWORD *)(a1[15] + 4LL * v7);
    v11 = **(unsigned int ***)(a2 + 8);
    if ( v11 )
    {
      v12 = *(v11 - 1);
      if ( (_DWORD)v12 == *(v11 - 2) )
      {
        v62 = *(_QWORD **)(a2 + 8);
        v17 = (unsigned int)(3 * v12 + 1) >> 1;
        v54 = *(_DWORD *)(a1[15] + 4LL * v7);
        v18 = 4 * v17 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v18 )
          goto LABEL_70;
        v47 = (unsigned int)(3 * v12 + 1) >> 1;
        if ( (unsigned int)v12 >= v17 )
          goto LABEL_70;
        v19 = (unsigned int *)sub_186B300(v11 - 2, v18);
        v11 = v19 + 2;
        v10 = v54;
        *v62 = v19 + 2;
        *v19 = v47;
        v13 = &v19[v19[1] + 2];
      }
      else
      {
        v13 = &v11[v12];
      }
    }
    else
    {
      v48 = *(unsigned int ***)(a2 + 8);
      v44 = *(_DWORD *)(a1[15] + 4LL * v7);
      v23 = (_QWORD *)sub_186B270(0x10u);
      v11 = (unsigned int *)(v23 + 1);
      v10 = v44;
      *v23 = 2;
      v13 = v11;
      *v48 = v11;
    }
    *v13 = v10;
    v14 = qword_1C7F2C0;
    ++v7;
    ++*(v11 - 1);
    sub_182CBA0(v14, &v64);
    sub_182CBA0(v14, &v67);
    v6 = a1[15];
    if ( !v6 )
      break;
  }
  result = a1[16];
  if ( result )
  {
LABEL_27:
    v21 = 0;
    do
    {
      if ( v21 >= *(_DWORD *)(result - 4) )
        break;
      sub_3EBE30((__int64)&v70, a3, a1[18] + 32LL * v21);
      sub_98CA20((__m128i **)(*(_QWORD *)(a2 + 8) + 8LL), (const __m128i *)(16LL * v21++ + a1[16]));
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v70);
      sub_182CBA0(v22, &v72);
      result = a1[16];
    }
    while ( result );
  }
  return result;
}

