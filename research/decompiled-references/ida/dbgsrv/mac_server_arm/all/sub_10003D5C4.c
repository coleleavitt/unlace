/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D5C4
// Address: 0x000000010003D5C4

//----- (000000010003D5C4) ----------------------------------------------------
__int64 __fastcall sub_10003D5C4(__int64 a1, char **a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // x20
  __int64 v7; // x27
  __int64 v8; // x28
  char **v9; // x21
  const char *v10; // x24
  size_t v11; // x0
  void *v12; // x23
  void **v13; // x25
  size_t v14; // x26
  void *__dst[2]; // [xsp+10h] [xbp-80h] BYREF
  unsigned __int64 v18; // [xsp+20h] [xbp-70h]
  void **v19; // [xsp+30h] [xbp-60h] BYREF

  *(_OWORD *)(a1 + 88) = 0u;
  v6 = a1 + 88;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_QWORD *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 168) = 0u;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = sub_10003D860;
  *(_QWORD *)(a1 + 208) = a1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 248) = 0u;
  *(_OWORD *)(a1 + 232) = 0u;
  *(_OWORD *)(a1 + 216) = 0u;
  *(_OWORD *)(a1 + 264) = 0u;
  *(_DWORD *)(a1 + 288) = -1;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 324) = 0;
  *(_QWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 340) = 1;
  *(_QWORD *)(a1 + 536) = 0;
  *(_BYTE *)(a1 + 544) = 0;
  *(_BYTE *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 556) = 0;
  *(_OWORD *)(a1 + 560) = 0u;
  *(_OWORD *)(a1 + 576) = 0u;
  *(_QWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 600) = 1065353216;
  *(_BYTE *)(a1 + 608) = 0;
  if ( a2 )
    v7 = a3;
  else
    v7 = 132;
  *(_DWORD *)(a1 + 612) = 5;
  if ( v7 )
  {
    v8 = 0;
    if ( a2 )
      v9 = a2;
    else
      v9 = off_10009A510;
    do
    {
      v10 = v9[v8];
      v11 = strlen(v10);
      if ( v11 >= 0x7FFFFFFFFFFFFFF8LL )
        sub_100044FA8();
      v12 = (void *)v11;
      if ( v11 >= 0x17 )
      {
        if ( (v11 | 7) == 0x17 )
          v14 = 25;
        else
          v14 = (v11 | 7) + 1;
        v13 = (void **)operator new(v14);
        __dst[1] = v12;
        v18 = v14 | 0x8000000000000000LL;
        __dst[0] = v13;
      }
      else
      {
        HIBYTE(v18) = v11;
        v13 = __dst;
        if ( !v11 )
          goto LABEL_18;
      }
      memmove(v13, v10, (size_t)v12);
LABEL_18:
      *((_BYTE *)v12 + (_QWORD)v13) = 0;
      v19 = __dst;
      *((_WORD *)sub_100045030(v6, (__int64)__dst, (__int64)&byte_1000763D7, (__int128 **)&v19) + 20) = v8 + 128;
      if ( SHIBYTE(v18) < 0 )
        operator delete(__dst[0]);
      ++v8;
    }
    while ( v7 != v8 );
  }
  sub_10003D96C(a1, 0, a5);
  return a1;
}
// 1000763D7: using guessed type char byte_1000763D7;
// 10009A510: using guessed type char *off_10009A510[132];
