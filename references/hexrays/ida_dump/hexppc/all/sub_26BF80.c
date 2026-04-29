_BYTE *__fastcall sub_26BF80(_BYTE *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_327F40(a1, *(_QWORD *)(*a2 + 112LL), a3);
  if ( !*a1 )
  {
    v4 = a2[3];
    if ( *(int *)(v4 + 8) <= 69 && a3 == get_tinfo_size(0, *(_QWORD *)(v4 + 48), 0) )
      copy_tinfo_t(a1, a2[3] + 48LL);
  }
  return a1;
}
