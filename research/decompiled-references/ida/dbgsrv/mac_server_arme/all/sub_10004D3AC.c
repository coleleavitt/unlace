/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D3AC
// Address: 0x000000010004D3AC

//----- (000000010004D3AC) ----------------------------------------------------
__int64 __fastcall sub_10004D3AC(int a1, _QWORD *a2, char *__s)
{
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x22
  _QWORD *v8; // x1

  if ( __s && (v5 = strlen(__s)) != 0 )
  {
    v6 = v5;
    v7 = v5 + 1;
    v8 = (_QWORD *)*a2;
    if ( a2[2] < v5 + 1 )
    {
      v8 = qvector_reserve(a2, v8, v7, 1u);
      *a2 = v8;
    }
    a2[1] = v7;
    memmove(v8, __s, v6);
    *(_BYTE *)(*a2 + v6) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return 0;
}
