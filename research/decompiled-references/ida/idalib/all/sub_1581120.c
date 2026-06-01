void __fastcall sub_1581120(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r12
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // [rsp+1h] [rbp-99h] BYREF
  _QWORD v18[2]; // [rsp+2h] [rbp-98h] BYREF
  char v19; // [rsp+12h] [rbp-88h]
  _QWORD v20[4]; // [rsp+22h] [rbp-78h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+42h] [rbp-58h] BYREF
  int v22; // [rsp+4Ah] [rbp-50h]
  void (__fastcall *v23)(__int64, _BYTE *, __int64, __int64, __int64, __int64); // [rsp+52h] [rbp-48h]
  _QWORD *v24; // [rsp+5Ah] [rbp-40h]
  __int64 v25; // [rsp+62h] [rbp-38h]

  if ( a2 )
  {
    v2 = *(_QWORD **)(*a1 + 264);
    v3 = sub_15F7970();
    if ( !v3 && (*(_BYTE *)(v2[19] + 24LL) & 1) == 0 )
    {
      v6 = *a1;
      v7 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL);
      if ( v7 < 0 )
      {
        v3 = (*(_BYTE *)(v2[5] + 40LL) & 1) == 0;
        v17 = *(_BYTE *)(v2[5] + 40LL) & 1;
      }
      else
      {
        v17 = 0;
      }
      v8 = v2[4];
      v19 = v3;
      v18[0] = off_2BB3F38;
      v18[1] = v6;
      v20[1] = v18;
      v20[0] = v2;
      v20[2] = &v17;
      if ( (unsigned __int8)sub_FD3830(v8, 0x1D4Fu, 0, (unsigned __int64)v2, v4, v5) != 1
        || (unsigned __int8)sub_FD3830(v8, 0x1D51u, 0, (unsigned __int64)v2, v9, v10) != 1
        || (unsigned __int8)sub_FD3830(v8, 0x1D50u, 0, (unsigned __int64)v2, v11, v12) != 1
        || (unsigned __int8)sub_FD3830(v8, 0x1D4Eu, 0, (unsigned __int64)v2, v15, v16) != 1 && (v7 & 8) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 8) & 7LL;
        if ( *(char *)(a2 + 29) < 0 )
        {
          v14 = 0;
          if ( v13 )
            v14 = sub_B8C660(a2);
        }
        else if ( v13 )
        {
          v14 = *(_QWORD *)(a2 - 8);
        }
        else
        {
          v14 = 0;
        }
        v25 = v14;
        v22 = 16777473;
        v23 = sub_157DBF0;
        v21 = off_2C46AD0;
        v24 = v20;
        sub_BEA550(&v21, a2);
      }
    }
  }
}
