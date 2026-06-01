__int64 __fastcall sub_EC0FD0(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v5; // eax
  int v6; // eax
  __int64 *v7; // rsi
  __int64 *v8; // r14
  bool v10; // zf
  _QWORD v11[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = sub_2244B30(a2, a3);
  v6 = sub_2244E60(a1 + 192, a2, a3, v5);
  if ( v6 == -1 )
    v7 = (__int64 *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(a1 + 200));
  else
    v7 = (__int64 *)(*(_QWORD *)(a1 + 192) + 8LL * v6);
  sub_EC0F90(v12, v7, 1);
  v8 = v12[0];
  sub_EC0F90(v12, (__int64 *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(a1 + 200)), 1);
  if ( v8 != v12[0] )
    return *(unsigned __int8 *)(*v8 + 8);
  v10 = *(_QWORD *)(a1 + 144) == 0;
  v11[0] = a2;
  v11[1] = a3;
  if ( v10 )
    goto LABEL_11;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 152))(a1 + 128, v11) )
  {
    v10 = *(_QWORD *)(a1 + 176) == 0;
    v12[0] = a2;
    v12[1] = a3;
    if ( !v10 )
    {
      (*(void (__fastcall **)(__int64, __int64 **))(a1 + 184))(a1 + 160, v12);
      return 0;
    }
LABEL_11:
    std::__throw_bad_function_call();
  }
  return 0;
}
