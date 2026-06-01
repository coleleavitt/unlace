unsigned __int64 __fastcall sub_105D820(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  if ( a2 <= 7 )
  {
LABEL_4:
    if ( !a2 )
      goto LABEL_5;
    goto LABEL_8;
  }
  if ( *a1 == 0x766E6F6761786568LL )
  {
    a2 -= 8LL;
    ++a1;
    goto LABEL_4;
  }
LABEL_8:
  if ( *((_BYTE *)a1 + a2 - 1) == 116 && a2 > a2 - 1 )
    --a2;
LABEL_5:
  if ( !(unsigned __int8)sub_2223C30(a1, a2, 0, &v3) && v3 == (unsigned int)v3 )
    return v3 & 0xFFFFFF00FFFFFFFFLL | 0x100000000LL;
  else
    return 0;
}

