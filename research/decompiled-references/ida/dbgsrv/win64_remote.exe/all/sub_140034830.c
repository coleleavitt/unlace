/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034830
// Address: 0x0000000140034830

//----- (0000000140034830) ----------------------------------------------------
__int64 __fastcall sub_140034830(_QWORD *a1, int a2)
{
  const char *v3; // rdx
  __int16 v5; // si
  char v7; // al
  char v8; // cl
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = Str1;
  if ( a1[5] )
    v3 = (const char *)a1[4];
  v5 = sub_1400333C0(a1, v3, &v9);
  switch ( v9 )
  {
    case 1:
      v7 = -60;
      v8 = -64;
      break;
    case 2:
      v7 = -58;
      v8 = -62;
      break;
    case 3:
      v7 = -35;
      v8 = -37;
      break;
    default:
      return sub_1400640B0(0x3Au);
  }
  if ( a2 > 0 )
    v7 = v8;
  if ( (unsigned __int8)v5 == v5 )
  {
    sub_1400347C0((__int64)a1, v7);
    sub_1400344E0((__int64)a1, v5);
  }
  else
  {
    sub_1400347C0((__int64)a1, v7 + 1);
    sub_1400343E0((__int64)a1, v5);
  }
  return 0;
}
