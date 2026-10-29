__int64 __fastcall sub_42BF90(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5, __int64 *a6)
{
  char **v6; // rbp
  char **exception; // rbp
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // r14
  __int64 *v13; // r15
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  int i; // eax
  unsigned int v18; // eax
  _QWORD *v19; // rdi
  int v20; // r9d
  int v21; // r8d
  int v22; // esi
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r13
  bool v28; // zf
  __int64 *v29; // rbx
  __int64 *v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // r8
  _QWORD *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r9
  int v43; // eax
  _QWORD *v44; // r9
  int v45; // eax
  unsigned int v46; // r14d
  __int64 *v47; // r12
  __int64 v48; // rax
  __int64 *v49; // rbp
  __int64 *v50; // rbx
  __int64 *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rsi
  unsigned int v58; // r9d
  size_t v59; // rsi
  unsigned int v60; // r13d
  unsigned int *v61; // rax
  __int64 v62; // rsi
  int v63; // eax
  unsigned int v64; // r9d
  unsigned int *v65; // rax
  __int64 v66; // rdi
  _QWORD *v67; // rax
  unsigned int v68; // [rsp+8h] [rbp-B0h]
  _QWORD *v70; // [rsp+10h] [rbp-A8h]
  _QWORD *v71; // [rsp+10h] [rbp-A8h]
  __int64 v75; // [rsp+28h] [rbp-90h]
  __int64 v76; // [rsp+28h] [rbp-90h]
  unsigned int v77; // [rsp+3Ch] [rbp-7Ch]
  _QWORD *v78; // [rsp+48h] [rbp-70h] BYREF
  __int64 v79; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v80; // [rsp+58h] [rbp-60h]
  __int64 v81[11]; // [rsp+60h] [rbp-58h] BYREF

  v9 = *(__int64 **)(a2 + 8);
  v79 = *(_QWORD *)a1;
  v80 = nullptr;
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 )
    {
      v11 = *v9;
      v12 = v9;
      v13 = &v9[v10];
      if ( *v9 )
        ++*(_DWORD *)(v11 + 8);
      v14 = (_QWORD *)sub_186B270(0x18u);
      v15 = v14 + 1;
      v80 = v14 + 1;
      v16 = v14 + 1;
      *v14 = 2;
      for ( i = 1; ; i = (_DWORD)v61 + 1 )
      {
        ++v12;
        *v15 = v11;
        *((_DWORD *)v16 - 1) = i;
        if ( v12 == v13 )
          break;
        while ( 1 )
        {
          v11 = *v12;
          if ( *v12 )
            ++*(_DWORD *)(v11 + 8);
          v18 = *((_DWORD *)v16 - 1);
          if ( v18 == *((_DWORD *)v16 - 2) )
            break;
          ++v12;
          v16[v18] = v11;
          *((_DWORD *)v16 - 1) = v18 + 1;
          if ( v12 == v13 )
            goto LABEL_11;
        }
        v58 = (3 * v18 + 1) >> 1;
        v59 = 8 * v58 + 8;
        v60 = v58;
        if ( 8 * v18 + 8 >= (unsigned int)v59 || v18 >= v58 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v81, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v81);
          sub_233E40((__int64)v81);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v16 - 1, v59);
        v62 = v61[1];
        v16 = v61 + 2;
        *v61 = v60;
        v80 = v16;
        LODWORD(v61) = v62;
        v15 = &v16[v62];
      }
    }
  }
LABEL_11:
  sub_15EE300(&v79);
  v19 = v80;
  if ( v80 )
  {
    v20 = *((_DWORD *)v80 - 1);
    v21 = v20 - 1;
    if ( v20 - 1 > 0 )
    {
      v22 = *(_DWORD *)(a1 + 152);
      v23 = v21;
      do
      {
        v22 = 214013 * v22 + 2531011;
        v24 = &v19[(HIWORD(v22) & 0x7FFF) % ((int)v23 + 1)];
        v25 = v19[v23];
        v26 = *v24;
        v19[v23--] = *v24;
        *v24 = v25;
      }
      while ( (int)v23 > 0 );
      *(_DWORD *)(a1 + 152) = v22;
      v19[v21 - (__int64)(v20 - 2)] = v26;
      *v24 = v25;
    }
  }
  v27 = *(_QWORD *)(a1 + 32);
  v28 = *(_BYTE *)(a1 + 146) == 0;
  *(_QWORD *)(a1 + 48) = v27;
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 192LL))(v27);
    v27 = *(_QWORD *)(a1 + 48);
  }
  v68 = sub_4316F0(v27);
  if ( a5 )
  {
    v29 = a6;
    v30 = &a6[a5];
    do
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(a1 + 48);
        v32 = *v29;
        if ( !*(_BYTE *)(a1 + 146) )
          break;
        sub_435610(v31, v32);
        if ( ++v29 == v30 )
          goto LABEL_23;
      }
      sub_E5EBF0(v31, v32);
      ++v29;
    }
    while ( v29 != v30 );
  }
