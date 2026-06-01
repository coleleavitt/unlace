__int64 __fastcall enumerate_files(
        char a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD, _BYTE *),
        int a6)
{
  __int64 v7; // r13
  int i; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-5098h]
  unsigned int v14; // [rsp+0h] [rbp-5098h]
  unsigned int v15; // [rsp+0h] [rbp-5098h]
  _BYTE v16[4]; // [rsp+10h] [rbp-5088h] BYREF
  _BYTE v17[8228]; // [rsp+14h] [rbp-5084h] BYREF
  __int64 v18; // [rsp+2038h] [rbp-3060h]
  int v19; // [rsp+2044h] [rbp-3054h]
  _BYTE v20[4104]; // [rsp+4050h] [rbp-1048h] BYREF
  unsigned __int64 v21; // [rsp+5058h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  qmakepath((int)v20, 4096, a3, a4, 0, a6, a1);
  v7 = qbasename(v20);
  for ( i = qfindfirst(v20, v16, 0); ; i = qfindnext(v16) )
  {
    if ( i )
    {
      v10 = 0;
      goto LABEL_6;
    }
    qustrncpy(v7, v17, &v20[-v7 + 4096]);
    v9 = (**a5)(a5, v20);
    v10 = v9;
    if ( v9 )
      break;
  }
  v12 = v13;
  if ( v13 )
  {
    v15 = v9;
    qustrncpy(v12, v20, a2);
    v10 = v15;
  }
LABEL_6:
  v14 = v10;
  qfindclose(v16);
  return v14;
}

