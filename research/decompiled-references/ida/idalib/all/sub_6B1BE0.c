__int64 __fastcall sub_6B1BE0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // r9d
  const char *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-90h] BYREF
  void *v10; // [rsp+8h] [rbp-88h] BYREF
  __int128 v11; // [rsp+10h] [rbp-80h]
  void *ptr; // [rsp+28h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-60h]
  _QWORD v14[9]; // [rsp+48h] [rbp-48h] BYREF

  v14[3] = __readfsqword(0x28u);
  v11 = 0;
  v10 = nullptr;
  ptr = nullptr;
  v13 = 0;
  v4 = serialize_tinfo(&v10, &ptr, 0, a3, 16);
  if ( (_BYTE)v4 )
  {
    get_tinfo_pdata(&v9, *a3, 3);
    v6 = *a1;
    v14[0] = off_2B37AA0;
    v14[1] = v6;
    v14[2] = v9;
    sub_650CF0(v9, (__int64)v14, (__m128i *)&v10, nullptr, 0, v7);
    v8 = nullptr;
    if ( (unsigned __int64)v13 > 1 )
      v8 = (const char *)ptr;
    sub_6B1A70((__int64)a1, a2, (const char *)v10, v8);
  }
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v4;
}
