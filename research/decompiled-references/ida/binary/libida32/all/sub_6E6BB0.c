unsigned __int64 __fastcall sub_6E6BB0(_QWORD *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char tinfo_property; // al
  __int64 v16; // rdi
  char v17; // dl
  unsigned __int64 v18; // r15
  char v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v6 = a4;
  v10 = sub_6E4310(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
  v11 = sub_6D3920(a1, a3);
  if ( v11 )
  {
    v12 = *(_QWORD *)v11;
    if ( (*(_BYTE *)(*(_QWORD *)v11 + 28LL) & 0x7Fu) - 59 > 2 || !v12 )
    {
      if ( !under_debugger )
        interr(3371);
      BUG();
    }
    if ( v11[2] == 1 && v6 == 2 )
    {
      v21 = *(_QWORD *)v11;
      sub_6E54E0(a1, v12, a2, a3);
      v12 = v21;
    }
    v13 = sub_A56C90(a1[6], v12);
  }
  else
  {
    tinfo_property = get_tinfo_property(*a2, 2);
    v16 = *a2;
    if ( (tinfo_property & 0x3F) == 0xD )
      v17 = (get_tinfo_property(v16, 306) & 0x80) != 0 ? 3 : 0;
    else
      v17 = 2 * ((get_tinfo_property(v16, 2) & 0x3F) == 29);
    v19 = v17;
    v18 = sub_B72E20(a1[6], 0);
    *(_BYTE *)(v18 + 73) = (32 * v19) | *(_BYTE *)(v18 + 73) & 0x1F;
    sub_B68340(v18, v10);
    *(_QWORD *)(v18 + 40) = sub_6D3CC0((__int64)a1, a3);
    sub_6D3180((__int64)a1, a3, v18, v6);
    sub_B70D90(v10, v18);
    v13 = sub_A56EE0(a1[6], v18);
    *(_WORD *)(v18 + 72) |= 0x180u;
    if ( *(_QWORD *)(v18 + 64) )
      *(_BYTE *)(v18 + 73) |= 2u;
    if ( v6 == 2 )
    {
      v20 = v13;
      sub_6E54E0(a1, v18, a2, a3);
      v13 = v20;
    }
  }
  return sub_6D3D30((__int64)a1, a2, v13);
}

