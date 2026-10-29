unsigned __int64 __fastcall sub_50A980(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  size_t v3; // rax
  __int64 v4; // rbx
  size_t v5; // r15
  size_t v6; // r14
  __int64 v7; // rsi
  size_t v8; // rdx
  __int64 v9; // rax
  char src[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+418h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v2 = qfopen(a2, "r");
  if ( v2 )
  {
    while ( qfgets(src, 1024, v2) )
    {
      v3 = strlen(src);
      v4 = *(_QWORD *)(a1 + 40);
      v5 = v3;
      v6 = v3;
      if ( v4 )
      {
        --v4;
        v6 = v3 + v4;
      }
      v7 = *(_QWORD *)(a1 + 32);
      v8 = v6 + 1;
      if ( *(_QWORD *)(a1 + 48) < v6 + 1 )
      {
        v9 = qvector_reserve(a1 + 32, v7, v8, 1);
        v8 = v6 + 1;
        *(_QWORD *)(a1 + 32) = v9;
        v7 = v9;
      }
      *(_QWORD *)(a1 + 40) = v8;
      *(_BYTE *)(v7 + v6) = 0;
      memmove((void *)(*(_QWORD *)(a1 + 32) + v4), src, v5);
    }
    qfclose(v2);
    *(_BYTE *)(a1 + 60) = 1;
  }
  return v12 - __readfsqword(0x28u);
}

