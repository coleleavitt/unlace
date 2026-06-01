_QWORD *__fastcall sub_9C5C20(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rax

  v2 = (_WORD *)sub_BD7DA0(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL));
  if ( (*v2 & 0x1FF) == 0x47 )
  {
    a1[2] = v2;
    a1[1] = 0x100000001LL;
    *a1 = a1 + 2;
    return a1;
  }
  else
  {
    *a1 = a1 + 2;
    a1[1] = 0x100000000LL;
    return a1;
  }
}

