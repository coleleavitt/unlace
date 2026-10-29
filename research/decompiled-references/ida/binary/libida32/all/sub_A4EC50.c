unsigned __int64 __fastcall sub_A4EC50(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 *v7; // r15
  unsigned __int16 v8; // r9
  int v9; // edx
  _QWORD *v10; // rcx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // r12
  char v17; // al
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 3 )
    return a2;
  v4 = sub_F47380(a2, a1);
  LODWORD(v5) = 0;
  v4 &= 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v4;
  v7 = (__int64 *)v4;
  ptr[0] = v21;
  v8 = *(_WORD *)(v6 + 18);
  v9 = *(_DWORD *)(v6 + 16);
  ptr[1] = (void *)0x2000000000LL;
  v10 = *(_QWORD **)(v6 + 40);
  v11 = (v8 >> 6) & 7;
  if ( (v9 & 0x2000000) != 0 )
  {
    v5 = v10[2];
    if ( *((_DWORD *)v10 + 2) <= 0x40u )
      v10 = (_QWORD *)*v10;
    else
      v10 = *(_QWORD **)*v10;
  }
  sub_F3C430((unsigned int)ptr, a1, *(_QWORD *)(v6 + 32), (_DWORD)v10, v5, v11, (*(_BYTE *)(v6 + 18) >> 3) & 7);
  v19 = 0;
  v12 = sub_21FF620(a1 + 1024, ptr, &v19, &off_2B17420);
  if ( v12 && (v13 = v12 - 24) != 0 )
  {
    v2 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v14 = *v7;
    v15 = 0;
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v14 + 8) )
    {
      v15 = sub_A4EC50(
              a1,
              *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7);
      sub_21FF620(a1 + 1024, ptr, &v19, &off_2B17420);
    }
    v16 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    sub_F32E20(v16, 3, *(_QWORD *)(v6 + 32), v15, (*(_WORD *)(v6 + 18) >> 6) & 7, (*(_BYTE *)(v6 + 18) >> 3) & 7, 0);
    v17 = *(_BYTE *)(v6 + 19) & 2 | *(_BYTE *)(v16 + 19) & 0xFD;
    *(_BYTE *)(v16 + 19) = v17;
    if ( (v17 & 2) == 0 )
      *(_BYTE *)(v16 + 19) = *(_BYTE *)(v6 + 19) & 0x7C | v17 & 0x83;
    *(_QWORD *)(v16 + 40) = *(_QWORD *)(v6 + 40);
    sub_A469E0(a1 + 8, v16);
    v18 = v16 + 24;
    v2 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    sub_21FF4D0(a1 + 1024, v18, v19, &off_2B17420);
  }
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v2;
}

