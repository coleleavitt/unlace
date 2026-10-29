/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018334
// Address: 0x0000000100018334

//----- (0000000100018334) ----------------------------------------------------
__int64 __fastcall sub_100018334(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // x21
  size_t v10; // x22
  void *v11; // x23
  void *v12; // x0
  __int64 (__fastcall **v14)(); // [xsp+0h] [xbp-90h] BYREF
  int v15; // [xsp+8h] [xbp-88h]
  __int64 v16; // [xsp+Ch] [xbp-84h]
  __int128 v17; // [xsp+14h] [xbp-7Ch]
  void *__src[2]; // [xsp+28h] [xbp-68h]
  __int128 v19; // [xsp+38h] [xbp-58h]
  __int128 v20; // [xsp+48h] [xbp-48h]

  v14 = off_10009CBD0;
  v15 = 1;
  v16 = 0;
  v17 = 0u;
  *(_OWORD *)__src = 0u;
  v19 = 0u;
  v20 = 0u;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 32LL))(
         a1,
         a5,
         a6,
         &v14);
  if ( (v9 & 1) != 0 )
  {
    if ( a2 )
      *a2 = v17;
    if ( a3 )
      *a3 = *(_QWORD *)((char *)&v17 + 4);
    if ( a4 )
    {
      v10 = v19;
      if ( (_QWORD)v19 )
      {
        v11 = qalloc_or_throw(v19);
        memcpy(v11, __src[1], v10);
        v12 = *(void **)a4;
        if ( !*(_QWORD *)a4 )
          goto LABEL_12;
      }
      else
      {
        v11 = nullptr;
        v12 = *(void **)a4;
        if ( !*(_QWORD *)a4 )
        {
LABEL_12:
          *(_QWORD *)a4 = v11;
          *(_QWORD *)(a4 + 8) = v10;
          *(_QWORD *)(a4 + 16) = v10;
          goto LABEL_13;
        }
      }
      *(_QWORD *)(a4 + 8) = 0;
      qfree(v12);
      goto LABEL_12;
    }
  }
LABEL_13:
  v14 = off_10009CBD0;
  if ( __src[1] )
  {
    *(_QWORD *)&v19 = 0;
    qfree(__src[1]);
  }
  return v9;
}
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
