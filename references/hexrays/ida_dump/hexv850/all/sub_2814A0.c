__int64 __fastcall sub_2814A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax

  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 18
    || *(_QWORD *)(v2 + 72)
    || !(unsigned __int8)sub_27FDA0(*(_QWORD *)(v2 + 32), 1, 1)
    && !(unsigned __int8)sub_27FDA0(v2, 1, 1)
    && !(unsigned __int8)sub_27FDA0(v2, 66, 1)
    && !(unsigned __int8)sub_27FE70(v2) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(v2 + 32);
  sub_250490((__int64 *)v2, *(_QWORD *)(v2 + 24));
  v5 = sub_23C4F0(a2[3]);
  if ( v5 != -1 )
    *a2 = v5;
  v6 = *(_QWORD *)(v2 + 64);
  v7 = sub_23BF70();
  *(_QWORD *)(v2 + 64) = v7;
  *(_QWORD *)(sub_23C560((__int64)v7, v4) + 64) = v6;
  return 1;
}
