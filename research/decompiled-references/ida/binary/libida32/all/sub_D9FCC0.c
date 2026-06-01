__int64 __fastcall sub_D9FCC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_DFF4E0(v11, *(_QWORD *)(v4 + 32), v5, (unsigned int)v5);
  sub_B54430(*(_QWORD *)a2);
  if ( v12 )
  {
    v7 = v11[0];
    v8 = v13;
  }
  else
  {
    v6 = sub_CDA220((__int64)v11);
    v7 = v11[0];
    v8 = v13;
    if ( *(_BYTE *)(v6 + 60) && v14 == v11[0] )
    {
      v9 = (_BYTE *)(v13 + v14 + 72);
      goto LABEL_4;
    }
  }
  v9 = (_BYTE *)(v8 + v7 + 40);
LABEL_4:
  *v9 = v3;
  sub_DFFFB0(v11);
  sub_E00FC0(v11);
  sub_DFF560(v11);
  return 1;
}

