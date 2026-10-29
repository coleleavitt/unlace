__int64 __fastcall sub_5DA510(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // r12
  char **v7; // r12
  char **v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  int v15; // eax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // r15
  __int64 v31; // r13
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // rdi
  bool v51; // zf
  __int64 result; // rax
  __int64 *v53; // rbp
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  int v59; // [rsp+0h] [rbp-A8h]
  __int64 v61; // [rsp+10h] [rbp-98h]
  int v62; // [rsp+18h] [rbp-90h]
  unsigned int v63; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v64; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v65; // [rsp+1Ch] [rbp-8Ch]
  __int64 *v67; // [rsp+20h] [rbp-88h]
  char v68; // [rsp+28h] [rbp-80h]
  __int64 v69; // [rsp+28h] [rbp-80h]
  int v70; // [rsp+30h] [rbp-78h]
  int v71; // [rsp+38h] [rbp-70h]
  int v72; // [rsp+40h] [rbp-68h]
  void *v73; // [rsp+48h] [rbp-60h]
  __int64 v74[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(unsigned int *)(a3 + 24);
  v68 = v10;
  v72 = v10;
  if ( (_DWORD)v11 )
  {
    v12 = 32;
    v13 = nullptr;
    v61 = 8 * v11 + 32;
    do
    {
      v30 = *(_QWORD *)(a3 + v12);
      v31 = *(_QWORD *)(a4 + v12);
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v32 = *(_QWORD **)(a1 + 56);
      if ( v32 )
      {
        v33 = *((_DWORD *)v32 - 1);
        if ( v33 == *((_DWORD *)v32 - 2) )
        {
          v34 = (3 * v33 + 1) >> 1;
          v35 = 8 * v34 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v74, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = (3 * v33 + 1) >> 1;
          v36 = (unsigned int *)sub_186B300(v32 - 1, v35);
          v37 = v36[1];
          v32 = v36 + 2;
          *(_QWORD *)(a1 + 56) = v36 + 2;
          *v36 = v63;
          LODWORD(v36) = v37;
          v16 = &v32[v37];
          v15 = (_DWORD)v36 + 1;
        }
        else
        {
          v14 = v33;
          v15 = v33 + 1;
          v16 = &v32[v14];
        }
      }
      else
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        v32 = v58 + 1;
        *v58 = 2;
        v15 = 1;
        *(_QWORD *)(a1 + 56) = v32;
        v16 = v32;
      }
      *v16 = v30;
      *((_DWORD *)v32 - 1) = v15;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v17 = *(_QWORD **)(a1 + 72);
      if ( v17 )
      {
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
        {
          v42 = (3 * v18 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v43 || v18 >= v42 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v74, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (3 * v18 + 1) >> 1;
          v44 = (unsigned int *)sub_186B300(v17 - 1, v43);
          v45 = v44[1];
          v17 = v44 + 2;
          *(_QWORD *)(a1 + 72) = v44 + 2;
          *v44 = v65;
          LODWORD(v44) = v45;
          v21 = &v17[v45];
          v20 = (_DWORD)v44 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v17[v19];
        }
      }
      else
      {
        v56 = (_QWORD *)sub_186B270(0x18u);
        v17 = v56 + 1;
        *v56 = 2;
        v20 = 1;
        *(_QWORD *)(a1 + 72) = v17;
        v21 = v17;
      }
      *v21 = v31;
      v22 = *(_QWORD *)(a1 + 32);
      *((_DWORD *)v17 - 1) = v20;
      v23 = sub_15D1F10(v30);
      v24 = *(unsigned int *)(a1 + 80);
      *(_DWORD *)(a1 + 80) = v24 + 1;
      v25 = sub_15DB5C0(v22, v24, v23);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v13 )
      {
        v27 = *((_DWORD *)v13 - 1);
        if ( v27 == *((_DWORD *)v13 - 2) )
        {
          v38 = (3 * v27 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v39 || v27 >= v38 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v74, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v74);
            sub_233E40((__int64)v74);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (3 * v27 + 1) >> 1;
          v40 = (unsigned int *)sub_186B300(v13 - 1, v39);
          v13 = v40 + 2;
          *v40 = v64;
          v41 = v40[1];
          LODWORD(v11) = v41;
          v29 = &v13[v41];
          LODWORD(v11) = v11 + 1;
        }
        else
        {
          v28 = v27;
          LODWORD(v11) = v27 + 1;
          v29 = &v13[v28];
        }
      }
      else
      {
        v57 = (_QWORD *)sub_186B270(0x18u);
        v13 = v57 + 1;
        *v57 = 2;
        LODWORD(v11) = 1;
        v29 = v57 + 1;
      }
      *v29 = v26;
      v12 += 8;
      *((_DWORD *)v13 - 1) = v11;
    }
    while ( v61 != v12 );
    v46 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    LODWORD(v46) = v10;
    v13 = nullptr;
  }
  v47 = sub_15DC610(v46, *(_QWORD *)(a3 + 16), v11, (int)v13, a5, a6, v59, a4, v61, v62, a2, v68, v70, v71, v72, v73);
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v49 = *v67;
  if ( *v67 )
  {
    v50 = v67[1];
    v51 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v51 )
      sub_15D7BC0(v50, v49);
  }
  result = (__int64)v67;
  *v67 = v48;
  if ( v13 )
  {
    v53 = v13;
    v54 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 < v54 )
    {
      do
      {
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 )
          {
            v51 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v51 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v54 )
            return sub_186B220(v13 - 1);
        }
        ++v53;
        sub_15D7BC0(v69, v55);
      }
      while ( (unsigned __int64)v53 < v54 );
    }
    return sub_186B220(v13 - 1);
  }
  return result;
}

