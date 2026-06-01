__int64 __fastcall sub_82D390(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  sub_82D040(a1);
  result = *(unsigned int *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)(a1 + 5728) = result;
    if ( !(_DWORD)result )
    {
      v3 = *(unsigned int *)(a1 + 5712);
      if ( (_DWORD)v3 == -1 )
      {
        return qmutex_unlock(*(_QWORD *)a1);
      }
      else
      {
        qclose(v3);
        v4 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        return qmutex_unlock(v4);
      }
    }
  }
  return result;
}

