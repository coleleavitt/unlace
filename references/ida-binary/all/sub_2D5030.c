void __fastcall sub_2D5030(__int64 a1, const char *a2, const char *a3, int *a4)
{
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[3] = __readfsqword(0x28u);
  if ( a2 != a3 && (unsigned __int8)xrefblk_t_first_from(v6, a2, 0) )
  {
    while ( (const char *)v6[1] != a3 )
    {
      if ( !(unsigned __int8)xrefblk_t_next_from(v6) )
        goto LABEL_7;
    }
    sub_2D4FA0(a1, (__int64)a2, a4);
  }
  else
  {
LABEL_7:
    sub_2D1400(a1, a2);
  }
}
