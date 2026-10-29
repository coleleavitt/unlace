__int64 __fastcall sub_D94F00(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rdi
  bool v5; // bp
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  _QWORD v11[3]; // [rsp+0h] [rbp-48h] BYREF
  int v12; // [rsp+18h] [rbp-30h]
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v11);
  sub_DFDA50(v2, 48);
  v3 = v12;
  if ( v12 == 2 )
  {
    v8 = v13;
    if ( v13 && (v9 = *(_QWORD *)(v13 + 16), (v9 & 4) == 0) && (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned __int8)sub_B559C0(v10) )
        goto LABEL_12;
      v3 = v12;
      v4 = *(_QWORD *)(a1 + 176);
      if ( !v12 )
        goto LABEL_5;
      if ( v12 != 2 )
      {
LABEL_14:
        v5 = 1;
        if ( v3 != 3 )
          v5 = (v11[0] | v14) != 0;
        goto LABEL_6;
      }
      v8 = v13;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 176);
    }
    v5 = v8 != 0;
    goto LABEL_6;
  }
  if ( v12 )
  {
    v4 = *(_QWORD *)(a1 + 176);
    goto LABEL_14;
  }
  if ( *(_BYTE *)(v13 + 29) )
  {
LABEL_12:
    v6 = 0;
    goto LABEL_7;
  }
  v4 = *(_QWORD *)(a1 + 176);
LABEL_5:
  v5 = v13 != 0;
LABEL_6:
  *(_BYTE *)sub_DFD980(v4, 8) = v5;
  v6 = 1;
LABEL_7:
  sub_DFF560(v11);
  return v6;
}

