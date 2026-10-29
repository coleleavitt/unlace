unsigned __int64 __fastcall sub_E0E9F0(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // r13
  int v8; // eax
  _DWORD *v9; // rdx
  int *v10; // rax
  int v11; // eax
  _DWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  int *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  unsigned __int64 result; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rax
  int v22; // eax
  void *exception; // rax

  v4 = *(_QWORD *)(a2 + 16);
  v5 = sub_15F0200(a1 + 8);
  v6 = *(_DWORD **)(v4 + 24);
  if ( v6 && v5 == *v6 && v6[1] == 3
    || (v7 = *(_QWORD *)(a2 + 16), v8 = sub_15F0200(a1 + 8), (v9 = *(_DWORD **)(v7 + 24)) != nullptr)
    && v8 == *v9
    && v9[1] == 4
    || ((v10 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v11 = -1) : (v11 = *v10),
        *(_DWORD *)(a1 + 184) == v11
     && (v21 = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr
     && *(_DWORD *)(a1 + 72) == *v21
     && v21[1] == 1) )
  {
LABEL_52:
    exception = __cxa_allocate_exception(1u);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'contains_underspecified_op_proc::found, nullptr);
  }
  v12 = *(_DWORD **)(a1 + 40);
  if ( !v12 )
  {
    sub_16669E0(a1 + 32);
    v12 = *(_DWORD **)(a1 + 40);
  }
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 160LL);
  if ( v14 != sub_E0DE10 )
  {
    if ( (unsigned __int8)v14((__int64)v12, v13) )
      goto LABEL_52;
    goto LABEL_26;
  }
  v15 = *(int **)(v13 + 24);
  if ( !v15 )
  {
LABEL_26:
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_18;
    v15 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v15 )
      goto LABEL_18;
    v18 = *v15;
    goto LABEL_17;
  }
  if ( v12[4] != *v15 )
  {
    if ( *(_WORD *)(a2 + 4) || *v15 != 5 )
      goto LABEL_18;
    goto LABEL_40;
  }
  v16 = (unsigned int)v15[1];
  if ( (unsigned int)v16 <= 0x2C )
  {
    v17 = 0x1C0000823000LL;
    if ( _bittest64(&v17, v16) )
      goto LABEL_52;
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v15 = *(int **)(v13 + 24);
    v18 = *v15;
LABEL_17:
    if ( v18 != 5 )
      goto LABEL_18;
LABEL_40:
    v22 = v15[1];
    if ( v22 == 24
      || v22 == 25
      || v22 == 26
      || v22 == 32
      || v22 == 27
      || v22 == 28
      || v22 == 29
      || v22 == 33
      || v22 == 34
      || v22 == 35
      || v22 == 41
      || v22 == 40 )
    {
      goto LABEL_52;
    }
  }
LABEL_18:
  if ( (unsigned __int8)sub_1666670(a1 + 32, a2) )
    goto LABEL_52;
  result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( result )
  {
    if ( *(_DWORD *)result == *(_DWORD *)a1 )
    {
      result = *(unsigned int *)(result + 4);
      if ( (unsigned int)result <= 0xD )
      {
        v20 = 8229;
        if ( _bittest64(&v20, result) )
          goto LABEL_52;
      }
    }
  }
  return result;
}

