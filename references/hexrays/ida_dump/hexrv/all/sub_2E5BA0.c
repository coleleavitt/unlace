unsigned __int64 __fastcall sub_2E5BA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r12
  void *v6; // rax
  const void *v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  void *v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v3 = a1[2];
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v8 = v2;
  v9 = nullptr;
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw(v3);
    v7 = (const void *)a1[1];
    *((_QWORD *)&v10 + 1) = v3;
    v9 = v6;
    memcpy(v6, v7, v3);
    *(_QWORD *)&v10 = v3;
  }
  v11 = a1[4];
  v12 = *((_DWORD *)a1 + 10) | 0xAC0100;
  sub_2E59E0((__int64)&v8, a2, (__int64)"IFLAGS", 1);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v13 - __readfsqword(0x28u);
}
