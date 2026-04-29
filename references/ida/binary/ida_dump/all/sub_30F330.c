__int64 __fastcall sub_30F330(_QWORD *a1, __int64 *a2, __int64 *a3, char a4, double a5, double a6)
{
  _BYTE *v8; // rbx
  __int64 result; // rax
  char v10; // dl

  v8 = sub_120380(a3, 0);
  result = 0;
  if ( v8 && *(_DWORD *)v8 == 56 && v8[32] == 6 )
  {
    v10 = sub_30EB90((__int64)a1, a2, (__int64)v8, a4);
    result = 1;
    if ( !v10 )
      return (unsigned __int8)sub_30F2A0(a1, (__int64)a2, a3, (__int64)v8, a5, a6);
  }
  return result;
}
