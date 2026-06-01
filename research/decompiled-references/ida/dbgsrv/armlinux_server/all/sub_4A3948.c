/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3948
// Address: 0x00000000004A3948

//----- (00000000004A3948) ----------------------------------------------------
unsigned int **__fastcall sub_4A3948(
        unsigned int **a1,
        size_t a2,
        unsigned __int64 a3,
        unsigned int *a4,
        unsigned __int64 a5)
{
  unsigned int *v6; // x22
  size_t v8; // x3
  __int64 v9; // x19
  unsigned int **v10; // x20
  int v12; // w0
  _BYTE *v13; // x22
  __int64 *v16; // [xsp+48h] [xbp+48h] BYREF

  v6 = *a1;
  v8 = *((_QWORD *)*a1 - 3);
  if ( a2 > v8 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v8);
  v9 = v8 - a2;
  if ( v8 - a2 > a3 )
    v9 = a3;
  if ( a5 > 0x3FFFFFFFFFFFFFF9LL - v8 + v9 )
    sub_4A04D0("basic_string::replace");
  v10 = a1;
  if ( a4 < v6 )
    return sub_4A2388(v10, a2, v9, a4, a5);
  if ( a4 > (unsigned int *)((char *)v6 + v8) )
    return sub_4A2388(v10, a2, v9, a4, a5);
  v12 = atomic_load(v6 - 2);
  if ( v12 > 0 )
    return sub_4A2388(v10, a2, v9, a4, a5);
  if ( (char *)a4 + a5 <= (char *)v6 + a2 )
  {
    v13 = (_BYTE *)((char *)a4 - (char *)v6);
    goto LABEL_12;
  }
  if ( a4 >= (unsigned int *)((char *)v6 + a2 + v9) )
  {
    v13 = (_BYTE *)((char *)a4 - (char *)v6 + a5 - v9);
LABEL_12:
    sub_4A1BB8(v10, a2, v9, a5);
    if ( a5 == 1 )
    {
      *((_BYTE *)*v10 + a2) = v13[(_QWORD)*v10];
    }
    else if ( a5 )
    {
      memcpy((char *)*v10 + a2, &v13[(_QWORD)*v10], a5);
    }
    return v10;
  }
  sub_4A3910(&v16, a4, a5);
  v10 = sub_4A2388(v10, a2, v9, v16, a5);
  if ( v16 - 3 != std::string::_Rep::_S_empty_rep_storage )
    sub_4A19F0(v16 - 3);
  return v10;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
