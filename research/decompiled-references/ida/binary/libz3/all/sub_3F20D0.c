__int64 __fastcall sub_3F20D0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int *v21; // r15
  unsigned int v22; // r14d
  _DWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned int *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rbx
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 result; // rax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rax
  char **exception; // r14
  __int64 v46; // [rsp+18h] [rbp-118h]
  __int64 v47; // [rsp+20h] [rbp-110h]
  __int64 v48; // [rsp+28h] [rbp-108h]
  __int64 v49; // [rsp+30h] [rbp-100h]
  void *ptr; // [rsp+38h] [rbp-F8h]
  void *ptra; // [rsp+38h] [rbp-F8h]
  __int64 v52; // [rsp+40h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+48h] [rbp-E8h]
  __int64 v54; // [rsp+50h] [rbp-E0h] BYREF
  unsigned int *v55; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-C8h]
  char v58[8]; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+88h] [rbp-A8h]
  __int64 v60; // [rsp+90h] [rbp-A0h]
  __int64 v61; // [rsp+98h] [rbp-98h]
  __int64 v62; // [rsp+A0h] [rbp-90h]
  __int64 v63; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-78h]
  __int64 v65; // [rsp+C0h] [rbp-70h]
  __int64 v66; // [rsp+C8h] [rbp-68h]
  __int64 v67; // [rsp+D0h] [rbp-60h]
  __int64 v68; // [rsp+D8h] [rbp-58h]
  __int64 v69; // [rsp+E0h] [rbp-50h]
  __int64 v70; // [rsp+E8h] [rbp-48h]

  sub_3E6180(v58, a2, *a1);
  v7 = *a1;
  v53 = 0;
  v52 = v7;
  sub_3E6B60(v58, &v52, a3, a4);
  v8 = v53;
  v9 = 0;
  if ( v53 )
  {
    while ( v9 < *(_DWORD *)(v8 - 4) )
    {
      v13 = *(_QWORD *)(v8 + 8LL * v9);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v14 = (_QWORD *)a1[54];
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 == *((_DWORD *)v14 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v56, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v56);
            sub_233E40((__int64)&v56);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v14 - 1, v17);
          v19 = v18[1];
          v14 = v18 + 2;
          *v18 = v16;
          a1[54] = (__int64)(v18 + 2);
          LODWORD(v18) = v19;
          v12 = &v14[v19];
          v11 = (_DWORD)v18 + 1;
        }
        else
        {
          v10 = v15;
          v11 = v15 + 1;
          v12 = &v14[v10];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x18u);
        v14 = v44 + 1;
        *v44 = 2;
        v11 = 1;
        a1[54] = (__int64)v14;
        v12 = v14;
      }
      *v12 = v13;
      *((_DWORD *)v14 - 1) = v11;
      ++v9;
    }
  }
  v46 = *a1;
  v54 = *a1;
  v49 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  v20 = v64;
  if ( v64 )
  {
    v21 = nullptr;
    v22 = 0;
    do
    {
      if ( v22 >= *(_DWORD *)(v20 - 4) )
        break;
      v23 = *(_DWORD **)(v20 + 8LL * v22);
      ptr = v23;
      if ( v23 )
        ++v23[2];
      if ( v21 )
      {
        v24 = *(v21 - 1);
        if ( v24 != *(v21 - 2) )
          continue;
      }
      v55 = v21;
      sub_23A6F0(&v55);
      v21 = v55;
      v20 = v64;
      v24 = *(v55 - 1);
      ++v22;
      *(_QWORD *)&v21[2 * v24] = ptr;
      *(v21 - 1) = v24 + 1;
    }
    while ( v20 );
    v25 = *a1;
  }
  else
  {
    v25 = v46;
    v21 = nullptr;
  }
  v56 = 0;
  v57 = v25;
  if ( v8 )
  {
    v26 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v26 )
    {
      v27 = v21;
      v47 = v8 + 8 * v26;
      do
      {
        v28 = sub_186B270(0x18u);
        v29 = a1[2];
        ptra = (void *)v28;
        v48 = *a1;
        *(_QWORD *)(v28 + 8) = v49;
        *(_QWORD *)v28 = 0x100000002LL;
        v30 = *(_QWORD *)v27;
        *(_DWORD *)(v28 + 4) = 2;
        *(_QWORD *)(v28 + 16) = v30;
        v31 = sub_15DCAD0(v29, (int)v28 + 8, 0);
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        sub_3FA320(a1 + 55, a1[3], v31, &v56, 1);
        sub_135F9B0(a1[3], *(_QWORD *)(*(_QWORD *)v8 + 16LL), v56);
        if ( v31 )
        {
          v32 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v32 )
            sub_15D7BC0(v48, v31);
        }
        v8 += 8;
        v27 += 2;
        sub_186B220(ptra);
      }
      while ( v47 != v8 );
      v8 = v56;
      v25 = v57;
    }
    else
    {
      v8 = 0;
    }
  }
  sub_3E5D20(v8, v25);
  v55 = v21;
  sub_2334C0(&v54);
  sub_3E5D20(v49, v46);
  sub_2B4F40(&v52);
  v33 = v69;
  if ( v69 )
  {
    v34 = v70;
    v32 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v34, v33);
  }
  v35 = v67;
  if ( v67 )
  {
    v36 = v68;
    v32 = (*(_DWORD *)(v67 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v36, v35);
  }
  v37 = v65;
  if ( v65 )
  {
    v38 = v66;
    v32 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v38, v37);
  }
  result = sub_2334C0(&v63);
  v40 = v61;
  if ( v61 )
  {
    v41 = v62;
    v32 = (*(_DWORD *)(v61 + 8))-- == 1;
    if ( v32 )
      result = sub_15D7BC0(v41, v40);
  }
  v42 = v59;
  if ( v59 )
  {
    v43 = v60;
    v32 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v32 )
      return sub_15D7BC0(v43, v42);
  }
  return result;
}

