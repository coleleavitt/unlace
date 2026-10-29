__int64 __fastcall sub_DAB340(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // eax
  _QWORD v14[3]; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+18h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+28h] [rbp-30h]

  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA8420(a1, a2, v4, 0);
  if ( !(_BYTE)v5 )
    return v5;
  v7 = *(_QWORD *)(a1 + 176);
  sub_CDA6F0((__int64)v14, v4, a3);
  if ( v15 )
  {
    v9 = v14[0];
    v10 = v16;
LABEL_5:
    v11 = v10 + v9 + 40;
    goto LABEL_6;
  }
  v8 = sub_CDA220((__int64)v14);
  v9 = v14[0];
  v10 = v16;
  if ( !*(_BYTE *)(v8 + 60) )
    goto LABEL_5;
  v11 = v16 + v17 + 72;
  if ( v17 != v14[0] )
    goto LABEL_5;
LABEL_6:
  v12 = sub_DFD980(v7, 24);
  v13 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v12 + 8) = v13;
  if ( v13 > 0x40 )
    sub_21E17D0(v12);
  else
    *(_QWORD *)v12 = *(_QWORD *)v11;
  *(_BYTE *)(v12 + 12) = *(_BYTE *)(v11 + 12);
  *(_DWORD *)(v12 + 16) = *(_DWORD *)(v11 + 16);
  sub_DFF560(v14);
  return v5;
}

