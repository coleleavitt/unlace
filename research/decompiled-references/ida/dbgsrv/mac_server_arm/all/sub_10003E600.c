/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E600
// Address: 0x000000010003E600

//----- (000000010003E600) ----------------------------------------------------
__int64 __fastcall sub_10003E600(__int64 a1, char *__s, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  void *v12; // x25
  __int64 v13; // x23
  __int64 v14; // x28
  size_t v15; // x0
  void *v16; // x25
  void *v17; // x26
  size_t v19; // x27
  _QWORD *v20; // x24
  bool v21; // w26
  size_t v22; // x0
  size_t v23; // x23
  unsigned __int64 v24; // x25
  _QWORD *v25; // x1
  void *__p[2]; // [xsp+0h] [xbp-80h] BYREF
  unsigned __int64 v27; // [xsp+10h] [xbp-70h]
  void **v28; // [xsp+20h] [xbp-60h] BYREF

  if ( *(_BYTE *)(a1 + 608) == 1 )
  {
    *(_BYTE *)(a1 + 608) = 0;
    v12 = operator new(0x28u);
    sub_100045B78((__int64)v12, *(_QWORD *)(a1 + 560));
    *(_QWORD *)(a1 + 560) = v12;
  }
  if ( !__s || a4 > 0x7F || !*__s )
    return set_qerrno();
  v13 = *(_QWORD *)(a1 + 560);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = strlen(__s);
  if ( v15 >= 0x7FFFFFFFFFFFFFF8LL )
    sub_100044FA8();
  v16 = (void *)v15;
  if ( v15 >= 0x17 )
  {
    if ( (v15 | 7) == 0x17 )
      v19 = 25;
    else
      v19 = (v15 | 7) + 1;
    v17 = operator new(v19);
    __p[1] = v16;
    v27 = v19 | 0x8000000000000000LL;
    __p[0] = v17;
  }
  else
  {
    HIBYTE(v27) = v15;
    v17 = __p;
    if ( !v15 )
      goto LABEL_16;
  }
  memcpy(v17, __s, (size_t)v16);
LABEL_16:
  *((_BYTE *)v16 + (_QWORD)v17) = 0;
  v28 = __p;
  v20 = sub_100046408(v13, (__int64)__p, (__int64)&byte_1000763D7, (__int128 **)&v28);
  if ( SHIBYTE(v27) < 0 )
    operator delete(__p[0]);
  v21 = *(_QWORD *)(v13 + 24) != v14;
  if ( a3 && *a3 && (v22 = strlen(a3)) != 0 )
  {
    v23 = v22;
    v24 = v22 + 1;
    v25 = (_QWORD *)v20[5];
    if ( v20[7] < v22 + 1 )
    {
      v25 = qvector_reserve(v20 + 5, v25, v24, 1u);
      v20[5] = v25;
    }
    v20[6] = v24;
    memmove(v25, a3, v23);
    *(_BYTE *)(v20[5] + v23) = 0;
  }
  else
  {
    v20[6] = 0;
  }
  *((_BYTE *)v20 + 64) = a4;
  *((_BYTE *)v20 + 65) = a5;
  if ( a6 )
    *a6 = v21;
  return 0;
}
// 1000763D7: using guessed type char byte_1000763D7;
