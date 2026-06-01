unsigned __int64 __fastcall sub_6C48D0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int16 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rcx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v13; // r11d
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-F0h]
  int v25; // [rsp+10h] [rbp-E8h]
  int v26; // [rsp+18h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v29[184]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 3 )
  {
    v5 = *(_WORD *)(v4 + 18);
    LODWORD(v6) = 0;
    v7 = *(_QWORD **)(v4 + 40);
    ptr[0] = v29;
    ptr[1] = (void *)0x2000000000LL;
    v8 = (v5 >> 6) & 7;
    if ( (*(_BYTE *)(v4 + 19) & 2) != 0 )
    {
      v6 = v7[2];
      if ( *((_DWORD *)v7 + 2) <= 0x40u )
        v7 = (_QWORD *)*v7;
      else
        v7 = *(_QWORD **)*v7;
    }
    sub_B064F0((unsigned int)ptr, a1, *(_QWORD *)(v4 + 32), (_DWORD)v7, v6, v8, (*(_BYTE *)(v4 + 18) >> 3) & 7);
    v27 = 0;
    v24 = a1 + 1000;
    v9 = sub_25AC3A0(a1 + 1000, ptr, &v27, &off_47D0BE0);
    v11 = (v9 - 24) & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v9 )
    {
      v13 = 0;
      v14 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v14 != *(_QWORD *)(*(_QWORD *)v2 + 8LL) )
      {
        v26 = ((__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64, __int64))sub_6C48D0)(
                a1,
                *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7,
                v14,
                v10);
        sub_25AC3A0(v24, ptr, &v27, &off_47D0BE0);
        v13 = v26;
      }
      v15 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += 48LL;
      v16 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v16 + 48 && v15 )
      {
        *(_QWORD *)(a1 + 2192) = v16 + 48;
        v17 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v25 = v13;
        v23 = sub_6A76A0(a1 + 2192, 48, 4);
        v13 = v25;
        v17 = v23;
        v16 = v23;
      }
      sub_B05CB0(v17, 3, *(_QWORD *)(v4 + 32), v13, (*(_WORD *)(v4 + 18) >> 6) & 7, (*(_BYTE *)(v4 + 18) >> 3) & 7, 0);
      v18 = *(_BYTE *)(v4 + 19) & 2 | *(_BYTE *)(v17 + 19) & 0xFD;
      *(_BYTE *)(v17 + 19) = v18;
      v19 = *(_QWORD *)(v4 + 40);
      if ( (v18 & 2) != 0 )
      {
        *(_QWORD *)(v17 + 40) = v19;
      }
      else
      {
        v22 = *(_BYTE *)(v4 + 19);
        *(_QWORD *)(v17 + 40) = v19;
        *(_BYTE *)(v17 + 19) = v22 & 0x7C | v18 & 0x83;
      }
      v20 = *(unsigned int *)(a1 + 16);
      if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v20 + 1) )
      {
        sub_25D6060(a1 + 8, a1 + 24, v20 + 1, 8);
        v20 = *(unsigned int *)(a1 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v20) = v16;
      v21 = v27;
      ++*(_DWORD *)(a1 + 16);
      sub_25AC200(v24, v17 + 24, v21, &off_47D0BE0);
      v11 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v3 = v11;
    if ( ptr[0] != v29 )
      free(ptr[0]);
  }
  return v3;
}

