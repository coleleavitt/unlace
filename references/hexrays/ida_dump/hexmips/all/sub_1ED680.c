__int64 __fastcall sub_1ED680(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = a1[7];
  v3 = v2 + 96LL * a1[8];
  while ( v3 != v2 )
  {
    v4 = v2;
    v2 += 96;
    sub_1ED160(v4, *(_QWORD *)(*a1 + 64LL));
  }
  result = *(_QWORD *)(*a1 + 48LL);
  a1[1] = result;
  return result;
}
