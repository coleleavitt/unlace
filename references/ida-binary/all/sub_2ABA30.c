__int64 __fastcall sub_2ABA30(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 120LL);
  if ( (char *)v1 == (char *)sub_2ABA20 )
    return QT::QImage::size((QT::QImage *)(a1 + 40));
  else
    return v1();
}
