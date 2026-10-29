unsigned __int64 __fastcall sub_6DF480(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 *v13; // rdx
  __int64 v14; // r11
  unsigned __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+8h] [rbp-E0h]
  char v26; // [rsp+17h] [rbp-D1h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v29[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[1] = (void *)0x2000000000LL;
  v7 = *(_QWORD *)(a2 + 80);
  ptr[0] = v29;
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) != 0 )
    v9 = v8[1];
  else
    v9 = *v8;
  sub_B15C70(ptr, a2, v9, a3, a4);
  v27 = 0;
  v10 = sub_25AC3A0(a1 + 488, ptr, &v27, &off_47D07A0);
  v11 = (v10 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v10 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v14 = v13[1];
    else
      v14 = *v13;
    v15 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] | v14 & 7;
    if ( a4 )
    {
      v23 = sub_6DEF50((_QWORD *)a1, v15, a3, a4, &v26, 1);
      v15 = *(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] | v23 & 7;
    }
    v16 = *(_QWORD *)(a1 + 2192);
    v17 = (unsigned int)(8 * a4 + 48);
    *(_QWORD *)(a1 + 2272) += v17;
    v18 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v17 + v18 && v16 )
    {
      *(_QWORD *)(a1 + 2192) = v17 + v18;
      v19 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v25 = v15;
      v18 = sub_6A76A0(a1 + 2192, v17, 4);
      v15 = v25;
      v19 = v18;
    }
    v24 = v18;
    sub_B07850(v19, a2, v15, a3, a4);
    v20 = *(unsigned int *)(a1 + 16);
    v21 = v24;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v20 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v20 + 1, 8);
      v20 = *(unsigned int *)(a1 + 16);
      v21 = v24;
    }
    v22 = v19 + 24;
    v11 = v19 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v20) = v21;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 488, v22, v27, &off_47D07A0);
  }
  if ( ptr[0] != v29 )
    free(ptr[0]);
  return v11;
}

