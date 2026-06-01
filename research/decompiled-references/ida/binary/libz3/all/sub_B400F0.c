__int64 __fastcall sub_B400F0(__int64 a1, int a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r10
  __int64 v15; // r12
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r13d
  _DWORD *v19; // rcx
  __int64 v20; // r8
  unsigned int *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // r11
  _DWORD *v25; // rax
  int v26; // edx
  int *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int v30; // r9d
  int *v31; // rbp
  __int64 v32; // r10
  unsigned int v33; // esi
  bool v34; // r12
  int *v35; // rsi
  int v36; // eax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // r10
  __int64 v41; // rcx
  int v42; // r9d
  unsigned int *v43; // r8
  int v44; // r12d
  int v45; // esi
  unsigned int v46; // r14d
  int v47; // r11d
  __int64 v48; // rbp
  __int64 v49; // rbx
  unsigned int v50; // r13d
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  __int64 v53; // r10
  __int64 v54; // rdi
  unsigned int v55; // ebx
  __int64 v56; // r13
  __int64 v57; // r12
  unsigned int v58; // ebx
  unsigned int v59; // r8d
  bool v60; // di
  unsigned int v61; // r13d
  __int64 v62; // r9
  unsigned int v63; // ebp
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // esi
  bool v69; // r13
  __int64 v70; // rcx
  unsigned int v71; // ecx
  unsigned int v73; // [rsp+Ch] [rbp-8Ch]
  __int64 v74; // [rsp+10h] [rbp-88h]
  __int64 v75; // [rsp+10h] [rbp-88h]
  __int64 v76; // [rsp+10h] [rbp-88h]
  __int64 v77; // [rsp+18h] [rbp-80h]
  bool v78; // [rsp+18h] [rbp-80h]
  unsigned int v79; // [rsp+18h] [rbp-80h]
  __int64 v80; // [rsp+18h] [rbp-80h]
  __int64 v81; // [rsp+18h] [rbp-80h]
  __int64 v82; // [rsp+20h] [rbp-78h]
  __int64 v83; // [rsp+20h] [rbp-78h]
  __int64 v84; // [rsp+28h] [rbp-70h]
  __int64 v85[11]; // [rsp+40h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 56);
  v4 = result;
  if ( result )
    v5 = *(_DWORD *)(result - 4);
  else
    v5 = 0;
  v6 = (unsigned int)(v5 - a2);
  v73 = v6;
  v7 = result + 24 * v6;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = *(_DWORD *)v7;
  v9 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(v7 + 12);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(a1 + 48);
  v74 = v10;
  if ( !v10 )
  {
    if ( !v9 )
      goto LABEL_29;
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(v10 - 4);
  if ( v9 < v11 )
  {
    v12 = *(_QWORD *)(a1 + 88);
    v82 = v7;
    v84 = result;
    if ( !v12 )
      goto LABEL_55;
LABEL_8:
    while ( *(_DWORD *)(v12 - 4) <= (signed int)v9 )
    {
      if ( ++v9 >= v11 )
      {
LABEL_10:
        v7 = v82;
        result = v84;
        if ( *(_DWORD *)(v82 + 8) )
          goto LABEL_11;
LABEL_78:
        v16 = 0;
        goto LABEL_28;
      }
    }
    while ( 1 )
    {
      v35 = (int *)(v12 + 4LL * v9);
      v36 = *v35;
      if ( !*v35 )
        goto LABEL_53;
      v37 = *(_QWORD *)(a1 + 80);
      if ( v37 )
      {
        v38 = *(_DWORD *)(v37 - 4);
        v39 = v38 - 1;
      }
      else
      {
        v39 = -1;
        v38 = 0;
      }
      if ( v36 == v39 )
      {
        *v35 = 0;
        ++v9;
        --*(_DWORD *)(v37 - 4);
        v11 = *(_DWORD *)(v74 - 4);
        if ( v9 >= v11 )
          goto LABEL_10;
      }
      else
      {
        v40 = *(unsigned int *)(v37 + 4LL * (unsigned int)(v38 - 1));
        v41 = (unsigned int)v36;
        v42 = v36 >> 1;
        v43 = (unsigned int *)(v37 + 4LL * (unsigned int)v36);
        *v43 = v40;
        v44 = v40;
        *(_DWORD *)(v12 + 4 * v40) = v36;
        *v35 = 0;
        v45 = *(_DWORD *)(v37 - 4) - 1;
        *(_DWORD *)(v37 - 4) = v45;
        v46 = *v43;
        if ( !(v36 >> 1) )
          goto LABEL_40;
        v47 = *(_DWORD *)(v37 + 4LL * (unsigned int)v42);
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
        v49 = (unsigned int)v47;
        v50 = *(_DWORD *)(v48 + 16 * v40 + 8);
        v51 = *(_DWORD *)(v48 + 16LL * (unsigned int)v47 + 8);
        v78 = v50 < v51;
        if ( v50 == v51 )
          v78 = v44 < v47;
        if ( !v78 )
        {
LABEL_40:
          v52 = 2 * v36;
          if ( 2 * v36 >= v45 )
          {
            v55 = v36;
          }
          else
          {
            v79 = v9;
            v53 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
            while ( 1 )
            {
              v54 = v52 + 1;
              v55 = v52;
              if ( v45 > (int)v54 )
              {
                v56 = *(unsigned int *)(v37 + 4 * v54);
                v57 = *(unsigned int *)(v37 + 4LL * v52);
                v58 = *(_DWORD *)(v53 + 16 * v56 + 8);
                v59 = *(_DWORD *)(v53 + 16 * v57 + 8);
                v60 = v58 < v59;
                if ( v58 == v59 )
                  v60 = (int)v56 < (int)v57;
                v55 = v60 + v52;
              }
              v61 = *(_DWORD *)(v53 + 16LL * v46 + 8);
              v43 = (unsigned int *)(v37 + 4LL * v55);
              v62 = *v43;
              if ( *(_DWORD *)(v53 + 16 * v62 + 8) == v61 )
              {
                if ( (int)v62 >= (int)v46 )
                {
LABEL_51:
                  v9 = v79;
                  v43 = (unsigned int *)(v37 + 4 * v41);
                  v55 = v36;
                  goto LABEL_52;
                }
              }
              else if ( *(_DWORD *)(v53 + 16 * v62 + 8) >= v61 )
              {
                goto LABEL_51;
              }
              *(_DWORD *)(v37 + 4 * v41) = *v43;
              *(_DWORD *)(v12 + 4 * v62) = v36;
              v52 = 2 * v55;
              if ( v45 <= (int)(2 * v55) )
                break;
              v41 = v55;
              v36 = v55;
            }
            v9 = v79;
          }
LABEL_52:
          *v43 = v46;
          *(_DWORD *)(v12 + 4LL * v46) = v55;
          v11 = *(_DWORD *)(v74 - 4);
LABEL_53:
          if ( ++v9 >= v11 )
            goto LABEL_10;
          goto LABEL_54;
        }
        while ( 1 )
        {
          v68 = *(_DWORD *)(v48 + 16LL * v46 + 8);
          v69 = v68 < v51;
          if ( v68 == v51 )
            v69 = v47 > (int)v46;
          v70 = 4 * v41;
          if ( !v69 )
            break;
          *(_DWORD *)(v37 + v70) = v47;
          v71 = v42 >> 1;
          *(_DWORD *)(v12 + 4 * v49) = v36;
          if ( !(v42 >> 1) )
          {
            v70 = 4;
            v36 = 1;
            break;
          }
          v49 = *(unsigned int *)(v37 + 4LL * v71);
          v47 = *(_DWORD *)(v37 + 4LL * v71);
          v51 = *(_DWORD *)(v48 + 16 * v49 + 8);
          v36 = v42;
          v42 >>= 1;
          v41 = (unsigned int)v36;
        }
        *(_DWORD *)(v37 + v70) = v46;
        ++v9;
        *(_DWORD *)(v12 + 4LL * v46) = v36;
        v11 = *(_DWORD *)(v74 - 4);
        if ( v9 >= v11 )
          goto LABEL_10;
      }
LABEL_54:
      if ( v12 )
        goto LABEL_8;
LABEL_55:
      while ( (v9 & 0x80000000) == 0 )
      {
        if ( ++v9 >= v11 )
          goto LABEL_10;
      }
    }
  }
  if ( !v9 )
    goto LABEL_78;
LABEL_11:
  v13 = v74;
  v14 = v7;
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v17 = v13 + 16 * v15;
      if ( *(_DWORD *)(v17 + 12) > (signed int)v73 )
        break;
      v16 = *(_DWORD *)(v14 + 8);
      if ( (unsigned int)++v15 >= v16 )
        goto LABEL_26;
    }
    v18 = v15;
    v19 = *(_DWORD **)(a1 + 80);
    v20 = *(_QWORD *)(a1 + 88);
    v21 = (unsigned int *)(v20 + 4 * v15);
    if ( v19 )
    {
      v22 = *(v19 - 1);
      *v21 = v22;
      v23 = (unsigned int)*(v19 - 1);
      if ( (_DWORD)v23 == *(v19 - 2) )
      {
        v63 = (unsigned int)(3 * v23 + 1) >> 1;
        v64 = 4 * v63 + 8;
        if ( 4 * (int)v23 + 8 >= (unsigned int)v64 || (unsigned int)v23 >= v63 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v80 = v14;
        v76 = v13 + 16 * v15;
        v65 = (unsigned int *)sub_186B300(v19 - 2, v64);
        v24 = v22;
        v19 = v65 + 2;
        *v65 = v63;
        v66 = v65[1];
        v26 = (int)v22 >> 1;
        *(_QWORD *)(a1 + 80) = v19;
        v20 = *(_QWORD *)(a1 + 88);
        v27 = &v19[v22];
        v13 = *(_QWORD *)(a1 + 48);
        v17 = v76;
        v25 = &v19[v66];
        v14 = v80;
      }
      else
      {
        v24 = v22;
        v25 = &v19[v23];
        v26 = (int)v22 >> 1;
        v27 = &v19[v22];
      }
      *v25 = v15;
      ++*(v19 - 1);
      v28 = (unsigned int)*v27;
      v18 = *v27;
      if ( v26 )
      {
        v75 = v14;
        v77 = v17;
        v83 = v15;
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
        while ( 1 )
        {
          v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
          v31 = &v19[v26];
          v32 = (unsigned int)*v31;
          v33 = *(_DWORD *)(v29 + 16 * v32 + 8);
          v34 = v30 < v33;
          if ( v30 == v33 )
            v34 = v18 < (int)v32;
          v27 = &v19[v24];
          if ( !v34 )
          {
            v14 = v75;
            v17 = v77;
            v15 = v83;
            goto LABEL_25;
          }
          *v27 = *v31;
          *(_DWORD *)(v20 + 4 * v32) = v22;
          v22 = v26;
          v26 >>= 1;
          if ( !v26 )
            break;
          v24 = v22;
        }
        v14 = v75;
        v17 = v77;
        v27 = v31;
        v22 = 1;
        v15 = v83;
      }
    }
    else
    {
      *v21 = 0;
      v22 = 0;
      v81 = v14;
      v67 = sub_186B270(0x10u);
      v17 = v13 + 16 * v15;
      v27 = (int *)(v67 + 8);
      *(_DWORD *)(v67 + 8) = v15;
      v14 = v81;
      v20 = *(_QWORD *)(a1 + 88);
      v13 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)v67 = 2;
      *(_QWORD *)(a1 + 80) = v67 + 8;
      ++*(_DWORD *)(v67 + 4);
      v28 = (unsigned int)v15;
    }
LABEL_25:
    *v27 = v18;
    ++v15;
    *(_DWORD *)(v20 + 4 * v28) = v22;
    v16 = *(_DWORD *)(v14 + 8);
    *(_DWORD *)(v17 + 12) = -1;
  }
  while ( (unsigned int)v15 < v16 );
LABEL_26:
  v74 = v13;
  result = a1;
  if ( v13 )
  {
    result = *(_QWORD *)(a1 + 56);
LABEL_28:
    *(_DWORD *)(v74 - 4) = v16;
    v4 = result;
    goto LABEL_29;
  }
  v4 = *(_QWORD *)(a1 + 56);
LABEL_29:
  if ( v4 )
  {
    result = v73;
    *(_DWORD *)(v4 - 4) = v73;
  }
  return result;
}

