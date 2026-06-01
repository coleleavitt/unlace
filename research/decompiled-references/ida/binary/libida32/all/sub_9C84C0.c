_QWORD *__fastcall sub_9C84C0(_QWORD *a1, __int64 a2)
{
  __int16 *v2; // rax
  __int16 v3; // dx

  v2 = (__int16 *)sub_BD7DA0(*(_QWORD *)(a2 + 24));
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

