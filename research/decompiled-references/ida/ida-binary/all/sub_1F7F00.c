__int64 __fastcall sub_1F7F00(QT::QAbstractScrollArea *this, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax

  if ( !*((_BYTE *)this + 968) )
    goto LABEL_12;
  if ( !*((_QWORD *)this + 53) )
  {
    sub_1E69C0(a5, (__int64)this, (__int64)a2, a3, a4);
    return sub_1F8000(this);
  }
  v6 = *((_DWORD *)this + 104);
  if ( v6 == 2 )
  {
    v12 = *((_QWORD *)this + 112);
LABEL_13:
    v7 = *((_QWORD *)this + 111);
    if ( v7 != v12 )
      return 0;
    goto LABEL_7;
  }
  if ( v6 == 3 )
  {
    v12 = *((_QWORD *)this + 113);
    goto LABEL_13;
  }
  if ( v6 != 1 )
  {
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
  v7 = *((_QWORD *)this + 111);
LABEL_7:
  sub_285E50(v7, a2, 1);
  v8 = (__int64)QT::QAbstractScrollArea::viewportMargins(this) >> 32;
  v9 = *a2;
  v10 = *a2 + 16 * a2[1];
  if ( v10 != *a2 )
  {
    if ( (((_BYTE)v10 - (_BYTE)v9) & 0x10) == 0 || (*(_WORD *)(v9 + 8) += v8, v9 += 16, v10 != v9) )
    {
      do
      {
        *(_WORD *)(v9 + 8) += v8;
        *(_WORD *)(v9 + 24) += v8;
        v9 += 32;
      }
      while ( v10 != v9 );
    }
  }
  return 1;
}
