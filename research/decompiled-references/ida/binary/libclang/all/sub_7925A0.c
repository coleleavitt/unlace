__int64 __fastcall sub_7925A0(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rax

  result = 0;
  if ( (unsigned int)(*a1 & 7) - 3 <= 2 )
  {
    v2 = (_QWORD *)a1[2];
    if ( v2 )
      return *(_BYTE *)(*(_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    else
      return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
  }
  return result;
}

