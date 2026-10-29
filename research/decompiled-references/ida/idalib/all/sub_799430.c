__int64 __fastcall sub_799430(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v13; // [rsp+8h] [rbp-70h]
  char v14[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  v7 = sub_7980D0((__int64)a1, (__int64)&ptr, a3, a4, a5, a6);
  if ( v7 )
  {
    v14[0] = 2;
    v15 = 0;
    v16 = 0;
    copy_idcv(v14);
    v8 = a1[4];
    if ( v8 )
    {
      v11 = v8 - 1;
      a1[4] = v11;
      free_idcv(a1[3] + 32 * v11);
    }
    free_idcv(v14);
    v9 = sub_798A70(a1, v7, (const char **)&ptr, a1[3] + 32LL * a1[4] - 32);
  }
  else
  {
    sub_799390(a1);
    v9 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v9;
}
