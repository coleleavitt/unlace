__int64 __fastcall sub_32310(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+0h] [rbp-3F8h] BYREF
  _BYTE v7[360]; // [rsp+10h] [rbp-3E8h] BYREF
  __int64 v8; // [rsp+330h] [rbp-C8h]
  __int64 v9; // [rsp+338h] [rbp-C0h]
  __int64 v10; // [rsp+348h] [rbp-B0h]
  __int64 v11; // [rsp+350h] [rbp-A8h]
  __int64 v12; // [rsp+360h] [rbp-98h]
  __int64 v13; // [rsp+368h] [rbp-90h]
  __int64 v14; // [rsp+378h] [rbp-80h]
  unsigned __int64 v15; // [rsp+380h] [rbp-78h]
  char v16; // [rsp+388h] [rbp-70h]
  __int64 v17; // [rsp+390h] [rbp-68h]
  int v18; // [rsp+398h] [rbp-60h]
  __int64 v19; // [rsp+3A0h] [rbp-58h]
  __int128 v20; // [rsp+3A8h] [rbp-50h]
  __int64 v21; // [rsp+3B8h] [rbp-40h]
  int v22; // [rsp+3C0h] [rbp-38h]
  __int64 v23; // [rsp+3C8h] [rbp-30h]
  unsigned __int64 v24; // [rsp+3D8h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  sub_2A040((__int64)v6, a1, (__int64)&unk_597D0, 8);
  v16 = 0;
  qmemcpy(v7, a2, sizeof(v7));
  v15 = 0xFFFFFFFF00000004LL;
  v17 = -1;
  v18 = -1;
  v14 = a3;
  v6[0] = off_69DE8;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = -1;
  v20 = 0;
  v4 = 0;
  if ( (unsigned __int8)match_jpt(v6) )
    v4 = (unsigned __int8)sub_32000((__int64)v6, 6u);
  v6[0] = off_74B80;
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
  }
  return v4;
}
