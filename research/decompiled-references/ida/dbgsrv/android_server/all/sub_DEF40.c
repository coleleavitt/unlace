/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DEF40
// Address: 0x00000000000DEF40

//----- (00000000000DEF40) ----------------------------------------------------
char *__fastcall sub_DEF40(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x9
  _BYTE *v3; // x10
  char *result; // x0
  unsigned __int8 *v6; // x8
  _QWORD *v7; // x21
  char *v8; // x19
  _QWORD *v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x0
  __int128 v12; // q0

  v1 = *(unsigned __int8 **)a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( *(unsigned __int8 **)a1 == v2 )
    return nullptr;
  if ( *v1 != 68 )
    return nullptr;
  v3 = v1 + 1;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 || *v3 != 116 && *v3 != 84 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 2;
  result = sub_DFE94((unsigned __int8 **)a1);
  if ( !result )
    return result;
  v6 = *(unsigned __int8 **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v6 != 69 )
    return nullptr;
  v7 = *(_QWORD **)(a1 + 4832);
  *(_QWORD *)a1 = v6 + 1;
  v8 = result;
  v9 = v7 + 1;
  v10 = v7[1];
  if ( (unsigned __int64)(v10 + 64) >= 0xFF0 )
  {
    v11 = (_QWORD *)operator new[](0x1000u);
    v10 = 0;
    *v11 = v7;
    v11[1] = 0;
    v9 = v11 + 1;
    v7 = v11;
    *(_QWORD *)(a1 + 4832) = v11;
  }
  *v9 = v10 + 64;
  *(_QWORD *)((char *)v7 + v10 + 16) = off_162578;
  result = (char *)v7 + v10 + 16;
  *(_QWORD *)&v12 = "decltype(";
  *((_QWORD *)&v12 + 1) = "";
  *((_OWORD *)result + 1) = v12;
  *(_QWORD *)&v12 = ")";
  *((_QWORD *)&v12 + 1) = "";
  *((_DWORD *)result + 2) = 16843050;
  *((_QWORD *)result + 4) = v8;
  *(_OWORD *)(result + 40) = v12;
  return result;
}
// 162578: using guessed type __int64 (__fastcall *off_162578[7])();
