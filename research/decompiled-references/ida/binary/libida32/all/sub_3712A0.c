__int64 __fastcall sub_3712A0(__int64 a1, __int64 a2)
{
  const char *sourcefile; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax

  sourcefile = (const char *)get_sourcefile(*(unsigned int *)(a1 + 8), 0);
  if ( sourcefile )
  {
    v3 = sourcefile;
    v4 = strlen(sourcefile);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v5 = v4;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v4 )
    {
      v7 = v4 + 1;
      v8 = (void *)qvector_reserve(a2 + 8, 0, v4 + 1, 1);
      *(_QWORD *)(a2 + 16) = v7;
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v8, v3, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
}

