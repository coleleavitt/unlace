__int64 __fastcall sub_BEDA40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
    return 0;
  v2 = sub_BD7CB0(a1);
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( ((v3 + 452) & 0x1FFu) <= 1 )
  {
    v2 = sub_BD7CB0(*(_QWORD *)(v2 + 16));
    v3 = *(_WORD *)v2 & 0x1FF;
  }
  if ( ((v3 + 433) & 0x1FFu) <= 9 )
  {
    v2 = sub_BD7CB0(*(_QWORD *)(v2 + 16));
    v3 = *(_WORD *)v2 & 0x1FF;
  }
  if ( ((v3 + 423) & 0x1FFu) <= 4 && sub_BED890(v2, a2) )
    return v2;
  else
    return 0;
}

