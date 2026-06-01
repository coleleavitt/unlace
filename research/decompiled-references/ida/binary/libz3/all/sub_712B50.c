__int64 __fastcall sub_712B50(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbx
  __int64 v6; // rdx
  char **v7; // rbp
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ebp
  __int64 v26; // rbx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  _QWORD *v31; // rsi
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  __int64 v34; // r12
  __int64 v35; // r11
  __int64 v36; // r14
  _QWORD *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebp
  __int64 v47; // rbx
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rsi
  _QWORD *v51; // rsi
  unsigned int v52; // r12d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // r12d
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  unsigned int v63; // [rsp+8h] [rbp-B0h]
  unsigned int v65; // [rsp+24h] [rbp-94h]
  _BYTE v66[8]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v67; // [rsp+40h] [rbp-78h] BYREF
  __int64 v68; // [rsp+48h] [rbp-70h] BYREF
  __int64 v69; // [rsp+50h] [rbp-68h] BYREF
  __int64 v70; // [rsp+58h] [rbp-60h]
  __int64 v71[11]; // [rsp+60h] [rbp-58h] BYREF

  result = a1[4];
  if ( !result || (v10 = a1[1]) == 0 )
  {
    if ( a2 )
      return result;
    goto LABEL_51;
  }
  v11 = *(_DWORD *)(v10 - 4);
  result = *(unsigned int *)(result - 4);
  if ( v11 <= (unsigned int)result )
    result = v11;
  v65 = result;
  if ( !a2 )
  {
LABEL_51:
    v45 = a1[3];
    if ( v45 )
    {
      v46 = 0;
      do
      {
        if ( v46 >= *(_DWORD *)(v45 - 4) )
          break;
        v47 = *(_QWORD *)(v45 + 8LL * v46);
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        v48 = *(_QWORD **)(a3 + 8);
        if ( v48 )
        {
          v49 = *((_DWORD *)v48 - 1);
          if ( v49 == *((_DWORD *)v48 - 2) )
          {
            v56 = (3 * v49 + 1) >> 1;
            v57 = 8 * v56 + 8;
            if ( 8 * v49 + 8 >= v57 || v49 >= v56 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v71, "Overflow encountered when expanding vector", v6);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v71);
              sub_233E40((__int64)v71);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = (unsigned int *)sub_186B300(v48 - 1, v57);
            v59 = v58[1];
            v48 = v58 + 2;
            *v58 = v56;
            *(_QWORD *)(a3 + 8) = v58 + 2;
            LODWORD(v58) = v59;
            v51 = &v48[v59];
            v45 = a1[3];
            result = (unsigned int)((_DWORD)v58 + 1);
          }
          else
          {
            v50 = v49;
            result = v49 + 1;
            v51 = &v48[v50];
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          *v62 = 2;
          result = 1;
          v48 = v62 + 1;
          *(_QWORD *)(a3 + 8) = v48;
          v51 = v48;
          v45 = a1[3];
        }
        *v51 = v47;
        ++v46;
        *((_DWORD *)v48 - 1) = result;
      }
      while ( v45 );
    }
    return result;
  }
  v12 = result;
  if ( !(_DWORD)result )
    return result;
  v71[0] = 0;
  sub_1360C00(v66, a2, v71);
  sub_18572D0(v71);
  sub_1360B80(v66, 1);
  v13 = *a1;
  v14 = a1[1];
  v15 = 0;
  v69 = 0;
  v70 = v13;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v14 + v15 + 8);
    if ( v16 )
      break;
