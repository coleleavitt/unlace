__int64 __fastcall sub_A677B0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  _QWORD *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // ebp
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int v37; // r12d
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rax
  char **v43; // rbp
  void *v44; // [rsp+0h] [rbp-128h]
  _QWORD *v45; // [rsp+8h] [rbp-120h]
  unsigned int v46; // [rsp+10h] [rbp-118h]
  __int64 v47; // [rsp+28h] [rbp-100h] BYREF
  int v48[2]; // [rsp+30h] [rbp-F8h] BYREF
  char v49[8]; // [rsp+38h] [rbp-F0h]
  __int64 v50; // [rsp+40h] [rbp-E8h]
  __int64 v51; // [rsp+48h] [rbp-E0h]
  __int64 v52[4]; // [rsp+50h] [rbp-D8h] BYREF
  char v53[32]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+90h] [rbp-98h] BYREF
  char v55[8]; // [rsp+98h] [rbp-90h]
  int v56; // [rsp+A0h] [rbp-88h]
  char v57; // [rsp+A4h] [rbp-84h]
  __int64 v58; // [rsp+A8h] [rbp-80h]

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
          sub_A67730((__int64 *)a1, (unsigned int **)a2, a3, a4, a5, a6);
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
    sub_98B3B0(&v54, "malformed atomic constraint");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v54);
    sub_233E40((__int64)&v54);
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
  v21 = sub_A66A90((__int64 *)a1, (unsigned int *)v10, (__int64)v13, a4, a5, a6, (__int64)v44);
  if ( v21 == -1 )
    return 0;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(_QWORD *)(v22 + 8832);
  if ( !v23 || (v24 = *a2, (unsigned int)v24 >= *(_DWORD *)(v23 - 4)) || *(_DWORD *)(v23 + 4 * v24) == 0x7FFFFFFF )
  {
    v25 = sub_B67520(v22, a2);
    v26 = v25;
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v25, *(_DWORD *)(a1 + 8));
    *(_QWORD *)v48 = 0;
    *(_QWORD *)v49 = 0;
    v50 = 1;
    v51 = 0;
    if ( !(unsigned __int8)sub_1666AE0(a1 + 472, v20, v48, v52) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1319);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v21 + 3) & 0x40) != 0
      && ((v50 & 0x100000000LL) != 0 || (_DWORD)v50 != 1) )
    {
      if ( v8 )
        sub_992C20((__int64)&v54, (__int64)v48);
      else
        sub_992CA0((__int64)&v54, (__int64)v48);
      v27 = v54;
      LODWORD(v54) = v48[0];
      v48[0] = v27;
      v28 = *(_QWORD *)v55;
      *(_QWORD *)v55 = *(_QWORD *)v49;
      *(_QWORD *)v49 = v28;
      v29 = BYTE4(v54) & 1;
      LOBYTE(v28) = v48[1] & 0xFC | BYTE4(v54) & 2;
      BYTE4(v54) = v48[1] & 1 | BYTE4(v54) & 0xFC | v48[1] & 2;
      LOBYTE(v48[1]) = v29 | v28;
      LODWORD(v28) = v56;
      v56 = v50;
      LODWORD(v50) = v28;
      v30 = v58;
      v58 = v51;
      v51 = v30;
      LOBYTE(v30) = v57 & 1 | BYTE4(v50) & 0xFC | v57 & 2;
      v57 = BYTE4(v50) & 1 | v57 & 0xFC | BYTE4(v50) & 2;
      BYTE4(v50) = v30;
      sub_25A130((char *)&v54);
    }
    sub_894960((__int64)v52, (__int64)v48);
    sub_9D4F70((__int64)&v54, (__int64)v52);
    sub_25A130(v53);
    sub_25A130((char *)v52);
    v31 = sub_186B270(0xE0u);
    sub_9D54E0(v31, v26, v21, (__int64)&v54, v8);
    v47 = v31;
    sub_9F91D0((_QWORD *)a1, v31);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 768) + 4LL * v21);
    sub_98CB40((_QWORD *)(*(_QWORD *)(a1 + 760) + 8LL * v21), &v47);
    sub_98CB40((_QWORD *)(a1 + 792), &v47);
    v32 = *(_QWORD **)(a1 + 776);
    if ( v32 )
    {
      v33 = *((_DWORD *)v32 - 1);
      v46 = v33;
      if ( (unsigned int)v26 < v33 )
      {
LABEL_39:
        v32[v26] = v31;
        sub_2A6060((__int64)&v54);
        sub_25A130((char *)v48);
        return 1;
      }
      v34 = v26 + 1;
      if ( v33 >= (int)v26 + 1 )
      {
        *((_DWORD *)v32 - 1) = v34;
        goto LABEL_39;
      }
    }
    else
    {
      v34 = v26 + 1;
      if ( (_DWORD)v26 == -1 )
        goto LABEL_39;
      v42 = (_QWORD *)sub_186B270(0x18u);
      v32 = v42 + 1;
      *v42 = 2;
      *(_QWORD *)(a1 + 776) = v42 + 1;
      v46 = 0;
    }
    while ( 1 )
    {
      v39 = *((_DWORD *)v32 - 2);
      if ( v39 >= v34 )
        break;
      v35 = (3 * v39 + 1) >> 1;
      v36 = 8 * v35 + 8;
      v37 = v35;
      if ( 8 * v39 + 8 >= (unsigned int)v36 || v39 >= v35 )
      {
        v43 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v52, "Overflow encountered when expanding vector");
        *v43 = (char *)off_1C63128;
        sub_2333C0(v43 + 1, v52);
        sub_233E40((__int64)v52);
        __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v32 - 1, v36);
      v32 = v38 + 2;
      *v38 = v37;
      *(_QWORD *)(a1 + 776) = v38 + 2;
    }
    *((_DWORD *)v32 - 1) = v34;
    v40 = 8LL * v34;
    v41 = 8LL * v46;
    if ( v41 != v40 )
    {
      v45 = v32;
      memset(&v32[(unsigned __int64)v41 / 8], 0, v40 - v41);
      v32 = v45;
    }
    goto LABEL_39;
  }
  return 1;
}

