__int64 __fastcall sub_AE2070(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 result; // rax
  int v19; // edx
  _QWORD *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 *v37; // rdx
  unsigned int v38; // ebp
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r13
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdi
  _QWORD *v58; // rax
  unsigned int v59; // r14d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // [rsp+10h] [rbp-58h] BYREF
  __int64 v66; // [rsp+18h] [rbp-50h]
  __int64 v67[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a1[20];
  if ( v8
    && (v9 = *(_DWORD *)(a2 + 16), v10 = *(_DWORD *)(v8 - 4), v9 < v10)
    && (v11 = v10 - v9 - 1, (v12 = *(_QWORD *)(v8 + 8 * v11)) != 0) )
  {
    if ( !*(_WORD *)(v12 + 4) && (*(_BYTE *)(v12 + 30) & 1) != 0 || (v28 = *(_DWORD *)(a1[66] + 4 * v11), v28 == v10) )
    {
      v13 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v12 + 8);
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
        {
          v38 = (3 * v14 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v39 || v14 >= v38 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v67, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(v13 - 1, v39);
          v41 = v40[1];
          v13 = v40 + 2;
          *v40 = v38;
          a1[7] = v40 + 2;
          LODWORD(v40) = v41;
          v17 = &v13[v41];
          v16 = (_DWORD)v40 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v13[v15];
        }
      }
      else
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        v13 = v58 + 1;
        *v58 = 2;
        v16 = 1;
        a1[7] = v13;
        v17 = v13;
      }
      *v17 = v12;
      *((_DWORD *)v13 - 1) = v16;
    }
    else
    {
      v29 = v10 - v28;
      v30 = v29;
      v31 = sub_1680FB0(a1[4], v12, v29);
      v32 = v31;
      if ( v31 )
      {
        v33 = (_QWORD *)a1[7];
        ++*(_DWORD *)(v31 + 8);
        if ( v33 )
        {
          v34 = *((_DWORD *)v33 - 1);
          if ( v34 == *((_DWORD *)v33 - 2) )
          {
            v43 = (3 * v34 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v44 || v34 >= v43 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v67, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v45 = (unsigned int *)sub_186B300(v33 - 1, v44);
            v46 = v45[1];
            v33 = v45 + 2;
            *v45 = v43;
            a1[7] = v45 + 2;
            LODWORD(v45) = v46;
            v37 = &v33[v46];
            v36 = (_DWORD)v45 + 1;
          }
          else
          {
            v35 = v34;
            v36 = v34 + 1;
            v37 = &v33[v35];
          }
        }
        else
        {
          v63 = (_QWORD *)sub_186B270(0x18u);
          v33 = v63 + 1;
          *v63 = 2;
          v36 = 1;
          a1[7] = v33;
          v37 = v33;
        }
        *v37 = v32;
        *((_DWORD *)v33 - 1) = v36;
      }
      else
      {
        v47 = a1[1];
        v65 = 0;
        v66 = v47;
        sub_1585D20(a1 + 21, v12, 0, v30, 0, &v65);
        v48 = v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        v49 = (_QWORD *)a1[7];
        if ( v49 )
        {
          v50 = *((_DWORD *)v49 - 1);
          if ( v50 == *((_DWORD *)v49 - 2) )
          {
            v59 = (3 * v50 + 1) >> 1;
            v60 = 8 * v59 + 8;
            if ( 8 * v50 + 8 >= v60 || v50 >= v59 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v67, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v61 = (unsigned int *)sub_186B300(v49 - 1, v60);
            v62 = v61[1];
            v49 = v61 + 2;
            *v61 = v59;
            a1[7] = v61 + 2;
            LODWORD(v61) = v62;
            v53 = &v49[v62];
            v52 = (_DWORD)v61 + 1;
          }
          else
          {
            v51 = v50;
            v52 = v50 + 1;
            v53 = &v49[v51];
          }
        }
        else
        {
          v64 = (_QWORD *)sub_186B270(0x18u);
          *v64 = 2;
          v52 = 1;
          v49 = v64 + 1;
          a1[7] = v49;
          v53 = v49;
        }
        *v53 = v48;
        v54 = v65;
        *((_DWORD *)v49 - 1) = v52;
        sub_1584390(a1, v12, v30, v54);
        v55 = v65;
        if ( v65 )
        {
          v56 = v66;
          if ( (*(_DWORD *)(v65 + 8))-- == 1 )
            sub_15D7BC0(v56, v55);
        }
      }
    }
    result = a1[5];
    if ( result )
    {
      v19 = *(_DWORD *)(result - 4);
      if ( v19 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v20 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v24 = (3 * v21 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v25 || v21 >= v24 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v67, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v67);
          sub_233E40((__int64)v67);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v20 - 1, v25);
        v27 = v26[1];
        v20 = v26 + 2;
        *v26 = v24;
        a1[7] = v26 + 2;
        LODWORD(v26) = v27;
        v23 = &v20[v27];
        result = (unsigned int)((_DWORD)v26 + 1);
      }
      else
      {
        v22 = v21;
        result = v21 + 1;
        v23 = &v20[v22];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v20 = v42 + 1;
      *v42 = 2;
      result = 1;
      a1[7] = v20;
      v23 = v20;
    }
    *v23 = a2;
    *((_DWORD *)v20 - 1) = result;
  }
  return result;
}

