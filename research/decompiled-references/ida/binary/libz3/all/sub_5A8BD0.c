__int64 __fastcall sub_5A8BD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5, int *a6)
{
  int *v7; // r14
  int *v8; // r13
  __int64 v9; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int *v14; // r12
  __int64 v15; // rsi
  int *v16; // rcx
  int v17; // eax
  int v18; // edx
  unsigned int *v19; // rsi
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int *v23; // r8
  unsigned int *v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  void (***v27)(void); // rdi
  __int64 v28; // r12
  __int64 result; // rax
  __int64 v30; // rdx
  unsigned int v31; // r12d
  _DWORD *v32; // rdx
  bool v33; // r14
  unsigned int v34; // eax
  __int64 v35; // r13
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  bool *v39; // rdx
  __int64 v40; // r12
  bool v41; // r13
  unsigned int v42; // eax
  __int64 v43; // rbp
  unsigned int v44; // r14d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  char **exception; // r12
  char **v54; // r12
  unsigned int **v55; // [rsp+0h] [rbp-98h]
  unsigned int v56; // [rsp+0h] [rbp-98h]
  int v57; // [rsp+8h] [rbp-90h]
  int *v58; // [rsp+8h] [rbp-90h]
  int v59; // [rsp+8h] [rbp-90h]
  unsigned int **v60; // [rsp+18h] [rbp-80h]
  int v61; // [rsp+20h] [rbp-78h]
  unsigned int v62; // [rsp+20h] [rbp-78h]
  int v63; // [rsp+24h] [rbp-74h]
  __int64 v64[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a5;
  v8 = a6;
  v9 = a4;
  sub_57F300((_QWORD *)a1, (_QWORD **)(a2 + 16), (_QWORD **)(a3 + 16), a4, a5, a6);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &off_1C52120;
  v60 = (unsigned int **)(a1 + 80);
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  v12 = *(_QWORD *)(a2 + 48);
  if ( v12 )
  {
    v63 = *(_DWORD *)(v12 - 4);
    v13 = *(_QWORD *)(a2 + 72);
    if ( v13 )
      goto LABEL_3;
LABEL_51:
    v61 = 0;
    if ( (_DWORD)v9 )
      goto LABEL_4;
LABEL_52:
    v24 = nullptr;
    v23 = nullptr;
    v25 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(a2 + 72);
  v63 = 0;
  if ( !v13 )
    goto LABEL_51;
LABEL_3:
  v61 = *(_DWORD *)(v13 - 4);
  if ( !(_DWORD)v9 )
    goto LABEL_52;
LABEL_4:
  v14 = (unsigned int *)&v7[v9];
  v55 = (unsigned int **)(a1 + 88);
  do
  {
    while ( 1 )
    {
      v15 = 4LL * (unsigned int)*v7;
      v16 = (int *)(v15 + *(_QWORD *)(a2 + 56));
      v17 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 4LL * (unsigned int)*v8);
      v18 = *v16;
      if ( *v16 != -1 )
        break;
      v19 = (unsigned int *)(*(_QWORD *)(a2 + 80) + v15);
      if ( v17 != -1 )
      {
        sub_5A21E0(v55, v19);
        v20 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 4LL * (unsigned int)*v8) + v63;
        v21 = *(_QWORD *)(a1 + 80);
        if ( !v21 || (v22 = *(unsigned int *)(v21 - 4), (_DWORD)v22 == *(_DWORD *)(v21 - 8)) )
        {
          v59 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 4LL * (unsigned int)*v8) + v63;
          sub_2FD3F0(v60);
          v21 = *(_QWORD *)(a1 + 80);
          v20 = v59;
          v22 = *(unsigned int *)(v21 - 4);
        }
        goto LABEL_12;
      }
      sub_5A21E0((unsigned int **)(a1 + 64), v19);
      sub_5A21E0((unsigned int **)(a1 + 72), (unsigned int *)(*(_QWORD *)(a3 + 80) + 4LL * (unsigned int)*v8));
LABEL_7:
      ++v7;
      ++v8;
      if ( v14 == (unsigned int *)v7 )
        goto LABEL_13;
    }
    if ( v17 != -1 )
    {
      sub_5A21E0((unsigned int **)(a1 + 48), (unsigned int *)(v15 + *(_QWORD *)(a2 + 56)));
      sub_5A21E0((unsigned int **)(a1 + 56), (unsigned int *)(*(_QWORD *)(a3 + 56) + 4LL * (unsigned int)*v8));
      goto LABEL_7;
    }
    v48 = *(_QWORD *)(a1 + 80);
    if ( !v48 || (v49 = *(unsigned int *)(v48 - 4), (_DWORD)v49 == *(_DWORD *)(v48 - 8)) )
    {
      v58 = v16;
      sub_2FD3F0(v60);
      v48 = *(_QWORD *)(a1 + 80);
      v49 = *(unsigned int *)(v48 - 4);
      v18 = *v58;
    }
    *(_DWORD *)(v48 + 4 * v49) = v18;
    ++*(_DWORD *)(v48 - 4);
    v20 = *(_DWORD *)(*(_QWORD *)(a3 + 80) + 4LL * (unsigned int)*v8) + v61;
    v21 = *(_QWORD *)(a1 + 88);
    if ( !v21 || (v22 = *(unsigned int *)(v21 - 4), (_DWORD)v22 == *(_DWORD *)(v21 - 8)) )
    {
      v57 = *(_DWORD *)(*(_QWORD *)(a3 + 80) + 4LL * (unsigned int)*v8) + v61;
      sub_2FD3F0(v55);
      v21 = *(_QWORD *)(a1 + 88);
      v20 = v57;
      v22 = *(unsigned int *)(v21 - 4);
    }
LABEL_12:
    ++v7;
    *(_DWORD *)(v21 + 4 * v22) = v20;
    ++v8;
    ++*(_DWORD *)(v21 - 4);
  }
  while ( v14 != (unsigned int *)v7 );
