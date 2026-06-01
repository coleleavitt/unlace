_BOOL8 __fastcall sub_3E020(__int64 a1, _OWORD *a2)
{
  int v2; // edx
  _BOOL8 result; // rax

  *a2 = 0;
  v2 = sub_396B0(*(_QWORD *)(a1 + 8), (__int64)a2, *(int *)(*(_QWORD *)(a1 + 8) + 436LL), 1);
  result = 0;
  if ( v2 >= 0 )
    return (int)sub_396B0(*(_QWORD *)(a1 + 8), (__int64)a2 + 8, *(int *)(*(_QWORD *)(a1 + 8) + 424LL), 1) >= 0;
  return result;
}

