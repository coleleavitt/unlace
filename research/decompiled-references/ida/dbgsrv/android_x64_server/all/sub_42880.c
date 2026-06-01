/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42880
// Address: 0x0000000000042880

//----- (0000000000042880) ----------------------------------------------------
__int64 __fastcall sub_42880(__int64 a1)
{
  FILE *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // rdi
  int v8; // ebp
  unsigned __int64 v9; // rax
  void *v10; // rdi
  void *v11; // rdi

  if ( *(_DWORD *)(a1 + 1140) != -1 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  *(_QWORD *)(a1 + 1140) = -1;
  *(_BYTE *)(a1 + 1148) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  *(_WORD *)(a1 + 1229) = 0;
  sub_488F0(a1 + 1032, *(_QWORD **)(a1 + 1040));
  *(_QWORD *)(a1 + 1032) = a1 + 1040;
  *(_OWORD *)(a1 + 1040) = 0;
  sub_48950(a1 + 1008, *(_QWORD **)(a1 + 1016));
  *(_QWORD *)(a1 + 1008) = a1 + 1016;
  *(_OWORD *)(a1 + 1016) = 0;
  sub_488B0(a1 + 984, *(_QWORD **)(a1 + 992));
  *(_QWORD *)(a1 + 984) = a1 + 992;
  *(_OWORD *)(a1 + 992) = 0;
  sub_38A40((_QWORD *)(a1 + 120));
  v2 = *(FILE **)(a1 + 1216);
  if ( v2 )
  {
    qfclose(v2);
    *(_QWORD *)(a1 + 1216) = 0;
  }
  *(_BYTE *)(a1 + 880) = 0;
  sub_38580(a1 + 432, *(_QWORD **)(a1 + 440));
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_OWORD *)(a1 + 440) = 0;
  *(_WORD *)(a1 + 1150) = 0;
  v3 = *(void **)(a1 + 824);
  if ( v3 )
  {
    sub_36570(v3);
    *(_QWORD *)(a1 + 824) = 0;
    sub_489D0((__int64)&qword_155708, (_QWORD *)xmmword_155710);
    qword_155708 = (__int64)&xmmword_155710;
    xmmword_155710 = 0;
  }
  v4 = *(_QWORD *)(a1 + 832);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v4,
      a1 + 840,
      *(unsigned __int8 *)(a1 + 841));
  *(_QWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 841) = 0;
  v5 = *(_QWORD *)(a1 + 848);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v5,
      a1 + 856,
      *(unsigned __int8 *)(a1 + 857));
  *(_QWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 857) = 0;
  v6 = *(_QWORD *)(a1 + 864);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v6,
      a1 + 872,
      *(unsigned __int8 *)(a1 + 873));
  *(_QWORD *)(a1 + 864) = 0;
  *(_BYTE *)(a1 + 873) = 0;
  *(_DWORD *)(a1 + 1224) = 0;
  v7 = *(void **)(a1 + 1232);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 1240) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 1232) = 0;
    *(_QWORD *)(a1 + 1248) = 0;
  }
  *(_QWORD *)(a1 + 1264) = 0;
  *(_BYTE *)(a1 + 1149) = 0;
  if ( *(_QWORD *)(a1 + 968) )
  {
    v8 = 1;
    v9 = 0;
    do
    {
      qfree(*(void **)(*(_QWORD *)(a1 + 960) + 8 * v9));
      v9 = v8++;
    }
    while ( *(_QWORD *)(a1 + 968) > v9 );
  }
  v10 = *(void **)(a1 + 936);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 944) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 936) = 0;
    *(_QWORD *)(a1 + 952) = 0;
  }
  v11 = *(void **)(a1 + 960);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 968) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 960) = 0;
    *(_QWORD *)(a1 + 976) = 0;
  }
  return sub_9FEA0(a1);
}
// 155708: using guessed type __int64 qword_155708;
// 155710: using guessed type __int128 xmmword_155710;
