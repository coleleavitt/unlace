__int64 __fastcall sub_4B54B0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // r12
  __int64 v12; // r13
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // ecx
  char **exception; // rbp
  const char *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+10h] [rbp-38h]
  __int64 v29; // [rsp+18h] [rbp-30h]
  __int64 v30; // [rsp+20h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_4B6140(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v25 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_4B1880(&v26, v25);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v26);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)&v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v9 = 0xFFFFFFFF0LL;
      v10 = *(_QWORD *)(a1 + 40);
      if ( v10 )
        v9 = 16LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
      v11 = (__int64 *)(v9 + v10);
      v12 = *v11;
      ++*(_DWORD *)(a1 + 152);
      if ( (v11[1] & 0xFFFFFFCC) != 0
        || (v11[1] & 1) == 0
        || (v21 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v22 = v21) == 0) )
      {
        v13 = *(_WORD *)(v12 + 4);
        if ( v13 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_4B8700(a1, v12, v5, v6, v7, v8, v26, v27, v28);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else if ( v13 == 2 )
        {
          sub_4C04B0(a1, v12, v11);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_4B9690(a1, v12, (_DWORD)v11, v6, v7, v8, v26, v27, v28, v29, v30);
          v4 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v26 = v21;
      ++*(_DWORD *)(v21 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), &v26);
      v4 = *(_QWORD *)(a1 + 40);
      v23 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v23 - 1;
      if ( v23 != 1 && v12 != v22 )
        *(_BYTE *)(v4 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
    }
  }
  v14 = 0x7FFFFFFF8LL;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
  v16 = *(_QWORD *)(v15 + v14);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a2;
  if ( *a2 )
  {
    v18 = a2[1];
    if ( (*(_DWORD *)(v17 + 8))-- == 1 )
      sub_15D7BC0(v18, v17);
  }
  *a2 = v16;
  return sub_39BF70((__int64 *)(a1 + 48));
}

