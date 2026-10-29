_QWORD *__fastcall sub_BA8BD0(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = (_QWORD *)*v1;
  if ( !v1 )
    BUG();
  if ( (*((_BYTE *)v1 - 20) & 0x7F) == 0x14 )
    return v1 - 6;
  else
    return (_QWORD *)v1[5];
}
