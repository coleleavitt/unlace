__int64 __fastcall sub_E20060(__int64 *a1, unsigned int a2, __int64 *a3, int *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  __int64 v8; // r14
  _DWORD *v9; // rbx
  void *v11; // r12
  __int64 result; // rax
  __int64 v13; // r12
  _QWORD *v14; // rcx
  __int64 *v15; // rbx
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // r15
  int *v21; // r9
  int *v22; // rbp
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  void *v25; // r12
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int v30; // ebp
  unsigned int *v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // ebx
  size_t v34; // rdi
  __int64 v35; // rax
  int *v36; // r12
  _DWORD *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rdx
  int *v41; // rax
  int *v42; // rdi
  int v43; // ecx
  char v44; // r10
  __int64 v45; // rcx
  char v46; // r10
  __int64 v47; // rcx
  __int64 v48; // rax
  int *v49; // r15
  int *v50; // rbx
  _DWORD *v51; // r12
  void *v52; // rbp
  int *v53; // rsi
  int *v54; // r12
  int *v55; // rbx
  __int64 v56; // rbp
  __int64 v57; // r13
  void *v58; // r15
  int v59; // eax
  char v60; // al
  int v61; // eax
  __int64 v62; // [rsp+8h] [rbp-A0h]
  int *v63; // [rsp+8h] [rbp-A0h]
  int *v64; // [rsp+10h] [rbp-98h]
  unsigned int v65; // [rsp+10h] [rbp-98h]
  int *v66; // [rsp+10h] [rbp-98h]
  int *v67; // [rsp+10h] [rbp-98h]
  int *v68; // [rsp+18h] [rbp-90h]
  int *v69; // [rsp+18h] [rbp-90h]
  int *v70; // [rsp+20h] [rbp-88h]
  __int64 v71; // [rsp+20h] [rbp-88h]
  __int64 v72; // [rsp+28h] [rbp-80h]
  __int64 v73[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *a1;
  v9 = *(_DWORD **)(*a1 + 72);
  if ( v9 )
  {
    if ( v9[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v9)(v9);
      sub_186B220(v9);
    }
  }
  *(_QWORD *)(v8 + 72) = 0;
  v11 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, v8 + 104);
  result = sub_182CBA0(v11, v8 + 120);
  *(_BYTE *)(v8 + 124) &= ~1u;
  *(_DWORD *)(v8 + 120) = 1;
  if ( a2 )
  {
    v13 = *a3;
    v14 = *(_QWORD **)(v8 + 88);
    v62 = a2;
    v15 = &a3[a2];
    if ( *a3 )
      ++*(_DWORD *)(v13 + 8);
    if ( v14 )
      goto LABEL_12;
    v16 = (_QWORD *)sub_186B270(0x18u);
    v14 = v16 + 1;
    *v16 = 2;
    v17 = 1;
    *(_QWORD *)(v8 + 88) = v14;
    v18 = v14;
    while ( 1 )
    {
      ++a3;
      *v18 = v13;
      *((_DWORD *)v14 - 1) = v17;
      if ( a3 == v15 )
        break;
      while ( 1 )
      {
        v13 = *a3;
        if ( *a3 )
          ++*(_DWORD *)(v13 + 8);
LABEL_12:
        v19 = *((_DWORD *)v14 - 1);
        if ( v19 == *((_DWORD *)v14 - 2) )
          break;
        ++a3;
        v14[v19] = v13;
        *((_DWORD *)v14 - 1) = v19 + 1;
        if ( a3 == v15 )
          goto LABEL_14;
      }
      v28 = (3 * v19 + 1) >> 1;
      v29 = 8 * v28 + 8;
      v30 = v28;
      if ( 8 * v19 + 8 >= (unsigned int)v29 || v19 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v73, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v73);
        sub_233E40((__int64)v73);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v14 - 1, v29);
      v32 = v31[1];
      v14 = v31 + 2;
      *(_QWORD *)(v8 + 88) = v31 + 2;
      *v31 = v30;
      LODWORD(v31) = v32;
      v18 = &v14[v32];
      v17 = (_DWORD)v31 + 1;
    }
LABEL_14:
    v20 = *(_QWORD *)(v8 + 96);
    v21 = a4;
    v63 = &a4[8 * v62];
    if ( v20 )
    {
      v22 = a4;
      goto LABEL_21;
    }
    v22 = a4;
    v23 = (_QWORD *)sub_186B270(0x48u);
    v21 = a4;
    v24 = v23 + 1;
    *v23 = 2;
    *(_QWORD *)(v8 + 96) = v23 + 1;
    while ( 1 )
    {
      *v24 = 0;
      v24[1] = 0;
      v24[2] = 1;
      v25 = qword_1C7F2C0;
      v24[3] = 0;
      if ( (a4[1] & 1) != 0 )
      {
        v67 = v21;
        sub_182C690(v25, v24, a4);
        v21 = v67;
      }
      else
      {
        *(_DWORD *)v24 = *a4;
      }
      if ( (a4[5] & 1) != 0 )
      {
        v66 = v21;
        sub_182C690(v25, v24 + 2, v22 + 4);
        v20 = *(_QWORD *)(v8 + 96);
        v22 += 8;
        v21 = v66;
        ++*(_DWORD *)(v20 - 4);
        if ( v22 == v63 )
        {
          v54 = v63;
          v55 = v66;
          v56 = v8 + 104;
          v57 = v8 + 120;
          v58 = qword_1C7F2C0;
          v59 = *v66;
          if ( !*v66 )
            goto LABEL_39;
          if ( *(_DWORD *)(v8 + 104) )
            goto LABEL_47;
          goto LABEL_53;
        }
        goto LABEL_20;
      }
      v26 = a4[4];
      *((_BYTE *)v24 + 20) &= ~1u;
      v22 += 8;
      *((_DWORD *)v24 + 4) = v26;
      v20 = *(_QWORD *)(v8 + 96);
      ++*(_DWORD *)(v20 - 4);
      if ( v63 == v22 )
        break;
LABEL_20:
      a4 = v22;
LABEL_21:
      v27 = *(unsigned int *)(v20 - 4);
      if ( (_DWORD)v27 == *(_DWORD *)(v20 - 8) )
      {
        v33 = (unsigned int)(3 * v27 + 1) >> 1;
        v34 = 32 * v33 + 8;
        if ( 32 * (int)v27 + 8 >= (unsigned int)v34 || (unsigned int)v27 >= v33 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = v21;
        v35 = sub_186B270(v34);
        v36 = *(int **)(v8 + 96);
        v21 = v64;
        v37 = (_DWORD *)v35;
        v38 = v35 + 8;
        if ( v36 )
        {
          v39 = (unsigned int)*(v36 - 1);
          v40 = v35 + 8;
          *(_DWORD *)(v35 + 4) = v39;
          v41 = v36;
          v42 = &v36[8 * v39];
          if ( v36 != v42 )
          {
            do
            {
              v43 = *v41;
              v44 = *((_BYTE *)v41 + 4);
              v41 += 8;
              v40 += 32;
              *(_DWORD *)(v40 - 32) = v43;
              *(_BYTE *)(v40 - 28) = v44 & 3 | *(_BYTE *)(v40 - 28) & 0xFC;
              v45 = *((_QWORD *)v41 - 3);
              *((_QWORD *)v41 - 3) = 0;
              *(_QWORD *)(v40 - 24) = v45;
              v46 = *((_BYTE *)v41 - 12);
              *(_DWORD *)(v40 - 16) = *(v41 - 4);
              *(_BYTE *)(v40 - 12) = v46 & 3 | *(_BYTE *)(v40 - 12) & 0xFC;
              v47 = *((_QWORD *)v41 - 1);
              *((_QWORD *)v41 - 1) = 0;
              *(_QWORD *)(v40 - 8) = v47;
            }
            while ( v42 != v41 );
          }
          v48 = (unsigned int)*(v36 - 1);
          v49 = &v36[8 * v48];
          if ( (_DWORD)v48 )
          {
            v68 = v22;
            v70 = v64;
            v72 = v38;
            v65 = v33;
            v50 = v36;
            v51 = v37;
            do
            {
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v50);
              v53 = v50 + 4;
              v50 += 8;
              sub_182CBA0(v52, v53);
            }
            while ( v50 != v49 );
            v37 = v51;
            v33 = v65;
            v22 = v68;
            v21 = v70;
            v38 = v72;
            v36 = *(int **)(v8 + 96);
          }
          v71 = v38;
          v69 = v21;
          sub_186B220(v36 - 2);
          v38 = v71;
          v21 = v69;
          v24 = (_QWORD *)(v71 + 32LL * (unsigned int)v37[1]);
        }
        else
        {
          *(_DWORD *)(v35 + 4) = 0;
          v24 = (_QWORD *)(v35 + 8);
        }
        *(_QWORD *)(v8 + 96) = v38;
        *v37 = v33;
      }
      else
      {
        v24 = (_QWORD *)(32 * v27 + v20);
      }
    }
    v56 = v8 + 104;
    v57 = v8 + 120;
    v55 = v21;
    v54 = v63;
    while ( 1 )
    {
      v58 = qword_1C7F2C0;
      v59 = *v55;
      if ( *v55 )
        break;
LABEL_39:
      v60 = *(_BYTE *)(v8 + 108);
      if ( (v60 & 1) != 0 )
        sub_182C690(v58, v56, v56);
      else
        *(_BYTE *)(v8 + 108) = v60 & 0xFE;
      v61 = *(unsigned __int8 *)(v8 + 124);
      if ( (v61 & 1) != 0 )
      {
        result = sub_182C690(v58, v57, v57);
LABEL_50:
        v55 += 8;
        if ( v54 == v55 )
          return result;
      }
      else
      {
        result = v61 & 0xFFFFFFFE;
        v55 += 8;
        *(_BYTE *)(v8 + 124) = result;
        if ( v54 == v55 )
          return result;
      }
    }
    if ( *(_DWORD *)(v8 + 104) )
    {
LABEL_47:
      if ( (*(_BYTE *)(v8 + 124) & 1) != 0 || *(_DWORD *)(v8 + 120) != 1 || (v55[5] & 1) != 0 || v55[4] != 1 )
      {
        result = sub_1851D20(v58, v56, v55, v56);
      }
      else
      {
        sub_1831A80(v58, v56, v55, v56);
        result = sub_182CBA0(v58, v57);
        *(_BYTE *)(v8 + 124) &= ~1u;
        *(_DWORD *)(v8 + 120) = 1;
      }
    }
    else
    {
LABEL_53:
      if ( (v55[1] & 1) != 0 )
      {
        sub_182C690(v58, v56, v55);
      }
      else
      {
        *(_BYTE *)(v8 + 108) &= ~1u;
        *(_DWORD *)(v8 + 104) = v59;
      }
      if ( (v55[5] & 1) != 0 )
      {
        result = sub_182C690(v58, v57, v55 + 4);
      }
      else
      {
        result = (unsigned int)v55[4];
        *(_BYTE *)(v8 + 124) &= ~1u;
        *(_DWORD *)(v8 + 120) = result;
      }
    }
    goto LABEL_50;
  }
  return result;
}

