__int64 __fastcall sub_3B5AD0(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rdi
  __int64 dir_size; // rbp
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  char v17; // [rsp+Eh] [rbp-6Ah]
  char v18; // [rsp+Fh] [rbp-69h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  char v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v4 = *a1;
  v23 = __readfsqword(0x28u);
  v21 = a2;
  v22 = -1;
  dir_size = dirtree_get_dir_size(v4, a2);
  result = 0;
  if ( dir_size )
  {
    v17 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *a1;
      v22 = v7;
      v19 = -1;
      v20 = 0;
      dirtree_resolve_cursor(&v19, v9, &v21);
      if ( v19 != -1 )
      {
        if ( v20 )
        {
          v8 += (int)sub_3B5AD0(a1, v19, a3);
        }
        else
        {
          v10 = sub_3AA8A0((__int64)&v19, v19);
          if ( v10 )
          {
            v18 = v10;
            v15 = sub_3B59C0(v19, a3, v11, v12, v13, v14);
            if ( v15 )
              v8 += v15 == 2;
            else
              v17 = v18;
          }
        }
      }
      ++v7;
    }
    while ( dir_size != v7 );
    if ( v17 )
      return 0xFFFFFFFFLL;
    else
      return (unsigned int)v8;
  }
  return result;
}
