__int64 __fastcall sub_469130(__int64 a1, _QWORD *a2, __int64 a3, char *a4)
{
  _QWORD *v4; // rbx
  const char *v5; // r8
  size_t v7; // rbp
  _QWORD *v8; // rbp
  __int64 result; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  void *ptr; // [rsp+0h] [rbp-68h]
  const char *src; // [rsp+8h] [rbp-60h]
  void *v14; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v4 = (_QWORD *)(a1 + 80);
  v5 = *(const char **)(a3 + 8);
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  if ( !v5 )
  {
    v10 = sub_41D810(a1 + 72, (__int64)&v14);
    result = 0;
    if ( v4 == v10 )
      return result;
    goto LABEL_7;
  }
  src = v5;
  v7 = strlen(v5);
  v14 = (void *)qvector_reserve(&v14, 0, v7 + 1, 1);
  *(_QWORD *)&v15 = v7 + 1;
  memmove(v14, src, v7);
  *((_BYTE *)v14 + v7) = 0;
  ptr = v14;
  v8 = sub_41D810(a1 + 72, (__int64)&v14);
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  result = 0;
  if ( v4 != v8 )
  {
LABEL_7:
    if ( !strcmp(a4, "None") || (LODWORD(v11) = find_custom_data_format(a4), (_DWORD)v11 == -1) )
      v11 = 0;
    else
      v11 = (int)v11;
    *a2 = v11;
    return 1;
  }
  return result;
}

