__int64 __fastcall sub_47D440(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  const char *v6; // r8
  size_t v8; // rbp
  _QWORD *v9; // rbp
  __int64 result; // rax
  _QWORD *v11; // rbp
  _DWORD *v12; // rsi
  __int64 custom_data_format; // rax
  const void *v14; // rbx
  size_t v15; // rax
  size_t v16; // rbp
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-68h]
  const char *src; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v5 = (_QWORD *)(a1 + 80);
  v6 = *(const char **)(a3 + 8);
  v25 = __readfsqword(0x28u);
  v24 = 0;
  v23 = nullptr;
  if ( !v6 )
  {
    v11 = sub_431640(a1 + 72, (__int64)&v23);
    result = 0;
    if ( v5 == v11 )
      return result;
    goto LABEL_7;
  }
  src = v6;
  v8 = strlen(v6);
  v23 = (void *)qvector_reserve(&v23, 0, v8 + 1, 1);
  *(_QWORD *)&v24 = v8 + 1;
  memmove(v23, src, v8);
  *((_BYTE *)v23 + v8) = 0;
  ptr = v23;
  v9 = sub_431640(a1 + 72, (__int64)&v23);
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  result = 0;
  if ( v5 != v9 )
  {
LABEL_7:
    if ( a4 )
    {
      custom_data_format = get_custom_data_format((unsigned int)a4);
      if ( custom_data_format )
      {
        v14 = *(const void **)(custom_data_format + 24);
        if ( v14 )
        {
          v15 = strlen(*(const char **)(custom_data_format + 24));
          v16 = v15;
          if ( v15 )
          {
            v18 = (void *)*a2;
            v19 = v15 + 1;
            if ( a2[2] < v15 + 1 )
            {
              v20 = qvector_reserve(a2, *a2, v15 + 1, 1);
              *a2 = v20;
              v18 = (void *)v20;
            }
            a2[1] = v19;
            memmove(v18, v14, v16);
            *(_BYTE *)(*a2 + v16) = 0;
          }
          else
          {
            a2[1] = 0;
          }
        }
      }
    }
    else
    {
      v12 = (_DWORD *)*a2;
      if ( (unsigned __int64)a2[2] <= 4 )
      {
        v17 = qvector_reserve(a2, v12, 5, 1);
        *a2 = v17;
        v12 = (_DWORD *)v17;
      }
      a2[1] = 5;
      *v12 = 1701736270;
      *(_BYTE *)(*a2 + 4) = 0;
    }
    return 1;
  }
  return result;
}
