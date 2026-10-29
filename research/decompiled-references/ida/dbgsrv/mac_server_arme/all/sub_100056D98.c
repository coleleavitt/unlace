/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056D98
// Address: 0x0000000100056D98

//----- (0000000100056D98) ----------------------------------------------------
__int64 __fastcall sub_100056D98(__int64 a1, void **a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // x10
  __int64 v10; // x12
  _DWORD *v11; // x11
  __int64 v12; // x0
  char *v13; // x20
  const void **v14; // x24
  char *v15; // x23
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x22
  unsigned __int64 v19; // x21
  _QWORD *v20; // x9
  _QWORD *v21; // x8
  void *v23; // [xsp+20h] [xbp-60h]
  char v24; // [xsp+47h] [xbp-39h] BYREF

  v9 = *(_QWORD *)(a6 + 8);
  if ( (v9 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
  {
    v10 = 4 * v9;
    v11 = *(_DWORD **)a6;
    while ( *v11 != *(unsigned __int16 *)(a1 + 8) )
    {
      ++v11;
      v10 -= 4;
      if ( !v10 )
        goto LABEL_10;
    }
  }
  else
  {
    v11 = *(_DWORD **)a6;
  }
  if ( v11 == (_DWORD *)(*(_QWORD *)a6 + 4 * v9) )
  {
LABEL_10:
    sub_100000B44();
    return 0xFFFFFFFFLL;
  }
  else
  {
    v12 = (*(__int64 (**)(void))(*(_QWORD *)*a4 + 16LL))();
    v13 = *(char **)(v12 + 8);
    if ( v13 )
    {
      v14 = (const void **)v12;
      v15 = (char *)qalloc_or_throw(*(_QWORD *)(v12 + 8));
      memcpy(v15, *v14, (size_t)v13);
      v13 = v15;
    }
    else
    {
      v15 = &byte_10007AE40;
    }
    v17 = open_linput(v15, 0);
    v23 = (void *)v17;
    if ( v17 )
    {
      v18 = a4[13] + 120LL * *(unsigned __int16 *)(a1 + 8);
      qlseek(v17, *(_QWORD *)(v18 + 48), 0);
      v19 = *(unsigned int *)(v18 + 8);
      v20 = a2[1];
      if ( (unsigned __int64)v20 >= v19 )
      {
        if ( v20 != (_QWORD *)v19 )
        {
          v24 = 0;
          sub_10001B764((_QWORD **)a2, v19, &v24);
        }
      }
      else
      {
        v21 = *a2;
        if ( (unsigned __int64)a2[2] < v19 )
        {
          v21 = qvector_reserve(a2, *a2, *(unsigned int *)(v18 + 8), 1u);
          *a2 = v21;
          v20 = a2[1];
        }
        bzero((char *)v20 + (_QWORD)v21, v19 - (_QWORD)v20);
        a2[1] = (void *)v19;
      }
      if ( qlread((__int64)v23, *a2, *(unsigned int *)(v18 + 8)) == *(_DWORD *)(v18 + 8) )
      {
        v16 = 0;
      }
      else
      {
        sub_100000B44();
        v16 = 0xFFFFFFFFLL;
      }
      close_linput(v23);
    }
    else
    {
      sub_100000B44();
      v16 = 0xFFFFFFFFLL;
    }
    if ( v13 )
      qfree(v13);
  }
  return v16;
}
// 10007AE40: using guessed type char byte_10007AE40;
