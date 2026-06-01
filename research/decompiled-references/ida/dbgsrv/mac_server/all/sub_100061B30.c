/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061B30
// Address: 0x0000000100061B30

//----- (0000000100061B30) ----------------------------------------------------
char __fastcall sub_100061B30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 552);
  if ( v2 )
  {
    if ( v2 > (int)a2 )
      return *(_QWORD *)(a1 + 544) + 32 * a2;
  }
  else
  {
    sub_100033990("debmod_t::get_reginfo is not implemented");
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0xCB8u);
  LOBYTE(v3) = sub_100061B80(3256, a2, v4, v5);
  return v3;
}
// 100061B7C: variable 'v4' is possibly undefined
// 100061B7C: variable 'v5' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
