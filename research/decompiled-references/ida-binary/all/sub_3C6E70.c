unsigned __int64 __fastcall sub_3C6E70(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  __int64 v12; // rsi
  QT::QAbstractItemView *v14; // rbp
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // rbx
  QT::QCoreApplication *v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  int v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+8h] [rbp-60h]
  char v25[8]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  _OWORD v27[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-20h]

  v10 = *(_BYTE *)(a1 + 112) == 0;
  v28 = __readfsqword(0x28u);
  if ( v10 )
  {
    v12 = *(_QWORD *)(a1 + 104);
    if ( v12 )
    {
      sub_1E95D0((QT::QObject *)v25, v12, 11, 0, -32768, a3);
      sub_3C6D20(a1);
      sub_1E9680((__int64)v25);
    }
  }
  if ( (*(_BYTE *)(a2 + 65) & 0x10) != 0 && !*(_BYTE *)(a1 + 80) )
  {
    v14 = *(QT::QAbstractItemView **)(a1 + 72);
    if ( v14 )
    {
      v15 = nullptr;
      v26 = 0;
      *(_QWORD *)v25 = 0;
      v27[0] = -1;
      sub_48FF00(v14);
      if ( *(_QWORD *)&v27[0] != -1 || !*((_QWORD *)&v27[0] + 1) )
      {
        v15 = (const char *)v27;
        v18 = sub_3C5ED0(v14, v27);
        if ( v18 )
        {
          if ( !*(_BYTE *)(a1 + 112) )
          {
            v19 = *(_QWORD *)(a1 + 104);
            if ( v19 )
            {
              v20 = (QT::QCoreApplication *)sub_1EB5B0(v19, (__int64)v27, v16, v17, NAN);
              sub_176FB0(v20);
              v15 = (const char *)&v23;
              v23 = v18;
              v24 = -2;
              sub_3ACC30(v19, (__int64)&v23, 1u, NAN, a4, a5, a6, v21, v22, a9, a10);
            }
          }
        }
      }
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(*(_QWORD *)v25, v15);
      }
    }
  }
  return v28 - __readfsqword(0x28u);
}
