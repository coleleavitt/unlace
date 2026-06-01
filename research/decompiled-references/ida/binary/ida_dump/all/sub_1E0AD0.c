__int64 __fastcall sub_1E0AD0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // ebp
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-90h]
  int v12; // [rsp+14h] [rbp-84h] BYREF
  __int64 v13; // [rsp+18h] [rbp-80h] BYREF
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  char v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)a2 == 42 )
  {
    sub_313200(a1, 0, 0);
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 43) > 9 )
    {
      if ( !under_debugger )
        sub_383060(51863);
      BUG();
    }
    if ( *(_BYTE *)(a2 + 48) == 2 )
    {
      v9 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), *(unsigned int *)(a2 + 52), 0);
    }
    else
    {
      v3 = (int)a3;
      v14 = 0;
      v4 = *a3;
      v15 = 0;
      if ( !(unsigned __int8)sub_1DFF30((__int64)&v14, *(_QWORD *)(v4 + 1504), &v12, a2 + 48) )
        return 0;
      v8 = v12;
      v17 = 0;
      v16[0] = 0;
      v16[1] = v12;
      v18 = 0;
      if ( !(unsigned __int8)sub_1E0180(v3, (unsigned int)v16, (unsigned int)&v14, 0, v5, v6)
        || !(unsigned __int8)sub_312AF0(v16, &v13) )
      {
        sub_312B80(v16);
        return 0;
      }
      v10 = -1;
      if ( v8 != 8 )
        v10 = (1LL << (8 * (unsigned __int8)v8)) - 1;
      v11 = v13 & v10;
      sub_312B80(v16);
      v9 = v11;
    }
    sub_313200(a1, (unsigned int)(*(_DWORD *)a2 - 43), v9);
  }
  return 1;
}
