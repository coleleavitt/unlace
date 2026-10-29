__int64 __fastcall sub_DA0140(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  _BYTE *v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(unsigned __int8 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_DFF4E0(v11, *(_QWORD *)(v4 + 32), v5, (unsigned int)v5);
  v6 = sub_B54430(*(_QWORD *)a2);
  if ( v6 <= 7 )
    v3 &= (1 << v6) - 1;
  v7 = v11[0];
  v8 = v13;
  if ( !v12 && *(_BYTE *)(sub_CDA220((__int64)v11) + 60) && v7 == v14 )
    v9 = (_BYTE *)(v8 + v7 + 72);
  else
    v9 = (_BYTE *)(v8 + v7 + 40);
  *v9 = v3;
  sub_DFFFB0(v11);
  sub_E00FC0(v11);
  sub_DFF560(v11);
  return 1;
}

