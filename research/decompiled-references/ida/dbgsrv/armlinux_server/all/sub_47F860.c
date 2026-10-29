/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F860
// Address: 0x000000000047F860

//----- (000000000047F860) ----------------------------------------------------
void __fastcall sub_47F860(int *a1, __off64_t a2, size_t a3, int a4, __int64 *a5)
{
  void *v10; // x20
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14[4]; // [xsp+40h] [xbp-20h] BYREF

  if ( a2 + a3 > sub_48C400((__int64)a1) )
    sub_40A608("show_hex_file: read past end");
  v10 = sub_49ECD8(a3);
  sub_48C428((__int64)a1, a2, 0);
  sub_47DC98(a1, v10, a3);
  v11 = a5[1];
  v12 = a5[2];
  v13 = a5[3];
  v14[0] = *a5;
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v13;
  sub_47F678((__int64)v10, a3, a4, v14);
  if ( v10 )
    j_j__free_0_1(v10);
}
