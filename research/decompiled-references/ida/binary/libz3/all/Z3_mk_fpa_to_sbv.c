__int64 __fastcall Z3_mk_fpa_to_sbv(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v7; // al
  _DWORD *v8; // rax
  __int64 v9; // r12
  _DWORD *v11; // rax
  __int64 v12; // rdi
  char v13; // [rsp+Fh] [rbp-51h]
  int v14; // [rsp+10h] [rbp-50h] BYREF
  char v15; // [rsp+18h] [rbp-48h]
  int v16[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v13 = v7;
  if ( v7 )
    sub_2A1890();
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v8
    && *(_DWORD *)(a1 + 384) == *v8
    && v8[1] == 1
    && (v11 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v11
    && !v11[1] )
  {
    v17 = a3;
    v12 = *(_QWORD *)(a1 + 368);
    v14 = a4;
    v15 = 0;
    *(_QWORD *)v16 = a2;
    v9 = sub_15DCAD0(v12, (int)v16, 0);
    sub_15D0DF0(&v14);
    sub_251FD0(a1, v9);
    if ( v13 )
    {
      sub_2BB620(v9);
LABEL_15:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "rm and float sorts expected");
    if ( v13 )
    {
      sub_2BB620(0);
      v9 = 0;
      goto LABEL_15;
    }
    return 0;
  }
  return v9;
}

