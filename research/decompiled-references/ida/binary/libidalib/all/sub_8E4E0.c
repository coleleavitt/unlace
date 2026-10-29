__int64 __fastcall sub_8E4E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx

  result = sub_15E9E0(*(_QWORD *)(a1 + 8));
  if ( a1 == result )
  {
    v3 = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(v3 + 916);
    v4 = *(unsigned int *)(v3 + 920);
    if ( (_DWORD)result == 10 || (_DWORD)result == 6 || (_DWORD)result == 11 )
    {
      v4 &= 1u;
      if ( (_DWORD)v4 )
        return result;
    }
    else
    {
      result = (unsigned int)(result - 1);
      if ( (unsigned int)result > 1 )
        return result;
    }
    return sub_164190(v3, a2, v4);
  }
  return result;
}