LABEL_20:
    v15 += 16;
    if ( 16LL * v12 == v15 )
    {
      v24 = a1[3];
      if ( v24 )
      {
        v25 = 0;
        do
        {
          if ( v25 >= *(_DWORD *)(v24 - 4) )
            break;
          v26 = *(_QWORD *)(v24 + 8LL * v25);
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v27 = *(_QWORD **)(a3 + 8);
          if ( v27 )
          {
            v28 = *((_DWORD *)v27 - 1);
            if ( v28 == *((_DWORD *)v27 - 2) )
            {
              v52 = (3 * v28 + 1) >> 1;
              v53 = 8 * v52 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v53 || v28 >= v52 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_109F38(v71, "Overflow encountered when expanding vector", v4);
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v71);
                sub_233E40((__int64)v71);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v54 = (unsigned int *)sub_186B300(v27 - 1, v53);
              v55 = v54[1];
              v27 = v54 + 2;
              *v54 = v52;
              LODWORD(v54) = v55;
              *(_QWORD *)(a3 + 8) = v27;
              v31 = &v27[v55];
              v24 = a1[3];
              v30 = (_DWORD)v54 + 1;
            }
            else
            {
              v29 = v28;
              v30 = v28 + 1;
              v31 = &v27[v29];
            }
          }
          else
          {
            v61 = (_QWORD *)sub_186B270(0x18u);
            *v61 = 2;
            v27 = v61 + 1;
            *(_QWORD *)(a3 + 8) = v61 + 1;
            v31 = v61 + 1;
            v24 = a1[3];
            v30 = 1;
          }
          *v31 = v26;
          ++v25;
          *((_DWORD *)v27 - 1) = v30;
        }
        while ( v24 );
        v14 = a1[1];
      }
      v32 = v65 + 1;
      if ( !v14 )
      {
LABEL_40:
        sub_710AA0(v69, v70);
        return sub_13606C0(v66);
      }
      while ( 1 )
      {
LABEL_32:
        if ( v32 >= *(_DWORD *)(v14 - 4) )
          goto LABEL_40;
        v33 = 0;
        v34 = 16LL * v32;
        v35 = *(_QWORD *)(v14 + v34 + 8);
        if ( v35 )
          break;
        v32 += 2;
      }
      while ( 1 )
      {
        if ( v33 >= *(_DWORD *)(v35 - 4) )
        {
LABEL_39:
          v32 += 2;
          if ( !v14 )
            goto LABEL_40;
          goto LABEL_32;
        }
        if ( !(unsigned __int8)sub_18290A0(*a1) )
          goto LABEL_49;
        v36 = *(_QWORD *)(*(_QWORD *)(a1[1] + v34 + 8) + 8LL * v33);
        v37 = sub_710940((_QWORD *)a1[21], *((_DWORD *)a1 + 44), v36);
        v38 = *((_DWORD *)v37 + 2);
        v39 = *((_DWORD *)v37 + 3);
        if ( v39 == v32 )
        {
          if ( v38 < v65 || v38 == -1 )
          {
LABEL_63:
            sub_1361190(v66, v36, &v69);
            if ( *(_QWORD *)(*a1 + 864LL) == v69 )
            {
              v60 = sub_15E1A70(*a1);
              v68 = v60;
              if ( v60 )
                ++*(_DWORD *)(v60 + 8);
              sub_712A90((_QWORD *)(a3 + 8), &v68);
            }
            else
            {
              v71[0] = v36;
              if ( v36 )
                ++*(_DWORD *)(v36 + 8);
              sub_712A90((_QWORD *)(a3 + 8), v71);
            }
            v14 = a1[1];
            v35 = *(_QWORD *)(v14 + v34 + 8);
          }
        }
        else if ( v38 == v32 && (v39 == -1 || v39 < v65) )
        {
          goto LABEL_63;
        }
        ++v33;
        if ( !v35 )
          goto LABEL_39;
      }
    }
  }
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= *(_DWORD *)(v16 - 4) )
      goto LABEL_20;
    v18 = *(_QWORD *)(v16 + 8LL * v17);
    sub_1361190(v66, v18, &v69);
    if ( !(unsigned __int8)sub_18290A0(*a1) )
      break;
    if ( *(_QWORD *)(*a1 + 864LL) == v69 )
    {
      v43 = sub_15E1A70(*a1);
      v67 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_712A90(a1 + 3, &v67);
    }
    else
    {
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v19 = (_QWORD *)a1[3];
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v40 = (3 * v20 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v41 || v20 >= v40 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_109F38(v71, "Overflow encountered when expanding vector", v8);
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = (3 * v20 + 1) >> 1;
          v42 = (unsigned int *)sub_186B300(v19 - 1, v41);
          v19 = v42 + 2;
          a1[3] = v42 + 2;
          *v42 = v63;
          LODWORD(v42) = v42[1];
          v23 = &v19[(unsigned int)v42];
          v22 = (_DWORD)v42 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x18u);
        v19 = v44 + 1;
        a1[3] = v44 + 1;
        v23 = v44 + 1;
        *v44 = 2;
        v22 = 1;
      }
      *v23 = v18;
      *((_DWORD *)v19 - 1) = v22;
    }
    v14 = a1[1];
    ++v17;
    v16 = *(_QWORD *)(v14 + v15 + 8);
    if ( !v16 )
      goto LABEL_20;
  }
LABEL_49:
  sub_710AA0(v69, v70);
  return sub_13606C0(v66);
}

