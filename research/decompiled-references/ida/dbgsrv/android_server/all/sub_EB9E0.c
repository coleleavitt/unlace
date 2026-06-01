/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EB9E0
// Address: 0x00000000000EB9E0

//----- (00000000000EB9E0) ----------------------------------------------------
char *__fastcall sub_EB9E0(__int64 a1)
{
  unsigned __int8 *v1; // x8
  char *v3; // x21
  char *v4; // x22
  char *v5; // x20
  _QWORD *v6; // x23
  _QWORD *v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x0
  __int64 v10; // x10
  char *v11; // x9

  v1 = *(unsigned __int8 **)a1;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < 2u || *v1 != 84 )
    goto LABEL_11;
  if ( v1[1] != 115 )
  {
    if ( *v1 == 84 )
    {
      if ( v1[1] == 117 )
      {
        v3 = "union";
        *(_QWORD *)a1 = v1 + 2;
        v4 = "";
        goto LABEL_12;
      }
      if ( *v1 == 84 && v1[1] == 101 )
      {
        v3 = "enum";
        *(_QWORD *)a1 = v1 + 2;
        v4 = "";
        goto LABEL_12;
      }
    }
LABEL_11:
    v3 = nullptr;
    v4 = nullptr;
    goto LABEL_12;
  }
  v3 = "struct";
  *(_QWORD *)a1 = v1 + 2;
  v4 = "";
LABEL_12:
  v5 = sub_DCBBC((unsigned __int8 **)a1, 0);
  if ( v5 && v3 != v4 )
  {
    v6 = *(_QWORD **)(a1 + 4832);
    v7 = v6 + 1;
    v8 = v6[1];
    if ( (unsigned __int64)(v8 + 48) >= 0xFF0 )
    {
      v9 = (_QWORD *)operator new[](0x1000u);
      v8 = 0;
      *v9 = v6;
      v9[1] = 0;
      v7 = v9 + 1;
      v6 = v9;
      *(_QWORD *)(a1 + 4832) = v9;
    }
    v10 = v8 + 48;
    v11 = (char *)v6 + v8;
    *v7 = v10;
    *((_QWORD *)v11 + 2) = off_163298;
    v11 += 16;
    *((_QWORD *)v11 + 4) = v5;
    v5 = v11;
    *((_DWORD *)v11 + 2) = 16843014;
    *((_QWORD *)v11 + 2) = v3;
    *((_QWORD *)v11 + 3) = v4;
  }
  return v5;
}
// 163298: using guessed type __int64 (__fastcall *off_163298[7])();
