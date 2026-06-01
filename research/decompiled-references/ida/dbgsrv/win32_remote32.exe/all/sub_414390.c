/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414390
// Address: 0x00414390

//----- (00414390) --------------------------------------------------------
signed int __userpurge sub_414390@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, unsigned __int8 a4)
{
  HANDLE v4; // edx
  signed int v6; // eax
  signed int v7; // edi
  const char *v8; // eax
  signed int v10; // eax
  signed int v11; // edi
  const char *v12; // eax
  signed int v13; // eax
  signed int v14; // edi
  const char *v15; // eax
  signed int v16; // eax
  signed int v17; // edi
  const char *v18; // eax
  signed int v19; // eax
  signed int v20; // edi
  const char *v21; // eax
  char v22; // [esp+4Fh] [ebp-2Dh] BYREF
  _DWORD v23[2]; // [esp+50h] [ebp-2Ch] BYREF
  _DWORD v24[3]; // [esp+58h] [ebp-24h] BYREF
  _DWORD v25[6]; // [esp+64h] [ebp-18h] BYREF

  v4 = hObject;
  if ( !hObject )
  {
    v6 = dword_4B6A04(10, 1, 0, &v22);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = (const char *)sub_453860(a2, v6);
      sub_410500(
        a1,
        (int)"AUTOHIDE NONE\nFailed to acquire 'load driver' privilege, please run as admin!\nError: %s\n",
        v8);
      return v7;
    }
    v10 = dword_4B6A04(20, 1, 0, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = (const char *)sub_453860(a2, v10);
      sub_410500(
        a1,
        (int)"AUTOHIDE NONE\nFailed to acquire 'debug' privilege, is system booted in /debug mode?\nError: %s\n",
        v12);
      return v11;
    }
    v13 = dword_4B69FC(&dword_4B4020);
    v14 = v13;
    if ( v13 < 0 && v13 != -1073741554 )
    {
      v15 = (const char *)sub_453860(a2, v13);
      sub_410500(
        a1,
        (int)"AUTOHIDE NONE\nFailed to load 'kldbgdrv', please use local kernel debugging at least once!\nError: %s\n",
        v15);
      return v14;
    }
    v25[0] = 24;
    v25[1] = 0;
    v25[3] = 64;
    v25[2] = &dword_4B4028;
    v25[4] = 0;
    v25[5] = 0;
    v16 = dword_4B6A08(&hObject, -1073741824, v25, v23, 0, 128, 0, 2, 64, 0, 0);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = (const char *)sub_453860(a2, v16);
      sub_410500(a1, (int)"AUTOHIDE NONE\nFailed to open 'kldbgdrv'\nError: %s\n", v18);
      return v17;
    }
    v4 = hObject;
  }
  v24[0] = a4 + 16;
  v24[1] = a3;
  v24[2] = 16;
  v19 = dword_4B6A0C(v4, 0, 0, 0, v23, 2277383, v24, 12, a3, 16);
  v20 = v19;
  if ( v19 < 0 )
  {
    v21 = (const char *)sub_453860(a2, v19);
    sub_410500(
      a1,
      (int)"AUTOHIDE NONE\nFailed to access model specific register, is system booted in /debug mode?\nError: %s\n",
      v21);
  }
  return v20;
}
// 4B4020: using guessed type int dword_4B4020;
// 4B4028: using guessed type int dword_4B4028;
// 4B69FC: using guessed type int (__stdcall *dword_4B69FC)(_DWORD);
// 4B6A04: using guessed type int (__stdcall *dword_4B6A04)(_DWORD, _DWORD, _DWORD, _DWORD);
// 4B6A08: using guessed type int (__stdcall *dword_4B6A08)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B6A0C: using guessed type int (__stdcall *dword_4B6A0C)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
