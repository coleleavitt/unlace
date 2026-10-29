/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029FC0
// Address: 0x0000000100029FC0

//----- (0000000100029FC0) ----------------------------------------------------
__int64 __fastcall sub_100029FC0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 *v3; // rbx
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = (__int64 *)*(unsigned int *)(v1 + 4 * v2 - 4);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v4 = *(_DWORD *)(v1 + 4 * v2 - 8);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 304) = v2 - 2;
  }
  else
  {
    v4 = *(_DWORD *)(v1 - 4);
  }
  sub_100029AE0(a1, 171, v4);
  if ( v3 )
    sub_100032CB0(*(void ***)(a1 + 200), v3, *(_DWORD *)(a1 + 208) - (_DWORD)v3 - 4);
  return 0;
}
