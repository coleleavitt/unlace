__int64 __fastcall sub_3E1050(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbp
  char **exception; // rbx
  const char *v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_3D2CB0(*a4, a4[1]);
  *a4 = 0;
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    *(_QWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( (unsigned __int8)sub_3DF660(a1, a2, 3) )
    {
      v7 = 0x7FFFFFFF8LL;
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
        v7 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = *(_QWORD *)(v8 + v7);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      sub_3D2CD0(*a3, a3[1]);
      *a3 = v9;
      sub_39BF70((__int64 *)(a1 + 48));
      v10 = *(_QWORD *)(a1 + 88);
      v11 = 0x7FFFFFFF8LL;
      if ( v10 )
        v11 = 8LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
      v12 = *(_QWORD *)(v10 + v11);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      sub_3D2CB0(*a4, a4[1]);
      *a4 = v12;
      result = sub_3A8160((__int64 *)(a1 + 80));
      if ( !*a4 )
      {
        v13 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        result = sub_3D2CB0(*a4, a4[1]);
        *a4 = v14;
      }
    }
    else
    {
      return sub_3E0D10(a1, a3, a4);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_3DBA80(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v16 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_3D2D40(v17, v16);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    result = sub_3D2CD0(*a3, a3[1]);
    *a3 = a2;
  }
  return result;
}

