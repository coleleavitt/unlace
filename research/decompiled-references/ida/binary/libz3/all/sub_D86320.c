__int64 __fastcall sub_D86320(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  int v19; // edx
  __int64 v20; // rbp
  _QWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 *v43; // rdx
  unsigned int v44; // r12d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r13
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  _QWORD *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned int v58; // ebp
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned int v64; // ebp
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rax
  unsigned int v69; // r14d
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rdi
  _QWORD *v74; // rdx
  char **v75; // rbp
  char **exception; // rbp
  __int64 v77; // [rsp+10h] [rbp-58h] BYREF
  __int64 v78; // [rsp+18h] [rbp-50h]
  __int64 v79[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_D82AC0(*(_QWORD **)(a1 + 144), a2, (__int64 *)(a1 + 480), (__int64 *)(a1 + 496)) )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( !v4
      || (v5 = *(_DWORD *)(a2 + 16), v6 = *(_DWORD *)(v4 - 4), v5 >= v6)
      || (v12 = v6 - v5 - 1, (v13 = *(_QWORD *)(v4 + 8 * v12)) == 0) )
    {
      v7 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(a2 + 8);
      if ( v7 )
      {
        v8 = *((_DWORD *)v7 - 1);
        if ( v8 == *((_DWORD *)v7 - 2) )
        {
          v44 = (3 * v8 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v45 || v8 >= v44 )
            goto LABEL_65;
          v46 = (unsigned int *)sub_186B300(v7 - 1, v45);
          v47 = v46[1];
          v7 = v46 + 2;
          *v46 = v44;
          *(_QWORD *)(a1 + 56) = v46 + 2;
          LODWORD(v46) = v47;
          v11 = &v7[v47];
          result = (unsigned int)((_DWORD)v46 + 1);
        }
        else
        {
          v9 = v8;
          result = v8 + 1;
          v11 = &v7[v9];
        }
      }
      else
      {
        v62 = (_QWORD *)sub_186B270(0x18u);
        v7 = v62 + 1;
        *v62 = 2;
        result = 1;
        *(_QWORD *)(a1 + 56) = v7;
        v11 = v7;
      }
      *v11 = a2;
      *((_DWORD *)v7 - 1) = result;
      return result;
    }
    if ( !*(_WORD *)(v13 + 4) && (*(_BYTE *)(v13 + 30) & 1) != 0
      || (v34 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4 * v12), v34 == v6) )
    {
      v14 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v13 + 8);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 == *((_DWORD *)v14 - 2) )
        {
          v58 = (3 * v15 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v59 || v15 >= v58 )
            goto LABEL_65;
          v60 = (unsigned int *)sub_186B300(v14 - 1, v59);
          v61 = v60[1];
          v14 = v60 + 2;
          *v60 = v58;
          *(_QWORD *)(a1 + 56) = v60 + 2;
          LODWORD(v60) = v61;
          v18 = &v14[v61];
          v17 = (_DWORD)v60 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v14[v16];
        }
      }
      else
      {
        v68 = (_QWORD *)sub_186B270(0x18u);
        v14 = v68 + 1;
        *v68 = 2;
        v17 = 1;
        *(_QWORD *)(a1 + 56) = v14;
        v18 = v14;
      }
      *v18 = v13;
      *((_DWORD *)v14 - 1) = v17;
