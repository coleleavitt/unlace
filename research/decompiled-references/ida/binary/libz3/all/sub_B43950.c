__int64 __fastcall sub_B43950(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 result; // rax
  __int16 v7; // di
  _DWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // edx
  char v13; // cl
  _DWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // esi
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r12d
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36[7]; // [rsp+10h] [rbp-38h] BYREF

  result = sub_15D2CB0(*(_QWORD *)(a1 + 16), a2);
  if ( !(_BYTE)result )
    return result;
  v7 = *((_WORD *)a2 + 2);
  if ( v7 || (v8 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr || *v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v9 + 8832);
    if ( !result )
      return result;
    v10 = *a2;
    v11 = 0;
    if ( (unsigned int)v10 >= *(_DWORD *)(result - 4) )
      return result;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    v11 = v8[1];
    result = *(_QWORD *)(v9 + 8832);
    if ( !result || (v10 = *a2, (unsigned int)v10 >= *(_DWORD *)(result - 4)) )
    {
      if ( v11 != 6 )
        return result;
      goto LABEL_25;
    }
    LOBYTE(v11) = v11 == 6;
  }
  v12 = *(_DWORD *)(result + 4 * v10);
  result = v11 ^ 1u;
  v13 = (v11 ^ 1) & (v12 == 0x7FFFFFFF);
  if ( v13 )
    return result;
  if ( v12 != 0x7FFFFFFF )
  {
    if ( !v7 )
    {
      v14 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v14 )
      {
        if ( !*v14 )
          v13 = v14[1] == 5;
      }
    }
    v15 = *(_QWORD *)(v9 + 8848);
    v16 = 2 * v12;
    v17 = *(char *)(v15 + v16);
    if ( (!*(_BYTE *)(v15 + v16) || v17 == 1 && !(_BYTE)result || v13 && v17 == -1) && v12 < *(_DWORD *)(a1 + 44) )
    {
      v18 = *(_QWORD **)(a1 + 32);
      if ( v18 )
      {
        v19 = *((_DWORD *)v18 - 1);
        if ( v19 == *((_DWORD *)v18 - 2) )
        {
          v26 = (3 * v19 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v27 || v19 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v18 - 1, v27);
          v29 = v28[1];
          v18 = v28 + 2;
          *v28 = v26;
          *(_QWORD *)(a1 + 32) = v28 + 2;
          LODWORD(v28) = v29;
          v21 = &v18[v29];
          result = (unsigned int)((_DWORD)v28 + 1);
        }
        else
        {
          v20 = v19;
          result = v19 + 1;
          v21 = &v18[v20];
        }
      }
      else
      {
        v34 = (_QWORD *)sub_186B270(0x18u);
        v18 = v34 + 1;
        *v34 = 2;
        result = 1;
        *(_QWORD *)(a1 + 32) = v18;
        v21 = v18;
      }
      *v21 = a2;
      *((_DWORD *)v18 - 1) = result;
    }
    return result;
  }
LABEL_25:
  if ( !*(_BYTE *)(v9 + 10320) )
  {
    v22 = *(_QWORD **)(a1 + 32);
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
      {
        v30 = (3 * v23 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v23 + 8 >= v31 || v23 >= v30 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v22 - 1, v31);
        v33 = v32[1];
        v22 = v32 + 2;
        *v32 = v30;
        *(_QWORD *)(a1 + 32) = v32 + 2;
        LODWORD(v32) = v33;
        v25 = &v22[v33];
        result = (unsigned int)((_DWORD)v32 + 1);
      }
      else
      {
        v24 = v23;
        result = v23 + 1;
        v25 = &v22[v24];
      }
    }
    else
    {
      v35 = (_QWORD *)sub_186B270(0x18u);
      *v35 = 2;
      result = 1;
      v22 = v35 + 1;
      *(_QWORD *)(a1 + 32) = v22;
      v25 = v22;
    }
    *v25 = a2;
    *((_DWORD *)v22 - 1) = result;
  }
  return result;
}

