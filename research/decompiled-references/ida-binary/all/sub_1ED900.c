__int64 __fastcall sub_1ED900(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r14
  __int128 *v6; // rbp
  bool v7; // zf
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // ebx
  QT::QFont *v18; // [rsp+0h] [rbp-138h]
  double v19; // [rsp+8h] [rbp-130h]
  _BYTE v20[16]; // [rsp+10h] [rbp-128h] BYREF
  __int128 v21; // [rsp+20h] [rbp-118h] BYREF
  __int64 v22; // [rsp+30h] [rbp-108h]
  __int64 v23; // [rsp+38h] [rbp-100h]
  int v24; // [rsp+40h] [rbp-F8h]
  __m128i v25[4]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v26[16]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v27[88]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+F8h] [rbp-40h]

  v5 = a1;
  v6 = a2;
  v7 = *(_BYTE *)(a1 + 968) == 0;
  v28 = __readfsqword(0x28u);
  v8 = a3;
  if ( v7 )
    return 0;
  if ( !*(_QWORD *)(a1 + 424) )
    goto LABEL_35;
  v9 = *(_DWORD *)(a1 + 416);
  if ( v9 == 2 )
  {
    v10 = *(_QWORD *)(a1 + 896);
  }
  else if ( v9 == 3 )
  {
    v10 = *(_QWORD *)(a1 + 904);
  }
  else
  {
    v10 = 0;
    if ( v9 == 1 )
      v10 = *(_QWORD *)(a1 + 888);
  }
  if ( !*(_BYTE *)(v10 + 29) )
    return 0;
  a5 = 0.0;
  v22 = 0;
  a3 = v8 & 1;
  v7 = *(_QWORD *)(a1 + 424) == 0;
  v21 = 0;
  v23 = -1;
  v24 = 0;
  if ( v7 )
    goto LABEL_35;
  if ( v9 == 2 )
  {
    a1 = *(_QWORD *)(a1 + 896);
  }
  else if ( v9 == 3 )
  {
    a1 = *(_QWORD *)(a1 + 904);
  }
  else
  {
    a1 = 0;
    if ( v9 == 1 )
      a1 = *(_QWORD *)(v5 + 888);
  }
  a2 = &v21;
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 168LL))(a1, &v21, a3);
  if ( !v11 )
    return 0;
  if ( *(_BYTE *)(v5 + 968) )
  {
    if ( *(_QWORD *)(v5 + 424) )
    {
      v12 = *(_DWORD *)(v5 + 416);
      if ( v12 == 2 )
      {
        v13 = *(_QWORD *)(v5 + 896);
      }
      else if ( v12 == 3 )
      {
        v13 = *(_QWORD *)(v5 + 904);
      }
      else
      {
        v13 = 0;
        if ( v12 == 1 )
          v13 = *(_QWORD *)(v5 + 888);
      }
      goto LABEL_20;
    }
LABEL_35:
    sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
  }
  v13 = 0;
LABEL_20:
  v19 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v13 + 312LL))(v13);
  v18 = (QT::QFont *)v26;
  memset(v25, 0, sizeof(v25));
  QT::QFont::QFont((QT::QFont *)v26);
  QT::QFont::QFont((QT::QFont *)v20);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v27, (const QT::QFont *)v20);
  QT::QFont::~QFont((QT::QFont *)v20);
  sub_1C8200(v25, v5, (__m128d)*(unsigned __int64 *)&v19);
  v14 = sub_178210(v11, (__int64)v25, v5);
  v15 = (unsigned int)SWORD2(v23);
  if ( (int)v15 > *(_DWORD *)(v14 + 208) )
  {
    v16 = 0;
  }
  else
  {
    if ( (_DWORD)v15 == *(_DWORD *)(v14 + 208) )
    {
      --WORD2(v23);
      v15 = (unsigned int)(__int16)(v15 - 1);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v5 + 848LL))(
            v5,
            v6,
            v11,
            v14 + 184,
            v15,
            v8,
            v26);
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v27);
  QT::QFont::~QFont(v18);
  return v16;
}
