__int64 __fastcall sub_487440(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rbp
  char *v8; // rbp
  char *v9; // rsi
  char *v10; // rdi
  unsigned int v11; // ebx
  char *v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  char *s1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v3 = *a1;
  v17 = __readfsqword(0x28u);
  v13 = nullptr;
  v5 = *(_QWORD **)(v3 + 88);
  v6 = *(_QWORD *)(v3 + 8);
  v14 = 0;
  v7 = v6 + 9 * a3;
  dirtree_get_entry_name(&v13, *v5, 9 * a2 + v6, 1);
  s1 = nullptr;
  v16 = 0;
  dirtree_get_entry_name(&s1, *v5, v7, 1);
  v8 = s1;
  if ( *((_BYTE *)a1 + 8) )
  {
    v9 = (char *)&::s1;
    if ( (_QWORD)v14 )
      v9 = v13;
    v10 = (char *)&::s1;
    if ( (_QWORD)v16 )
      v10 = s1;
    v11 = (unsigned int)strcmp(v10, v9) >> 31;
  }
  else
  {
    v9 = (char *)&::s1;
    if ( (_QWORD)v16 )
      v9 = s1;
    if ( (_QWORD)v14 )
      v11 = (unsigned int)strcmp(v13, v9) >> 31;
    else
      v11 = (unsigned int)strcmp(&::s1, v9) >> 31;
  }
  if ( v8 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v8, v9);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v9);
  }
  return v11;
}
