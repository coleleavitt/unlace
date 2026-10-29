__int64 __fastcall sub_F5490(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // ebp
  __int64 result; // rax
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // r14
  unsigned int v15; // r12d
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rbp
  unsigned int v22; // [rsp+0h] [rbp-48h]

  v10 = a3;
  result = *(unsigned int *)(a1 + 100);
  v12 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 100) = a3;
  v13 = *(_DWORD *)(a1 + 104);
  v14 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 96) = a2;
  v22 = result;
  *(_DWORD *)(a1 + 104) = a4;
  *(_QWORD *)(a1 + 112) = a5;
  if ( a2 == v12 )
  {
    if ( (_DWORD)result == a3 )
      goto LABEL_3;
  }
  else
  {
    for ( result = *(_QWORD *)(a1 + 8); a1 + 8 != result; result = v18 )
    {
      v18 = *(_QWORD *)result;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(result + 16) + 24LL))(
        *(_QWORD *)(result + 16),
        v12,
        a2);
    }
    v10 = *(_DWORD *)(a1 + 100);
    if ( v22 == v10 )
    {
LABEL_3:
      v15 = *(_DWORD *)(a1 + 104);
      if ( v15 == v13 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  for ( result = *(_QWORD *)(a1 + 32); a1 + 32 != result; result = v19 )
  {
    v19 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v22,
      v10);
  }
  v15 = *(_DWORD *)(a1 + 104);
  if ( v15 == v13 )
  {
LABEL_4:
    v16 = *(_QWORD *)(a1 + 112);
    if ( v16 == v14 )
      goto LABEL_5;
    goto LABEL_19;
  }
LABEL_15:
  for ( result = *(_QWORD *)(a1 + 56); a1 + 56 != result; result = v20 )
  {
    v20 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v13,
      v15);
  }
  v16 = *(_QWORD *)(a1 + 112);
  if ( v16 == v14 )
  {
LABEL_5:
    v17 = *(unsigned int *)(a1 + 96);
    if ( (_DWORD)v17 == v12 )
      return result;
    return callui(166, v17, v12, callui, a5, a6, a7, a8, a9, a10);
  }
LABEL_19:
  for ( result = *(_QWORD *)(a1 + 80); a1 + 80 != result; result = v21 )
  {
    v21 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(result + 16) + 24LL))(
      *(_QWORD *)(result + 16),
      v14,
      v16);
  }
  v17 = *(unsigned int *)(a1 + 96);
  if ( (_DWORD)v17 != v12 )
    return callui(166, v17, v12, callui, a5, a6, a7, a8, a9, a10);
  return result;
}

