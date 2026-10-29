__int64 __fastcall Z3_optimize_check(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  char **exception; // rbx
  __int64 v6; // r12
  __int64 *v7; // rbx
  char v8; // al
  __int64 *v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned __int8 v16; // r13
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r14
  _QWORD *v21; // rax
  __int64 *v22; // rsi
  __int64 *v23; // r12
  _QWORD *v24; // rcx
  int i; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 *v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  int v36; // [rsp+18h] [rbp-110h]
  unsigned int v37; // [rsp+18h] [rbp-110h]
  char v38; // [rsp+1Fh] [rbp-109h]
  __int64 v39; // [rsp+20h] [rbp-108h]
  __int64 v40; // [rsp+50h] [rbp-D8h] BYREF
  char v41[8]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v42[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-B8h] BYREF
  __int64 *v44; // [rsp+78h] [rbp-B0h]
  __int64 v45[4]; // [rsp+80h] [rbp-A8h] BYREF
  int *v46; // [rsp+A0h] [rbp-88h] BYREF
  int v47; // [rsp+A8h] [rbp-80h]
  __int128 v48; // [rsp+B0h] [rbp-78h]
  __int128 v49; // [rsp+C0h] [rbp-68h]
  __int64 v50; // [rsp+D0h] [rbp-58h]
  __int16 v51; // [rsp+D8h] [rbp-50h]
  __int64 v52; // [rsp+E0h] [rbp-48h]

  v6 = a3;
  v7 = a4;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v38 = v8;
  if ( v8 )
    sub_2A06A0(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !(_DWORD)v6 )
  {
LABEL_11:
    v12 = *(_QWORD *)(a1 + 232);
    v51 = 0;
    v13 = *(unsigned int *)(a1 + 100);
    v52 = v12;
    v14 = *(_QWORD *)(a2 + 24);
    v47 = 0;
    v46 = &off_1C4C9C8;
    v50 = 0;
    v48 = 0;
    v49 = 0;
    v36 = sub_1859960(v14 + 288, "timeout", v13);
    v15 = sub_1859960(*(_QWORD *)(a2 + 24) + 288LL, "rlimit", *(unsigned int *)(a1 + 96));
    v16 = sub_1859610(*(_QWORD *)(a2 + 24) + 288LL, "ctrl_c", 1);
    sub_24FD10(&v40, a1, (__int64)&v46);
    sub_18086F0(v42, &v46, v16);
    sub_18561B0((unsigned int)v41, v36, (unsigned int)&v46, v17, v18, v19);
    v39 = *(_QWORD *)(a1 + 232);
    sub_1829790(v39, v15);
    v44 = nullptr;
    v43 = *(_QWORD *)(a1 + 232);
    if ( (_DWORD)v6 )
    {
      v20 = *v7;
      if ( *v7 )
        ++*(_DWORD *)(v20 + 8);
      v21 = (_QWORD *)sub_186B270(0x18u);
      v22 = v21 + 1;
      v23 = &v7[v6];
      v44 = v21 + 1;
      v24 = v21 + 1;
      *v21 = 2;
      for ( i = 1; ; i = (_DWORD)v34 + 1 )
      {
        ++v7;
        *v22 = v20;
        *((_DWORD *)v24 - 1) = i;
        if ( v23 == v7 )
          break;
        while ( 1 )
        {
          v20 = *v7;
          if ( *v7 )
            ++*(_DWORD *)(v20 + 8);
          v26 = *((_DWORD *)v24 - 1);
          if ( v26 == *((_DWORD *)v24 - 2) )
            break;
          ++v7;
          v24[v26] = v20;
          *((_DWORD *)v24 - 1) = v26 + 1;
          if ( v23 == v7 )
            goto LABEL_20;
        }
        v32 = (3 * v26 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v33 || v26 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v45, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v45);
          sub_233E40((__int64)v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (3 * v26 + 1) >> 1;
        v34 = (unsigned int *)sub_186B300(v24 - 1, v33);
        v35 = v34[1];
        v24 = v34 + 2;
        v44 = (__int64 *)(v34 + 2);
        *v34 = v37;
        LODWORD(v34) = v35;
        v22 = &v24[v35];
      }
    }
LABEL_20:
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a2 + 24) + 104LL))(*(_QWORD *)(a2 + 24), &v43);
    v28 = v44;
    v10 = v27;
    if ( v44 )
    {
      v29 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
      if ( (unsigned __int64)v44 >= v29 )
        goto LABEL_28;
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            if ( (*(_DWORD *)(v30 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v28 >= v29 )
            goto LABEL_27;
        }
        sub_15D7BC0(v43, v30);
        ++v28;
      }
      while ( (unsigned __int64)v28 < v29 );
LABEL_27:
      v28 = v44;
      if ( v44 )
LABEL_28:
        sub_186B220(v28 - 1);
    }
    sub_1829100(v39);
    sub_1856400(v41);
    sub_1808900(v42);
    sub_24E910(&v40);
    v46 = &off_1C4C9C8;
    if ( (_BYTE)v51 )
    {
      sub_18296D0(v52);
      if ( !HIBYTE(v51) )
        goto LABEL_8;
    }
    else if ( !HIBYTE(v51) )
    {
      goto LABEL_8;
    }
    sub_1829760(v52);
  }
  v9 = v7;
  while ( (unsigned int)*(unsigned __int16 *)(*v9 + 4) - 3 > 1 )
  {
    if ( ++v9 == &v7[(unsigned int)v6] )
      goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "assumption is not an expression");
  v10 = 0;
LABEL_8:
  if ( v38 )
    byte_1C7EBA0 = 1;
  return v10;
}

