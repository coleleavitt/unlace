__int64 __fastcall sub_1E4ED0(__int64 a1, int *a2, bool *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64); // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rcx

  *a2 = 0;
  *a3 = 0;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v6 + 200);
  if ( !v7 )
    return 0;
  if ( *(_BYTE *)(v6 + 244) )
  {
    v9 = *(_QWORD *)(v6 + 248);
  }
  else
  {
    v12 = 0;
    if ( !*(_BYTE *)(v6 + 64) )
      v12 = *(_QWORD *)(v6 + 56);
    v9 = *(_QWORD *)(v12 + 728);
  }
  v10 = v7(v6, *a5, a4, v9);
  if ( (unsigned int)(v10 + 1) <= 1 )
    return 0;
  *a3 = v10 < 0;
  *a2 = v10 & 0x7FFFFFFF;
  return 1;
}
