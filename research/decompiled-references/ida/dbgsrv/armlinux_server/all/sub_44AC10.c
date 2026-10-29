/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AC10
// Address: 0x000000000044AC10

//----- (000000000044AC10) ----------------------------------------------------
void __fastcall __noreturn sub_44AC10(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // x19
  __int64 v9; // x21
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x21
  __int64 i; // x19
  __int64 *v14; // x0
  void *v15; // x0
  __int64 v16; // x1
  int v17; // w0
  _QWORD v18[3]; // [xsp+50h] [xbp-40h] BYREF
  char v19[8]; // [xsp+68h] [xbp-28h] BYREF
  __int64 v20; // [xsp+70h] [xbp-20h]
  __int64 v21; // [xsp+78h] [xbp-18h]
  __int64 v22; // [xsp+80h] [xbp-10h]

  memset(v18, 0, sizeof(v18));
  v19[0] = 2;
  v20 = a4;
  v21 = 0;
  v22 = 0;
  sub_44AA08((__int64)v18, a4);
  if ( a4 > 0 )
  {
    v8 = 0;
    v9 = 32 * ((unsigned int)(a4 - 1) + 1LL);
    do
    {
      sub_444078(v18[0] + v8, (_QWORD *)(a3 + v8));
      v8 += 32;
    }
    while ( v9 != v8 );
  }
  v10 = *(void **)(a1 + 48);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v10);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v11 = *(void **)(a1 + 72);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v11);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = (__int64 *)(*(_QWORD *)(a1 + 24) + 32 * i);
        sub_448310(v14);
      }
    }
    v15 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v15);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(v16 + 120) - 1;
  *(_DWORD *)(v16 + 120) = v17;
  if ( !v17 && off_520160 )
    off_520160();
  *(_DWORD *)a1 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(a2 + 8))(v18[0], v19);
  if ( under_debugger )
    __break(0x3E8u);
  sub_492270(291);
}
// 520160: using guessed type __int64 (*off_520160)();
// 52451C: using guessed type char under_debugger;
