__int64 __fastcall sub_30D7F0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 (*a4)(void))
{
  int v5; // eax
  char *v6; // r15
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rbp
  _BYTE *segm_by_name; // r12
  unsigned int utf8_char; // edi
  unsigned __int8 *v12; // rax
  size_t v14; // rbx
  size_t v15; // rdx
  const char *v16; // rdi
  size_t v17; // rbx
  size_t v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rsi
  int v22; // [rsp+1Ch] [rbp-6Ch]
  void *src; // [rsp+28h] [rbp-60h] BYREF
  void *dest; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v5 = sub_30D6A0(&src, a2, a3, (unsigned __int8 (__fastcall *)(_QWORD))a4);
  v6 = (char *)src;
  v22 = v5;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (char *)src;
  v9 = (char *)src + v7 - 1;
  if ( !v7 )
    v9 = (char *)src;
  segm_by_name = nullptr;
  while ( v8 < v9 )
  {
    utf8_char = get_utf8_char(&src);
    if ( utf8_char == -1 )
    {
      v12 = (unsigned __int8 *)src;
      src = (char *)src + 1;
      utf8_char = *v12;
    }
    if ( segm_by_name )
    {
      if ( utf8_char > 0x7F || !isxdigit(utf8_char) )
      {
LABEL_10:
        src = v8;
        break;
      }
      goto LABEL_15;
    }
    if ( !a4() )
      goto LABEL_10;
    if ( utf8_char != 58 )
      goto LABEL_15;
    dest = nullptr;
    v14 = v8 - v6;
    v25 = 0;
    v15 = v14 + 1;
    if ( v14 != -1 )
    {
      dest = (void *)qvector_reserve(&dest, 0, v15, 1);
      v15 = v14 + 1;
      segm_by_name = dest;
    }
    *(_QWORD *)&v25 = v15;
    segm_by_name[v14] = 0;
    memmove(dest, v6, v14);
    v16 = &s1;
    if ( (_QWORD)v25 )
      v16 = (const char *)dest;
    segm_by_name = (_BYTE *)get_segm_by_name(v16);
    if ( dest )
    {
      *(_QWORD *)&v25 = 0;
      qfree(dest, v6);
      v8 = (char *)src;
    }
    else
    {
LABEL_15:
      v8 = (char *)src;
    }
  }
  LOBYTE(segm_by_name) = v6 < v8;
  if ( v6 < v8 )
  {
    v17 = v8 - v6;
    v18 = v17;
    v19 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 24) = v22;
    if ( v19 )
    {
      --v19;
      v18 = v17 + v19;
    }
    v20 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 + 1 )
    {
      v20 = qvector_reserve(a1, v20, v18 + 1, 1);
      *(_QWORD *)a1 = v20;
    }
    *(_QWORD *)(a1 + 8) = v18 + 1;
    *(_BYTE *)(v20 + v18) = 0;
    memmove((void *)(v19 + *(_QWORD *)a1), v6, v17);
  }
  return (unsigned int)segm_by_name;
}
