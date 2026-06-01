unsigned __int64 __fastcall sub_6DA4C0(_QWORD *a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx

  v2 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  if ( (unsigned __int8)(v2 - 2) > 4u )
  {
    v3 = 0;
  }
  else
  {
    v3 = sub_6DA450(a1, a2);
    v2 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
  }
  if ( (unsigned int)(v2 - 25) <= 1 )
    v3 = sub_6C4160((__int64)a1, a2);
  return sub_6C46B0((__int64)a1, a2, v3);
}

