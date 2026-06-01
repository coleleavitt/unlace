/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000711A8
// Address: 0x00000001000711A8

//----- (00000001000711A8) ----------------------------------------------------
void __fastcall sub_1000711A8(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  unsigned __int64 v4; // x8
  void *v5; // x20
  void *v6; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *(_QWORD *)(a1 + 24) = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v4 = *(unsigned int *)(v2 + 16);
  *(_QWORD *)(a1 + 48) = v4;
  if ( !(_DWORD)v4 )
    return;
  if ( v3 < 1 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 48) = 0;
    return;
  }
  v5 = (void *)(((v3 + v4 - 1) / v4 + 7) >> 3);
  *(_QWORD *)(a1 + 40) = qalloc((void *)v3);
  v6 = qalloc(v5);
  *(_QWORD *)(a1 + 32) = v6;
  if ( !*(_QWORD *)(a1 + 40) || !v6 )
  {
    qfree(*(void **)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0;
    qfree(*(void **)(a1 + 32));
    *(_QWORD *)(a1 + 32) = 0;
    goto LABEL_9;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  bzero(v6, (size_t)v5);
}
// 100071228: variable '_18' is possibly undefined
