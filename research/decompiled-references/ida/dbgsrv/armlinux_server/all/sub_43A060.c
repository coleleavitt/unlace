/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A060
// Address: 0x000000000043A060

//----- (000000000043A060) ----------------------------------------------------
__int64 __fastcall sub_43A060(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x0
  const char *v4; // x1

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return 0;
  result = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 48LL);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * (int)result);
    if ( *(_QWORD *)(v3 + 64) )
      v4 = *(const char **)(v3 + 56);
    else
      v4 = (const char *)&qword_4B2D48;
    result = sub_439DA8(a1, v4);
    if ( !(_DWORD)result )
      return sub_4397B0((_QWORD *)a1);
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
