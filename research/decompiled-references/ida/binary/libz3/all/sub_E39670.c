__int64 __fastcall sub_E39670(_QWORD *a1)
{
  _QWORD *exception; // rbx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  _DWORD *v6; // rdx
  __int64 result; // rax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned int *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD *v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (_DWORD *)a1[3];
  result = a1[4];
  if ( !v6 || (v8 = *(v6 - 1)) == 0 )
  {
LABEL_3:
    if ( result )
      return result;
    goto LABEL_16;
  }
  if ( result )
    return result;
  v9 = *(_QWORD *)&v6[2 * v8 - 2];
  v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)(v9 + 24) - 1) + 32);
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 8);
    v8 = *(v6 - 1);
  }
  if ( *(v6 - 2) == v8 )
  {
    v16 = (3 * v8 + 1) >> 1;
    v17 = 8 * v16 + 8;
    if ( 8 * v8 + 8 >= v17 || v8 >= v16 )
    {
      exception = __cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v20, "Overflow encountered when expanding vector");
      v2 = v20;
      exception[1] = exception + 3;
      v3 = v21;
      *exception = off_1C63128;
      if ( v2 == v22 )
      {
        qmemcpy(exception + 3, v22, (unsigned int)(v3 + 1));
      }
      else
      {
        v4 = v22[0];
        exception[1] = v2;
        exception[3] = v4;
      }
      exception[2] = v3;
      v20 = v22;
      v21 = 0;
      LOBYTE(v22[0]) = 0;
      sub_233E40((__int64)&v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v18 = (unsigned int *)sub_186B300(v6 - 2, v17);
    v6 = v18 + 2;
    *v18 = v16;
    v8 = v18[1];
    a1[3] = v18 + 2;
  }
  v11 = a1[1];
  *(_QWORD *)&v6[2 * v8] = v10;
  *(v6 - 1) = v8 + 1;
  result = sub_15E08C0(v11);
  if ( result )
  {
    v12 = a1[4];
    ++*(_DWORD *)(result + 8);
    if ( !v12 || (v13 = a1[5], v14 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), !v14) )
    {
      a1[4] = result;
      return result;
    }
    goto LABEL_19;
  }
  v12 = a1[4];
  if ( v12 )
  {
    v13 = a1[5];
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
    {
LABEL_19:
      v19 = result;
      sub_15D7BC0(v13, v12);
      result = v19;
      a1[4] = v19;
      goto LABEL_3;
    }
  }
  a1[4] = 0;
LABEL_16:
  v15 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
  if ( v15 == sub_E38B20 )
    return a1[14];
  else
    return v15((__int64)a1);
}

