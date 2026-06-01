__int64 __fastcall enumerate_files(
        _BYTE *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD, char *),
        int a6)
{
  __int64 v7; // r13
  int i; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+0h] [rbp-5098h]
  unsigned int v13; // [rsp+0h] [rbp-5098h]
  _BYTE v14[4]; // [rsp+10h] [rbp-5088h] BYREF
  char v15[8228]; // [rsp+14h] [rbp-5084h] BYREF
  __int64 v16; // [rsp+2038h] [rbp-3060h]
  int v17; // [rsp+2044h] [rbp-3054h]
  char v18[4104]; // [rsp+4050h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+5058h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  qmakepath((unsigned int)v18, 4096, a3, a4, 0, a6);
  v7 = qbasename(v18);
  for ( i = qfindfirst(v18, v14, 0); ; i = qfindnext(v14) )
  {
    if ( i )
    {
      v10 = 0;
      goto LABEL_6;
    }
    qustrncpy((_BYTE *)v7, v15, (__int64)&v18[-v7 + 4096]);
    v9 = (**a5)(a5, v18);
    v10 = v9;
    if ( v9 )
      break;
  }
  if ( a1 )
  {
    v13 = v9;
    qustrncpy(a1, v18, a2);
    v10 = v13;
  }
LABEL_6:
  v12 = v10;
  qfindclose(v14);
  return v12;
}
