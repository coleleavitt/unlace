__int64 __fastcall sub_695B60(__int64 a1, unsigned int a2, _QWORD *a3, __m128 a4)
{
  _QWORD *v6; // rbx
  __int64 (*v7)(void); // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 *v12; // r8
  bool v13; // al
  char v14; // r9
  __int64 *v15; // r11
  __int64 v16; // r8
  unsigned int i; // r15d
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64); // rax
  _QWORD *v22; // r15
  __int64 v23; // r14
  int v24; // eax
  unsigned int j; // r13d
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 (__fastcall *v28)(__int64, unsigned int); // rax
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64); // rax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r8
  size_t v36; // r9
  size_t v37; // rsi
  unsigned int *v38; // rbx
  _QWORD *v39; // r15
  int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 (__fastcall *v44)(__int64, unsigned int); // rax
  __int64 v45; // rsi
  int v46; // edx
  __int64 (__fastcall *v47)(__int64, unsigned int); // rax
  __int64 v48; // rsi
  __int64 (__fastcall *v49)(__int64); // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  size_t v54; // r9
  void *v55; // rbx
  _Unwind_Exception *v57; // [rsp+0h] [rbp-70h]
  __int64 v58; // [rsp+8h] [rbp-68h]
  __int64 (__fastcall *v59)(__int64); // [rsp+10h] [rbp-60h]
  unsigned int *v60; // [rsp+18h] [rbp-58h]
  _DWORD *v61; // [rsp+18h] [rbp-58h]
  unsigned int v62; // [rsp+18h] [rbp-58h]
  __int64 v63; // [rsp+20h] [rbp-50h]
  __int64 v64; // [rsp+28h] [rbp-48h] BYREF
  void *ptr; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v66[7]; // [rsp+38h] [rbp-38h] BYREF

  v6 = a3;
  if ( a2 )
  {
    v12 = a3;
    do
    {
      v13 = sub_68D010(*v12);
      *(_BYTE *)(a1 + 4544) = v13 & v14;
    }
    while ( v15 != v12 );
    v59 = sub_68D6F0;
  }
  else
  {
    v59 = sub_68D6F0;
    v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 248LL);
    if ( (char *)v7 == (char *)sub_68D6F0 )
    {
      v8 = *(_QWORD *)(a1 + 4424);
      if ( !v8 )
      {
LABEL_6:
        v10 = *(_QWORD *)(a1 + 4552);
        if ( !v10 )
          return 1;
        *(_DWORD *)(v10 - 4) = 0;
        return 1;
      }
      v9 = *(_DWORD *)(v8 - 4);
    }
    else
    {
      v9 = v7();
    }
    if ( !v9 )
      goto LABEL_6;
  }
  v16 = *(_QWORD *)a1;
  for ( i = 0; ; ++i )
  {
    v21 = *(__int64 (__fastcall **)(__int64))(v16 + 248);
    if ( v21 == sub_68D6F0 )
      break;
    if ( i >= (unsigned int)v21(a1) )
      goto LABEL_20;
LABEL_15:
    v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 256LL);
    if ( v19 == sub_68D710 )
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 4424) + 8LL * i);
    else
      v20 = v19(a1, i);
    *(_BYTE *)(a1 + 4544) &= sub_68D010(v20);
  }
  v18 = *(_QWORD *)(a1 + 4424);
  if ( v18 && i < *(_DWORD *)(v18 - 4) )
    goto LABEL_15;
