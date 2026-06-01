__int64 __fastcall sub_18C39D0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int16 v4; // dx
  __int64 result; // rax
  unsigned __int64 v6; // rdi

  v3 = sub_BFB900(a2);
  v4 = *(_WORD *)v3 & 0x1FF;
  if ( ((v4 + 423) & 0x1FFu) > 4 )
  {
    if ( (unsigned int)v4 - 113 > 1 && v4 != 71 )
      goto LABEL_4;
LABEL_3:
    *(_BYTE *)(v3 + 3) |= 8u;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(v3 + 32);
  if ( v6 )
  {
    v3 = sub_BFB900(v6);
    if ( (*(_WORD *)v3 & 0x1FF) == 0x47 )
      goto LABEL_3;
  }
LABEL_4:
  result = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result - 8);
    if ( result )
      *(_BYTE *)(result + 10) |= 0x10u;
  }
  return result;
}
