__int64 __fastcall sub_7EC600(__int64 a1, char a2)
{
  char **exception; // rbx
  int v3; // ebp
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int *v16; // rdi
  size_t v17; // rdx
  unsigned int *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // r12d
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  _BYTE v35[2]; // [rsp+Eh] [rbp-4Ah] BYREF
  __int64 v36[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2296) + 32LL))(*(_QWORD *)(a1 + 2296));
  v5 = *(_QWORD *)(a1 + 1248);
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v6++;
      sub_7EB1F0(a1, *(_BYTE *)(16 * v7 + v5), *(unsigned int *)(16 * v7 + v5 + 4), *(_QWORD *)(16 * v7 + v5 + 8));
      v5 = *(_QWORD *)(a1 + 1248);
      if ( !v5 )
        break;
      if ( v6 >= *(_DWORD *)(v5 - 4) )
      {
        *(_DWORD *)(v5 - 4) = 0;
        break;
      }
    }
    v3 = 1;
  }
  v35[0] = v3;
  if ( a2 )
  {
    v8 = *(__int64 **)(a1 + 2312);
    if ( v8 )
    {
      v9 = &v8[*((unsigned int *)v8 - 1)];
      while ( v9 != v8 )
      {
        v10 = *v8++;
        sub_7EC150(a1, v10, 1, v35);
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 2584);
    if ( !v14 )
      return v3 | (unsigned int)sub_869D00(a1 + 336);
    v15 = *(_DWORD *)(a1 + 2576);
    if ( v15 >= *(_DWORD *)(v14 - 4) )
      return v3 | (unsigned int)sub_869D00(a1 + 336);
    v20 = *(_QWORD *)(a1 + 8);
    v21 = sub_180C100(v20 + 2144, 24);
    v22 = *(_QWORD **)(v20 + 2128);
    v23 = v21;
    *(_QWORD *)v21 = &off_1C4C070;
    *(_QWORD *)(v21 + 8) = a1 + 2576;
    *(_DWORD *)(v21 + 16) = v15;
    if ( v22 )
    {
      v24 = *((_DWORD *)v22 - 1);
      if ( v24 == *((_DWORD *)v22 - 2) )
      {
        v30 = (3 * v24 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v24 + 8 >= v31 || v24 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v22 - 1, v31);
        v33 = v32[1];
        v22 = v32 + 2;
        *(_QWORD *)(v20 + 2128) = v32 + 2;
        *v32 = v30;
        LODWORD(v32) = v33;
        v27 = &v22[v33];
        v26 = (_DWORD)v32 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v22[v25];
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      *v34 = 2;
      v26 = 1;
      v22 = v34 + 1;
      *(_QWORD *)(v20 + 2128) = v22;
      v27 = v22;
    }
    *v27 = v23;
    *((_DWORD *)v22 - 1) = v26;
    v28 = *(_QWORD *)(a1 + 2584);
    if ( v28 )
    {
      v29 = *(_DWORD *)(a1 + 2576);
      do
      {
        if ( v29 >= *(_DWORD *)(v28 - 4) )
          break;
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 24)) )
          break;
        sub_7EC150(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1 + 2312)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 2584) + 4LL * *(unsigned int *)(a1 + 2576))),
          0,
          v35);
        v28 = *(_QWORD *)(a1 + 2584);
        v29 = *(_DWORD *)(a1 + 2576) + 1;
        *(_DWORD *)(a1 + 2576) = v29;
      }
      while ( v28 );
    }
  }
  v11 = *(_DWORD *)(a1 + 2560) + 1;
  *(_DWORD *)(a1 + 2560) = v11;
  if ( v11 == -1 )
  {
    v16 = *(unsigned int **)(a1 + 2568);
    if ( v16 )
    {
      v17 = 4LL * *(v16 - 1);
      if ( v17 )
        memset(v16, 0, v17);
    }
    *(_DWORD *)(a1 + 2560) = 0;
  }
  v12 = *(_DWORD *)(a1 + 2544) + 1;
  *(_DWORD *)(a1 + 2544) = v12;
  if ( v12 == -1 )
  {
    v18 = *(unsigned int **)(a1 + 2552);
    if ( v18 )
    {
      v19 = 4LL * *(v18 - 1);
      if ( v19 )
        memset(v18, 0, v19);
    }
    *(_DWORD *)(a1 + 2544) = 0;
  }
  *(_BYTE *)(a1 + 2536) = 1;
  result = sub_869D00(a1 + 336);
  if ( !(_BYTE)result )
    return v35[0];
  return result;
}

