__int64 __fastcall sub_32B970(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 *a4, double a5)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 (*v13)(); // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-39h]

  *a1 = -1;
  *a2 = -1;
  if ( a3 )
    a3[1] = 0;
  if ( a4 )
    *a4 = 0;
  v7 = qword_8CD7E8;
  if ( !qword_8CD7E8 )
    return 0;
  if ( (unsigned int)sub_1EB590(qword_8CD7E8, (__int64)a2, (__int64)a3, (__int64)a4, a5) != 2
    || (v11 = *(_QWORD *)(v7 + 896)) == 0 )
  {
    if ( (unsigned int)sub_1EB590(v7, (__int64)a2, v8, v9, a5) != 3 )
      return 0;
    v11 = *(_QWORD *)(v7 + 904);
    if ( !v11 )
      return 0;
  }
  if ( a4 )
    *a4 = v11;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 504LL))(v11);
  v13 = *(__int64 (**)())(*(_QWORD *)v11 + 744LL);
  if ( v13 == sub_2B2350 )
    return 0;
  result = ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD))v13)(v11, a1, a2, v12);
  if ( !(_BYTE)result )
    return 0;
  if ( a3 )
  {
    v14 = result;
    sub_2BFB40(v11, a3, v12);
    return v14;
  }
  return result;
}
