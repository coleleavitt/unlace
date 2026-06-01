__int64 __fastcall sub_3B8BE0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax

  v2 = sub_3B8B80(*a1, a2);
  if ( (unsigned __int8)sub_3E9640(a1)
    && ((LODWORD(result) = sub_3E9FF0(a1, (unsigned int)a2), (unsigned int)result < v2 && (_DWORD)result != 0) || !v2) )
  {
    return (unsigned int)result;
  }
  else
  {
    return v2;
  }
}

