__int64 __fastcall sub_1AEE450(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rdx
  __int64 v5; // rax

  v1 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2C )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  v2 = sub_B73640(a1);
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( ((v3 + 452) & 0x1FFu) <= 1 )
  {
    v2 = *(_QWORD *)(v2 + 16);
    v3 = *(_WORD *)v2 & 0x1FF;
    if ( v3 == 48 )
      goto LABEL_4;
  }
  else if ( v3 == 48 )
  {
LABEL_4:
    v4 = *(_QWORD *)(v2 + 16);
    v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) == 0 )
      goto LABEL_8;
    v2 = *(_QWORD *)(v2 + 40);
    v3 = *(_WORD *)v2 & 0x1FF;
  }
  for ( ; v3 == 116; v3 = *(_WORD *)v2 & 0x1FF )
  {
    v2 = *(_QWORD *)(v2 + 24);
LABEL_8:
    ;
  }
  if ( v3 == 79 )
    v2 = sub_BFA3B0(v2);
  v5 = sub_BFB9F0(v2);
  if ( (*(_WORD *)v5 & 0x1FF) == 0x2E )
    v1 = *(_QWORD *)(v5 + 24);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
