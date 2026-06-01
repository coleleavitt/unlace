unsigned __int64 __fastcall sub_718AD0(__int64 a1, void *a2, const void *a3, __int64 a4)
{
  void *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // [rsp+7h] [rbp-261h] BYREF
  __int64 v19; // [rsp+8h] [rbp-260h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-258h] BYREF
  _BYTE v21[128]; // [rsp+20h] [rbp-248h] BYREF
  void *v22; // [rsp+A0h] [rbp-1C8h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp-1C0h]
  char v24; // [rsp+B0h] [rbp-1B8h] BYREF

  v6 = sub_717B10((_QWORD *)a1, a2, 1u);
  v18 = 0;
  sub_718270(&v22, (_QWORD *)a1, a3, a4, &v18);
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000000LL;
  sub_B15780(ptr, v6, v22, v23, a1);
  v19 = 0;
  v7 = sub_25AC3A0(a1 + 536, ptr, &v19, &off_47D0880);
  v8 = v7 - 24;
  if ( !v7 )
  {
    v11 = v23;
    v12 = 24LL * v23 + 48;
    v13 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += v12;
    v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + v14 && v13 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + v14;
      v8 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v17 = sub_6A76A0(a1 + 2192, v12, 4);
      v11 = v23;
      v8 = v17;
      v14 = v17;
    }
    sub_B153F0(v8, v6, v22, v11, 0, 0);
    v15 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v15 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v15) = v14;
    v16 = v19;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 536, v8 + 24, v16, &off_47D0880);
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v21 )
    free(ptr[0]);
  if ( v22 != &v24 )
    free(v22);
  return v9;
}

