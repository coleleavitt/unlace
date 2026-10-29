__int64 __fastcall sub_40D630(__int64 a1)
{
  __int64 result; // rax

  result = Tcl_Free(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}

