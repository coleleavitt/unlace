unsigned __int64 __fastcall sub_B39E50(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rbx
  char v6; // r14
  __int64 v7; // r13
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // r13
  unsigned int v14; // eax
  unsigned __int64 result; // rax
  __int64 v16; // r14
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a2 + 8400;
  v6 = *(_BYTE *)(a1 + 53);
  v7 = sub_180C100(a2 + 8400, 24);
  *(_BYTE *)(v7 + 16) = v6;
  v8 = *(_QWORD **)(a2 + 9456);
  *(_QWORD *)v7 = off_1C56E80;
  *(_QWORD *)(v7 + 8) = a1 + 53;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v17 = (3 * v9 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v18 || v9 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v34, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v8 - 1, v18);
      v20 = v19[1];
      v8 = v19 + 2;
      *v19 = v17;
      *(_QWORD *)(a2 + 9456) = v19 + 2;
      LODWORD(v19) = v20;
      v12 = &v8[v20];
      v11 = (_DWORD)v19 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v8[v10];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v8 = v32 + 1;
    *v32 = 2;
    v11 = 1;
    *(_QWORD *)(a2 + 9456) = v8;
    v12 = v8;
  }
  *v12 = v7;
  v13 = *(_QWORD *)(a1 + 8);
  *((_DWORD *)v8 - 1) = v11;
  v14 = 33
      * ((4097 * **(_DWORD **)a1 + 2127912214) ^ ((unsigned int)(4097 * **(_DWORD **)a1 + 2127912214) >> 19) ^ 0xC761C23C);
  result = ((unsigned __int8)((9 * (v14 + 29) - 59)
                            ^ ((9 * (((v14 + 374761393) << 9) ^ (v14 - 369570787)) - 42973499) >> 16))
          ^ 9)
         & 0x3F;
  *(_BYTE *)(a1 + 53) = result;
  v16 = *(_QWORD *)(v13 + 96);
  if ( !_bittest64(&v16, result) )
  {
    v21 = (_QWORD *)sub_180C100(v5, 24);
    v22 = *(_QWORD **)(a2 + 9456);
    v23 = v21;
    *v21 = off_1C56EA8;
    v21[1] = v13 + 96;
    v21[2] = v16;
    if ( v22 )
    {
      v24 = *((_DWORD *)v22 - 1);
      if ( v24 == *((_DWORD *)v22 - 2) )
      {
        v28 = (3 * v24 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v29 || v24 >= v28 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v34, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v22 - 1, v29);
        v31 = v30[1];
        v22 = v30 + 2;
        *v30 = v28;
        *(_QWORD *)(a2 + 9456) = v30 + 2;
        LODWORD(v30) = v31;
        v27 = &v22[v31];
        v26 = (_DWORD)v30 + 1;
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
      v33 = (_QWORD *)sub_186B270(0x18u);
      v22 = v33 + 1;
      *v33 = 2;
      v26 = 1;
      *(_QWORD *)(a2 + 9456) = v22;
      v27 = v22;
    }
    *v27 = v23;
    *((_DWORD *)v22 - 1) = v26;
    result = 1LL << *(_BYTE *)(a1 + 53);
    *(_QWORD *)(v13 + 96) |= result;
  }
  return result;
}

