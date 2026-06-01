/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008DA4
// Address: 0x0000000100008DA4

//----- (0000000100008DA4) ----------------------------------------------------
__int64 __fastcall sub_100008DA4(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // x19
  size_t v5; // x21
  void *v6; // x22
  void *v7; // x0
  __int128 v9; // [xsp+0h] [xbp-70h] BYREF
  __int128 v10; // [xsp+10h] [xbp-60h]
  void *__src[2]; // [xsp+20h] [xbp-50h]
  __int128 v12; // [xsp+30h] [xbp-40h]

  *(_OWORD *)__src = 0u;
  v12 = 0u;
  v9 = xmmword_10007AB80;
  v10 = 0u;
  v4 = sub_100008B84(a1, (__int64)&v9, a3);
  if ( (v4 & 1) != 0 )
  {
    v5 = v12;
    if ( (_QWORD)v12 )
    {
      v6 = qalloc_or_throw(v12);
      memcpy(v6, __src[1], v5);
      v7 = *(void **)a2;
      if ( !*(_QWORD *)a2 )
        goto LABEL_7;
    }
    else
    {
      v6 = nullptr;
      v7 = *(void **)a2;
      if ( !*(_QWORD *)a2 )
      {
LABEL_7:
        *(_QWORD *)a2 = v6;
        *(_QWORD *)(a2 + 8) = v5;
        *(_QWORD *)(a2 + 16) = v5;
        goto LABEL_8;
      }
    }
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v7);
    goto LABEL_7;
  }
LABEL_8:
  if ( __src[1] )
  {
    *(_QWORD *)&v12 = 0;
    qfree(__src[1]);
    __src[1] = nullptr;
    *((_QWORD *)&v12 + 1) = 0;
  }
  if ( (_QWORD)v10 )
  {
    *((_QWORD *)&v10 + 1) = 0;
    qfree((void *)v10);
  }
  return v4;
}
// 10007AB80: using guessed type __int128 xmmword_10007AB80;
