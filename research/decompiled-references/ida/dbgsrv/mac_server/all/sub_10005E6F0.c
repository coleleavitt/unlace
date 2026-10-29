/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E6F0
// Address: 0x000000010005E6F0

//----- (000000010005E6F0) ----------------------------------------------------
__int64 __fastcall sub_10005E6F0(__int64 a1, __int64 a2)
{
  void *v4; // rdi
  char *v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  char v9; // cl
  char v10; // cl
  _BOOL4 v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // edi
  size_t v14; // rdx
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // ecx
  char *v18; // rcx
  unsigned __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rdx
  char v22; // cl
  char v23; // cl
  _BOOL4 v24; // edi
  unsigned int v25; // r8d
  unsigned int v26; // edi
  size_t v27; // rdx
  unsigned int v28; // r12d
  int v29; // eax
  int v30; // r13d
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rcx
  char *v33; // rax
  char *v34; // rsi
  unsigned __int64 v35; // rax
  void *v36; // rdi
  char *v38; // [rsp+0h] [rbp-40h] BYREF
  char v39; // [rsp+Bh] [rbp-35h] BYREF
  _BYTE __dst[4]; // [rsp+Ch] [rbp-34h] BYREF

  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  v5 = *(char **)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (char *)(*(_QWORD *)a2 + 1LL);
  if ( (unsigned __int64)v7 <= v6 && (unsigned __int64)v7 >= *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = v7;
    v9 = *v5;
    v39 = v9;
    v8 = 1;
    if ( v9 < 0 )
    {
      v10 = ~v9;
      v11 = (v10 & 0xE0) == 0;
      v12 = v11 + 4;
      v13 = v11 + 3;
      v14 = 1;
      if ( (v10 & 0xC0) == 0 )
        v14 = v13;
      v15 = 2;
      if ( (v10 & 0xC0) == 0 )
        v15 = v12;
      if ( &v7[v14] >= v7 && (unsigned __int64)&v7[v14] <= v6 )
      {
        *(_QWORD *)a2 = &v7[v14];
        memcpy(__dst, v7, v14);
      }
      v8 = v15;
    }
  }
  else
  {
    v39 = 0;
    v8 = 1;
  }
  v38 = &v39;
  v16 = unpack_dd((unsigned __int64 *)&v38, (unsigned __int64)&__dst[v8 - 1]);
  v17 = v16 - 3;
  *(_DWORD *)a1 = v16 - 3;
  if ( v16 == 1 )
  {
    *(_QWORD *)(a1 + 8) = sub_10005E9A0((char **)a2) - 1;
  }
  else if ( v16 )
  {
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v17;
    if ( v17 <= -2 )
    {
      if ( under_debugger != 1 )
        interr(0xC90u);
      BUG();
    }
    v18 = *(char **)a2;
    v19 = *(_QWORD *)(a2 + 8);
    v20 = (char *)(*(_QWORD *)a2 + 1LL);
    if ( (unsigned __int64)v20 <= v19 && (unsigned __int64)v20 >= *(_QWORD *)a2 )
    {
      *(_QWORD *)a2 = v20;
      v22 = *v18;
      v39 = v22;
      v21 = 1;
      if ( v22 < 0 )
      {
        v23 = ~v22;
        v24 = (v23 & 0xE0) == 0;
        v25 = v24 + 4;
        v26 = v24 + 3;
        v27 = 1;
        if ( (v23 & 0xC0) == 0 )
          v27 = v26;
        v28 = 2;
        if ( (v23 & 0xC0) == 0 )
          v28 = v25;
        if ( &v20[v27] >= v20 && (unsigned __int64)&v20[v27] <= v19 )
        {
          *(_QWORD *)a2 = &v20[v27];
          memcpy(__dst, v20, v27);
        }
        v21 = v28;
      }
    }
    else
    {
      v39 = 0;
      v21 = 1;
    }
    v38 = &v39;
    v29 = unpack_dd((unsigned __int64 *)&v38, (unsigned __int64)&__dst[v21 - 1]);
    v30 = v29;
    v31 = v29;
    v32 = *(_QWORD *)(a1 + 16);
    if ( v32 >= v29 )
    {
      if ( v32 != v29 )
      {
        LOBYTE(v38) = 0;
        sub_10001CE90(a1 + 8, v29, (unsigned __int8 *)&v38);
      }
    }
    else
    {
      v33 = *(char **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v31 )
      {
        v33 = (char *)qvector_reserve(a1 + 8, *(void **)(a1 + 8), v31, 1u);
        *(_QWORD *)(a1 + 8) = v33;
        v32 = *(_QWORD *)(a1 + 16);
      }
      __bzero(&v33[v32], v31 - v32);
      *(_QWORD *)(a1 + 16) = v31;
    }
    if ( v30 )
    {
      v34 = *(char **)a2;
      v35 = *(_QWORD *)a2 + v31;
      if ( v35 >= *(_QWORD *)a2 && v35 <= *(_QWORD *)(a2 + 8) )
      {
        v36 = *(void **)(a1 + 8);
        *(_QWORD *)a2 = v35;
        memcpy(v36, v34, v31);
      }
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
