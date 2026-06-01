__int64 __fastcall proc_chooser_t__::vfunc_14(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v4)(__int64 *); // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, int *); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v14 = __readfsqword(0x28u);
  v13 = -1;
  v4 = *(void (__fastcall **)(__int64 *))(v2 + 32);
  if ( a2 < 0 )
  {
    v4(a1);
    return -1;
  }
  if ( a2 < (unsigned __int64)a1[24] )
    v13 = *(_DWORD *)(a1[23] + 32 * a2);
  v4(a1);
  v6 = *a1;
  if ( v13 == -1 )
    goto LABEL_11;
  v7 = *(__int64 (__fastcall **)(__int64, int *))(v6 + 72);
  if ( v7 != proc_chooser_t__::vfunc_9 )
  {
    result = v7((__int64)a1, &v13);
    if ( result != -1 )
      return result;
LABEL_10:
    v6 = *a1;
    goto LABEL_11;
  }
  v8 = a1[24];
  if ( !v8 )
  {
LABEL_11:
    v11 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 40))(a1);
    v12 = v11;
    if ( !v11 )
      return -1;
    result = v11 - 1;
    if ( a2 < v12 )
      return a2;
    return result;
  }
  v9 = a1[23];
  result = 0;
  while ( v13 != *(_DWORD *)(v9 + 32 * result) )
  {
    if ( v8 == ++result )
      goto LABEL_10;
  }
  return result;
}
