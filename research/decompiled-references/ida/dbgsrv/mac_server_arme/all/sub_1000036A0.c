/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000036A0
// Address: 0x00000001000036A0

//----- (00000001000036A0) ----------------------------------------------------
void __fastcall sub_1000036A0(__int64 a1)
{
  __int64 v1; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x20
  unsigned int v5; // w11
  int v6; // w8
  unsigned int v7; // w9
  bool v8; // zf
  int v9; // w11
  unsigned __int64 v10; // x9
  size_t v11; // x21
  unsigned __int64 v12; // x8
  const void *v13; // x22
  void *v14; // x1
  __int64 v15; // x11
  _QWORD *v16; // x9
  unsigned __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // [xsp+0h] [xbp-80h] BYREF
  __int64 v21; // [xsp+8h] [xbp-78h]
  char v22; // [xsp+10h] [xbp-70h]
  void *__dst[4]; // [xsp+14h] [xbp-6Ch] BYREF
  __int128 v24; // [xsp+34h] [xbp-4Ch]
  int v25; // [xsp+44h] [xbp-3Ch]

  v1 = *(_QWORD *)(a1 + 1840);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 1616);
    v4 = a1 + 1840;
    do
    {
      if ( *(_QWORD *)(v1 + 32) < v3 )
      {
        v5 = 1;
      }
      else
      {
        v4 = v1;
        v5 = 0;
      }
      v1 = *(_QWORD *)(v1 + 8LL * v5);
    }
    while ( v1 );
    if ( v4 != a1 + 1840 && v3 >= *(_QWORD *)(v4 + 32) )
    {
      v20 = 0xFFFFFFFFLL;
      v21 = -1;
      v22 = 0;
      memset(__dst, 0, sizeof(__dst));
      v24 = 0u;
      v25 = 0;
      set_debug_event_code((__int64)&v20, 9);
      v6 = (__int64)__dst[0] & 0xFFFFFFF;
      v7 = ((__int64)__dst[0] & 0xFFFFFFF) - 9;
      v8 = v7 < 2 || v6 == 3;
      if ( !v8
        || (v9 = *(_DWORD *)(*(_QWORD *)(a1 + 1904) + 32LL),
            LODWORD(v20) = *(_DWORD *)(a1 + 528),
            HIDWORD(v20) = v9,
            v21 = -1,
            v22 = 1,
            v7 >= 2)
        && v6 != 3 )
      {
        if ( under_debugger != 1 )
          goto LABEL_37;
        while ( 1 )
        {
          __break(1u);
LABEL_37:
          interr(3297);
        }
      }
      if ( (void **)((char *)__dst + 4) != (void **)(v4 + 56) )
      {
        v10 = *(_QWORD *)(v4 + 64);
        if ( v10 )
          v11 = v10 - 1;
        else
          v11 = 0;
        if ( v10 >= 2 )
        {
          v13 = *(const void **)(v4 + 56);
          v14 = *(void **)((char *)__dst + 4);
          if ( *(void **)((char *)&__dst[2] + 4) <= (void *)v11 )
          {
            v14 = qvector_reserve((void **)((char *)__dst + 4), *(_QWORD **)((char *)__dst + 4), v11 + 1, 1u);
            *(void **)((char *)__dst + 4) = v14;
          }
          *(void **)((char *)&__dst[1] + 4) = (void *)(v11 + 1);
          memmove(v14, v13, v11);
          (*(_BYTE **)((char *)__dst + 4))[v11] = 0;
          v12 = *(_QWORD *)(a1 + 152);
          if ( v12 )
            goto LABEL_28;
          goto LABEL_27;
        }
        *(void **)((char *)&__dst[1] + 4) = nullptr;
      }
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
      {
LABEL_28:
        v15 = *(_QWORD *)(a1 + 128);
        v16 = (_QWORD *)(v15 + 8 * (v12 / 0x38));
        v17 = *v16 + 72 * (v12 % 0x38);
        if ( *(_QWORD *)(a1 + 136) == v15 )
          v18 = 0;
        else
          v18 = v17;
        if ( v18 == *v16 )
          v18 = *(v16 - 1) + 4032LL;
        *(_QWORD *)(v18 - 72) = 0xFFFFFFFFLL;
        v19 = v18 - 72;
        *(_QWORD *)(v19 + 8) = -1;
        *(_BYTE *)(v19 + 16) = 0;
        *(_DWORD *)(v19 + 20) = 0;
        copy_debug_event(v19, (__int64)&v20);
        *(int64x2_t *)(a1 + 152) = vaddq_s64(*(int64x2_t *)(a1 + 152), (int64x2_t)xmmword_10007AB60);
        sub_10000C2A4((__int64 **)(a1 + 1832), (__int64 *)v4);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, *(_QWORD *)(a1 + 1664));
        sub_100018B74(a1 + 1560);
        free_debug_event((__int64)&v20);
        return;
      }
LABEL_27:
      sub_100009CC8(a1 + 120);
      v12 = *(_QWORD *)(a1 + 152);
      goto LABEL_28;
    }
  }
}
// 10007AB60: using guessed type __int128 xmmword_10007AB60;
// 1000A590D: using guessed type char under_debugger;
