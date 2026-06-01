__int64 __fastcall sub_31E420(double a1, __m128 a2)
{
  __int64 result; // rax

  if ( qword_8CD8C8 )
  {
    result = sub_1C92B0((QT::QBasicTimer *)qword_8CD8C8, a1, a2);
    qword_8CD8C8 = 0;
  }
  return result;
}
