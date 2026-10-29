/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C4FC0
// Address: 0x00000000000C4FC0

//----- (00000000000C4FC0) ----------------------------------------------------
__int64 __fastcall sub_C4FC0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  bool v4; // sf
  bool v5; // of
  int v6; // eax
  char v7; // al
  bool v8; // sf
  bool v9; // of
  int v10; // ecx
  char v11; // cl
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = *a2;
  v5 = __OFSUB__(*a2, *a1);
  v4 = *a2 - *a1 < 0;
  if ( *a2 == *a1 )
  {
    v6 = a2[1];
    v5 = __OFSUB__(v6, a1[1]);
    v4 = v6 - a1[1] < 0;
  }
  v7 = v4 ^ v5;
  v9 = __OFSUB__(*a3, v3);
  v8 = *a3 - v3 < 0;
  if ( *a3 == v3 )
  {
    v10 = a3[1];
    v9 = __OFSUB__(v10, a2[1]);
    v8 = v10 - a2[1] < 0;
  }
  v11 = v8 ^ v9;
  if ( !v7 )
  {
    result = 0;
    if ( !v11 )
      return result;
    v14 = *(_QWORD *)a2;
    *(_QWORD *)a2 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v14;
    if ( *a2 == *a1 )
    {
      result = 1;
      if ( a2[1] >= a1[1] )
        return result;
    }
    else
    {
      result = 1;
      if ( *a2 >= *a1 )
        return result;
    }
    v15 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v15;
    return 2;
  }
  v12 = *(_QWORD *)a1;
  if ( v11 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v12;
    return 1;
  }
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v12;
  if ( *a3 != (_DWORD)v12 )
  {
    result = 1;
    if ( *a3 >= (int)v12 )
      return result;
    goto LABEL_18;
  }
  result = 1;
  if ( a3[1] < SHIDWORD(v12) )
  {
LABEL_18:
    *(_QWORD *)a2 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v12;
    return 2;
  }
  return result;
}
