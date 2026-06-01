__int64 __fastcall sub_7EF8F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int v8; // ebx
  void *v10; // rax
  const void *v11; // rsi
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  void *v14; // [rsp+10h] [rbp-48h]
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  LOBYTE(v13) = 22;
  v15 = 0;
  v12 = &off_2B12650;
  v14 = nullptr;
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw(6 * v6, (const char *)a2, a3, a4, a5, a6, v12, v13, v14, v15, v16);
    v11 = *(const void **)a2;
    *((_QWORD *)&v15 + 1) = v6;
    v14 = v10;
    memcpy(v10, v11, 6 * v6);
    *(_QWORD *)&v15 = v6;
  }
  v8 = sub_7EFC90(a1, &v12, a3);
  sub_7E7540(&v12);
  return v8;
}

