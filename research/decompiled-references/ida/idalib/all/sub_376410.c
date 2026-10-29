__int64 __fastcall sub_376410(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v3 = haystack;
  if ( *(_QWORD *)(qword_2CCB598 + 32) )
    v3 = *(const char **)(qword_2CCB598 + 24);
  if ( qstpncpy(v9, v3, 1024) - (__int64)v9 <= 0 )
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  else
  {
    v4 = strlen(v9);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v5 = v4;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v4 )
    {
      v7 = v4 + 1;
      v8 = (void *)qvector_reserve(a2 + 8, 0, v4 + 1, 1);
      *(_QWORD *)(a2 + 8) = v8;
      *(_QWORD *)(a2 + 16) = v7;
      memmove(v8, v9, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
    }
  }
  return 0;
}
