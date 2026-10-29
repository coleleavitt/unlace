/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FF30
// Address: 0x000000000047FF30

//----- (000000000047FF30) ----------------------------------------------------
__int64 __fastcall sub_47FF30(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v4; // rbp
  char *v5; // rax
  __int64 result; // rax

  v4 = a2;
  sub_479A40((unsigned __int8 *)(a1 + 4128), a2, 4096);
  v5 = strrchr((const char *)(a1 + 4128), 47);
  if ( v5 )
  {
    *v5 = 0;
    v4 = (unsigned __int8 *)(v5 + 1);
  }
  else
  {
    sub_479A40((unsigned __int8 *)(a1 + 4128), (unsigned __int8 *)".", 4096);
  }
  *(_QWORD *)(a1 + 4112) = 0;
  *(_DWORD *)(a1 + 4120) = 0;
  result = sub_479A40((unsigned __int8 *)(a1 + 8224), v4, 4096);
  *(_DWORD *)(a1 + 12320) = a3;
  return result;
}
