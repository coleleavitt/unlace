/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410D58
// Address: 0x0000000000410D58

//----- (0000000000410D58) ----------------------------------------------------
void __fastcall __noreturn sub_410D58(_QWORD *a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x20
  __int64 v3; // x0
  __int64 *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1

  sub_49EF68(a1);
  v3 = *(_QWORD *)(v1 + 16) + 72LL;
  *(_QWORD *)(v1 + 16) = v3;
  if ( v3 == v2[2] )
  {
    v4 = (__int64 *)(v2[3] + 8LL);
    v2[3] = v4;
    v5 = *v4;
    v6 = *v4 + 504;
    v2[1] = v5;
    v2[2] = v6;
    *(_QWORD *)(v1 + 16) = v5;
  }
  j__free_0(*(void **)(*(_QWORD *)(v1 + 40) - 8LL));
  sub_49DD38();
}
// 410D5C: variable 'v1' is possibly undefined
// 410D68: variable 'v2' is possibly undefined
