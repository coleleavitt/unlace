__int64 __fastcall sub_1250(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  set_processor_type("java", 1);
  result = sub_1190(0xBB8u, a1, (a2 & 0x1000) != 0);
  if ( result )
  {
    if ( under_debugger )
      BUG();
    interr(20047);
    return sub_12B0();
  }
  return result;
}
