__int64 __fastcall sub_DAC430(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbp
  _BYTE v13[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v13);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8420(a1, a2, (__int64)v13, 0);
  if ( (_BYTE)v5 )
  {
    v7 = *(_QWORD *)(a1 + 176);
    sub_CDA6F0((__int64)v14, (__int64)v13, a3);
    if ( v15 )
    {
      v9 = v14[0];
      v10 = v16;
    }
    else
    {
      v8 = sub_CDA220((__int64)v14);
      v9 = v14[0];
      v10 = v16;
      if ( *(_BYTE *)(v8 + 60) )
      {
        v11 = v16 + v14[0] + 72;
        if ( v14[0] == v17 )
          goto LABEL_6;
      }
    }
    v11 = v10 + v9 + 40;
LABEL_6:
    v12 = sub_DFD980(v7, 64);
    sub_DFF4A0(v12, v11);
    *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + 48);
    *(_DWORD *)(v12 + 56) = *(_DWORD *)(v11 + 56);
    sub_DFF560(v14);
  }
  sub_DFF560(v13);
  return v5;
}

