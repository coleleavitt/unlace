unsigned __int64 __fastcall sub_1403C0(__int64 a1, __int64 a2, _BYTE *a3)
{
  const void *v4; // r13
  size_t v5; // rax
  size_t v6; // r12
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v4 = (const void *)qword_2530B0;
  if ( !qword_2530B0 )
  {
    qgetenv();
    goto LABEL_3;
  }
  v5 = strlen((const char *)qword_2530B0);
  v6 = v5;
  if ( !v5 )
  {
LABEL_3:
    *(_QWORD *)(a2 + 8) = 0;
    goto LABEL_4;
  }
  v8 = *(void **)a2;
  v9 = v5 + 1;
  if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
  {
    v10 = qvector_reserve();
    *(_QWORD *)a2 = v10;
    v8 = (void *)v10;
  }
  *(_QWORD *)(a2 + 8) = v9;
  memmove(v8, v4, v6);
  *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
LABEL_4:
  *a3 = qgetenv();
  return v11 - __readfsqword(0x28u);
}

