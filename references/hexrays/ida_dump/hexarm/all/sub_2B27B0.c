_BOOL8 __fastcall sub_2B27B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rbp
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbx

  if ( a3 >= *(_QWORD *)(a1 + 48) )
LABEL_9:
    sub_2AE220();
  v4 = 264 * a3;
  v5 = 264 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AF400 )
  {
    if ( *(_DWORD *)(v5 + 120) == *(_DWORD *)(v5 + 248) && !(unsigned int)sub_1371E0(v5 + 8, v5 + 136) )
      goto LABEL_9;
  }
  else if ( !v6() )
  {
    goto LABEL_9;
  }
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 != sub_2AF400 )
  {
    if ( !v8(v4 + *(_QWORD *)(a2 + 40)) )
      goto LABEL_9;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v7 + 120) == *(_DWORD *)(v7 + 248) )
  {
    if ( !(unsigned int)sub_1371E0(v7 + 8, v7 + 136) )
      goto LABEL_9;
LABEL_11:
    v7 = v4 + *(_QWORD *)(a2 + 40);
  }
  v9 = *(_QWORD *)(a1 + 40) + v4;
  switch_dbctx(*(int *)(a1 + 8));
  return *(_DWORD *)(v9 + 120) != *(_DWORD *)(v7 + 120)
      || (unsigned int)sub_1371E0(v9 + 8, v7 + 8)
      || *(_BYTE *)(v9 + 128) != *(_BYTE *)(v7 + 128);
}
