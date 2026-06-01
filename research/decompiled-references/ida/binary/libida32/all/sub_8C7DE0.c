__int64 __fastcall sub_8C7DE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int64 v7; // [rsp+8h] [rbp-80h] BYREF
  __int128 v8; // [rsp+10h] [rbp-78h]
  _OWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h]
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v7 = a1;
  v12 = __readfsqword(0x28u);
  v4 = operator new(0x80u);
  *(_BYTE *)(v4 + 8) = 45;
  *(_QWORD *)v4 = &off_2B147B8;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0x7FFFFFFF00000000LL;
  *(_QWORD *)(v4 + 64) = 0;
  v8 = 0;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  *(_OWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  DWORD1(v8) = 0x7FFFFFFF;
  DWORD2(v11) = -1;
  sub_8B2290((_QWORD *)(v4 + 64), (__int64)v9 + 8);
  *(_QWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  sub_8B2290((_QWORD *)(v4 + 88), (__int64)&v10);
  v5 = v7 == 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_BYTE *)(v4 + 124) = 0;
  *(_QWORD *)(v4 + 112) = 0xFFFFFFFFLL;
  if ( !v5
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, &v7, a2, a3) )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  return v4;
}

