__int64 __fastcall sub_3C6B30(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  char v13; // bp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v20; // rax
  int v21; // [rsp+10h] [rbp-38h] BYREF
  __int64 v22; // [rsp+18h] [rbp-30h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 80) || !*(_QWORD *)(a1 + 72) || !(_DWORD)a2 )
    return v23 - __readfsqword(0x28u);
  v13 = a4;
  if ( *(_BYTE *)(a1 + 112) )
    goto LABEL_11;
  v14 = *(_QWORD *)(a1 + 104);
  if ( !v14 )
    goto LABEL_11;
  if ( (a4 & 0x40) != 0 )
  {
    if ( a3 )
    {
      v21 = a2;
      v15 = *a3;
    }
    else
    {
      v20 = sub_3ACC10(v14, a2, 0, a4, a5);
      if ( (_DWORD)a2 != *(_DWORD *)(v20 + 12) )
      {
        v21 = a2;
        v22 = -2;
        goto LABEL_10;
      }
      v21 = a2;
      v15 = *(_QWORD *)(v20 + 16);
    }
  }
  else
  {
    v21 = a2;
    v22 = -2;
    if ( !a3 )
      goto LABEL_10;
    v15 = *a3;
  }
  v22 = v15;
LABEL_10:
  sub_3ACC30(v14, (__int64)&v21, 3u, a5, a6, a7, a8, a9, a10, a11, a12);
LABEL_11:
  sub_3C67A0(a1, a2, v13, a5, a6, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9, a10, *(double *)a11.m128_u64, a12);
  v17 = v13 & 0x30;
  if ( (_DWORD)v17 != 16 )
  {
    if ( (_DWORD)v17 == 32 )
    {
      if ( !*(_BYTE *)(a1 + 112) )
      {
        v18 = *(_QWORD *)(a1 + 104);
        goto LABEL_15;
      }
      goto LABEL_25;
    }
    return v23 - __readfsqword(0x28u);
  }
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v18 = *(_QWORD *)(a1 + 72);
LABEL_15:
    if ( v18 )
      return QT::QWidget::setFocus(v18, 1);
    return v23 - __readfsqword(0x28u);
  }
LABEL_25:
  sub_3C4350(a5, a1, (unsigned int)a2, v16, v17);
  return sub_3C6CA0();
}
