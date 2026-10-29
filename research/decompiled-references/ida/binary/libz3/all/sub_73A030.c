__int64 __fastcall sub_73A030(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  bool v8; // zf
  _DWORD *v9; // rax
  __int64 v10; // r15
  char *v11; // rax
  char *v12; // rax
  _OWORD *v13; // rax
  char *v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // edx
  unsigned int v30; // ebx
  unsigned int v32; // r13d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  unsigned int v42; // r12d
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  char **exception; // r13
  char **v48; // r13
  char i; // [rsp+7h] [rbp-D1h]
  __int64 v50; // [rsp+8h] [rbp-D0h]
  int v51[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v52; // [rsp+18h] [rbp-C0h]
  __int64 v53; // [rsp+20h] [rbp-B8h]
  int v54; // [rsp+28h] [rbp-B0h]
  void *v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+38h] [rbp-A0h]
  int v57; // [rsp+40h] [rbp-98h]
  void *ptr; // [rsp+48h] [rbp-90h]
  __int64 v59; // [rsp+50h] [rbp-88h]
  int v60; // [rsp+58h] [rbp-80h]
  void *v61; // [rsp+60h] [rbp-78h]
  __int64 v62; // [rsp+68h] [rbp-70h]
  int v63; // [rsp+70h] [rbp-68h]
  _BYTE v64[96]; // [rsp+78h] [rbp-60h] BYREF

  v2 = a2;
  v50 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    v4 = a1[62];
    v5 = a1[18];
    v6 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v7 = a1[63];
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v7, v4);
    }
    a1[62] = 0;
    v9 = *(_DWORD **)(v6 + 24);
    if ( !v9 || *v9 )
      goto LABEL_22;
    *(_QWORD *)v51 = *(_QWORD *)v5;
    v10 = *(_QWORD *)v51;
    v11 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v11 = 0;
    *((_QWORD *)v11 + 28) = 1;
    *((_QWORD *)v11 + 1) = 0;
    *((_QWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 3) = 1;
    *((_QWORD *)v11 + 4) = 0;
    *((_QWORD *)v11 + 5) = 0;
    *((_QWORD *)v11 + 6) = 0;
    *((_QWORD *)v11 + 7) = 0;
    *((_QWORD *)v11 + 8) = 1;
    *((_QWORD *)v11 + 9) = 0;
    *((_QWORD *)v11 + 10) = 0;
    *((_QWORD *)v11 + 11) = 0;
    *((_QWORD *)v11 + 12) = 0;
    *((_QWORD *)v11 + 13) = 1;
    *((_QWORD *)v11 + 14) = 0;
    *((_QWORD *)v11 + 15) = 0;
    *((_QWORD *)v11 + 16) = 0;
    *((_QWORD *)v11 + 17) = 0;
    *((_QWORD *)v11 + 18) = 1;
    *((_QWORD *)v11 + 19) = 0;
    *((_QWORD *)v11 + 20) = 0;
    *((_QWORD *)v11 + 21) = 0;
    *((_QWORD *)v11 + 22) = 0;
    *((_QWORD *)v11 + 23) = 1;
    *((_QWORD *)v11 + 24) = 0;
    *((_QWORD *)v11 + 25) = 0;
    *((_QWORD *)v11 + 26) = 0;
    *((_QWORD *)v11 + 27) = 0;
    v11[228] = 0;
    *((_QWORD *)v11 + 31) = 0;
    *(_OWORD *)(v11 + 232) = 0;
    *((_QWORD *)v11 + 32) = 0;
    *((_QWORD *)v11 + 33) = 1;
    *((_QWORD *)v11 + 34) = 0;
    *((_QWORD *)v11 + 35) = 0;
    *((_QWORD *)v11 + 36) = 0;
    *((_QWORD *)v11 + 37) = 0;
    *((_QWORD *)v11 + 38) = 1;
    *((_QWORD *)v11 + 39) = 0;
    v52 = v11;
    v53 = 8;
    v54 = 0;
    v12 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v12 = 0;
    *((_QWORD *)v12 + 28) = 1;
    *((_QWORD *)v12 + 1) = 0;
    *((_QWORD *)v12 + 2) = 0;
    *((_QWORD *)v12 + 3) = 1;
    *((_QWORD *)v12 + 4) = 0;
    *((_QWORD *)v12 + 5) = 0;
    *((_QWORD *)v12 + 6) = 0;
    *((_QWORD *)v12 + 7) = 0;
    *((_QWORD *)v12 + 8) = 1;
    *((_QWORD *)v12 + 9) = 0;
    *((_QWORD *)v12 + 10) = 0;
    *((_QWORD *)v12 + 11) = 0;
    *((_QWORD *)v12 + 12) = 0;
    *((_QWORD *)v12 + 13) = 1;
    *((_QWORD *)v12 + 14) = 0;
    *((_QWORD *)v12 + 15) = 0;
    *((_QWORD *)v12 + 16) = 0;
    *((_QWORD *)v12 + 17) = 0;
    *((_QWORD *)v12 + 18) = 1;
    *((_QWORD *)v12 + 19) = 0;
    *((_QWORD *)v12 + 20) = 0;
    *((_QWORD *)v12 + 21) = 0;
    *((_QWORD *)v12 + 22) = 0;
    *((_QWORD *)v12 + 23) = 1;
    *((_QWORD *)v12 + 24) = 0;
    *((_QWORD *)v12 + 25) = 0;
    *((_QWORD *)v12 + 26) = 0;
    *((_QWORD *)v12 + 27) = 0;
    v12[228] = 0;
    *((_QWORD *)v12 + 31) = 0;
    *(_OWORD *)(v12 + 232) = 0;
    *((_QWORD *)v12 + 32) = 0;
    *((_QWORD *)v12 + 33) = 1;
    *((_QWORD *)v12 + 34) = 0;
    *((_QWORD *)v12 + 35) = 0;
    *((_QWORD *)v12 + 36) = 0;
    *((_QWORD *)v12 + 37) = 0;
    *((_QWORD *)v12 + 38) = 1;
    *((_QWORD *)v12 + 39) = 0;
    v55 = v12;
    v56 = 8;
    v57 = 0;
    v13 = (_OWORD *)sub_186B270(0x80u);
    ptr = v13;
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    v13[6] = 0;
    v13[7] = 0;
    v59 = 8;
    v60 = 0;
    v14 = (char *)sub_186B270(0x140u);
    *(_QWORD *)v14 = 0;
    *((_QWORD *)v14 + 28) = 1;
    *((_QWORD *)v14 + 1) = 0;
    *((_QWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 3) = 1;
    *((_QWORD *)v14 + 4) = 0;
    *((_QWORD *)v14 + 5) = 0;
    *((_QWORD *)v14 + 6) = 0;
    *((_QWORD *)v14 + 7) = 0;
    *((_QWORD *)v14 + 8) = 1;
    *((_QWORD *)v14 + 9) = 0;
    *((_QWORD *)v14 + 10) = 0;
    *((_QWORD *)v14 + 11) = 0;
    *((_QWORD *)v14 + 12) = 0;
    *((_QWORD *)v14 + 13) = 1;
    *((_QWORD *)v14 + 14) = 0;
    *((_QWORD *)v14 + 15) = 0;
    *((_QWORD *)v14 + 16) = 0;
    *((_QWORD *)v14 + 17) = 0;
    *((_QWORD *)v14 + 18) = 1;
    *((_QWORD *)v14 + 19) = 0;
    *((_QWORD *)v14 + 20) = 0;
    *((_QWORD *)v14 + 21) = 0;
    *((_QWORD *)v14 + 22) = 0;
    *((_QWORD *)v14 + 23) = 1;
    *((_QWORD *)v14 + 24) = 0;
    *((_QWORD *)v14 + 25) = 0;
    *((_QWORD *)v14 + 26) = 0;
    *((_QWORD *)v14 + 27) = 0;
    v14[228] = 0;
    *((_QWORD *)v14 + 31) = 0;
    *(_OWORD *)(v14 + 232) = 0;
    *((_QWORD *)v14 + 32) = 0;
    *((_QWORD *)v14 + 33) = 1;
    *((_QWORD *)v14 + 34) = 0;
    *((_QWORD *)v14 + 35) = 0;
    *((_QWORD *)v14 + 36) = 0;
    *((_QWORD *)v14 + 37) = 0;
    *((_QWORD *)v14 + 38) = 1;
    *((_QWORD *)v14 + 39) = 0;
    v61 = v14;
    v62 = 8;
    v63 = 0;
    sub_16744A0(v64, v10);
    v15 = *(unsigned int *)(v5 + 8);
    v64[24] = 1;
    v16 = sub_14AE330((int)v51);
    if ( v16 == 5 )
    {
      sub_149FE90(v51, v15);
LABEL_22:
      ++*(_DWORD *)(v2 + 8);
      if ( !i )
      {
        v36 = (_QWORD *)a1[7];
        if ( v36 )
        {
          v37 = *((_DWORD *)v36 - 1);
          if ( v37 == *((_DWORD *)v36 - 2) )
          {
            v42 = (3 * v37 + 1) >> 1;
            v43 = 8 * v42 + 8;
            if ( 8 * v37 + 8 >= v43 || v37 >= v42 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v51, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v51);
              sub_233E40((__int64)v51);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v44 = (unsigned int *)sub_186B300(v36 - 1, v43);
            v45 = v44[1];
            v36 = v44 + 2;
            *v44 = v42;
            a1[7] = v44 + 2;
            LODWORD(v44) = v45;
            v40 = &v36[v45];
            v39 = (_DWORD)v44 + 1;
          }
          else
          {
            v38 = v37;
            v39 = v37 + 1;
            v40 = &v36[v38];
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          *v46 = 2;
          v39 = 1;
          v36 = v46 + 1;
          a1[7] = v36;
          v40 = v36;
        }
        *v40 = v2;
        *((_DWORD *)v36 - 1) = v39;
        goto LABEL_37;
      }
      v19 = a1[60];
      if ( v19 && (v20 = a1[61], v8 = *(_DWORD *)(v19 + 8) == 1, --*(_DWORD *)(v19 + 8), v8) )
      {
        sub_15D7BC0(v20, v19);
        a1[60] = v2;
        v18 = v2;
LABEL_26:
        if ( !v18 )
          goto LABEL_28;
      }
      else
      {
        a1[60] = v2;
        v18 = v2;
      }
      ++*(_DWORD *)(v18 + 8);
LABEL_28:
      v21 = (_QWORD *)a1[7];
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v32 = (3 * v22 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v33 || v22 >= v32 )
          {
            v48 = (char **)__cxa_allocate_exception(0x28u);
            sub_737700((__int64 *)v51, "Overflow encountered when expanding vector");
            *v48 = (char *)off_1C63128;
            sub_2333C0(v48 + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(v48, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v34 = (unsigned int *)sub_186B300(v21 - 1, v33);
          v35 = v34[1];
          v21 = v34 + 2;
          *v34 = v32;
          a1[7] = v34 + 2;
          LODWORD(v34) = v35;
          v25 = &v21[v35];
          v24 = (_DWORD)v34 + 1;
        }
        else
        {
          v23 = v22;
          v24 = v22 + 1;
          v25 = &v21[v23];
        }
      }
      else
      {
        v41 = (_QWORD *)sub_186B270(0x18u);
        v21 = v41 + 1;
        *v41 = 2;
        v24 = 1;
        a1[7] = v21;
        v25 = v21;
      }
      *v25 = v18;
      v26 = a1[60];
      *((_DWORD *)v21 - 1) = v24;
      if ( v26 )
      {
        v27 = a1[61];
        v8 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v27, v26);
      }
      a1[60] = 0;
      v28 = a1[5];
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 - 4);
        if ( v29 )
          *(_BYTE *)(v28 + 16LL * (unsigned int)(v29 - 1) + 8) |= 2u;
      }
LABEL_37:
      v30 = 1;
      goto LABEL_38;
    }
    v17 = a1[60];
    if ( v17 == *(_QWORD *)(*(_QWORD *)v5 + 864LL) || v17 == *(_QWORD *)(*(_QWORD *)v5 + 856LL) )
    {
      ++**(_DWORD **)(v5 + 248);
    }
    else if ( HIDWORD(v62) )
    {
      ++*(_DWORD *)(*(_QWORD *)(v5 + 248) + 4LL);
    }
    sub_149FE90(v51, v15);
    v18 = a1[60];
    if ( v16 == 4 )
      goto LABEL_26;
    if ( *(_WORD *)(v18 + 4) || *(_DWORD *)(v18 + 24) )
      break;
    ++*(_DWORD *)(v18 + 8);
    v8 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v50, v2);
    v2 = v18;
  }
  v30 = 0;
LABEL_38:
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v8 )
    sub_15D7BC0(v50, v2);
  return v30;
}

