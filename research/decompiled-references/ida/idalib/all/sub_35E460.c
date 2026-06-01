__int64 __fastcall sub_35E460(_QWORD *a1)
{
  unsigned int *v2; // rax
  __int64 result; // rax
  _QWORD *v4; // rdi

  v2 = (unsigned int *)a1[1];
  if ( *((_BYTE *)a1 + 18) )
  {
    result = *v2;
    if ( (result & 0x100) != 0 )
    {
      v4 = (_QWORD *)*a1;
      result = v4[4];
      if ( result )
      {
        if ( a1[4] < (unsigned __int64)--result )
        {
          result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, 62);
          ++a1[3];
        }
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 32LL))(*a1, (unsigned int)*((char *)v2 + 56));
    result = 257;
    ++a1[3];
    *(_WORD *)((char *)a1 + 17) = 257;
  }
  return result;
}
