__int64 __fastcall sub_57FB90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1256);
  if ( v2 && (unsigned __int8)sub_57C4D0(v2) )
    sub_57F960(a1, nullptr, v3, v4, v5, v6);
  result = *(_QWORD *)(a1 + 1264);
  *(_QWORD *)(a1 + 1264) = 0;
  return result;
}
