__int64 __fastcall sub_17EDB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a3;
  v4 = sub_534430(a2);
  result = 0;
  if ( v4 )
    result = (unsigned __int8)sub_5314B0(v4);
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}
