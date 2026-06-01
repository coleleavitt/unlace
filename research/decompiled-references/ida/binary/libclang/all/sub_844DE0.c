__int64 __fastcall sub_844DE0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int16 v5; // dx
  __int64 v6; // rsi

  v4 = sub_80F230(a2);
  v5 = *(_WORD *)v4 & 0x1FF;
  if ( v5 == 72 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    return sub_70E4E0(a1, v6, 1);
  }
  if ( v5 == 47 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    return sub_70E4E0(a1, v6, 1);
  }
  return sub_821BE0(a1, *(_QWORD *)(v4 + 8), a3);
}

