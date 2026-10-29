unsigned __int64 __fastcall sub_1C36A00(
        __m128 *a1,
        __int64 a2,
        _QWORD *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  char v17; // al
  _QWORD *v19; // rax
  __int64 (__fastcall **v20)(); // [rsp+10h] [rbp-28h] BYREF
  __int16 v21; // [rsp+18h] [rbp-20h]
  char v22; // [rsp+1Ah] [rbp-1Eh]
  _QWORD *v23; // [rsp+20h] [rbp-18h]

  v21 = 256;
  v22 = 1;
  v20 = off_2C66DE0;
  v23 = a3;
  v9 = sub_1BF9B70(a1, a2, a3, (__int64)&v20, a7, a8, a4, a5);
  if ( v9 == 1 )
    return 1;
  v14 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v15 = (_QWORD *)v14;
  if ( (*(_DWORD *)v14 & 0x10000) == 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_BYTE *)(v16 + 16);
    switch ( v17 )
    {
      case 13:
        if ( (((*(_WORD *)(v16 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          return 1;
        break;
      case 47:
        v19 = sub_F60F10(v16, (__int64)v15, v10, v11, v12, v13);
        if ( (*((_BYTE *)v19 + 74) & 1) == 0 && (v19[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 1;
        break;
      case 10:
        break;
      default:
        return 1;
    }
  }
  return sub_191BD20((__int64)a1, v15, a4, a5, v10, v11, v12, v13);
}
