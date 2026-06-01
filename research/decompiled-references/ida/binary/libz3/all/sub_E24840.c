__int64 __fastcall sub_E24840(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // rcx
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned __int64 *v10; // rbp
  size_t v11; // rbx
  unsigned __int64 *v12; // r9
  int v13; // edx
  __int64 v14; // r13
  unsigned __int64 *v15; // rsi
  unsigned __int64 *v16; // rbx
  unsigned __int64 *v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // r11
  char *v22; // rsi
  __int64 v23; // rdx
  char *v24; // r13
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 *v29; // rsi
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // rdx
  char *v32; // rax
  char *v33; // r14
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  unsigned int *v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned __int64 *v43; // rdx
  unsigned int v44; // ebp
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  _QWORD *v52; // rax
  char **exception; // rbp
  unsigned int v54; // [rsp+0h] [rbp-98h]
  _DWORD *v55; // [rsp+0h] [rbp-98h]
  _DWORD *v56; // [rsp+0h] [rbp-98h]
  _DWORD *v57; // [rsp+0h] [rbp-98h]
  _DWORD *v58; // [rsp+0h] [rbp-98h]
  unsigned __int64 *v59; // [rsp+8h] [rbp-90h]
  char *v60; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v61; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v62; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v63; // [rsp+10h] [rbp-88h]
  _DWORD *v64; // [rsp+10h] [rbp-88h]
  _DWORD *v65; // [rsp+18h] [rbp-80h]
  _DWORD *v66; // [rsp+18h] [rbp-80h]
  int v67; // [rsp+24h] [rbp-74h]
  unsigned __int64 *v68; // [rsp+28h] [rbp-70h]
  __int64 v69[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a1;
  result = *(_QWORD *)(a2 + 24);
  if ( result && *(_DWORD *)result != -1 )
    return result;
  v5 = *(_QWORD *)a1;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 136LL);
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 144LL);
  v8 = 2 * v6;
  v67 = 2 * v6;
  if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *(_DWORD *)(*(_QWORD *)v2 + 140LL))) )
  {
    v55 = v2;
    v11 = 16LL * v8;
    v20 = (unsigned __int64 *)sub_186B270(v11);
    v2 = v55;
    v10 = v20;
    v21 = &v20[v11 / 8];
    if ( v8 )
    {
      if ( (v11 & 0x10) == 0 || (*(_OWORD *)v20 = 0, v20 += 2, v21 != v20) )
      {
        do
        {
          *(_OWORD *)v20 = 0;
          v20 += 4;
          *((_OWORD *)v20 - 1) = 0;
        }
        while ( v21 != v20 );
      }
    }
    v22 = *(char **)(v5 + 128);
    v12 = v21;
    v23 = *(unsigned int *)(v5 + 136);
    v24 = &v22[16 * v23];
    v54 = v67 - 1;
    v25 = (unsigned __int64 *)(v22 + 8);
    if ( v22 == v24 )
    {
LABEL_39:
      if ( v24 )
      {
        if ( (_DWORD)v23 )
        {
          v33 = v24;
          v60 = &v24[16 * v23];
          do
          {
            while ( 1 )
            {
              v34 = *((_QWORD *)v33 + 1);
              if ( !v34 )
                break;
              v66 = v2;
              v33 += 16;
              v63 = v12;
              sub_186B220((void *)(v34 - 8));
              v12 = v63;
              v2 = v66;
              if ( v60 == v33 )
                goto LABEL_44;
            }
            v33 += 16;
          }
          while ( v33 != v60 );
        }
LABEL_44:
        v64 = v2;
        v61 = v12;
        sub_186B220(v24);
        v12 = v61;
        v2 = v64;
      }
      *(_QWORD *)(v5 + 128) = v10;
      v7 = 0;
      *(_DWORD *)(v5 + 144) = 0;
      *(_DWORD *)(v5 + 136) = v67;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v27 = *(v25 - 1);
      if ( v27 <= 1 )
      {
LABEL_27:
        v26 = v25 + 2;
        if ( v24 == (char *)(v25 + 1) )
          goto LABEL_38;
        goto LABEL_28;
      }
      v28 = 16LL * (*(_DWORD *)(v27 + 12) & v54);
      v29 = &v10[(unsigned __int64)v28 / 8];
      if ( v11 == v28 )
      {
LABEL_46:
        if ( v10 == v29 )
        {
LABEL_68:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v30 = v10;
        while ( *v30 )
        {
          v30 += 2;
          if ( v29 == v30 )
            goto LABEL_68;
        }
        *v30 = v27;
        if ( v25 == v30 + 1 )
          goto LABEL_27;
        v31 = v30[1];
        if ( v31 )
          goto LABEL_36;
      }
      else
      {
        v30 = &v10[(unsigned __int64)v28 / 8];
        while ( *v30 )
        {
          v30 += 2;
          if ( v21 == v30 )
            goto LABEL_46;
        }
        *v30 = v27;
        if ( v25 == v30 + 1 )
          goto LABEL_27;
        v31 = v30[1];
        if ( v31 )
        {
LABEL_36:
          v68 = v21;
          v65 = v2;
          v62 = v12;
          v59 = v25;
          sub_186B220((void *)(v31 - 8));
          v21 = v68;
          v2 = v65;
          v12 = v62;
          v25 = v59;
        }
      }
      v30[1] = 0;
      v30[1] = *v25;
      v26 = v25 + 2;
      v32 = (char *)(v25 + 1);
      *((_QWORD *)v32 - 1) = 0;
      if ( v24 == v32 )
      {
LABEL_38:
        v23 = *(unsigned int *)(v5 + 136);
        v24 = *(char **)(v5 + 128);
        goto LABEL_39;
      }
LABEL_28:
      v25 = v26;
    }
  }
  v9 = v6 - 1;
  v10 = *(unsigned __int64 **)(v5 + 128);
  v11 = 16 * v6;
  v54 = v9;
  v12 = &v10[v11 / 8];
LABEL_5:
  v13 = *(_DWORD *)(a2 + 12);
  v14 = 16LL * (v13 & v54);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 == v11 )
  {
    v17 = nullptr;
    while ( 1 )
    {
LABEL_16:
      if ( v15 == v10 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v19 = *v10;
      if ( *v10 > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && v19 == a2 )
        {
          v37 = (_QWORD *)v10[1];
          v16 = v10;
LABEL_75:
          if ( !v37 )
          {
            v17 = v16;
            goto LABEL_60;
          }
          v48 = *((unsigned int *)v37 - 1);
          if ( (_DWORD)v48 != *((_DWORD *)v37 - 2) )
          {
            v38 = (unsigned int *)v37 + v48;
            goto LABEL_61;
          }
          v49 = (unsigned int)(3 * v48 + 1) >> 1;
          v50 = 4 * v49 + 8;
          if ( 4 * (int)v48 + 8 < (unsigned int)v50 && (unsigned int)v48 < v49 )
          {
            v58 = v2;
            v51 = (unsigned int *)sub_186B300(v37 - 1, v50);
            v2 = v58;
            v37 = v51 + 2;
            v16[1] = (unsigned __int64)(v51 + 2);
            *v51 = v49;
            v38 = &v51[v51[1] + 2];
            goto LABEL_61;
          }
          goto LABEL_86;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v17 )
            *(_DWORD *)(v5 + 144) = v7 - 1;
          else
            v17 = v10;
          v35 = v17[1];
          *v17 = a2;
          if ( v35 )
            goto LABEL_58;
          goto LABEL_59;
        }
        v17 = v10;
      }
      v10 += 2;
    }
  }
  v16 = &v10[(unsigned __int64)v14 / 8];
  v17 = nullptr;
  while ( 1 )
  {
    v18 = *v16;
    if ( *v16 <= 1 )
      break;
    if ( *(_DWORD *)(v18 + 12) == v13 && v18 == a2 )
    {
      v37 = (_QWORD *)v16[1];
      goto LABEL_75;
    }
LABEL_9:
    v16 += 2;
    if ( v16 == v12 )
      goto LABEL_16;
  }
  if ( v18 )
  {
    v17 = v16;
    goto LABEL_9;
  }
  if ( v17 )
    *(_DWORD *)(v5 + 144) = v7 - 1;
  else
    v17 = v16;
  v35 = v17[1];
  *v17 = a2;
  if ( v35 )
  {
LABEL_58:
    v56 = v2;
    sub_186B220((void *)(v35 - 8));
    v2 = v56;
  }
