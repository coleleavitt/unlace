char __fastcall sub_7A6540(__int64 a1, _DWORD *a2)
{
  char result; // al

  result = sub_7A63A0(a1, a2);
  if ( result )
    return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 43;
  return result;
}

