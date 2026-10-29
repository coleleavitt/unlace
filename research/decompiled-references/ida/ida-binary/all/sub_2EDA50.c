__int64 __fastcall sub_2EDA50(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = a1 + 80;
  v3 = a1 + 120;
  if ( a2 == 1 )
    v3 = v2;
  result = 0;
  if ( !*(_BYTE *)(v3 + 24) )
    return *(_QWORD *)(v3 + 16);
  return result;
}
