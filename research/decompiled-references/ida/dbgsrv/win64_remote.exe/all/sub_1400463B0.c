/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400463B0
// Address: 0x00000001400463B0

//----- (00000001400463B0) ----------------------------------------------------
__int64 __fastcall sub_1400463B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  unsigned __int16 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = sub_140040170();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)v4 + 280LL))(
         v4,
         v2,
         &v6,
         2,
         0) != 2 )
    return sub_140020490(a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