LABEL_23:
  v78 = nullptr;
  v33 = a4[1];
  if ( v33 && *(_DWORD *)(v33 - 4) )
  {
    v34 = (_QWORD *)sub_186B270(0x28u);
    v35 = v34 + 1;
    v78 = v34 + 1;
    *v34 = 2;
    v36 = a4[1];
    v37 = *a4;
    v34[2] = 0;
    v34[1] = v37;
    if ( v36 )
    {
      v38 = nullptr;
      v39 = 0;
      do
      {
        if ( v39 >= *(_DWORD *)(v36 - 4) )
          break;
        v40 = *(_QWORD *)(v36 + 8LL * v39);
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        if ( v38 )
        {
          v41 = *((_DWORD *)v38 - 1);
          if ( v41 == *((_DWORD *)v38 - 2) )
          {
            v64 = (3 * v41 + 1) >> 1;
            if ( 8 * v41 + 8 >= 8 * v64 + 8 || v41 >= v64 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v81, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v81);
              sub_233E40((__int64)v81);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v77 = (3 * v41 + 1) >> 1;
            v75 = v40;
            v70 = v34;
            v65 = (unsigned int *)sub_186B300(v38 - 1, 8 * v64 + 8);
            v66 = v65[1];
            v38 = v65 + 2;
            v34 = v70;
            *v65 = v77;
            LODWORD(v65) = v66;
            v44 = &v38[v66];
            v40 = v75;
            v70[2] = v38;
            v36 = a4[1];
            v43 = (_DWORD)v65 + 1;
          }
          else
          {
            v42 = v41;
            v43 = v41 + 1;
            v44 = &v38[v42];
          }
        }
        else
        {
          v76 = v40;
          v71 = v34;
          v67 = (_QWORD *)sub_186B270(0x18u);
          v34 = v71;
          *v67 = 2;
          v38 = v67 + 1;
          v40 = v76;
          v43 = 1;
          v71[2] = v38;
          v36 = a4[1];
          v44 = v38;
        }
        *v44 = v40;
        ++v39;
        *((_DWORD *)v38 - 1) = v43;
      }
      while ( v36 );
      v35 = v78;
      v45 = *((_DWORD *)v78 - 1) + 1;
    }
    else
    {
      v45 = 1;
    }
    *((_DWORD *)v35 - 1) = v45;
  }
  v46 = sub_42B2D0(a1, &v79, a3, (__int64)&v78);
  if ( !*(_BYTE *)(a1 + 146) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 200LL))(*(_QWORD *)(a1 + 48), 1);
  v47 = v78;
  *(_BYTE *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  if ( v47 )
  {
    v48 = *((unsigned int *)v47 - 1);
    if ( (_DWORD)v48 )
    {
      v49 = &v47[2 * v48];
      do
      {
        v50 = (__int64 *)v47[1];
        if ( v50 )
        {
          v51 = &v50[*((unsigned int *)v50 - 1)];
          if ( v50 >= v51 )
            goto LABEL_49;
          do
          {
            while ( 1 )
            {
              v52 = *v50;
              if ( *v50 )
              {
                v53 = *v47;
                v28 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v28 )
                  break;
              }
              if ( ++v50 >= v51 )
                goto LABEL_48;
            }
            sub_15D7BC0(v53, v52);
            ++v50;
          }
          while ( v50 < v51 );
LABEL_48:
          v50 = (__int64 *)v47[1];
          if ( v50 )
LABEL_49:
            sub_186B220(v50 - 1);
        }
        v47 += 2;
      }
      while ( v47 != v49 );
      v47 = v78;
    }
    sub_186B220(v47 - 1);
  }
  if ( v68 < (unsigned int)sub_4316F0(v27) )
  {
    v63 = sub_4316F0(v27);
    sub_431570(v27, v63 - v68);
  }
  v54 = v80;
  if ( v80 )
  {
    v55 = (unsigned __int64)&v80[*((unsigned int *)v80 - 1)];
    if ( (unsigned __int64)v80 >= v55 )
      goto LABEL_63;
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v28 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v55 )
          goto LABEL_62;
      }
      sub_15D7BC0(v79, v56);
      ++v54;
    }
    while ( (unsigned __int64)v54 < v55 );
LABEL_62:
    v54 = v80;
    if ( v80 )
LABEL_63:
      sub_186B220(v54 - 1);
  }
  return v46;
}

