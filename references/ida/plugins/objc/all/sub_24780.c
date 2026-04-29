__int64 __fastcall sub_24780(__int64 *a1, __int64 *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  unsigned int v9; // eax
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  int v18; // [rsp+14h] [rbp-54h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v18 = 0;
  v9 = sub_15860(&v18);
  if ( !(_BYTE)v9 )
    return 0;
  v19 = 0;
  v10 = v9;
  if ( a6 == 2 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v19, a5 + a1[39]);
    goto LABEL_12;
  }
  if ( a6 > 2 )
  {
    if ( a6 != 3 )
      return 0;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v19, a5 + a1[40]);
LABEL_12:
    if ( v14 )
      goto LABEL_13;
    return 0;
  }
  if ( !a6 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v19, a5 + a1[37]);
    goto LABEL_12;
  }
  v11 = a1[111];
  v12 = *a1;
  v20[0] = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v12 + 136))(a1, v20, a5 + v11)
    || !v20[0]
    || !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v19, a1[112] + v20[0]) )
  {
    return 0;
  }
LABEL_13:
  v15 = v19;
  if ( (v19 & 1) != 0 )
  {
    sub_E8C0();
    v15 = v19;
  }
  *a4 = v15 & 1;
  v16 = -8;
  if ( *((_DWORD *)a1 + 186) == 4 )
    v16 = -4;
  *a2 = v15 & v16;
  *a3 = v18;
  return v10;
}
