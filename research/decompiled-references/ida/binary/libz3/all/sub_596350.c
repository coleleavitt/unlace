_QWORD *__fastcall sub_596350(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  _QWORD *result; // rax

  if ( a1 != a2[1] )
    return nullptr;
  if ( *(_DWORD *)(a2[5] + 4LL * a4) == -1 )
  {
    result = (_QWORD *)sub_186B270(8u);
    *result = off_1C51F68;
  }
  else
  {
    v4 = sub_4C4AC0(*(_QWORD *)(a1 + 24), a2[8]);
    if ( v4 )
    {
      result = (_QWORD *)sub_186B270(0x10u);
      *result = &off_1C51F30;
      result[1] = v4;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

