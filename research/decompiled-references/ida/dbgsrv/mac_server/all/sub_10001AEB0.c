/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AEB0
// Address: 0x000000010001AEB0

//----- (000000010001AEB0) ----------------------------------------------------
bool __fastcall sub_10001AEB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int128 v4; // kr00_16
  __int64 v5; // r13
  void *v6; // rdi
  void *v7; // rdi
  __int128 v9; // [rsp+8h] [rbp-448h] BYREF
  __int64 v10; // [rsp+18h] [rbp-438h]
  char v11[1024]; // [rsp+20h] [rbp-430h] BYREF

  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 >= 2 )
  {
    qmakepath(v11, 1024, *(_QWORD *)(a1 + 184), a3, 0);
    sub_100019950((__int64)&v9, v11);
    v4 = v9;
    v9 = 0;
    v5 = v10;
    v10 = 0;
    v6 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v6);
      v7 = (void *)v9;
      *(_OWORD *)a2 = v4;
      *(_QWORD *)(a2 + 16) = v5;
      if ( v7 )
      {
        *((_QWORD *)&v9 + 1) = 0;
        qfree(v7);
      }
    }
    else
    {
      *(_OWORD *)a2 = v4;
      *(_QWORD *)(a2 + 16) = v5;
    }
  }
  return v3 >= 2;
}
