_BYTE *__fastcall sub_1377870(__int64 a1, int a2, __int64 *a3)
{
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v9; // [rsp+0h] [rbp-78h] BYREF
  __int16 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]

  LOWORD(v15) = 257;
  v4 = sub_102D970(a2);
  v10 = 257;
  if ( *v4 )
  {
    v9 = v4;
    LOBYTE(v10) = 3;
  }
  return sub_1039E30(a3, a1, (__int64)&v9, v5, v6, v7, v11, v12, v13, v14, v15);
}
