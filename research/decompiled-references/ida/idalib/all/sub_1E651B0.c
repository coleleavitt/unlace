__int64 __fastcall sub_1E651B0(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v7; // r15d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  void *v14; // rdx
  bool v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  unsigned int v20; // [rsp+14h] [rbp-104h] BYREF
  __int64 v21; // [rsp+18h] [rbp-100h] BYREF
  void *v22; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-F0h]
  char v24; // [rsp+2Ch] [rbp-ECh]
  __int64 *v25; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-E0h]
  char v27; // [rsp+3Ch] [rbp-DCh]
  unsigned __int8 v28; // [rsp+40h] [rbp-D8h]
  _BYTE v29[32]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int8 *v30; // [rsp+70h] [rbp-A8h] BYREF
  char v31; // [rsp+C8h] [rbp-50h]
  char v32; // [rsp+D4h] [rbp-44h]

  if ( (*a3 & 0x20000) == 0 )
  {
    sub_C3EB00((__int64)&v25, (unsigned __int64)a3, *(_QWORD *)(a1 + 248), nullptr, a5, a6);
    v7 = v28;
    if ( !v28 )
    {
      sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a4, 0xC57u, 0);
      if ( v31 )
      {
        sub_AE9DF0(&v30, (__int64)"'address_space'", 1u);
      }
      else if ( v32 )
      {
        sub_1E63E10((__int64)v29, (__int64)"'address_space'");
      }
      LODWORD(v21) = 1;
      v19 = sub_180A710((__int64)v29, (int *)&v21);
      v22 = (void *)sub_EEC8C0((unsigned __int64)a3, (__int64)&v21, a7);
      sub_1587DB0(v19, (__int64 *)&v22);
      sub_15F7200(v29);
      goto LABEL_24;
    }
    v12 = v26;
    if ( !v27 )
    {
      v13 = (unsigned __int64)v25;
      if ( v26 > 0x40 )
        v13 = v25[(v26 - 1) >> 6];
      if ( (v13 & (1LL << ((unsigned __int8)v26 - 1))) != 0 )
      {
        v7 = 0;
        sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a4, 0xC4Eu, 0);
        v22 = (void *)sub_EEC8C0((unsigned __int64)a3, a1 + 8, a7);
        sub_1587DB0((__int64)v29, (__int64 *)&v22);
        sub_15F7200(v29);
LABEL_24:
        sub_98E4B0((__int64)&v25);
        return v7;
      }
      v27 = 1;
    }
    v23 = v26;
    if ( v26 > 0x40 )
    {
      sub_2205470(&v22, 0, 0);
      v12 = v23;
      v24 = 1;
      if ( v23 > 0x40 )
      {
        *(_QWORD *)v22 = &loc_7FFFE6;
        memset((char *)v22 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v12 + 63) >> 6) + 0x1FFFFFFF));
        if ( v27 )
        {
LABEL_16:
          v15 = (int)sub_2205DB0(&v25, &v22) > 0;
LABEL_17:
          if ( v15 )
          {
            sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a4, 0xC4Fu, 0);
            LODWORD(v17) = (_DWORD)v22;
            if ( v23 > 0x40 )
              v17 = *(_QWORD *)v22;
            v20 = v17;
            v7 = 0;
            v18 = sub_16CF160((__int64)v29, &v20);
            v21 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v20, a7);
            sub_1587DB0(v18, &v21);
            sub_15F7200(v29);
          }
          else
          {
            LODWORD(v16) = (_DWORD)v25;
            if ( v26 > 0x40 )
              v16 = *v25;
            *a2 = v16 + 25;
          }
          if ( v23 > 0x40 && v22 )
            operator delete[](v22);
          goto LABEL_24;
        }
LABEL_27:
        v15 = (int)sub_2205E20(&v25, &v22) > 0;
        goto LABEL_17;
      }
    }
    else
    {
      v24 = 1;
    }
    v14 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v12) & 0x7FFFE6);
    if ( !v12 )
      v14 = nullptr;
    v22 = v14;
    if ( v27 )
      goto LABEL_16;
    goto LABEL_27;
  }
  *a2 = 0;
  return 1;
}
