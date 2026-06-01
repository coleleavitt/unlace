__int64 __fastcall objc_visitor::Class::isUnfixedBackwardDeployingStableSwift(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = objc_visitor::Class::isSwiftLegacy();
  if ( (_DWORD)result )
  {
    v5 = objc_visitor::Class::swiftClassFlags(a1, a2);
    return (v5 & 0xFF00000000LL) != 0 && (v5 & 1) == 0;
  }
  return result;
}
