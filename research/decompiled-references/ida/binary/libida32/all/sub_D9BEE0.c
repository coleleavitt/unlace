__int64 __fastcall sub_D9BEE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int16 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _WORD *v8; // r14
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+28h] [rbp-30h]

  v3 = a3;
  v4 = *(_WORD *)sub_DFDA20(a1, 8);
  sub_DFDA50(a1, 8);
  sub_DFB140(v11);
  if ( v12 )
  {
    v7 = v11[0];
    v5 = v13;
LABEL_9:
    v8 = (_WORD *)(v5 + v7 + 40);
    goto LABEL_10;
  }
  v5 = v13;
  v6 = *(_QWORD *)(v13 + 32);
  if ( *(_DWORD *)(v6 + 24) != v14 && v14 )
    v6 = *(_QWORD *)(v13 + v14 + 32);
  v7 = v11[0];
  if ( !*(_BYTE *)(v6 + 60) )
    goto LABEL_9;
  v8 = (_WORD *)(v13 + v14 + 72);
  if ( v14 != v11[0] )
    goto LABEL_9;
LABEL_10:
  sub_DFF560(v11);
  v9 = *(_QWORD *)(a2 + 160);
  *v8 = v4;
  *(_BYTE *)(v9 + v3 + 4) |= 2u;
  return 1;
}

