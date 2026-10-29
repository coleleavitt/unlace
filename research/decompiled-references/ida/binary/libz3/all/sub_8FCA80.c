__int64 __fastcall sub_8FCA80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx

  v6 = a2;
  v7 = sub_186B270(0x2930u);
  v8 = v7;
  if ( !a3 )
    a3 = *(_QWORD *)(a1 + 112);
  sub_8FBD90(v7, *(_QWORD *)(a1 + 104), a3, a4);
  *(_BYTE *)(v8 + 8612) = 1;
  if ( !a2 )
    v6 = (_QWORD *)(a1 + 168);
  if ( !*(_BYTE *)(v8 + 176) )
    *(_QWORD *)(v8 + 168) = *v6;
  sub_8F23D0(a1, a1, v8);
  sub_8E7050((_QWORD *)v8, a1, 0);
  return v8;
}

