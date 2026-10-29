__int64 sub_17F410()
{
  __int64 result; // rax

  if ( sub_534430("hx:GenPseudo") )
    sub_5344B0("dummy_hexrays:warn");
  else
    sub_538360(&unk_85C1A0);
  result = sub_534430("LicenseManagerAutoSwitchDecompiler");
  if ( !result )
    return sub_538360(&unk_85C160);
  return result;
}
