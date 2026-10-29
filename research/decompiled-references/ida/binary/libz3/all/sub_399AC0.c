__int64 __fastcall sub_399AC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 *v9; // r12
  __int64 v10; // r13
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // ecx
  char **exception; // rbp
  const char *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]
  __int64 v24; // [rsp+18h] [rbp-30h]
  __int64 v25; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v2 )
  {
    while ( *(_DWORD *)(v2 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_39AF50(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v20 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_399470(&v21, v20);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v21);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)&v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, sub_39A5B0);
      }
      v7 = 0xFFFFFFFF0LL;
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
        v7 = 16LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = (__int64 *)(v7 + v8);
      v10 = *v9;
      ++*(_DWORD *)(a1 + 152);
      if ( (v9[1] & 0xFFFFFFCC) != 0
        || (v9[1] & 1) == 0
        || (v16 = sub_1680FB0(*(_QWORD *)(a1 + 32), v10, 0), (v17 = v16) == 0) )
      {
        v11 = *(_WORD *)(v10 + 4);
        if ( v11 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_3A7BA0(a1, v10, v3, v4, v5, v6, v21, v22, v23);
          v2 = *(_QWORD *)(a1 + 40);
        }
        else if ( v11 == 2 )
        {
          sub_3A9390(a1, v10, v9);
          v2 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_3A8E40(a1, v10, (_DWORD)v9, v4, v5, v6, v21, v22, v23, v24, v25);
          v2 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v21 = v16;
      ++*(_DWORD *)(v16 + 8);
      sub_399930((unsigned int **)(a1 + 56), &v21);
      v2 = *(_QWORD *)(a1 + 40);
      v18 = *(_DWORD *)(v2 - 4);
      *(_DWORD *)(v2 - 4) = v18 - 1;
      if ( v10 != v17 && v18 != 1 )
        *(_BYTE *)(v2 + 16LL * (unsigned int)(v18 - 2) + 8) |= 2u;
    }
  }
  v12 = 0x7FFFFFFF8LL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v14 = *(_QWORD *)(v13 + v12);
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  sub_399450(*a2, a2[1]);
  *a2 = v14;
  return sub_39BF70(a1 + 48);
}

