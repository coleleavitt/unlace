__int64 __fastcall get_file_type_name(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v8; // rsi
  __int64 v9; // rbp
  unsigned int v11; // eax
  const char *v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  size_t v15; // r14
  void *v16; // rdi
  size_t v17; // r15
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  dest = nullptr;
  v19 = 0;
  if ( sub_614990(qword_2CA1698, (__int64 *)&dest, 69, a4, a5, a6) > 0 )
    goto LABEL_2;
  v11 = getinf(5);
  v12 = (const char *)strarray(&unk_2B0D020, 26, v11);
  v13 = v12;
  if ( v12 )
  {
    v14 = strlen(v12);
    v15 = v14;
    if ( v14 )
    {
      v16 = dest;
      v17 = v14 + 1;
      if ( *((_QWORD *)&v19 + 1) < v14 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v14 + 1, 1);
        v16 = dest;
      }
      *(_QWORD *)&v19 = v17;
      memmove(v16, v13, v15);
      *((_BYTE *)dest + v15) = 0;
LABEL_2:
      v8 = (const char *)dest;
      if ( (_QWORD)v19 )
        goto LABEL_3;
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v19 = 0;
LABEL_9:
  v8 = haystack;
LABEL_3:
  v9 = qstpncpy(a1, v8, a2) - a1;
  if ( dest )
  {
    *(_QWORD *)&v19 = 0;
    qfree(dest);
  }
  return v9;
}

