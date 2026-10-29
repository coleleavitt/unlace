__int64 __fastcall sub_1EACA10(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = a1 + 448;
  result = v1 + 2608;
  if ( !v1 )
    return v2;
  return result;
}
