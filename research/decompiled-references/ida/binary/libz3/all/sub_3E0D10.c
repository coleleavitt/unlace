__int64 __fastcall sub_3E0D10(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r14
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  char **exception; // rbp
  const char *v24; // rax
  __int64 v25[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_3DBA80(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v24 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_3D2D40(v25, v24);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v5 = 0xFFFFFFFF0LL;
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        v5 = 16LL * (unsigned int)(*(_DWORD *)(v6 - 4) - 1);
      v7 = v5 + v6;
      v8 = *(_QWORD *)v7;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v7 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v7 + 8) & 1) == 0
        || (v17 = sub_1680FB0(*(_QWORD *)(a1 + 32), v8, 0), (v18 = v17) == 0) )
      {
        v9 = *(_WORD *)(v8 + 4);
        if ( v9 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_3DF4D0((_QWORD *)a1, v8);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else if ( v9 == 2 )
        {
          sub_3E00F0(a1, v8, v7);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v9 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_3DF990(a1, v8, v7);
          v4 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v25[0] = v17;
      ++*(_DWORD *)(v17 + 8);
      sub_3D5DC0((_QWORD *)(a1 + 56), v25);
      v19 = sub_1680FB0(*(_QWORD *)(a1 + 72), v8, 0);
      v25[0] = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      sub_3D5D00((_QWORD *)(a1 + 88), v25);
      v4 = *(_QWORD *)(a1 + 40);
      v20 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v20 - 1;
      if ( v8 != v18 && v20 != 1 )
        *(_BYTE *)(v4 + 16LL * (unsigned int)(v20 - 2) + 8) |= 2u;
    }
  }
  v10 = 0x7FFFFFFF8LL;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
    v10 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
  v12 = *(_QWORD *)(v11 + v10);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  sub_3D2CD0(*a2, a2[1]);
  *a2 = v12;
  sub_39BF70((__int64 *)(a1 + 48));
  v13 = *(_QWORD *)(a1 + 88);
  v14 = 0x7FFFFFFF8LL;
  if ( v13 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v15 = *(_QWORD *)(v13 + v14);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_3D2CB0(*a3, a3[1]);
  *a3 = v15;
  result = sub_3A8160((__int64 *)(a1 + 80));
  if ( !*a3 )
  {
    v21 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    result = sub_3D2CB0(*a3, a3[1]);
    *a3 = v22;
  }
  return result;
}

