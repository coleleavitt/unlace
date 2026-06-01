__int64 __fastcall sub_71F020(__int64 a1, int a2, __int64 a3, void *a4)
{
  unsigned int v4; // r12d
  int v8; // eax
  _DWORD *v9; // rdx
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // r12
  __int64 v15; // r14
  int v16; // eax
  _DWORD *v17; // rdx
  __int64 v18; // r13
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rax
  int v25; // r8d
  int v26; // r9d
  _QWORD *v27; // r13
  unsigned int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 *v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rsi
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  char **exception; // rbp
  void *v45; // [rsp+0h] [rbp-B8h]
  __int64 v46; // [rsp+8h] [rbp-B0h]
  int v47; // [rsp+10h] [rbp-A8h]
  __int64 *v48; // [rsp+10h] [rbp-A8h]
  int v49; // [rsp+18h] [rbp-A0h]
  int *v50; // [rsp+18h] [rbp-A0h]
  int v51; // [rsp+20h] [rbp-98h]
  __int64 v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+28h] [rbp-90h]
  char v54; // [rsp+28h] [rbp-90h]
  unsigned int v55; // [rsp+2Ch] [rbp-8Ch]
  int v56[2]; // [rsp+30h] [rbp-88h]
  int v57; // [rsp+38h] [rbp-80h]
  int v58; // [rsp+40h] [rbp-78h]
  int v59; // [rsp+40h] [rbp-78h]
  void *ptr; // [rsp+48h] [rbp-70h] BYREF
  __int64 v61; // [rsp+50h] [rbp-68h]
  int v62[2]; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v8 = sub_15F0200(*(_QWORD *)(a1 + 96));
  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
    return 0;
  if ( v8 != *v9 )
    return 0;
  if ( v9[1] )
    return 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104));
  if ( !v10 )
  {
    return 0;
  }
  else
  {
    v11 = 0;
    v12 = v10;
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 72LL))(*(_QWORD *)(a1 + 104), v11);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 40LL);
      v16 = sub_15F0200(*(_QWORD *)(a1 + 96));
      v17 = *(_DWORD **)(v15 + 24);
      if ( (!v17 || v16 != *v17 || v17[1]) && v15 != *(_QWORD *)(*(_QWORD *)(a1 + 80) + 840LL) )
      {
        v13 = sub_168D740(v14 + 32, a3);
        if ( (_BYTE)v13 )
          break;
      }
      if ( v12 == ++v11 )
        return 0;
    }
    v18 = *(_QWORD *)(a3 + 16);
    v4 = v13;
    v47 = sub_15FB1F0(*(_QWORD *)(a1 + 96), v18);
    v19 = sub_15F0A30(*(_QWORD *)(a1 + 96), v18);
    v61 = *(_QWORD *)(a1 + 80);
    v22 = sub_15DC610(v61, v19, 1, (int)&ptr, v20, v21, (int)a4, a2, v47, v49, v51, v53, v61, (int)&ptr, v58, a4);
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v24 = (_QWORD *)sub_186B270(0x18u);
    v24[1] = v23;
    v27 = v24 + 1;
    v28 = 0;
    *v24 = 0x100000002LL;
    v50 = v62;
    v29 = *v48;
    if ( *v48 )
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)(a1 + 80);
        if ( v28 >= *(_DWORD *)(v29 - 4) )
          break;
        v31 = *(_QWORD *)(v29 + 8LL * v28);
        *(_QWORD *)v62 = v45;
        sub_15DC610(v30, v31, 1, (int)v50, v25, v26, (int)v45, v46, (int)v48, (int)v50, v52, v54, v56[0], v57, v59, ptr);
        v32 = sub_15E1B70(*(_QWORD *)(a1 + 80));
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v34 = *((_DWORD *)v27 - 1);
        if ( v34 == *((_DWORD *)v27 - 2) )
        {
          v40 = (3 * v34 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v41 || v34 >= v40 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v50, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = (3 * v34 + 1) >> 1;
          v52 = v32;
          v42 = (unsigned int *)sub_186B300(v27 - 1, v41);
          v25 = v55;
          v34 = v42[1];
          v27 = v42 + 2;
          v33 = v52;
          *v42 = v55;
        }
        ++v28;
        v27[v34] = v33;
        *((_DWORD *)v27 - 1) = v34 + 1;
        v29 = *v48;
        if ( !*v48 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v30 = *(_QWORD *)(a1 + 80);
    }
    v35 = sub_15E1AF0(v30);
    sub_15B9070(a1 + 8, v46, v35, 0);
    v36 = v27;
    v37 = (unsigned __int64)&v27[*((unsigned int *)v27 - 1)];
    if ( (unsigned __int64)v27 < v37 )
    {
      do
      {
        while ( 1 )
        {
          v38 = *v36;
          if ( *v36 )
          {
            if ( (*(_DWORD *)(v38 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v36 >= v37 )
            goto LABEL_32;
        }
        ++v36;
        sub_15D7BC0(*(_QWORD *)v56, v38);
      }
      while ( (unsigned __int64)v36 < v37 );
    }
LABEL_32:
    sub_186B220(v27 - 1);
  }
  return v4;
}

