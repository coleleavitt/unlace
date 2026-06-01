unsigned __int64 __fastcall sub_8C5820(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 0x20) == 0 )
    {
LABEL_9:
      v1 = 0;
      return v1
           + (*(_WORD *)(*(_QWORD *)(sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128) + 106LL)
            & 0xFFF0);
    }
    v2 = *(_QWORD *)(v1 + 128);
    v1 = 0;
    if ( (unsigned __int64)v2 > 7 )
    {
      v1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 && !*(_DWORD *)(v1 + 8) )
        goto LABEL_9;
      if ( ((v2 >> 2) & 1) != 0 )
        v1 = **(_QWORD **)v1;
    }
  }
  return v1
       + (*(_WORD *)(*(_QWORD *)(sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128) + 106LL)
        & 0xFFF0);
}

