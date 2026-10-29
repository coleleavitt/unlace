/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063A50
// Address: 0x0000000100063A50

//----- (0000000100063A50) ----------------------------------------------------
__int64 __fastcall sub_100063A50(_BYTE *a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r13
  char *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v10; // [rsp+Fh] [rbp-31h] BYREF

  v4 = a4;
  a2[1] = 0;
  v5 = a4;
  if ( (a1[672] & 0x10) != 0 )
  {
    v10 = 0;
    sub_10001CE90((__int64)a2, a4, &v10);
  }
  else
  {
    if ( a4 )
    {
      v6 = a3;
      v7 = (char *)*a2;
      if ( a2[2] >= (unsigned __int64)a4 )
      {
        v8 = 0;
      }
      else
      {
        v7 = (char *)qvector_reserve((__int64)a2, (void *)*a2, a4, 1u);
        *a2 = v7;
        v8 = a2[1];
      }
      __bzero(&v7[v8], v5 - v8);
      a2[1] = v5;
      a3 = v6;
    }
    if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           a3,
           *a2,
           v5,
           0) <= 0 )
      return (unsigned int)-1;
  }
  return v4;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
