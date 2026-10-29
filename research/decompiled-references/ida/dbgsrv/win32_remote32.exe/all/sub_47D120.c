/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D120
// Address: 0x0047D120

//----- (0047D120) --------------------------------------------------------
int __usercall sub_47D120@<eax>(int a1@<ebx>, LPCCH lpMultiByteStr, const CHAR *a3, _DWORD *a4)
{
  const CHAR *v4; // ecx
  _DWORD *v5; // edx
  CHAR v6; // al
  CHAR v7; // al
  int v9; // ebx
  bool v10; // zf
  char v11; // al
  UINT v12; // eax
  int v13; // eax
  HANDLE FirstFile; // esi
  UINT v15; // eax
  int v16; // eax
  const char *v17; // eax
  char v18; // cl
  int v19; // eax
  int v20; // eax
  int v21[2]; // [esp+8h] [ebp-298h] BYREF
  LPVOID v22; // [esp+10h] [ebp-290h]
  int v23; // [esp+14h] [ebp-28Ch]
  int v24; // [esp+18h] [ebp-288h]
  char v25; // [esp+1Ch] [ebp-284h]
  int v26; // [esp+20h] [ebp-280h]
  int v27; // [esp+24h] [ebp-27Ch]
  int v28; // [esp+28h] [ebp-278h]
  int v29[2]; // [esp+2Ch] [ebp-274h] BYREF
  LPVOID lpMem; // [esp+34h] [ebp-26Ch]
  int v31; // [esp+38h] [ebp-268h]
  int v32; // [esp+3Ch] [ebp-264h]
  char v33; // [esp+40h] [ebp-260h]
  _DWORD *v34; // [esp+44h] [ebp-25Ch]
  CHAR v35; // [esp+4Bh] [ebp-255h] BYREF
  struct _WIN32_FIND_DATAW v36; // [esp+4Ch] [ebp-254h] BYREF

  v4 = a3;
  v5 = a4;
  v34 = a4;
  if ( a3 != lpMultiByteStr )
  {
    do
    {
      v6 = *v4;
      if ( *v4 == 47 )
        break;
      if ( v6 == 92 )
        break;
      if ( v6 == 58 )
        break;
      v4 = (const CHAR *)sub_48183E(a1, (int)lpMultiByteStr, (unsigned int)lpMultiByteStr, (unsigned int)v4);
    }
    while ( v4 != lpMultiByteStr );
    v5 = v34;
  }
  v7 = *v4;
  v35 = v7;
  if ( v7 == 58 )
  {
    if ( v4 != lpMultiByteStr + 1 )
      return sub_47D06F(lpMultiByteStr, 0, 0, (int)v5);
    v7 = v35;
  }
  v9 = 0;
  if ( v7 == 47 || v7 == 92 || (v10 = v7 == 58, v11 = 0, v10) )
    v11 = 1;
  v21[0] = 0;
  v21[1] = 0;
  v22 = nullptr;
  v23 = 0;
  v28 = v11 != 0 ? v4 - lpMultiByteStr + 1 : 0;
  v24 = 0;
  v25 = 0;
  v12 = sub_47246A();
  v13 = sub_46D18F(lpMultiByteStr, (int)v21, v12);
  FirstFile = FindFirstFileExW(
                v13 == 0 ? (LPCWSTR)v22 : nullptr,
                FindExInfoStandard,
                &v36,
                FindExSearchNameMatch,
                nullptr,
                0);
  if ( FirstFile == (HANDLE)-1 )
  {
    v9 = sub_47D06F(lpMultiByteStr, 0, 0, (int)v34);
  }
  else
  {
    v27 = (v34[1] - *v34) >> 2;
    while ( 1 )
    {
      v29[0] = 0;
      v29[1] = 0;
      lpMem = nullptr;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v15 = sub_47246A();
      v16 = sub_47CDB1(v36.cFileName, (int)v29, (int)&v35, v15);
      v17 = v16 == 0 ? (const char *)lpMem : nullptr;
      if ( *v17 != 46 || (v18 = v17[1]) != 0 && (v18 != 46 || v17[2]) )
      {
        v19 = sub_47D06F(v17, (int)lpMultiByteStr, v28, (int)v34);
        v26 = v19;
        if ( v19 )
          break;
      }
      if ( v33 )
        sub_479216(lpMem);
      if ( !FindNextFileW(FirstFile, &v36) )
      {
        v20 = (v34[1] - *v34) >> 2;
        if ( v27 != v20 )
          sub_481350((_BYTE *)(*v34 + 4 * v27), v20 - v27, 4, (int (__cdecl *)(unsigned int, _BYTE *))sub_47CD99);
        goto LABEL_31;
      }
    }
    if ( v33 )
    {
      sub_479216(lpMem);
      v19 = v26;
    }
    v9 = v19;
LABEL_31:
    FindClose(FirstFile);
  }
  if ( v25 )
    sub_479216(v22);
  return v9;
}
