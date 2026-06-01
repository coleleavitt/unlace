__int64 __fastcall sub_53E8D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 *v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  int ordinal_limit; // eax
  int v8; // r13d
  unsigned int v9; // ebx
  const char *numbered_type_name; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64 *, unsigned int); // rax
  size_t v13; // rdx
  __int64 v14; // r9
  size_t v15; // r8
  _BYTE *v16; // rax
  const char *v17; // rsi
  size_t v18; // rax
  const char *v19; // r8
  size_t v20; // r9
  void *v21; // rdi
  void *v22; // rdx
  const char *v23; // [rsp+8h] [rbp-70h]
  void *v24; // [rsp+8h] [rbp-70h]
  _BYTE *v25; // [rsp+8h] [rbp-70h]
  void *v26; // [rsp+8h] [rbp-70h]
  size_t v27; // [rsp+10h] [rbp-68h]
  const char *v28; // [rsp+10h] [rbp-68h]
  size_t v29; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  result = *(_QWORD *)(a1 + 128);
  if ( !result )
  {
    v3 = operator new(0x30u);
    *(_DWORD *)(v3 + 8) = 0;
    v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 16) = 0;
    *(_OWORD *)(v3 + 24) = 0;
    *(_QWORD *)v3 = &off_2B044F0;
    *(_QWORD *)(v3 + 40) = a1;
    v5 = (_QWORD *)operator new(8u);
    *v5 = create_dirtree(v5, v4);
    v6 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 128) = v5;
    ordinal_limit = get_ordinal_limit(v6);
    if ( (unsigned int)(ordinal_limit - 2) <= 0xFFFFFFFC )
    {
      v8 = ordinal_limit - 1;
      v9 = 0;
      do
      {
        v11 = *v4;
        ++v9;
        src = nullptr;
        v31 = 0;
        v12 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int))(v11 + 16);
        if ( v12 == sub_53DEF0 )
        {
          numbered_type_name = (const char *)get_numbered_type_name(*(_QWORD *)(v4[5] + 120), v9);
          if ( numbered_type_name && *numbered_type_name )
          {
            v23 = numbered_type_name;
            v18 = strlen(numbered_type_name);
            v19 = v23;
            v20 = v18;
            if ( !v18 )
            {
              *(_QWORD *)&v31 = 0;
              goto LABEL_22;
            }
            v21 = src;
            v22 = (void *)(v18 + 1);
            if ( *((_QWORD *)&v31 + 1) < v18 + 1 )
            {
              v29 = v18;
              v28 = v23;
              v26 = (void *)(v18 + 1);
              src = (void *)qvector_reserve(&src, src, v22, 1);
              v20 = v29;
              v21 = src;
              v19 = v28;
              v22 = v26;
            }
            *(_QWORD *)&v31 = v22;
            v25 = (_BYTE *)v20;
            memmove(v21, v19, v20);
            v25[(_QWORD)src] = 0;
LABEL_11:
            v13 = v31;
            if ( (_QWORD)v31 )
            {
              v14 = v31 + 1;
              v15 = v31 - 1;
              if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)(v31 + 1) )
              {
                v16 = src;
LABEL_14:
                *(_QWORD *)&v31 = v14;
                v16[v13] = 0;
                if ( v15 )
                  memmove((char *)src + 1, src, v15);
LABEL_16:
                v17 = haystack;
                *(_BYTE *)src = 47;
                if ( (_QWORD)v31 )
                  v17 = (const char *)src;
                dirtree_link(**(_QWORD **)(a1 + 128), v17, 1);
                goto LABEL_6;
              }
            }
            else
            {
LABEL_22:
              if ( *((_QWORD *)&v31 + 1) > 1u )
              {
                *(_QWORD *)&v31 = 2;
                *((_BYTE *)src + 1) = 0;
                goto LABEL_16;
              }
              v14 = 2;
              v15 = 0;
            }
            v27 = v15;
            v24 = (void *)v14;
            v16 = (_BYTE *)qvector_reserve(&src, src, v14, 1);
            v15 = v27;
            v14 = (__int64)v24;
            src = v16;
            v13 = v27 + 1;
            goto LABEL_14;
          }
        }
        else if ( ((unsigned __int8 (__fastcall *)(__int64 *, void **, _QWORD, _QWORD))v12)(v4, &src, v9, 0) )
        {
          goto LABEL_11;
        }
LABEL_6:
        if ( src )
        {
          *(_QWORD *)&v31 = 0;
          qfree(src);
        }
      }
      while ( v9 != v8 );
    }
    return *(_QWORD *)(a1 + 128);
  }
  return result;
}

