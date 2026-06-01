_QWORD *__fastcall sub_7B81E0(__int64 a1)
{
  _QWORD *v1; // rax
  char v2; // dl

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = (_QWORD *)*v1;
  if ( !v1 )
    BUG();
  v2 = *((_BYTE *)v1 - 20) & 0x7F;
  if ( v2 == 19 || v2 == 21 )
    return (_QWORD *)v1[5];
  else
    return v1 - 6;
}

