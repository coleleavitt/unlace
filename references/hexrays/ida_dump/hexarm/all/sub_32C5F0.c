__int64 *__fastcall sub_32C5F0(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  __int128 v7; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+28h] [rbp-40h]
  __int16 v10; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a4 )
  {
    sub_32C3B0(a1, *(_QWORD *)(a2 + 96), a3);
    if ( !*(_BYTE *)a1 )
    {
      if ( !under_debugger )
        sub_3835A0(50632);
      BUG();
    }
  }
  else
  {
    sub_329D70(a1, a2, a3);
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  copy_tinfo_t((char *)&v7 + 8, &v5);
  v8 = 0;
  copy_tinfo_t(&v8, &v6);
  v9 = 0;
  v10 = 0;
  clear_tinfo_t(&v5);
  clear_tinfo_t(&v6);
  copy_tinfo_t(&v7, a1);
  create_tinfo(a1, 10, 10, &v7);
  clear_tinfo_t(&v8);
  clear_tinfo_t((char *)&v7 + 8);
  clear_tinfo_t(&v7);
  return a1;
}
