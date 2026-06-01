__int64 __fastcall sub_504830(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  char **exception; // rbp
  _DWORD *v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 result; // rax
  _DWORD *v12; // r13
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rbx
  _DWORD *v16; // r12
  int v17; // ecx
  int v18; // r14d
  int v19; // ecx
  bool v20; // r15
  bool v21; // r12
  _DWORD *v22; // rdi
  __int64 v23; // r14
  unsigned int v24; // eax
  _QWORD *v25; // rbp
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  __int64 v28; // r15
  _DWORD *v29; // rdx
  __int64 v30; // rbx
  _DWORD *v31; // rdi
  unsigned int v32; // r13d
  unsigned int v33; // r12d
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int v36; // ebx
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // rdi
  _DWORD *v44; // rbx
  _DWORD *v45; // rdx
  __int64 v46; // r13
  _DWORD *v47; // rdi
  unsigned int v48; // r15d
  _QWORD *v49; // rbx
  unsigned int v50; // edx
  size_t v51; // rsi
  unsigned int v52; // ebp
  unsigned int *v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  _DWORD *v57; // rdi
  __int64 v58; // rsi
  int v59; // ecx
  __int64 v60; // rsi
  int v61; // edx
  bool v62; // [rsp+8h] [rbp-A0h]
  _QWORD *v63; // [rsp+8h] [rbp-A0h]
  bool v64; // [rsp+10h] [rbp-98h]
  _DWORD *v65; // [rsp+10h] [rbp-98h]
  unsigned int v66; // [rsp+18h] [rbp-90h]
  unsigned int v67; // [rsp+18h] [rbp-90h]
  __int64 v68; // [rsp+18h] [rbp-90h]
  __int64 v69; // [rsp+18h] [rbp-90h]
  char v70; // [rsp+20h] [rbp-88h]
  _QWORD *v71; // [rsp+20h] [rbp-88h]
  __int64 v72; // [rsp+20h] [rbp-88h]
  _QWORD *v73; // [rsp+20h] [rbp-88h]
  __int64 v74; // [rsp+28h] [rbp-80h]
  _DWORD *v75; // [rsp+28h] [rbp-80h]
  unsigned int v76; // [rsp+30h] [rbp-78h]
  unsigned int v77; // [rsp+30h] [rbp-78h]
  unsigned int v78; // [rsp+34h] [rbp-74h]
  _DWORD *v79; // [rsp+38h] [rbp-70h]
  __int64 v80[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a4;
  v7 = a1;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  v10 = a4[a3 - 1];
  do
  {
    result = v10;
    v10 = *(_DWORD *)(v9 + 4LL * v10);
  }
  while ( (_DWORD)result != v10 );
  v12 = (_DWORD *)*a2;
  v13 = a2[1];
  v14 = v10 >> 5;
  if ( *v8 && v14 < *(v12 - 1) )
  {
    v15 = v14;
    v16 = &v12[v14];
    v17 = 1 << v10;
    v18 = ~v17;
    v19 = *v16 & v17;
    v20 = v19 != 0;
    *v16 &= v18;
    if ( !v13 || v14 >= *(_DWORD *)(v13 - 4) )
    {
      v21 = 0;
      if ( a3 <= 1 )
      {
        if ( !v19 )
          return result;
        goto LABEL_50;
      }
      goto LABEL_14;
    }
  }
  else
  {
    if ( !v13 || v14 >= *(_DWORD *)(v13 - 4) )
    {
      v21 = 0;
      v20 = 0;
      if ( a3 <= 1 )
        return result;
      goto LABEL_14;
    }
    v20 = 0;
    v15 = v14;
  }
  v22 = (_DWORD *)(v13 + 4 * v15);
  v21 = (*v22 & (1 << result)) != 0;
  result = *v22 & (unsigned int)~(1 << result);
  *v22 = result;
  if ( a3 > 1 )
  {
LABEL_14:
    v62 = v20;
    v23 = 1;
    v64 = v21;
    while ( 1 )
    {
      v24 = v6[v23 - 1];
      do
      {
        LODWORD(v25) = v24;
        v24 = *(_DWORD *)(v9 + 4LL * v24);
      }
      while ( (_DWORD)v25 != v24 );
      v26 = v6[v23];
      do
      {
        result = v26;
        v26 = *(_DWORD *)(v9 + 4LL * v26);
        v27 = result;
      }
      while ( (_DWORD)result != v26 );
      v28 = (unsigned int)v25 >> 5;
      if ( v12 )
      {
        if ( (unsigned int)v28 < *(v12 - 1) )
        {
          v29 = &v12[(unsigned int)v28];
          result = (unsigned int)(1 << (char)v25);
          if ( (*v29 & (unsigned int)result) != 0 )
          {
            v30 = v26 >> 5;
            *v29 &= ~(_DWORD)result;
            if ( (unsigned int)v30 >= *(v12 - 1) )
            {
              v66 = v27;
              v31 = v12;
              v32 = *(v12 - 1);
              v70 = (char)v25;
              v33 = v30 + 1;
              v25 = v8;
              v76 = v30;
              v74 = v7;
              v78 = a3;
              v79 = v6;
              while ( 1 )
              {
                v38 = *(v31 - 2);
                if ( v38 >= v33 )
                  break;
                v34 = (3 * v38 + 1) >> 1;
                v35 = 4 * v34 + 8;
                v36 = v34;
                if ( 4 * v38 + 8 >= (unsigned int)v35 || v38 >= v34 )
                {
LABEL_57:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v80, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v80);
                  sub_233E40((__int64)v80);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v37 = (unsigned int *)sub_186B300(v31 - 2, v35);
                v31 = v37 + 2;
                *v37 = v36;
                *v25 = v37 + 2;
              }
              v39 = v33;
              v40 = v32;
              v8 = v25;
              v12 = v31;
              v41 = 4 * v40;
              v30 = v76;
              v27 = v66;
              *(v31 - 1) = v39;
              v42 = 4 * v39;
              v7 = v74;
              LOBYTE(v25) = v70;
              v43 = &v31[(unsigned __int64)v41 / 4];
              a3 = v78;
              v6 = v79;
              if ( v41 != v42 )
              {
                v71 = v8;
                memset(v43, 0, v42 - v41);
                v6 = v79;
                a3 = v78;
                v8 = v71;
                v7 = v74;
              }
            }
            result = (unsigned int)(1 << v27);
            v12[v30] |= result;
          }
        }
      }
      v44 = (_DWORD *)v8[1];
      if ( v44 )
      {
        if ( (unsigned int)v28 < *(v44 - 1) )
        {
          v45 = &v44[v28];
          result = (unsigned int)(1 << (char)v25);
          if ( (*v45 & (unsigned int)result) != 0 )
          {
            v46 = v27 >> 5;
            *v45 &= ~(_DWORD)result;
            if ( (unsigned int)v46 >= *(v44 - 1) )
            {
              v47 = v44;
              v67 = *(v44 - 1);
              v48 = v46 + 1;
              v49 = v8;
              v72 = v7;
              v77 = a3;
              v75 = v6;
              while ( 1 )
              {
                v54 = *(v47 - 2);
                if ( v54 >= v48 )
                  break;
                v50 = (3 * v54 + 1) >> 1;
                v51 = 4 * v50 + 8;
                v52 = v50;
                if ( 4 * v54 + 8 >= (unsigned int)v51 || v54 >= v50 )
                  goto LABEL_57;
                v53 = (unsigned int *)sub_186B300(v47 - 2, v51);
                v47 = v53 + 2;
                *v53 = v52;
                v49[1] = v53 + 2;
              }
              *(v47 - 1) = v48;
              v8 = v49;
              v55 = 4LL * v48;
              v44 = v47;
              v7 = v72;
              a3 = v77;
              v56 = 4LL * v67;
              v6 = v75;
              v57 = &v47[(unsigned __int64)v56 / 4];
              if ( v56 != v55 )
              {
                v73 = v8;
                v68 = v7;
                memset(v57, 0, v55 - v56);
                v6 = v75;
                a3 = v77;
                v8 = v73;
                v7 = v68;
              }
            }
            result = (unsigned int)(1 << v27);
            v44[v46] |= result;
          }
        }
      }
      if ( (unsigned int)++v23 >= a3 )
        break;
      v12 = (_DWORD *)*v8;
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL);
    }
    v20 = v62;
    v21 = v64;
  }
  if ( !v20 )
    goto LABEL_53;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL);
LABEL_50:
  LODWORD(v58) = *v6;
  do
  {
    v59 = v58;
    v58 = *(unsigned int *)(v9 + 4LL * (unsigned int)v58);
  }
  while ( v59 != (_DWORD)v58 );
  v69 = v7;
  v65 = v6;
  v63 = v8;
  result = sub_506520(v8, v58);
  v7 = v69;
  v6 = v65;
  v8 = v63;
LABEL_53:
  if ( v21 )
  {
    LODWORD(v60) = *v6;
    do
    {
      v61 = v60;
      v60 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL) + 4LL * (unsigned int)v60);
    }
    while ( v61 != (_DWORD)v60 );
    return sub_506520(v8 + 1, v60);
  }
  return result;
}

