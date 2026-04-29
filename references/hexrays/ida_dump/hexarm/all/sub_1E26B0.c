__int64 __fastcall sub_1E26B0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  int v10; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h] BYREF
  char v12; // [rsp+18h] [rbp-60h]
  _DWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v4 = *a1;
  v16 = __readfsqword(0x28u);
  v11 = 0;
  v5 = *(_QWORD *)(v4 + 1504);
  v12 = 0;
  v6 = sub_1E02F0((__int64)&v11, v5, &v10, a3);
  if ( (_BYTE)v6 )
  {
    v14 = 0;
    v13[0] = 0;
    v13[1] = v10;
    v15 = 0;
    v6 = sub_1E0540((_DWORD)a1, (unsigned int)v13, (unsigned int)&v11, 0, v7, v8);
    if ( (_BYTE)v6 )
    {
      if ( (v13[0] & 0xF) == 2 )
        *a2 = sub_312E90(v13);
      else
        v6 = 0;
    }
    sub_312F40(v13);
  }
  return v6;
}
