unsigned __int64 __fastcall sub_6C77E0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-E0h]
  __int64 v13; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v15[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v15;
  sub_B07340(ptr, a1, a2, a3);
  v13 = 0;
  v4 = sub_25AC3A0(a1 + 832, ptr, &v13, off_47D09A0);
  v5 = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v8 + 48 && v7 )
    {
      *(_QWORD *)(a1 + 2192) = v8 + 48;
      v9 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v8 = sub_6A76A0(a1 + 2192, 48, 4);
      v9 = v8;
    }
    v12 = v8;
    sub_B07270(v9, a2, a3);
    sub_25AC200(a1 + 832, v9 + 24, v13, off_47D09A0);
    v10 = *(unsigned int *)(a1 + 16);
    v11 = v12;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v10 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v10 + 1, 8);
      v10 = *(unsigned int *)(a1 + 16);
      v11 = v12;
    }
    v5 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10) = v11;
    ++*(_DWORD *)(a1 + 16);
  }
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return v5;
}

