/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DB60
// Address: 0x0002DB60

//----- (0002DB60) --------------------------------------------------------
int __fastcall sub_2DB60(int a1, int a2, int *a3)
{
  __int64 v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int *v10; // r4
  int v11; // r5
  int v12; // r2
  int v13; // r3

  v5 = *(_QWORD *)a3;
  if ( *(__int64 *)a3 >= 1 && *((_QWORD *)a3 + 2) )
  {
    if ( *(__int64 *)a2 < 1 || !*(_QWORD *)(a2 + 16) )
      goto LABEL_7;
    if ( *(_QWORD *)a2 != v5 )
    {
      sub_2BC80((int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX)"
                     ", using the latter");
LABEL_7:
      v6 = *a3;
      v7 = a3[1];
      v8 = a3[2];
      v9 = a3[3];
      v10 = a3 + 4;
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 4) = v7;
      *(_DWORD *)(a2 + 8) = v8;
      *(_DWORD *)(a2 + 12) = v9;
      v11 = a2 + 16;
      v5 = *(_QWORD *)v10;
      v12 = v10[2];
      v13 = v10[3];
      *(_QWORD *)v11 = *(_QWORD *)v10;
      *(_DWORD *)(v11 + 8) = v12;
      *(_DWORD *)(v11 + 12) = v13;
    }
  }
  return v5;
}
