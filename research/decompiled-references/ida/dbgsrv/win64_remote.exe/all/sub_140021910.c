/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021910
// Address: 0x0000000140021910

//----- (0000000140021910) ----------------------------------------------------
char __fastcall sub_140021910(char *a1)
{
  char v1; // al
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *a1;
  if ( *a1 == 2 )
    return 1;
  switch ( v1 )
  {
    case 5:
      sub_140029390((__int64)a1);
      *((_QWORD *)a1 + 1) = 1;
      return 1;
    case 7:
      v4 = *((_QWORD *)a1 + 2);
      sub_140029390((__int64)a1);
      v5 = 0;
      v6 = v4 - 1;
      if ( !v4 )
        v6 = 0;
      LOBYTE(v5) = v6 != 0;
      *((_QWORD *)a1 + 1) = v5;
      return 1;
    case 9:
      *a1 = 2;
      *((_QWORD *)a1 + 1) = *((_QWORD *)a1 + 1) != 0;
      return 1;
    default:
      sub_1400640B0(0x3Du);
      return 0;
  }
}
