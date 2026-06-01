__int64 __fastcall sub_59B846(unsigned int *a1, _QWORD *a2)
{
  struct stat v4; // [rsp+10h] [rbp-1360h] BYREF
  struct stat v5; // [rsp+A0h] [rbp-12D0h] BYREF
  char v6[4096]; // [rsp+130h] [rbp-1240h] BYREF
  _BYTE v7[304]; // [rsp+1130h] [rbp-240h] BYREF
  _QWORD v8[33]; // [rsp+1260h] [rbp-110h] BYREF
  unsigned __int64 v9; // [rsp+1368h] [rbp-8h]

  v9 = sub_5ADA92(a2);
  if ( v9 <= 0xB )
    return 0;
  if ( (unsigned int)sub_5ADB25((char *)a2 + v9 - 10, " (deleted)", 10) )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, _QWORD *, _QWORD, void *))(*(_QWORD *)a1 + 72LL))(
         a1,
         v8,
         a1[2],
         &unk_75A050) != 1 )
    return 0;
  memset(v7, 0, 0x128u);
  if ( (unsigned __int8)sub_59C267(v8, &v7[41]) != 1 )
    return 0;
  if ( !sub_59A7A4((__int64)a1, (__int64)v7, (__int64)v6) )
    return 0;
  if ( (unsigned int)sub_5ADAC7(a2, v6) )
    return 0;
  if ( !(unsigned int)sub_599DA5((const char *)v8, &v5)
    && !(unsigned int)sub_599DA5(v6, &v4)
    && v5.st_dev == v4.st_dev
    && v5.st_ino == v4.st_ino )
  {
    return 0;
  }
  *a2 = v8[0];
  *(_QWORD *)((char *)a2 + 247) = *(_QWORD *)((char *)&v8[30] + 7);
  qmemcpy(
    (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)v8 - ((char *)a2 - ((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * ((((_DWORD)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 255) & 0xFFFFFFF8) >> 3));
  return 1;
}
