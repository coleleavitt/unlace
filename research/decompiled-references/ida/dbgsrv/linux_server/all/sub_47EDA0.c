/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EDA0
// Address: 0x000000000047EDA0

//----- (000000000047EDA0) ----------------------------------------------------
char *__fastcall sub_47EDA0(char *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // r15
  char *v6; // rax
  unsigned __int8 *v7; // rdx
  char *v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  char *v13; // rdx
  void *v14; // rdi
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  ptr = nullptr;
  sub_47EAC0((__int64)&ptr, a4, 0);
  if ( !(_QWORD)v17 )
  {
    v10 = ptr;
    v8 = nullptr;
    if ( !ptr )
      return v8;
    goto LABEL_13;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = (char *)ptr + 24 * v5;
    v7 = (unsigned __int8 *)s1;
    if ( *((_QWORD *)v6 + 1) )
      v7 = *(unsigned __int8 **)v6;
    v8 = sub_480480(a1, a2, v7, a3, 0);
    if ( sub_480B00(v8) )
      break;
    if ( ++v5 >= (unsigned __int64)v17 )
    {
      v8 = nullptr;
      break;
    }
  }
  v9 = (char *)ptr;
  v10 = ptr;
  if ( ptr )
  {
    v11 = v17;
    if ( (_QWORD)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v9[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v14);
          v9 = (char *)ptr;
        }
        ++v12;
        v10 = v9;
      }
      while ( v11 != v12 );
    }
LABEL_13:
    *(_QWORD *)&v17 = 0;
    j__free(v10);
  }
  return v8;
}
