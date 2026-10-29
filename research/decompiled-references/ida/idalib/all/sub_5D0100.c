unsigned __int64 __fastcall sub_5D0100(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned int v7; // r13d
  void *v10; // rax
  const void *v11; // rsi
  _QWORD v12[2]; // [rsp+0h] [rbp-78h] BYREF
  int v13; // [rsp+10h] [rbp-68h]
  int v14; // [rsp+14h] [rbp-64h]
  void *ptr; // [rsp+18h] [rbp-60h]
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 4LL * (int)a4 + 16);
  v19 = __readfsqword(0x28u);
  v12[0] = &off_2B2FBE0;
  v12[1] = a1;
  v13 = a3;
  v14 = a4;
  ptr = nullptr;
  v16 = 0;
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw(16 * v6);
    v11 = *(const void **)a2;
    *((_QWORD *)&v16 + 1) = v6;
    ptr = v10;
    memcpy(v10, v11, 16 * v6);
    *(_QWORD *)&v16 = v6;
  }
  v17 = 0;
  v18 = -1;
  ((void (__fastcall *)(_QWORD, __int64, _QWORD *, __int64, __int64, __int64))sub_5C95D0)(v7, a2, v12, a4, a5, a6);
  v12[0] = &off_2B2FBE0;
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v19 - __readfsqword(0x28u);
}
