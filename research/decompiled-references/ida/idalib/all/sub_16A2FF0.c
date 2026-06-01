__int64 __fastcall sub_16A2FF0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 result; // rax

  v6 = *a3;
  if ( (_DWORD)v6 && a3[1] && !*((_QWORD *)a3 + 1) )
    return 1;
  v8 = sub_16A2930(a1, (__int64)a3, 1, v6, a5, a6);
  v9 = v8;
  if ( !v8 || !(unsigned __int8)sub_B8E180(v8) && (unsigned __int8)sub_169F990(a1, (__int64)a3, v9) )
    return 1;
  sub_17A2FB0(a1, a2, v9);
  result = sub_B8E180(v9);
  if ( (_BYTE)result )
  {
    sub_1D05010(a1, a3);
    return 0;
  }
  return result;
}
