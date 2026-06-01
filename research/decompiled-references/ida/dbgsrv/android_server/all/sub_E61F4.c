/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E61F4
// Address: 0x00000000000E61F4

//----- (00000000000E61F4) ----------------------------------------------------
__int64 __fastcall sub_E61F4(__int64 a1)
{
  const char *v1; // x8
  const char *v2; // x20
  __int64 v4; // x9
  const char *v5; // x10
  unsigned __int64 v6; // x9
  const char *v7; // x11
  char *v8; // x21
  _QWORD *v9; // x22
  _QWORD *v10; // x8
  __int64 v11; // x9
  __int64 result; // x0
  _QWORD *v13; // x0

  v2 = *(const char **)a1;
  v1 = *(const char **)(a1 + 8);
  if ( v1 == *(const char **)a1 || (unsigned int)*(unsigned __int8 *)v2 - 48 > 9 )
    return 0;
  if ( v2 == v1 )
  {
    v6 = -48;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v2;
      *(_QWORD *)a1 = ++v2;
      v6 = v4 + *(unsigned __int8 *)v5 - 48;
      if ( v1 == v2 || (unsigned int)*(unsigned __int8 *)v2 - 48 >= 0xA )
        break;
      v4 = 10 * v6;
      if ( v1 == v2 )
      {
        v7 = v2;
        v2 = v5 + 1;
        v6 = v4 - 48;
        goto LABEL_11;
      }
    }
  }
  v7 = v2;
LABEL_11:
  if ( v6 - 1 >= v1 - v7 )
    return 0;
  v8 = (char *)&v2[v6];
  *(_QWORD *)a1 = &v2[v6];
  if ( v6 >= 0xA
    && *v2 == 95
    && v2[1] == 71
    && v2[2] == 76
    && v2[3] == 79
    && v2[4] == 66
    && v2[5] == 65
    && v2[6] == 76
    && v2[7] == 95
    && v2[8] == 95
    && v2[9] == 78 )
  {
    v9 = *(_QWORD **)(a1 + 4832);
    v2 = "(anonymous namespace)";
    v8 = "";
    v10 = v9 + 1;
    v11 = v9[1];
    if ( (unsigned __int64)(v11 + 32) <= 0xFEF )
      goto LABEL_28;
    goto LABEL_27;
  }
  v9 = *(_QWORD **)(a1 + 4832);
  v10 = v9 + 1;
  v11 = v9[1];
  if ( (unsigned __int64)(v11 + 32) >= 0xFF0 )
  {
LABEL_27:
    v13 = (_QWORD *)operator new[](0x1000u);
    v11 = 0;
    *v13 = v9;
    v13[1] = 0;
    v10 = v13 + 1;
    v9 = v13;
    *(_QWORD *)(a1 + 4832) = v13;
  }
LABEL_28:
  *v10 = v11 + 32;
  *(_QWORD *)((char *)v9 + v11 + 16) = off_161838;
  result = (__int64)v9 + v11 + 16;
  *(_DWORD *)(result + 8) = 16843015;
  *(_QWORD *)(result + 16) = v2;
  *(_QWORD *)(result + 24) = v8;
  return result;
}
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
