__int64 sub_5FF320()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = qword_2CA1698;
  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( *(_DWORD *)(v1 + 2480) != -1 )
  {
    result = sub_79BCF0((int)v1 + 2480);
    *(_DWORD *)(v1 + 2480) = -1;
  }
  return result;
}

