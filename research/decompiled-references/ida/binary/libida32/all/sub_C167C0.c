__int64 __fastcall sub_C167C0(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rsi
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r13
  unsigned int v21; // eax
  unsigned __int8 v22; // [rsp+1h] [rbp-B9h]
  _QWORD v23[3]; // [rsp+2h] [rbp-B8h] BYREF
  char v24; // [rsp+1Ah] [rbp-A0h]
  __int64 v25; // [rsp+2Ah] [rbp-90h]
  void *ptr; // [rsp+32h] [rbp-88h]
  __int64 v27; // [rsp+3Ah] [rbp-80h]
  _BYTE v28[120]; // [rsp+42h] [rbp-78h] BYREF

  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( !(unsigned __int8)sub_BF5170(a1, a2, nullptr) )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
  {
    v16 = sub_A3B7E0(*(_QWORD *)(a1 + 16));
    if ( (unsigned __int8)sub_CC19B0(v16, a1, a2, a3) )
    {
      v20 = *(_QWORD *)(a2 + 8);
      v21 = sub_BDCD00(a2, a1, v17, v18, v19);
      return sub_C07D20(a1, v21, v20, a3, 0);
    }
    return 0;
  }
  v9 = a1;
  if ( !(unsigned __int8)sub_C15CD0((__int64)a3, a1, a2, v6, v7) )
    return 0;
  if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
LABEL_10:
    v14 = *(_QWORD *)(a2 + 8);
    v15 = sub_BDCD00(a2, v9, v10, v11, v12);
    result = sub_C07D20(a1, v15, v14, a3, 0);
    if ( (_BYTE)result )
    {
      if ( *(_QWORD *)(a1 + 888) )
      {
        v22 = result;
        sub_BEFC80(a1);
        return v22;
      }
      return result;
    }
    return 0;
  }
  v13 = *(_QWORD **)(a1 + 16);
  memset(v23, 0, sizeof(v23));
  v27 = 0x800000000LL;
  v24 |= 1u;
  v25 = 0;
  ptr = v28;
  v28[65] = 0;
  sub_C00890((__int64)v23, v13, (__int64)a3);
  v9 = a2;
  result = sub_C12830(a1, (_DWORD *)a2, *(_QWORD *)(a2 + 8), (__int64)v23, (__int64)a3, 0);
  if ( (_BYTE)result )
  {
    if ( ptr != v28 )
      free(ptr);
    goto LABEL_10;
  }
  if ( ptr != v28 )
  {
    free(ptr);
    return 0;
  }
  return result;
}

