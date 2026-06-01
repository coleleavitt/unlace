__int64 __fastcall sub_7F6BF0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbp
  __int64 *i; // r13
  __int64 v5; // r9
  __int64 v7; // rax
  bool (__fastcall *v8)(__int64); // rdx
  __int64 v9; // rax
  __int64 *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(__int64 **)(a2 + 88);
  if ( v2 && !(unsigned __int8)sub_7EEDC0((__int64)a1, *v2, (__int64)(v2 + 1)) )
    return 0;
  v3 = *(__int64 **)(a2 + 96);
  for ( i = &v3[*(unsigned int *)(a2 + 104)]; i != v3; ++v3 )
  {
    v5 = *a1;
    v14[0] = *v3;
    if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v14[0], v14[0], v14, a1, v5) )
      return 0;
  }
  v7 = *(_QWORD *)a2;
  v8 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v8 == sub_5F7BA0 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 1) == 0 && !*(_QWORD *)(a2 + 112) )
      goto LABEL_11;
  }
  else
  {
    if ( !v8(a2) )
      goto LABEL_11;
    v7 = *(_QWORD *)a2;
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 64))(a2);
  if ( !(unsigned __int8)sub_7EBA80(a1, v9) )
    return 0;
LABEL_11:
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = nullptr;
    v11 = sub_79A2B0(a2);
    v12 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v10 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v12 != v10 )
    {
      while ( 1 )
      {
        v13 = *a1;
        v14[0] = *v10;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v14[0], v14[0], v14, a1, v13) )
          break;
        if ( (__int64 *)v12 == ++v10 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}

