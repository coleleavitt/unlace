__int64 __fastcall sub_22706E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const void **a9,
        const void **a10)
{
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rdi
  __int64 result; // rax
  char *v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 257;
  *(_QWORD *)(a1 + 16) = a8;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 16) + a7;
  *(_QWORD *)(a1 + 8) = a7;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 56) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = a9;
  *(_QWORD *)(a1 + 32) = a10;
  sub_2230390(&v14, 0, a3, a4, a5, (__int64)a9, a7, a8, a9, a10);
  v10 = v14;
  v11 = *(_QWORD *)a1;
  v14 = nullptr;
  v15[1] = 0;
  v15[0] = (__int64)v10;
  v12 = *(char **)(v11 + 8);
  v15[2] = 0;
  if ( v12 == *(char **)(v11 + 16) )
  {
    sub_1544270(v11, v12, (__int64)v15);
  }
  else
  {
    sub_2239BA0(v12, v15);
    *(_QWORD *)(v11 + 8) += 24LL;
  }
  result = sub_2239BD0(v15);
  if ( v14 )
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
  return result;
}
