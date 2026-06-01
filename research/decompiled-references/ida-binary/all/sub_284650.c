unsigned __int64 __fastcall sub_284650(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-120h]
  char v18[64]; // [rsp+20h] [rbp-108h] BYREF
  char v19[16]; // [rsp+60h] [rbp-C8h] BYREF
  char v20[104]; // [rsp+70h] [rbp-B8h] BYREF
  int v21; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+E8h] [rbp-40h]

  v2 = a2[1];
  v22 = __readfsqword(0x28u);
  v4 = *a2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v16 = qvector_reserve(a2, v4, v2 + 1, 24);
    v2 = a2[1];
    *a2 = v16;
    v4 = v16;
  }
  v5 = (__int64 *)(v4 + 24 * v2);
  *v5 = 0;
  *(_OWORD *)(v5 + 1) = 0;
  ++a2[1];
  sub_283F90((__int64)v18, a1);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD *)(a1 + 360);
  v8 = *(int *)(a1 + 424);
  v9 = v8 + v21;
  if ( (*(_QWORD *)(a1 + 416) == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((*(_QWORD *)(a1 + 376) - v7) >> 4)
     + ((*(_QWORD *)(a1 + 416) - v6) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1 < (int)v8 + v21 )
    v9 = (*(_QWORD *)(a1 + 416) == 0)
       + -252645135 * ((*(_QWORD *)(a1 + 376) - v7) >> 4)
       + ((*(_QWORD *)(a1 + 416) - v6) >> 3)
       - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
       - 1;
  if ( (int)v8 < v9 )
  {
    v10 = v5[1];
    while ( 1 )
    {
      v13 = v8 - 0xF0F0F0F0F0F0F0FLL * ((v7 - *(_QWORD *)(a1 + 368)) >> 4);
      if ( v13 >= 0 && v8 == 0xF0F0F0F0F0F0F0FLL * ((v7 - *(_QWORD *)(a1 + 368)) >> 4) )
        v11 = 272 * v8 + v7;
      else
        v11 = *(_QWORD *)(v6 + 8 * v13);
      v12 = *v5;
      if ( v5[2] < (unsigned __int64)(v10 + 1) )
      {
        v17 = v11;
        v14 = qvector_reserve(v5, v12, v10 + 1, 8);
        v10 = v5[1];
        v11 = v17;
        *v5 = v14;
        v12 = v14;
      }
      *(_QWORD *)(v12 + 8 * v10) = v11;
      ++v8;
      v10 = v5[1] + 1;
      v5[1] = v10;
      if ( v9 <= (int)v8 )
        break;
      v7 = *(_QWORD *)(a1 + 360);
      v6 = *(_QWORD *)(a1 + 384);
    }
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v20);
  QT::QFont::~QFont((QT::QFont *)v19);
  return v22 - __readfsqword(0x28u);
}
