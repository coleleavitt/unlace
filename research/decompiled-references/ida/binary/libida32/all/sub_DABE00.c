__int64 __fastcall sub_DABE00(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r13
  _BYTE v12[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]
  unsigned int v16; // [rsp+58h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v12);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8420(a1, a2, (__int64)v12, 0);
  if ( (_BYTE)v5 )
  {
    v7 = *(_QWORD *)(a1 + 176);
    sub_CDA6F0((__int64)v13, (__int64)v12, a3);
    if ( v14 )
    {
      v9 = v13[0];
      v10 = v15;
    }
    else
    {
      v8 = sub_CDA220((__int64)v13);
      v9 = v13[0];
      v10 = v15;
      if ( *(_BYTE *)(v8 + 60) )
      {
        v11 = (_QWORD *)(v15 + v16 + 72);
        if ( v16 == v13[0] )
          goto LABEL_6;
      }
    }
    v11 = (_QWORD *)(v10 + v9 + 40);
LABEL_6:
    *(_QWORD *)sub_DFD980(v7, 8) = *v11;
    sub_DFF560(v13);
  }
  sub_DFF560(v12);
  return v5;
}