LABEL_59:
  v17[1] = 0;
  ++*(_DWORD *)(v5 + 140);
LABEL_60:
  v57 = v2;
  v36 = (_QWORD *)sub_186B270(0x10u);
  v2 = v57;
  v37 = v36 + 1;
  *v36 = 2;
  v17[1] = (unsigned __int64)(v36 + 1);
  v38 = (unsigned int *)(v36 + 1);
LABEL_61:
  v39 = *(_QWORD *)v2;
  v40 = *(_QWORD **)(*(_QWORD *)v2 + 152LL);
  *v38 = v2[2];
  ++*((_DWORD *)v37 - 1);
  if ( v40 )
  {
    v41 = *((_DWORD *)v40 - 1);
    if ( v41 != *((_DWORD *)v40 - 2) )
    {
      v42 = v41;
      result = v41 + 1;
      v43 = &v40[v42];
      goto LABEL_64;
    }
    v44 = (3 * v41 + 1) >> 1;
    v45 = 8 * v44 + 8;
    if ( 8 * v41 + 8 < (unsigned int)v45 && v41 < v44 )
    {
      v46 = (unsigned int *)sub_186B300(v40 - 1, v45);
      v47 = v46[1];
      v40 = v46 + 2;
      *(_QWORD *)(v39 + 152) = v46 + 2;
      *v46 = v44;
      LODWORD(v46) = v47;
      v43 = &v40[v47];
      result = (unsigned int)((_DWORD)v46 + 1);
      goto LABEL_64;
    }
LABEL_86:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v69, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v69);
    sub_233E40((__int64)v69);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v52 = (_QWORD *)sub_186B270(0x18u);
  v40 = v52 + 1;
  *v52 = 2;
  result = 1;
  *(_QWORD *)(v39 + 152) = v40;
  v43 = v40;
LABEL_64:
  *v43 = a2;
  *((_DWORD *)v40 - 1) = result;
  return result;
}

