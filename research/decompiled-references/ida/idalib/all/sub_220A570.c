unsigned __int64 *__fastcall sub_220A570(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r11
  unsigned int v3; // r9d
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // r10d

  v2 = *((unsigned int *)a1 + 2);
  v3 = *((_DWORD *)a1 + 2);
  if ( *((_DWORD *)a2 + 2) > 0x40u )
  {
    v7 = sub_2206780(a2);
    if ( (unsigned int)(v8 - v7) > 0x40 || (v4 = *(_QWORD *)*a2, v2 < v4) )
    {
LABEL_3:
      if ( v3 > 0x40 )
      {
LABEL_4:
        sub_220A060((_QWORD *)*a1, (v2 + 63) >> 6, v3);
        sub_CF8100(a1);
        return a1;
      }
      goto LABEL_5;
    }
  }
  else
  {
    v4 = *a2;
    if ( v2 < *a2 )
      goto LABEL_3;
  }
  if ( v3 > 0x40 )
  {
    v3 = v4;
    goto LABEL_4;
  }
  if ( v3 != (_DWORD)v4 )
  {
    v6 = *a1 << v4;
    goto LABEL_6;
  }
LABEL_5:
  v6 = 0;
LABEL_6:
  *a1 = v6;
  sub_CF8100(a1);
  return a1;
}