LABEL_16:
      result = *(_QWORD *)(a1 + 40);
      if ( result )
      {
        v19 = *(_DWORD *)(result - 4);
        if ( v19 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
      }
      return result;
    }
    v35 = v6 - v34;
    v36 = v35;
    v37 = sub_1680FB0(*(_QWORD *)(a1 + 32), v13, v35);
    v38 = v37;
    if ( !v37 )
    {
      v48 = *(_QWORD *)(a1 + 8);
      v77 = 0;
      v78 = v48;
      sub_1585D20(a1 + 168, v13, 0, v36, 0, &v77);
      v49 = v77;
      if ( v77 )
        ++*(_DWORD *)(v77 + 8);
      v50 = *(_QWORD **)(a1 + 56);
      if ( v50 )
      {
        v51 = *((_DWORD *)v50 - 1);
        if ( v51 == *((_DWORD *)v50 - 2) )
        {
          v69 = (3 * v51 + 1) >> 1;
          v70 = 8 * v69 + 8;
          if ( 8 * v51 + 8 >= v70 || v51 >= v69 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v79, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v79);
            sub_233E40((__int64)v79);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int *)sub_186B300(v50 - 1, v70);
          v72 = v71[1];
          v50 = v71 + 2;
          *v71 = v69;
          *(_QWORD *)(a1 + 56) = v71 + 2;
          LODWORD(v71) = v72;
          v54 = &v50[v72];
          v53 = (_DWORD)v71 + 1;
        }
        else
        {
          v52 = v51;
          v53 = v51 + 1;
          v54 = &v50[v52];
        }
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x18u);
        *v74 = 2;
        v53 = 1;
        v50 = v74 + 1;
        *(_QWORD *)(a1 + 56) = v50;
        v54 = v50;
      }
      *v54 = v49;
      v55 = v77;
      *((_DWORD *)v50 - 1) = v53;
      sub_1584390(a1, v13, v36, v55);
      v56 = v77;
      if ( v77 )
      {
        v57 = v78;
        v29 = (*(_DWORD *)(v77 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v57, v56);
      }
      goto LABEL_16;
    }
    v39 = *(__int64 **)(a1 + 56);
    ++*(_DWORD *)(v37 + 8);
    if ( !v39 )
    {
      v73 = (_QWORD *)sub_186B270(0x18u);
      *v73 = 2;
      v42 = 1;
      v39 = v73 + 1;
      *(_QWORD *)(a1 + 56) = v39;
      v43 = v39;
      goto LABEL_39;
    }
    v40 = *((_DWORD *)v39 - 1);
    if ( v40 != *((_DWORD *)v39 - 2) )
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = &v39[v41];
LABEL_39:
      *v43 = v38;
      *((_DWORD *)v39 - 1) = v42;
      goto LABEL_16;
    }
    v64 = (3 * v40 + 1) >> 1;
    v65 = 8 * v64 + 8;
    if ( 8 * v40 + 8 < (unsigned int)v65 && v40 < v64 )
    {
      v66 = (unsigned int *)sub_186B300(v39 - 1, v65);
      v67 = v66[1];
      v39 = (__int64 *)(v66 + 2);
      *v66 = v64;
      *(_QWORD *)(a1 + 56) = v66 + 2;
      LODWORD(v66) = v67;
      v43 = &v39[v67];
      v42 = (_DWORD)v66 + 1;
      goto LABEL_39;
    }
LABEL_65:
    v75 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v79, "Overflow encountered when expanding vector");
    *v75 = (char *)off_1C63128;
    sub_2333C0(v75 + 1, v79);
    sub_233E40((__int64)v79);
    __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v20 = *(_QWORD *)(a1 + 480);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *(_QWORD **)(a1 + 56);
  if ( v21 )
  {
    v22 = *((_DWORD *)v21 - 1);
    if ( v22 == *((_DWORD *)v21 - 2) )
    {
      v30 = (3 * v22 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v31 || v22 >= v30 )
        goto LABEL_65;
      v32 = (unsigned int *)sub_186B300(v21 - 1, v31);
      v33 = v32[1];
      v21 = v32 + 2;
      *v32 = v30;
      *(_QWORD *)(a1 + 56) = v32 + 2;
      LODWORD(v32) = v33;
      v25 = &v21[v33];
      v24 = (_DWORD)v32 + 1;
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
    v63 = (_QWORD *)sub_186B270(0x18u);
    v21 = v63 + 1;
    *v63 = 2;
    v24 = 1;
    *(_QWORD *)(a1 + 56) = v21;
    v25 = v21;
  }
  *v25 = v20;
  *((_DWORD *)v21 - 1) = v24;
  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    v26 = *(_DWORD *)(result - 4);
    if ( v26 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v26 - 1) + 8) |= 2u;
  }
  v27 = *(_QWORD *)(a1 + 480);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 488);
    v29 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v29 )
      result = sub_15D7BC0(v28, v27);
  }
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

