/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C300
// Address: 0x000000014001C300

//----- (000000014001C300) ----------------------------------------------------
char __fastcall sub_14001C300(__int64 a1, const wchar_t *a2)
{
  WCHAR *v4; // rbx
  WCHAR v5; // ax
  size_t v6; // rdi
  unsigned __int16 *v7; // rdi
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // rsi
  void *Src[2]; // [rsp+20h] [rbp-658h] BYREF
  __int64 v15; // [rsp+30h] [rbp-648h]
  WCHAR DeviceName[4]; // [rsp+38h] [rbp-640h] BYREF
  WCHAR TargetPath[264]; // [rsp+40h] [rbp-638h] BYREF
  WCHAR Buffer[512]; // [rsp+250h] [rbp-428h] BYREF

  if ( !GetLogicalDriveStringsW(0x1FFu, Buffer) )
    return 0;
  wcscpy(DeviceName, L" :");
  v4 = Buffer;
  v5 = Buffer[0];
  while ( 1 )
  {
    DeviceName[0] = v5;
    if ( QueryDosDeviceW(DeviceName, TargetPath, 0x103u) )
    {
      v6 = (unsigned int)wcslen(TargetPath);
      if ( !wcsnicmp(a2, TargetPath, v6) )
      {
        v7 = (unsigned __int16 *)&a2[v6];
        if ( *v7 == 92 )
          break;
      }
    }
    while ( *v4++ )
      ;
    v5 = *v4;
    if ( !*v4 )
      return 0;
  }
  *(_OWORD *)Src = 0;
  v15 = 0;
  sub_140061D80(a1, DeviceName, -1);
  sub_140061D80((__int64)Src, v7, -1);
  v10 = (char *)Src[1] - 1;
  if ( !Src[1] )
    v10 = nullptr;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = v11 - 1;
    if ( !v11 )
      v12 = 0;
    v13 = &v10[v12 + 1];
    if ( (unsigned __int64)v13 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, (unsigned __int64)&v10[v12 + 1], 1u);
    *(_QWORD *)(a1 + 8) = v13;
    v10[v12 + *(_QWORD *)a1] = 0;
    memcpy((void *)(v12 + *(_QWORD *)a1), Src[0], (size_t)v10);
  }
  if ( Src[0] )
  {
    Src[1] = nullptr;
    j_free(Src[0]);
  }
  return 1;
}
