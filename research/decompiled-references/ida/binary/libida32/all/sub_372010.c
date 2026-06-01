__int64 __fastcall sub_372010(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // r13
  void *v8; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v12 = __readfsqword(0x28u);
  s = nullptr;
  v11 = 0;
  if ( !v3 )
    v2 = *(const char **)(a1 + 8);
  compile_idc_file(v2, &s, 3);
  v4 = s;
  if ( (_QWORD)v11 )
  {
    if ( !s )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      return 0;
    }
    v5 = strlen(s);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v6 = v5;
    *(_OWORD *)(a2 + 16) = 0;
    if ( !v5 )
      goto LABEL_9;
    v7 = v5 + 1;
    v8 = (void *)qvector_reserve(a2 + 8, 0, v5 + 1, 1);
    *(_QWORD *)(a2 + 8) = v8;
    *(_QWORD *)(a2 + 16) = v7;
    memmove(v8, v4, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
    v4 = s;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  if ( v4 )
  {
LABEL_9:
    *(_QWORD *)&v11 = 0;
    qfree(v4);
  }
  return 0;
}

