__int64 __fastcall sub_296220(int *a1, _QWORD *a2, _QWORD *a3, int a4, int a5)
{
  unsigned __int64 i; // rbp
  int v9; // eax
  unsigned int v10; // edx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 result; // rax
  unsigned int v13; // edx
  __int64 (__fastcall *v14)(__int64); // rax

  for ( i = 0; ; ++i )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v9 = v11 == interactive_graph_t__::vfunc_7 ? a1[46] : v11((__int64)a1);
    if ( i >= v9 )
      break;
    if ( i >= a3[1] )
      break;
    v10 = *(_DWORD *)(*a3 + 4 * i);
    if ( v10 == -1 )
      break;
    sub_296000(a1, a2, v10, a5);
  }
  while ( 1 )
  {
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v14 != interactive_graph_t__::vfunc_7 )
      break;
    result = (unsigned int)a1[46];
    if ( a4 >= (int)result )
      return result;
LABEL_10:
    v13 = a4++;
    sub_296000(a1, a2, v13, a5);
  }
  result = v14((__int64)a1);
  if ( a4 < (int)result )
    goto LABEL_10;
  return result;
}
