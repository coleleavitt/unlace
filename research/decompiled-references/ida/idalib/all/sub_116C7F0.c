void __fastcall sub_116C7F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  __int64 v7; // rbp
  size_t v8; // rax
  void *v9; // rdi
  size_t v10; // r12
  __int64 v11; // rax
  _BYTE *v12; // rdx

  if ( *(_BYTE *)(a1 + 8) )
  {
    v2 = a2;
    v4 = j__strlen("Found HIP installation: ");
    v5 = *(void **)(a2 + 32);
    v6 = v4;
    if ( v4 > *(_QWORD *)(a2 + 24) - (_QWORD)v5 )
    {
      v2 = sub_227BF10(a2, "Found HIP installation: ", v4);
    }
    else if ( v4 )
    {
      memcpy(v5, "Found HIP installation: ", v4);
      *(_QWORD *)(a2 + 32) += v6;
    }
    v7 = sub_227BF10(v2, *(_QWORD *)(a1 + 240), *(_QWORD *)(a1 + 248));
    v8 = j__strlen(", version ");
    v9 = *(void **)(v7 + 32);
    v10 = v8;
    if ( v8 > *(_QWORD *)(v7 + 24) - (_QWORD)v9 )
    {
      v7 = sub_227BF10(v7, ", version ", v8);
    }
    else if ( v8 )
    {
      memcpy(v9, ", version ", v8);
      *(_QWORD *)(v7 + 32) += v10;
    }
    v11 = sub_227BF10(v7, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
    v12 = *(_BYTE **)(v11 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
    {
      sub_227BA10(v11, 10);
    }
    else
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = 10;
    }
  }
}
