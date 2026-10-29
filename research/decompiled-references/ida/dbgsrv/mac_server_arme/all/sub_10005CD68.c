/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CD68
// Address: 0x000000010005CD68

//----- (000000010005CD68) ----------------------------------------------------
void __fastcall sub_10005CD68(__int64 a1, int *a2)
{
  void *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10005CD68(a1, *(_QWORD *)a2);
    sub_10005CD68(a1, *((_QWORD *)a2 + 1));
    if ( a2[10] >= -1 )
    {
      v4 = *((void **)a2 + 6);
      if ( v4 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v4);
      }
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 10005CDC4: variable '_18' is possibly undefined
