__int64 __fastcall sub_3C9E40(__int64 *a1, __int64 *a2, __int64 *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[1] = __readfsqword(0x28u);
  v6 = sub_3BE900(a1, (unsigned __int64)a3, 1);
  if ( (v6 & 0x100) == 0 )
    return 0;
  if ( a4 )
  {
    if ( ((a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) == 0 )
      goto LABEL_5;
LABEL_4:
    if ( a4 - 1 <= 1 )
      goto LABEL_5;
    return 0;
  }
  a4 = sub_3C9650(a1, a3, v6, nullptr);
  if ( ((a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    goto LABEL_4;
LABEL_5:
  v7 = (unsigned __int64)a3 + 1;
  if ( a4 != 1 )
  {
    while ( (sub_3BE900(a1, v7, 1) & 0x100) != 0 )
    {
      if ( (__int64 *)((char *)a3 + a4) == (__int64 *)++v7 )
      {
        if ( a2 )
        {
          if ( a4 == 4 )
          {
            *a2 = sub_3BF2F0(a1, (unsigned __int64)a3);
          }
          else if ( a4 > 4 )
          {
            *a2 = sub_3BEF70(a1, (unsigned __int64)a3);
          }
          else
          {
            *a2 = sub_3BF1D0(a1, (unsigned __int64)a3);
          }
        }
        return 1;
      }
    }
    return 0;
  }
  if ( a2 )
  {
    sub_3BEFF0(a1, v9, (unsigned __int64)a3);
    *a2 = v9[0];
  }
  return 1;
}
