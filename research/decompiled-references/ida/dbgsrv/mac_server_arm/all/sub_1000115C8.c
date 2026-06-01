/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000115C8
// Address: 0x00000001000115C8

//----- (00000001000115C8) ----------------------------------------------------
_QWORD *__fastcall sub_1000115C8(__int64 a1, __int64 a2, char *a3, int a4)
{
  char *v8; // x0
  _QWORD *v9; // x19
  _QWORD **v10; // x20
  _QWORD *v11; // x0

  v8 = (char *)operator new(0x38u);
  v9 = v8;
  *((_QWORD *)v8 + 1) = 0;
  v10 = (_QWORD **)(v8 + 8);
  *((_QWORD *)v8 + 2) = 0;
  *((_QWORD *)v8 + 3) = 0;
  v8[48] = 0;
  if ( a4 )
  {
    *(_QWORD *)v8 = &off_100098F60;
    *((_QWORD *)v8 + 4) = a1;
    *((_QWORD *)v8 + 5) = a2;
    sub_10001115C((_QWORD **)v8 + 1, (__int64)a3);
    if ( !sub_100011310(v10, v9[4], v9[5], a3, -1, (__int64)"strings table", 1) )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v9[2] = 0;
        qfree(v11);
        v9[1] = 0;
        v9[3] = 0;
      }
    }
  }
  else
  {
    *(_QWORD *)v8 = &off_100098F38;
    *((_QWORD *)v8 + 4) = a1;
    *((_QWORD *)v8 + 5) = a2;
    sub_10001115C((_QWORD **)v8 + 1, (__int64)a3);
  }
  return v9;
}
// 100098F38: using guessed type __int64 (__fastcall *off_100098F38)();
// 100098F60: using guessed type __int64 (__fastcall *off_100098F60)();
