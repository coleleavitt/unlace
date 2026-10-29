__int64 __fastcall sub_DA5850(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+28h] [rbp-40h]

  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA4BF0(a1, a2, v4, 0);
  if ( !(_BYTE)v5 )
    return 0;
  if ( *(_DWORD *)(v4 + 24) )
  {
    v6 = v5;
    v7 = *(_QWORD *)(a1 + 176);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v9 = sub_E011D0(v4 + 32, v8, a3);
    v11 = v10;
    v12 = sub_DFD980(v7, 48);
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 24) = 1;
    *(_QWORD *)(v12 + 32) = v9;
    *(_QWORD *)(v12 + 40) = v11;
    return v6;
  }
  v13 = sub_DA5370(a1, a2, v4, 0);
  if ( !(_BYTE)v13 )
    return 0;
  v6 = 0;
  sub_DFF4E0(v18, *(_QWORD *)(v4 + 32), a3 + *(_DWORD *)v4, a3 + *(_DWORD *)v4);
  if ( !v19 )
  {
    v15 = v20;
    if ( !v20 || v18[0] <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v20 + 32) + 28LL) )
    {
      v6 = sub_CDA840((__int64)v18);
      if ( (_BYTE)v6 )
      {
        v6 = 0;
      }
      else
      {
        v16 = *(_QWORD *)sub_CDA220((__int64)v18);
        if ( (v16 & 2) == 0 && (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v15 + v21 + 28) & 4) != 0 )
        {
          v6 = v13;
          v17 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
          sub_DFF4A0(v17, v18);
        }
      }
    }
  }
  sub_DFF560(v18);
  return v6;
}

