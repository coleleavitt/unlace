__int64 __fastcall sub_643A90(_BYTE *a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8

  if ( a5 < a4 || !a2 )
    return 0;
  if ( a5 == a4 )
    return 1;
  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2825LL) & 8) == 0 )
  {
    v10 = qlsize(a2);
    v12 = *(_QWORD *)a1;
    v13 = -1;
    if ( a6 )
      v13 = a3;
    if ( *(_DWORD *)(v12 + 932) == -1 )
      sub_378C70((__int64)"You forgot to call set_processor_type()", a2, v12, v11, v13);
    if ( !a1[9] )
      sub_6406C0(a1, a4, a5, v10 - a3, v13);
    return (unsigned __int8)sub_643920((__int64)a1, a2, a3, a4, a5);
  }
  return result;
}
