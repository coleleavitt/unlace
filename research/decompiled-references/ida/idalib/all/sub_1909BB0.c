__int64 __fastcall sub_1909BB0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned int v8; // r14d
  _QWORD **v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx

  v8 = a5;
  if ( (_DWORD)a4 )
  {
    v11 = (_QWORD **)a3;
    v12 = a3 + 8LL * (unsigned int)(a4 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)((*v11)[1] & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FFu) > 0x1F2 )
        {
          v14 = sub_1907C70(a1, *v11, a7, a8, a3, a4, a5, a6);
          if ( v14 != 1 )
            break;
        }
        if ( ++v11 == (_QWORD **)v12 )
          goto LABEL_8;
      }
      *v11++ = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( v11 != (_QWORD **)v12 );
  }
LABEL_8:
  v15 = sub_EEE9A0(64, *(_QWORD **)(a1 + 248), 8u);
  sub_C0B340(v15, *(_QWORD **)(a1 + 248), a2, a3, a4, v8);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
  return v15;
}
