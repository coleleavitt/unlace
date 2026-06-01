/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BF60
// Address: 0x000000000048BF60

//----- (000000000048BF60) ----------------------------------------------------
_QWORD *__fastcall sub_48BF60(const char *a1, char a2)
{
  _DWORD *v2; // x0
  _DWORD *v3; // x20
  _QWORD *result; // x0
  FILE *v5; // x20
  _QWORD *v6; // x0
  _QWORD *v7; // x19

  if ( !a2 )
  {
    v5 = sub_48DDA0(a1);
    if ( v5 )
    {
      result = sub_49E050(0x38u);
      *(_DWORD *)result = 1;
      result[1] = v5;
      return result;
    }
    return nullptr;
  }
  v2 = (_DWORD *)sub_47DB60();
  v3 = v2;
  if ( !v2 )
    return nullptr;
  if ( v2[4] == -1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    return nullptr;
  }
  else
  {
    v6 = sub_49E050(0x38u);
    *(_DWORD *)v6 = 2;
    v6[1] = v3;
    v7 = v6;
    sub_48BC58(v6);
    return v7;
  }
}