LABEL_20:
  if ( *(_BYTE *)(a1 + 4544) )
  {
    ptr = *(void **)(a1 + 8);
    if ( a2 )
    {
      v22 = &v6[a2];
      v23 = *v6;
      if ( *v6 )
        ++*(_DWORD *)(v23 + 8);
      v60 = nullptr;
LABEL_25:
      v66[0] = v60;
      sub_23A6F0(v66);
      v60 = v66[0];
      v24 = *(v66[0] - 1);
      while ( 1 )
      {
        ++v6;
        *(_QWORD *)&v60[2 * v24] = v23;
        *(v60 - 1) = v24 + 1;
        if ( v22 == v6 )
          break;
        v23 = *v6;
        if ( *v6 )
          ++*(_DWORD *)(v23 + 8);
        v24 = *(v60 - 1);
        if ( v24 == *(v60 - 2) )
          goto LABEL_25;
      }
    }
    else
    {
      v60 = nullptr;
    }
    for ( j = 0; ; ++j )
    {
      v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL);
      if ( v30 == sub_68D6F0 )
      {
        v26 = *(_QWORD *)(a1 + 4424);
        if ( !v26 )
          break;
        v27 = *(_DWORD *)(v26 - 4);
      }
      else
      {
        v27 = v30(a1);
      }
      if ( j >= v27 )
        break;
      v28 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 256LL);
      if ( v28 == sub_68D710 )
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 4424) + 8LL * j);
      else
        v29 = v28(a1, j);
      v64 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v66[0] = v60;
      sub_68D130(v66, &v64);
      v60 = v66[0];
    }
    sub_786C50(a1 + 4376, *(_QWORD *)(a1 + 8), a1 + 4392, a1 + 96, a1 + 4480, a1 + 4840, *(unsigned __int8 *)(a1 + 385));
    if ( v60 )
    {
      sub_787740(a1 + 4376, *(v60 - 1), (_DWORD)v60, v31, v32, v33);
      v37 = *(v60 - 1);
      v38 = v60;
    }
    else
    {
      sub_787740(a1 + 4376, 0, 0, v31, v32, v33);
      v38 = nullptr;
      v37 = 0;
    }
    sub_692D40(a1, v37, (__int64)v38, v34, v35, v36);
    v66[0] = v38;
    sub_2334C0((__int64 *)&ptr);
    return 1;
  }
  else
  {
    v61 = (_DWORD *)sub_186B270(0x80u);
    sub_ED29A0(v61, *(_QWORD *)(a1 + 8), 1, 1);
    ++v61[8];
    ptr = v61;
    if ( a2 )
    {
      v39 = v6;
      while ( 1 )
      {
        v40 = sub_15D3210(*(_QWORD *)(a1 + 8), *v39);
        sub_EDBA20((int)v61, *v39++, v40, v57, v58, (int)v59, (__int64)v61, v63);
        if ( &v6[a2] == v39 )
          break;
        v61 = ptr;
      }
    }
    for ( LODWORD(v61) = 0; ; LODWORD(v61) = (_DWORD)v61 + 1 )
    {
      v49 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL);
      if ( v49 == v59 )
      {
        v41 = *(_QWORD *)(a1 + 4424);
        if ( !v41 )
          break;
        v42 = *(_DWORD *)(v41 - 4);
      }
      else
      {
        v42 = v49(a1);
      }
      if ( (unsigned int)v61 >= v42 )
        break;
      v43 = *(_QWORD *)(a1 + 8);
      v44 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 256LL);
      if ( v44 == sub_68D710 )
      {
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 4424) + 8LL * (unsigned int)v61);
      }
      else
      {
        v58 = *(_QWORD *)(a1 + 8);
        v51 = v44(a1, (unsigned int)v61);
        v43 = v58;
        v45 = v51;
      }
      v46 = sub_15D3210(v43, v45);
      v47 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 256LL);
      if ( v47 == sub_68D710 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 4424) + 8LL * (unsigned int)v61);
      }
      else
      {
        LODWORD(v58) = v46;
        v50 = v47(a1, (unsigned int)v61);
        v46 = v58;
        LODWORD(v48) = v50;
      }
      sub_EDBA20((int)ptr, v48, v46, v57, v58, (int)v59, (__int64)v61, v63);
    }
    result = sub_691DA0(a1, (__int64)&ptr, a4);
    if ( (_DWORD)result == 1 )
    {
      sub_692D40(a1, a2, (__int64)v6, v52, v53, v54);
      result = 1;
    }
    v55 = ptr;
    if ( ptr )
    {
      if ( (*((_DWORD *)ptr + 8))-- == 1 )
      {
        v62 = result;
        sub_ED44E0(v55);
        sub_186B220(v55);
        return v62;
      }
    }
  }
  return result;
}

