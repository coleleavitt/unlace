__int64 __fastcall sub_DB5ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v11);
  sub_DFDA50(v4, 48);
  v5 = sub_DA6400(a1, a2, (__int64)v11);
  if ( (_BYTE)v5 )
  {
    sub_DFFFB0(v11);
    sub_E00FC0(v11);
    if ( v12 )
    {
      v8 = v11[0];
      v9 = v13;
    }
    else
    {
      v7 = sub_CDA220((__int64)v11);
      v8 = v11[0];
      v9 = v13;
      if ( *(_BYTE *)(v7 + 60) && v11[0] == v14 )
      {
        v10 = (_QWORD *)(v13 + v11[0] + 72);
        goto LABEL_6;
      }
    }
    v10 = (_QWORD *)(v9 + v8 + 40);
LABEL_6:
    *v10 = v3;
  }
  sub_DFF560(v11);
  return v5;
}

