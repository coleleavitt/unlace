_QWORD *__fastcall sub_9EC260(_QWORD *a1, __int64 a2)
{
  __int16 *v2; // rax
  __int16 v3; // dx

  v2 = (__int16 *)sub_BFBAE0(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL));
  v3 = *v2;
  *a1 = a1 + 2;
  if ( (v3 & 0x1FF) == 0x47 )
  {
    a1[2] = v2;
    a1[1] = 0x100000001LL;
  }
  else
  {
    a1[1] = 0x100000000LL;
  }
  return a1;
}
