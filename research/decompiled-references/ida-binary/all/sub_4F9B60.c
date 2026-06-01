__int64 __fastcall sub_4F9B60(QT::QObject *a1)
{
  __int64 result; // rax
  __int64 v2; // r13
  int v3; // ebx
  __int64 v4; // r12

  result = QT::QObject::sender(a1);
  if ( *((_QWORD *)a1 + 6) )
  {
    v2 = result;
    v3 = 0;
    result = 0;
    while ( 1 )
    {
      v4 = *((_QWORD *)a1 + 5) + 72 * result;
      if ( *(_BYTE *)(v4 + 52) == 116 && v2 == sub_50FF00(*(_QWORD *)v4) )
        break;
      result = ++v3;
      if ( (unsigned __int64)v3 >= *((_QWORD *)a1 + 6) )
        return result;
    }
    return sub_4F9A60((__int64 *)a1, *(_DWORD *)(v4 + 56));
  }
  return result;
}
