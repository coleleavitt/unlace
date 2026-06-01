void __fastcall sub_220AE00(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned __int64 v4; // rcx
  int v5; // eax
  int v6; // r11d

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 8);
  if ( *((_DWORD *)a2 + 2) > 0x40u )
  {
    v5 = sub_2206780(a2);
    if ( (unsigned int)(v6 - v5) > 0x40 || (v4 = *(_QWORD *)*a2, v2 < v4) )
    {
LABEL_3:
      if ( v3 > 0x40 )
      {
LABEL_4:
        sub_220A970(*(_QWORD **)a1, (v2 + 63) >> 6, v3);
        return;
      }
      goto LABEL_10;
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
    *(_QWORD *)a1 >>= v4;
    return;
  }
LABEL_10:
  *(_QWORD *)a1 = 0;
}
