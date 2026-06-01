unsigned __int64 __fastcall sub_5B5070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned int v7; // r13d
  void *v10; // rax
  const void *v11; // rsi
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+8h] [rbp-70h]
  unsigned __int64 v14; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+18h] [rbp-60h]
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 4LL * (int)a4 + 16);
  v19 = __readfsqword(0x28u);
  v12 = off_2B05C20;
  v13 = a1;
  v14 = __PAIR64__(a4, a3);
  ptr = nullptr;
  v16 = 0;
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw(8 * v6, (const char *)a2, a3, a4, a5, a6, v12, v13, v14);
    v11 = *(const void **)a2;
    *((_QWORD *)&v16 + 1) = v6;
    ptr = v10;
    memcpy(v10, v11, 8 * v6);
    *(_QWORD *)&v16 = v6;
  }
  v17 = 0;
  v18 = -1;
  sub_5AE960(v7, a2, &v12);
  v12 = off_2B05C20;
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v19 - __readfsqword(0x28u);
}

