/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044240
// Address: 0x0000000140044240

//----- (0000000140044240) ----------------------------------------------------
__int64 __fastcall sub_140044240(_BYTE *a1, void **a2, __int64 a3, int a4)
{
  char *v6; // rsi
  char *v8; // rdx
  char *j; // rcx
  char *i; // rcx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  a2[1] = nullptr;
  v6 = (char *)a4;
  if ( (a1[632] & 0x10) != 0 )
  {
    if ( a4 )
    {
      v8 = (char *)*a2;
      if ( v12 < v8 || v12 >= (char *)a2[2] + (unsigned __int64)v8 )
      {
        if ( a4 > (unsigned __int64)a2[2] )
          *a2 = sub_14005ABE0((__int64)a2, v8, a4, 1u);
        for ( i = (char *)a2[1]; i < v6; ++i )
          *((_BYTE *)*a2 + (_QWORD)i) = 0;
      }
      else
      {
        if ( a4 > (unsigned __int64)a2[2] )
          *a2 = sub_14005ABE0((__int64)a2, v8, a4, 1u);
        for ( j = (char *)a2[1]; j < v6; ++j )
          *((_BYTE *)*a2 + (_QWORD)j) = 0;
      }
      a2[1] = v6;
    }
  }
  else
  {
    sub_140002EF0((__int64)a2, a4);
    if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, void *, char *, _QWORD))(*(_QWORD *)a1 + 280LL))(
           a1,
           a3,
           *a2,
           v6,
           0) <= 0 )
      LODWORD(v6) = -1;
  }
  return (unsigned int)v6;
}
