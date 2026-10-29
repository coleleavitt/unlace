__int64 __fastcall sub_778FF0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+8h] [rbp-70h]
  char v9[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  v2 = sub_777CA0((__int64)a1, (__int64)&ptr);
  if ( v2 )
  {
    v9[0] = 2;
    v10 = 0;
    v11 = 0;
    copy_idcv(v9);
    v3 = a1[4];
    if ( v3 )
    {
      v6 = v3 - 1;
      a1[4] = v6;
      free_idcv(a1[3] + 32 * v6);
    }
    free_idcv(v9);
    v4 = sub_778630(a1, v2, (const char **)&ptr, a1[3] + 32LL * a1[4] - 32);
  }
  else
  {
    sub_778F50(a1);
    v4 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v4;
}

