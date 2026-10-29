unsigned __int64 __fastcall sub_316FE0(__int64 a1)
{
  QT::QObject *v1; // rbx
  unsigned __int64 result; // rax

  v1 = (QT::QObject *)sub_53DC50(a1, "UndoReturn");
  result = sub_1F4200();
  if ( v1 )
  {
    if ( result )
      return sub_316BC0(v1, result, 1);
  }
  return result;
}
