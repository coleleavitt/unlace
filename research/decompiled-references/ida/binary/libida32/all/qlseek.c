__int64 __fastcall qlseek(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
  {
    if ( (unsigned int)qfseek(*(_QWORD *)(a1 + 8), a2, a3) )
      return -1;
    else
      return qftell(*(_QWORD *)(a1 + 8));
  }
  else if ( (_DWORD)a3 == 1 )
  {
    result = a2 + *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = result;
  }
  else if ( (_DWORD)a3 == 2 )
  {
    result = a2 + *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 24) = result;
  }
  else if ( (_DWORD)a3 )
  {
    return *(_QWORD *)(a1 + 24);
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a2;
    return a2;
  }
  return result;
}

