__int64 __fastcall sub_30E4C0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  _QWORD *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // al

  sub_53C800();
  if ( unk_8CD740 && (unsigned __int8)is_auto_enabled() )
  {
    v19 = qtime64();
    v20 = 1000 * HIDWORD(v19) + (unsigned int)v19 / 0x3E8 + 20LL;
    v21 = QT::QCoreApplication::self;
    *((_BYTE *)QT::QCoreApplication::self + 1016) = 1;
    while ( 1 )
    {
      v22 = qtime64();
      v10 = (unsigned int)(1000 * HIDWORD(v22));
      if ( (unsigned int)v10 + (unsigned int)v22 / 0x3E8 >= v20 )
        break;
      v23 = 0;
      while ( 1 )
      {
        v24 = unk_8CD740();
        if ( ++v23 == 32 )
          break;
        if ( !v24 )
          goto LABEL_25;
      }
      if ( !v24 )
      {
LABEL_25:
        *((_BYTE *)v21 + 1016) = 0;
        goto LABEL_3;
      }
    }
    v16 = (unsigned __int8)byte_8CD8C0;
    *((_BYTE *)v21 + 1016) = 0;
    if ( (_BYTE)v16 )
    {
      v16 = 0;
    }
    else if ( !unk_8CD770 )
    {
      v16 = (unsigned __int8)byte_8CD898;
      if ( byte_8CD898 )
        return 0;
      goto LABEL_7;
    }
  }
  else
  {
LABEL_3:
    v16 = 1;
  }
  if ( dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
  {
    if ( !byte_8CD898 )
      goto LABEL_7;
  }
  else
  {
    a10 = 0;
    byte_8CD8C0 = 0;
    sub_301F20((__int64)QT::QCoreApplication::self, 0, *(double *)a1.m128_u64);
    nullsub_70();
    sub_1E56A0();
    sub_3E8000();
    if ( !byte_8CD898 )
    {
LABEL_7:
      byte_8CD898 = 1;
      do
      {
        v17 = sub_253070(v16, a1, a2, a3, a4, v14, v15, a7, a8, a10, v10, v11, v12, v13);
        if ( v17 != -1 && (_BYTE)v16 )
          LOBYTE(v16) = v17 == 0;
      }
      while ( v17 == 1 );
      byte_8CD898 = 0;
    }
  }
  if ( !(_BYTE)v16 )
  {
    if ( unk_8CD770 && (unk_8CD770 = 0, (*(_BYTE *)(*((_QWORD *)qword_8CD748 + 4) + 8LL) & 1) == 0) )
    {
      v16 = 0;
      sub_531B30(2, 0, 0);
    }
    else
    {
      return 0;
    }
  }
  return v16;
}
