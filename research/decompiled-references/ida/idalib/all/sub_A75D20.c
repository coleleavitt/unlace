unsigned __int64 __fastcall sub_A75D20(_QWORD *a1, __int64 a2)
{
  int v2; // ecx
  unsigned __int64 v3; // rax

  v2 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  if ( (unsigned __int8)(v2 - 2) > 4u )
  {
    v3 = 0;
  }
  else
  {
    v3 = sub_A72210(a1, a2);
    v2 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
  }
  if ( (unsigned int)(v2 - 25) <= 1 )
    v3 = sub_A70010((__int64)a1, a2);
  return sub_A75B70((__int64)a1, a2, v3);
}
