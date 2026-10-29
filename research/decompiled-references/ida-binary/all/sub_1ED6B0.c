__int64 __fastcall sub_1ED6B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  const char *v6; // rax
  bool v7; // zf
  const char *v9; // rsi
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  const char *v14; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  const char *v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v6 = &s1;
  v7 = *(_QWORD *)(a2 + 16) == 0;
  v18 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  if ( !v7 )
    v6 = *(const char **)(a2 + 8);
  tag_remove(&v14, v6, 0);
  v13 = -1;
  v9 = &s1;
  v16 = nullptr;
  v17 = 0;
  if ( (_QWORD)v15 )
    v9 = v14;
  extract_name(&v16, v9, a4);
  v10 = &s1;
  if ( (_QWORD)v17 )
    v10 = v16;
  if ( (unsigned __int8)sub_192290(&v13, (__int64)v10, (a5 & 2) != 0) )
  {
    v11 = v13;
  }
  else
  {
    v13 = -1;
    v11 = -1;
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v10);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, v10);
  }
  return v11;
}
