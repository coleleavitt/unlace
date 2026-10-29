__int64 __fastcall sub_F0A590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v2 + 24) )
  {
    v7 = sub_2257CD0(v2, 32);
    return sub_B4EFB0(*(_QWORD *)(a2 + 16), v7);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(v2 + 32) = v4 + 1;
    *v4 = 32;
    return sub_B4EFB0(*(_QWORD *)(a2 + 16), v5);
  }
}

