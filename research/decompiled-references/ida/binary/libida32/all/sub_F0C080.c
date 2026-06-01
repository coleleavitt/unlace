void __fastcall sub_F0C080(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 *v3; // rdx

  sub_F07020(a1, a2);
  v2 = *(_BYTE *)(a2 + 89) >> 6;
  if ( v2 == 1 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " covariant");
    if ( !*(_DWORD *)(a2 + 96) )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( v2 == 2 )
    sub_971800(*(_QWORD *)(a1 + 1096), " contravariant");
  if ( *(_DWORD *)(a2 + 96) )
LABEL_9:
    sub_971800(*(_QWORD *)(a1 + 1096), " bounded");
LABEL_5:
  v3 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    sub_F068D0(a1, v3[1]);
  else
    sub_F068D0(a1, *v3);
}

