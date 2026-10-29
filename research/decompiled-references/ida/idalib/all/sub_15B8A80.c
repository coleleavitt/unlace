unsigned __int64 __fastcall sub_15B8A80(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+2Ch] [rbp-2Ch]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF

  v6 = *a1;
  v12 = 0;
  v9 = v6;
  ptr = &v14;
  v11 = 4;
  v13 = 1;
  result = sub_15B84F0(&v9, a2, a3, a4, a5, a6);
  if ( !v13 )
  {
    v8 = result;
    free(ptr);
    return v8;
  }
  return result;
}
