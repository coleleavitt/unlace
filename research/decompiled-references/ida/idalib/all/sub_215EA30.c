__int64 __fastcall sub_215EA30(_QWORD *a1, __int64 a2)
{
  unsigned int (*v2)(void); // rax
  unsigned __int16 *v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // dx

  v2 = *(unsigned int (**)(void))(*a1 + 392LL);
  if ( (char *)v2 == (char *)sub_215E0A0 )
  {
    v3 = (unsigned __int16 *)a1[6];
    if ( v3 )
    {
      v4 = *v3;
      if ( a1[27] )
        goto LABEL_4;
    }
    else
    {
      v4 = *(unsigned __int16 *)(a1[7] + 6LL);
    }
    if ( (_WORD)v4 == 0x8664 )
      return 8;
  }
  else
  {
    if ( v2() == 38 )
      return 8;
    v2 = *(unsigned int (**)(void))(*a1 + 392LL);
  }
LABEL_4:
  if ( (char *)v2 != (char *)sub_215E0A0 )
  {
    if ( ((unsigned int (__fastcall *)(_QWORD *, __int64, __int64))v2)(a1, a2, v4) != 3 )
      return 4;
    return 8;
  }
  result = a1[6];
  if ( !result )
  {
    result = a1[7];
    v6 = *(_WORD *)(result + 6);
    goto LABEL_9;
  }
  v6 = *(_WORD *)result;
  if ( !a1[27] || (result = 8, v6 != -31132) && v6 != -21916 )
  {
LABEL_9:
    if ( v6 != -22962 && v6 != -21916 )
    {
      LOBYTE(result) = v6 == -22975;
      return (unsigned int)(4 * result + 4);
    }
    return 8;
  }
  return result;
}
