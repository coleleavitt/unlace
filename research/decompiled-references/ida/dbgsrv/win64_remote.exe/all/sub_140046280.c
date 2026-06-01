/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046280
// Address: 0x0000000140046280

//----- (0000000140046280) ----------------------------------------------------
__int64 __fastcall sub_140046280(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( !v2 )
    return 0;
  sub_14001A300(a2 + 8, v2);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = sub_140040170();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 280LL))(
         v6,
         v3,
         v5,
         v2,
         0) == v2 )
    return 0;
  else
    return sub_140020490(a2, "read error");
}
