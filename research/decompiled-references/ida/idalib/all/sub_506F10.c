__int64 __fastcall sub_506F10(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = sub_506E00((__int64 ***)a1, a2);
  result = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v2 != result && a2 >= **(_QWORD **)v2 && a2 < *(_QWORD *)(*(_QWORD *)v2 + 8LL) )
    return v2;
  return result;
}
