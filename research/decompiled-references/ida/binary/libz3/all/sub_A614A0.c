__int64 __fastcall sub_A614A0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BOOL4 v8; // r12d
  _DWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  _DWORD *v13; // rdx
  char **exception; // rbx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // ebp
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r13
  int v27; // edx
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // r14
  _DWORD *v32; // rax
  _QWORD *v33; // r15
  unsigned int v34; // eax
  unsigned int v35; // ebp
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int v38; // r12d
  unsigned int *v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // rax
  char **v44; // rbp
  void *v45; // [rsp+0h] [rbp-E8h]
  unsigned int v46; // [rsp+14h] [rbp-D4h]
  __int64 v47; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  __int64 v51; // [rsp+48h] [rbp-A0h]
  __int64 v52[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-78h] BYREF
  __int64 v54; // [rsp+78h] [rbp-70h]
  int v55; // [rsp+80h] [rbp-68h]
  char v56; // [rsp+84h] [rbp-64h]
  __int64 v57; // [rsp+88h] [rbp-60h]
  char v58[88]; // [rsp+90h] [rbp-58h] BYREF

  if ( *((_WORD *)a2 + 2) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 0;
    v9 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v9 )
    {
      if ( *v9 == 5 )
      {
        v15 = v9[1];
        v8 = v15 == 2;
        if ( v15 == 20 )
        {
          sub_A61420((__int64 *)a1, (unsigned int **)a2, a3, a4, a5, a6);
          v16 = *(_QWORD *)(a1 + 16);
          v17 = *(_QWORD *)(v16 + 8832);
          if ( !v17
            || (v18 = *a2, (unsigned int)v18 >= *(_DWORD *)(v17 - 4))
            || *(_DWORD *)(v17 + 4 * v18) == 0x7FFFFFFF )
          {
            v19 = sub_B67520(v16, a2);
            sub_8F1CE0(*(_QWORD *)(a1 + 16), v19, *(_DWORD *)(a1 + 8));
          }
          return 1;
        }
      }
    }
  }
  v10 = *((_QWORD *)a2 + 4);
  if ( *(_WORD *)(v10 + 4) )
    return 0;
  v11 = *((_QWORD *)a2 + 5);
  if ( *(_WORD *)(v11 + 4) )
    return 0;
  v13 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
  if ( !v13 || *v13 != 5 )
  {
LABEL_10:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v53, "malformed atomic constraint");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v53);
    sub_233E40((__int64)&v53);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v20 = *((_QWORD *)a2 + 5);
  if ( v13[1] == 18 && *(_DWORD *)(v11 + 24) == 1 )
  {
    v20 = *(_QWORD *)(v11 + 32);
    if ( *(_WORD *)(v20 + 4) )
    {
      v20 = *((_QWORD *)a2 + 5);
    }
    else
    {
      v13 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
      if ( !v13 || *v13 != 5 )
        goto LABEL_10;
    }
  }
  if ( v13[1] )
    goto LABEL_10;
  v21 = sub_A60780((__int64 *)a1, (unsigned int *)v10, (__int64)v13, a4, a5, a6, (__int64)v45);
  if ( v21 == -1 )
    return 0;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(_QWORD *)(v22 + 8832);
  if ( !v23 || (v24 = *a2, (unsigned int)v24 >= *(_DWORD *)(v23 - 4)) || *(_DWORD *)(v23 + 4 * v24) == 0x7FFFFFFF )
  {
    v25 = sub_B67520(v22, a2);
    v26 = v25;
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v25, *(_DWORD *)(a1 + 8));
    v48 = 0;
    v49 = 0;
    v50 = 1;
    v51 = 0;
    if ( !(unsigned __int8)sub_1666AE0(a1 + 408, v20, &v48, v52) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1319);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v21 + 3) & 0x40) != 0
      && ((v50 & 0x100000000LL) != 0 || (_DWORD)v50 != 1) )
    {
      if ( v8 )
        sub_992C20((__int64)&v53, (__int64)&v48);
      else
        sub_992CA0((__int64)&v53, (__int64)&v48);
      v27 = v53;
      LODWORD(v53) = v48;
      LODWORD(v48) = v27;
      v28 = v54;
      v54 = v49;
      v49 = v28;
      v29 = BYTE4(v53) & 1;
      LOBYTE(v28) = BYTE4(v48) & 0xFC | BYTE4(v53) & 2;
      BYTE4(v53) = BYTE4(v48) & 1 | BYTE4(v53) & 0xFC | BYTE4(v48) & 2;
      BYTE4(v48) = v29 | v28;
      LODWORD(v28) = v55;
      v55 = v50;
      LODWORD(v50) = v28;
      v30 = v57;
      v57 = v51;
      v51 = v30;
      LOBYTE(v30) = v56 & 1 | BYTE4(v50) & 0xFC | v56 & 2;
      v56 = BYTE4(v50) & 1 | v56 & 0xFC | BYTE4(v50) & 2;
      BYTE4(v50) = v30;
      sub_25A130((char *)&v53);
      sub_894960((__int64)&v53, (__int64)&v48);
    }
    else
    {
      sub_894960((__int64)&v53, (__int64)&v48);
    }
    v31 = sub_186B270(0xA0u);
    sub_998B30(v31, v26, v21, (__int64)&v53, v8);
    v47 = v31;
    sub_9CAFB0((_QWORD *)a1, v31);
    v32 = (_DWORD *)(*(_QWORD *)(a1 + 704) + 4LL * v21);
    ++*v32;
    sub_98CE40((_QWORD *)(*(_QWORD *)(a1 + 696) + 8LL * v21), &v47);
    sub_98CE40((_QWORD *)(a1 + 728), &v47);
    v33 = *(_QWORD **)(a1 + 712);
    if ( v33 )
    {
      v34 = *((_DWORD *)v33 - 1);
      v46 = v34;
      if ( (unsigned int)v26 < v34 )
      {
LABEL_39:
        v33[v26] = v31;
        sub_25A130(v58);
        sub_25A130((char *)&v53);
        sub_25A130((char *)&v48);
        return 1;
      }
      v35 = v26 + 1;
      if ( v34 >= (int)v26 + 1 )
      {
        *((_DWORD *)v33 - 1) = v35;
        goto LABEL_39;
      }
    }
    else
    {
      v35 = v26 + 1;
      if ( (_DWORD)v26 == -1 )
        goto LABEL_39;
      v43 = (_QWORD *)sub_186B270(0x18u);
      v33 = v43 + 1;
      *v43 = 2;
      *(_QWORD *)(a1 + 712) = v43 + 1;
      v46 = 0;
    }
    while ( 1 )
    {
      v40 = *((_DWORD *)v33 - 2);
      if ( v40 >= v35 )
        break;
      v36 = (3 * v40 + 1) >> 1;
      v37 = 8 * v36 + 8;
      v38 = v36;
      if ( 8 * v40 + 8 >= (unsigned int)v37 || v40 >= v36 )
      {
        v44 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v52, "Overflow encountered when expanding vector");
        *v44 = (char *)off_1C63128;
        sub_2333C0(v44 + 1, v52);
        sub_233E40((__int64)v52);
        __cxa_throw(v44, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v33 - 1, v37);
      v33 = v39 + 2;
      *v39 = v38;
      *(_QWORD *)(a1 + 712) = v39 + 2;
    }
    *((_DWORD *)v33 - 1) = v35;
    v41 = 8LL * v35;
    v42 = 8LL * v46;
    if ( v42 != v41 )
      memset(&v33[(unsigned __int64)v42 / 8], 0, v41 - v42);
    goto LABEL_39;
  }
  return 1;
}

