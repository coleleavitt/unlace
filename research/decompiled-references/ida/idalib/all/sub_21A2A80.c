__int64 __fastcall sub_21A2A80(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  v1 = sub_21A29A0((char **)(a1 + 8), *(char **)(a1 + 16));
  result = *(_QWORD *)(a1 + 8);
  v3 = result + v1;
  if ( v3 > *(_QWORD *)(a1 + 16) )
    sub_2221C70("EOF while reading string", 1);
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
