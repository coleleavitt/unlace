__int64 __fastcall sub_4E0AD0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1120) )
  {
    v2 = *(_QWORD *)(a1 + 1112);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, a2);
  }
  return result;
}
