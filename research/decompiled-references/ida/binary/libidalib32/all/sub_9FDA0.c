__int64 __fastcall sub_9FDA0(__int64 a1)
{
  const char *v2; // rbx
  __int64 result; // rax
  size_t v4; // rax
  size_t v5; // rbp
  size_t v6; // rax
  size_t v7; // rbp
  size_t v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  v2 = (const char *)sub_9DAF0(0, (__int64)qword_250A60, (__int64)"FILTER Trace files|*.trc\nPlease select a trace");
  result = 0;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4;
    if ( v4 )
    {
      v10 = *(void **)a1;
      v11 = v4 + 1;
      if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)a1 = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(a1 + 8) = v11;
      memmove(v10, v2, v5);
      *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    v6 = strlen(v2);
    v7 = v6;
    if ( v6 )
    {
      v8 = v6 + 1;
      v9 = qword_250A60;
      if ( *((_QWORD *)&xmmword_250A68 + 1) < v6 + 1 )
      {
        qword_250A60 = (void *)qvector_reserve();
        v9 = qword_250A60;
      }
      *(_QWORD *)&xmmword_250A68 = v8;
      memmove(v9, v2, v7);
      *((_BYTE *)qword_250A60 + v7) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_250A68 = 0;
    }
    return 1;
  }
  return result;
}

