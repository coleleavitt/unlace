__int64 __fastcall sub_51A2D0(QT::QHeaderView *this, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // ebp
  int i; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v12[3] = __readfsqword(0x28u);
  v12[1] = v2 + v3;
  v12[0] = (v2 < v2 + v3) + v2;
  v4 = unpack_dd(v12, v2 + v3);
  v5 = v12[0];
  v6 = v4;
  if ( (unsigned int)QT::QHeaderView::count(this) == v4 && v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v9 = i + 7;
      v10 = i;
      if ( i >= 0 )
        v9 = i;
      v11 = *(unsigned __int8 *)(v5 + (v9 >> 3));
      LOBYTE(v11) = !_bittest(&v11, i & 7);
      QT::QHeaderView::setSectionHidden(this, v10, v11);
    }
  }
  return v6;
}
