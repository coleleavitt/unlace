/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B224
// Address: 0x0006B224

//----- (0006B224) --------------------------------------------------------
int __fastcall sub_6B224(_DWORD *a1, int a2, int a3)
{
  unsigned int v5; // r1
  int v6; // r7
  int v7; // r6
  int v8; // r0
  double v9; // r2
  int v11; // [sp+8h] [bp-54h]
  int v12; // [sp+10h] [bp-4Ch]
  int v14; // [sp+1Ch] [bp-40h] BYREF
  int v15; // [sp+20h] [bp-3Ch] BYREF
  void *v16; // [sp+24h] [bp-38h]
  int v17; // [sp+28h] [bp-34h]
  int v18; // [sp+2Ch] [bp-30h]
  int v19; // [sp+30h] [bp-2Ch]
  int v20; // [sp+34h] [bp-28h]
  char v21; // [sp+38h] [bp-24h]
  int v22; // [sp+3Ch] [bp-20h]
  int v23; // [sp+40h] [bp-1Ch]
  int (__fastcall **v24[2])(_DWORD, char *, int); // [sp+44h] [bp-18h] BYREF
  void *v25[3]; // [sp+4Ch] [bp-10h] BYREF

  memset(v25, 0, sizeof(v25));
  v5 = a1[71];
  if ( !v5 )
    v5 = a1[83];
  sub_5F718((int)v25, v5);
  v12 = a2;
  v6 = (*(int (__fastcall **)(_DWORD *, _DWORD, int, void *, _DWORD))(*a1 + 112))(a1, *(_DWORD *)(a2 + 4), 1, v25[0], 0);
  if ( v6 >= 1 )
  {
    v24[1] = (int (__fastcall **)(_DWORD, char *, int))a1;
    v24[0] = (int (__fastcall **)(_DWORD, char *, int))&off_DA804;
    sub_6760C();
    v7 = sub_699DC(a3, (int)v25[0], v24, 0);
    sub_67610();
    v8 = *(_DWORD *)(a3 + 8);
    if ( v7 == -1 )
      v7 = (*((_DWORD *)v25[0] + 6 * a1[197] + 2) << 26 >> 31) | (v8 + *(unsigned __int16 *)(a3 + 14));
    v6 = -1;
    if ( (v7 & 0xFFFFFFFE) != v8 )
    {
      v21 = 0;
      v17 = 0;
      v16 = nullptr;
      v18 = 0;
      v20 = 0;
      v22 = -1;
      v23 = 0;
      v15 = v7;
      v19 = 4;
      v6 = (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 164))(a1, &v14);
      if ( v6 == 1 && v14 )
      {
        v11 = sub_65EB0((int)a1, v12);
        v15 &= ~1u;
        v6 = (*(int (__fastcall **)(_DWORD *, int *, int *, _DWORD, int, _DWORD))(*a1 + 164))(a1, &v14, &v15, 0, 1, 0);
        if ( v6 == 1 && v14 )
        {
          v6 = v11;
          if ( v11 == 1 )
          {
            set_debug_event_code(v12, 6);
            v6 = 1;
          }
LABEL_16:
          if ( v16 )
          {
            v17 = 0;
            qfree(v16);
            v18 = 0;
            v16 = nullptr;
          }
          goto LABEL_18;
        }
        sub_1BBA0((int)"%a: failed to remove single step bpt?!\n", v9);
      }
      if ( v6 == 1 )
        v6 = -1;
      goto LABEL_16;
    }
  }
LABEL_18:
  sub_5F79C(v25);
  return v6;
}
// 6B346: variable 'v9' is possibly undefined
// DA804: using guessed type _UNKNOWN *off_DA804;
