__int64 __fastcall sub_5766D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  const char *v6; // rbx

  v6 = a5;
  if ( !(unsigned __int8)is_valid_utf8(a5) && (unsigned __int8)idb_utf8() )
    v6 = haystack;
  return (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD, const char *))(a1 + 8))(
           *(_QWORD *)(a1 + 16),
           a2,
           0,
           a4,
           a4,
           0,
           v6);
}

