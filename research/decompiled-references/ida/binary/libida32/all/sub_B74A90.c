unsigned __int64 __fastcall sub_B74A90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp

  if ( sub_B73CB0(a1) || !(unsigned __int8)sub_B53480((__int64)a1, a2, v2, v3) )
  {
    v4 = sub_B68470((__int64)(a1 + 9));
    v7 = sub_B685F0(v4);
    v8 = (__int64 *)(a1[6] & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *v8;
    if ( *(_BYTE *)(*v8 + 16) != 26 )
      v9 = sub_F3F310(*v8, a2, v5, v6);
    v10 = *(_QWORD *)(sub_B68470((__int64)(a1 + 9)) + 16);
    if ( (v10 & 4) != 0 )
      v14 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v14 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14 )
      v14 -= 64LL;
    v15 = sub_B723C0(v7, v9, v14, v11, v12, v13);
    if ( ((*(_BYTE *)(v9 + 18) >> 3) & 3) == 2 )
      return sub_A4F090(v7, v15);
    else
      return sub_A4F2F0(v7, v15, 1u);
  }
  else
  {
    v19 = a1[15];
    sub_B52330((__int64)a1, a2, v17, v18);
    return *(_QWORD *)(*(_QWORD *)v19 + 48LL);
  }
}

