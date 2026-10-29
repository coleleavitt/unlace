/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A800
// Address: 0x000000014000A800

//----- (000000014000A800) ----------------------------------------------------
void __fastcall sub_14000A800(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  _QWORD *v5; // rcx
  void *v6; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    do
    {
      sub_140062880(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                              + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2))));
      v2 = *(_QWORD *)(a1 + 32) - 1LL;
      *(_QWORD *)(a1 + 32) = v2;
    }
    while ( v2 );
    *(_QWORD *)(a1 + 24) = 0;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    while ( v3 > 0 )
    {
      --v3;
      v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
      if ( v4 )
        j_j_free(v4);
    }
    v5 = *(_QWORD **)(a1 + 8);
    if ( (unsigned __int64)(8LL * *(_QWORD *)(a1 + 16)) >= 0x1000 )
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v5 = (_QWORD *)*(v5 - 1);
    }
    j_j_free(v5);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  j_j_free(v6);
}