LABEL_13:
  v23 = *(unsigned int **)(a1 + 48);
  v24 = *(unsigned int **)(a1 + 56);
  v25 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
  if ( v23 )
    LODWORD(v9) = *(v23 - 1);
  else
    LODWORD(v9) = 0;
LABEL_15:
  v26 = sub_4C5B40(v25, *(_QWORD *)(a2 + 104), *(_QWORD *)(a3 + 104), v9, v23, v24);
  v27 = *(void (****)(void))(a1 + 32);
  v28 = v26;
  if ( (void (***)(void))v26 != v27 )
  {
    sub_568110(v27);
    *(_QWORD *)(a1 + 32) = v28;
  }
  result = *(_QWORD *)(a2 + 16);
  v30 = *(_QWORD *)(a3 + 16);
  if ( result )
  {
    v31 = *(_DWORD *)(result - 4);
    if ( v30 )
    {
      v62 = *(_DWORD *)(v30 - 4);
      if ( v31 )
      {
LABEL_20:
        v32 = *(_DWORD **)(a1 + 112);
        v33 = **(_DWORD **)(a2 + 56) != -1;
        if ( v32 )
        {
          v34 = *(v32 - 1);
          v35 = 0;
          if ( v34 != *(v32 - 2) )
            goto LABEL_40;
          while ( 1 )
          {
            v36 = (3 * v34 + 1) >> 1;
            v37 = v36 + 8;
            if ( v34 + 8 >= (unsigned int)v37 || v34 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v64);
              sub_233E40((__int64)v64);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (3 * v34 + 1) >> 1;
            v38 = (unsigned int *)sub_186B300(v32 - 2, v37);
            v32 = v38 + 2;
            ++v35;
            *(_QWORD *)(a1 + 112) = v38 + 2;
            *v38 = v56;
            LODWORD(v38) = v38[1];
            *((_BYTE *)v32 + (unsigned int)v38) = v33;
            *(v32 - 1) = (_DWORD)v38 + 1;
            if ( (unsigned int)v35 >= v31 )
              break;
LABEL_39:
            while ( 1 )
            {
              v34 = *(v32 - 1);
              v33 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v35) != -1;
              if ( v34 == *(v32 - 2) )
                break;
LABEL_40:
              ++v35;
              *((_BYTE *)v32 + v34) = v33;
              *(v32 - 1) = v34 + 1;
              if ( (unsigned int)v35 >= v31 )
                goto LABEL_25;
            }
          }
        }
        else
        {
          v50 = sub_186B270(0xAu);
          v32 = (_DWORD *)(v50 + 8);
          *(_QWORD *)v50 = 2;
          v35 = 1;
          *(_QWORD *)(a1 + 112) = v50 + 8;
          *(_BYTE *)(v50 + 8) = v33;
          *(_DWORD *)(v50 + 4) = 1;
          if ( v31 > 1 )
            goto LABEL_39;
        }
      }
LABEL_25:
      result = v62;
      if ( v62 )
      {
        v39 = *(bool **)(a1 + 112);
        v40 = 4LL * v62;
        v41 = **(_DWORD **)(a3 + 56) != -1;
        if ( v39 )
        {
          v42 = *((_DWORD *)v39 - 1);
          v43 = 0;
          if ( v42 != *((_DWORD *)v39 - 2) )
            goto LABEL_44;
          while ( 1 )
          {
            v44 = (3 * v42 + 1) >> 1;
            v45 = v44 + 8;
            if ( v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
            {
              v54 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v64, "Overflow encountered when expanding vector");
              *v54 = (char *)off_1C63128;
              sub_2333C0(v54 + 1, v64);
              sub_233E40((__int64)v64);
              __cxa_throw(v54, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = (unsigned int *)sub_186B300(v39 - 8, v45);
            v47 = v46[1];
            v39 = (bool *)(v46 + 2);
            *v46 = v44;
            v43 += 4;
            *(_QWORD *)(a1 + 112) = v46 + 2;
            result = (unsigned int)(v47 + 1);
            v39[v47] = v41;
            *((_DWORD *)v39 - 1) = result;
            if ( v43 == v40 )
              break;
LABEL_43:
            while ( 1 )
            {
              v42 = *((_DWORD *)v39 - 1);
              v41 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + v43) != -1;
              if ( v42 == *((_DWORD *)v39 - 2) )
                break;
LABEL_44:
              v52 = v42;
              v43 += 4;
              result = v42 + 1;
              v39[v52] = v41;
              *((_DWORD *)v39 - 1) = result;
              if ( v43 == v40 )
                return result;
            }
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0xAu);
          v39 = (bool *)(v51 + 1);
          *v51 = 2;
          result = 1;
          v43 = 4;
          *(_QWORD *)(a1 + 112) = v39;
          *v39 = v41;
          *((_DWORD *)v39 - 1) = 1;
          if ( v40 != 4 )
            goto LABEL_43;
        }
      }
    }
    else
    {
      v62 = 0;
      if ( v31 )
        goto LABEL_20;
    }
  }
  else if ( v30 )
  {
    v62 = *(_DWORD *)(v30 - 4);
    goto LABEL_25;
  }
  return result;
}

