/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000588A0
// Address: 0x00000001000588A0

//----- (00000001000588A0) ----------------------------------------------------
__int64 __fastcall sub_1000588A0(_BYTE *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x19
  __int64 v6; // x20
  _BYTE *v7; // x22
  __int64 v8; // x23
  char *v9; // x8
  __int64 v10; // x9
  char v12; // [xsp+7h] [xbp-39h] BYREF

  v4 = a4;
  a2[1] = 0;
  v6 = (int)a4;
  if ( (a1[672] & 0x10) != 0 )
  {
    v12 = 0;
    sub_100019CE4((_QWORD **)a2, (int)a4, &v12);
  }
  else
  {
    if ( (_DWORD)a4 )
    {
      v7 = a1;
      v8 = a3;
      v9 = (char *)*a2;
      if ( a2[2] >= (unsigned __int64)(int)a4 )
      {
        v10 = 0;
      }
      else
      {
        v9 = (char *)qvector_reserve(a2, (_QWORD *)*a2, (int)a4, 1u);
        *a2 = v9;
        v10 = a2[1];
      }
      bzero(&v9[v10], v6 - v10);
      a2[1] = v6;
      a3 = v8;
      a1 = v7;
    }
    if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           a3,
           *a2,
           v6,
           0) < 1 )
      return 0xFFFFFFFFLL;
  }
  return v4;
}
