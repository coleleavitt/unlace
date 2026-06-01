/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020580
// Address: 0x0000000100020580

//----- (0000000100020580) ----------------------------------------------------
__int64 __fastcall sub_100020580(__int64 a1, __int64 a2)
{
  unsigned __int8 **v2; // r14
  int v3; // edx

  v2 = (unsigned __int8 **)(a1 + 1184);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
         a1,
         a1 + 1184,
         4,
         a2,
         1) == 1 )
  {
    v3 = **v2;
    LOBYTE(v2) = 1;
    if ( v3 != 85 )
    {
      LODWORD(v2) = 0;
      sub_100006F60(a1, "Unexpected dyld_opcode in the debugger server (init_dyld): 0x%x", v3);
    }
  }
  else
  {
    LODWORD(v2) = 0;
  }
  return (unsigned int)v2;
}
