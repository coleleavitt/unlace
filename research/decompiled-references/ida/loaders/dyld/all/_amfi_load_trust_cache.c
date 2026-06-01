__int64 __fastcall amfi_load_trust_cache(char a1, __int64 a2, int a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
  _QWORD v9[2]; // [xsp+0h] [xbp-40h] BYREF
  int v10; // [xsp+10h] [xbp-30h]
  int v11; // [xsp+14h] [xbp-2Ch]
  void *v12; // [xsp+18h] [xbp-28h]
  int v13; // [xsp+20h] [xbp-20h]
  int v14; // [xsp+24h] [xbp-1Ch]
  void *v15; // [xsp+28h] [xbp-18h]
  int v16; // [xsp+30h] [xbp-10h]
  int v17; // [xsp+34h] [xbp-Ch]

  v9[0] = 0xAAAAAAAAAAAAAAAALL;
  v11 = -1431655766;
  v14 = -1431655766;
  LOBYTE(v9[0]) = a1;
  v9[1] = a2;
  v10 = a3;
  v12 = a4;
  v13 = (int)a5;
  v15 = a6;
  v17 = -1431655766;
  v16 = (int)a7;
  return __mac_syscall("AMFI", (char *)&stru_20.flags + 1, v9, a4, a5, a6, a7, a8);
}
