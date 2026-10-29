__int64 __fastcall sub_D9F830(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]

  sub_DFF430(v10, *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * a3));
  v3 = *a2;
  v4 = *(_BYTE *)sub_DFDA20(*a2, 8);
  sub_DFDA50(v3, 8);
  if ( v11 )
  {
    v6 = v10[0];
    v7 = v12;
  }
  else
  {
    v5 = sub_CDA220((__int64)v10);
    v6 = v10[0];
    v7 = v12;
    if ( *(_BYTE *)(v5 + 60) && v10[0] == v13 )
    {
      v8 = (_BYTE *)(v12 + v10[0] + 72);
      goto LABEL_4;
    }
  }
  v8 = (_BYTE *)(v7 + v6 + 40);
LABEL_4:
  *v8 = v4;
  sub_E00FC0(v10);
  sub_DFF560(v10);
  return 1;
}

