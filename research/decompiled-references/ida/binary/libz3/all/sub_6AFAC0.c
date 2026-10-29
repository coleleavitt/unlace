__int64 __fastcall sub_6AFAC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // r13
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // ecx
  char **exception; // rbp
  const char *v19; // rax
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v2 )
  {
    while ( *(_DWORD *)(v2 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_6356C0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v19 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_6A99E0(v20, v19);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v6 = 0xFFFFFFFF0LL;
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        v6 = 16LL * (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
      v8 = v6 + v7;
      v9 = *(_QWORD *)v8;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v8 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v8 + 8) & 1) == 0
        || (v15 = sub_1680FB0(*(_QWORD *)(a1 + 32), v9, 0), (v16 = v15) == 0) )
      {
        v10 = *(_WORD *)(v9 + 4);
        if ( v10 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_6378E0((_QWORD *)a1, v9);
          v2 = *(_QWORD *)(a1 + 40);
        }
        else if ( v10 == 2 )
        {
          sub_638480(a1, v9, v8);
          v2 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v10 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_637E40(a1, v9, v8, v3, v4, v5);
          v2 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v20[0] = v15;
      ++*(_DWORD *)(v15 + 8);
      sub_6ACBA0((_QWORD *)(a1 + 56), v20);
      v2 = *(_QWORD *)(a1 + 40);
      v17 = *(_DWORD *)(v2 - 4);
      *(_DWORD *)(v2 - 4) = v17 - 1;
      if ( v9 != v16 && v17 != 1 )
        *(_BYTE *)(v2 + 16LL * (unsigned int)(v17 - 2) + 8) |= 2u;
    }
  }
  v11 = 0x7FFFFFFF8LL;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
    v11 = 8LL * (unsigned int)(*(_DWORD *)(v12 - 4) - 1);
  v13 = *(_QWORD *)(v12 + v11);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_6A99C0(*a2, a2[1]);
  *a2 = v13;
  return sub_39BF70((__int64 *)(a1 + 48));
}

