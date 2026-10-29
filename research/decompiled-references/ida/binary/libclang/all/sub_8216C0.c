__int64 __fastcall sub_8216C0(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // dx

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 41 )
    return 0;
  v1 = sub_80F230(a1);
  v2 = *(_WORD *)v1 & 0x1FF;
  if ( ((v2 + 451) & 0x1FFu) <= 1 )
  {
    v1 = sub_80F230(*(_QWORD *)(v1 + 16));
    v2 = *(_WORD *)v1 & 0x1FF;
    if ( ((v2 + 432) & 0x1FFu) > 9 )
      goto LABEL_4;
LABEL_9:
    v1 = sub_80F230(*(_QWORD *)(v1 + 16));
    v2 = *(_WORD *)v1 & 0x1FF;
    goto LABEL_4;
  }
  if ( ((v2 + 432) & 0x1FFu) <= 9 )
    goto LABEL_9;
LABEL_4:
  if ( ((v2 + 422) & 0x1FFu) > 4 || !sub_821520(v1) )
    return 0;
  return v1;
}

