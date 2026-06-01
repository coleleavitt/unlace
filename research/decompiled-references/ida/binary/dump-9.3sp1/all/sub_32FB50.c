__int64 __fastcall sub_32FB50(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  char v7; // r12
  int tinfo_size; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // rax
  __int64 v18[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v19; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 284);
  v21 = __readfsqword(0x28u);
  if ( v4 - 3 <= 1 )
    return 1;
  v7 = a4;
  tinfo_size = 1;
  if ( v4 - 34 <= 4 )
  {
    tinfo_size = get_tinfo_size();
    v4 = *(_DWORD *)(a1 + 284);
  }
  v9 = v4;
  switch ( v4 )
  {
    case 2u:
    case 3u:
    case 4u:
    case 0x23u:
      return 1;
    case 5u:
    case 0x22u:
      if ( *(_QWORD *)(a1 + 32) == 3 )
      {
        if ( tinfo_size == -1 )
          goto LABEL_8;
        v13 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v13 + 80) != 10
          || !(unsigned __int8)sub_329540(
                                 a2,
                                 *(_QWORD *)(v13 + 88),
                                 (char *)(v13 + 160),
                                 tinfo_size,
                                 v7,
                                 *(_QWORD *)(a3 + 64) + 208LL) )
        {
          goto LABEL_8;
        }
        return 1;
      }
      if ( !under_debugger )
        sub_383060(50663);
      goto LABEL_32;
    case 6u:
    case 8u:
    case 0x24u:
    case 0x26u:
      if ( *(_QWORD *)(a1 + 32) != 2 )
      {
        if ( !under_debugger )
          sub_383060(50662);
LABEL_32:
        BUG();
      }
      if ( tinfo_size != -1 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v10 + 80) == 10 )
        {
          v17 = sub_32F220((char *)(v10 + 80), tinfo_size);
          if ( (unsigned __int8)sub_3293B0(a2, *(_QWORD *)(v10 + 88), v17, v7, *(_QWORD *)(a3 + 64) + 208LL) )
            return 1;
        }
      }
LABEL_8:
      if ( (v7 & 1) != 0 )
        sub_316CB0(a2 + 2, (__int64 **)(a1 + 216), v9, a4);
      return 0;
    case 0x10u:
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 480) + 606LL) & 0x20) != 0 )
      {
        v18[0] = 0;
        v18[1] = 0;
        sub_63E80(v18, 0, 5);
        v19 = nullptr;
        v20 = 0;
        sub_64280(a2, v18);
        sub_316CB0(a2 + 2, &v19, v15, v16);
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree((__int64)v19);
        }
        qfree(v18[0]);
      }
      return 1;
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
      v12 = sub_32FA00(a1);
      if ( v12 <= 0 )
        return 0;
      return sub_3293B0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v12, v7, 0);
    case 0x17u:
    case 0x18u:
      v14 = 80;
      if ( v4 == 23 )
        v14 = 0;
      return sub_329A90(a2, *(_QWORD *)(a1 + 24) + v14, v7);
    default:
      return 0;
  }
}
