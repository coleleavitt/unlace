/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000285D0
// Address: 0x00000001000285D0

//----- (00000001000285D0) ----------------------------------------------------
__int64 __fastcall sub_1000285D0(__int64 a1, char *__s)
{
  __int64 v2; // x19
  __int64 v4; // x23
  size_t v5; // x21
  void *v6; // x0
  void *v8; // [xsp+0h] [xbp-50h] BYREF
  size_t v9; // [xsp+8h] [xbp-48h]
  __int64 v10; // [xsp+10h] [xbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  if ( __s )
  {
    v4 = a1;
    v5 = strlen(__s);
    if ( v5 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve(&v8, nullptr, v5 + 1, 1u);
      v8 = v6;
    }
    v9 = v5 + 1;
    memmove(v6, __s, v5);
    *((_BYTE *)v8 + v5) = 0;
    a1 = v4;
  }
  sub_100014404((_QWORD **)a1, &v8);
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
  }
  return v2;
}
