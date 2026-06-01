__int64 __fastcall sub_41AAB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdi
  _BYTE *v9; // rdx

  if ( a3 == 3 )
  {
    v6 = *(_QWORD *)(a4 + 8);
    v7 = *(_QWORD *)(v6 + 8);
    if ( !v7 )
      v7 = sub_47B3B0(v6);
    v8 = *(_QWORD *)(a4 + 16);
    v9 = *(_BYTE **)(v8 + 8);
    if ( !v9 )
      v9 = (_BYTE *)sub_47B3B0(v8);
    return sub_408C70(a2, v7, v9);
  }
  else
  {
    sub_458930(a2, 1, a4, "oldName newName");
    return 1;
  }
}

