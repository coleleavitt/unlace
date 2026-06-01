__int64 __fastcall sub_1AE6910(unsigned __int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( ((v1 + 452) & 0x1FFu) <= 1 )
  {
    a1 = *(_QWORD *)(a1 + 16);
    v1 = *(_WORD *)a1 & 0x1FF;
  }
  if ( v1 != 48 )
    goto LABEL_8;
  v2 = *(_QWORD *)(a1 + 16);
  a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
    a1 = *(_QWORD *)(a1 + 40);
  while ( 1 )
  {
    v1 = *(_WORD *)a1 & 0x1FF;
LABEL_8:
    if ( v1 != 116 )
      break;
    a1 = *(_QWORD *)(a1 + 24);
  }
  if ( v1 != 79 )
    return sub_BFB9F0(a1);
  v3 = sub_BFA3B0(a1);
  return sub_BFB9F0(v3);
}
