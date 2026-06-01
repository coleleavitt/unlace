__int64 __fastcall sub_DA5680(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v16; // r14d
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD v20[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v22[3]; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  unsigned int v25; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v6, 48);
  sub_DFF520(v20);
  sub_DFDA50(v6, 48);
  if ( !a4 && !(unsigned __int8)sub_DA4BF0(a1, a2, (__int64)v20, 0) )
    goto LABEL_15;
  if ( v20[6] )
  {
    v7 = *(_QWORD *)(a1 + 176);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v9 = v7;
    v10 = 1;
    v11 = sub_E011D0(&v21, v8, a3);
    v13 = v12;
    v14 = sub_DFD980(v9, 48);
    *(_QWORD *)v14 = 0;
    *(_DWORD *)(v14 + 24) = 1;
    *(_QWORD *)(v14 + 32) = v11;
    *(_QWORD *)(v14 + 40) = v13;
    *(_OWORD *)(v14 + 8) = 0;
  }
  else
  {
    v16 = sub_DA5370(a1, a2, (__int64)v20, 0);
    if ( !(_BYTE)v16 )
    {
LABEL_15:
      v10 = 0;
      goto LABEL_4;
    }
    v10 = 0;
    sub_DFF4E0(v22, v21, a3 + v20[0], a3 + v20[0]);
    if ( !v23 )
    {
      v17 = v24;
      if ( !v24 || v22[0] <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v24 + 32) + 28LL) )
      {
        v10 = sub_CDA840((__int64)v22);
        if ( (_BYTE)v10 )
        {
          v10 = 0;
        }
        else
        {
          v18 = *(_QWORD *)sub_CDA220((__int64)v22);
          if ( (v18 & 2) == 0 && (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v17 + v25 + 28) & 4) != 0 )
          {
            v10 = v16;
            v19 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
            sub_DFF4A0(v19, v22);
          }
        }
      }
    }
    sub_DFF560(v22);
  }
LABEL_4:
  sub_DFF560(v20);
  return v10;
}

