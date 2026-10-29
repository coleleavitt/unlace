void __fastcall sub_208CA70(__int64 a1, _BYTE *a2, signed __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rbx
  _BYTE *v7; // rax
  void *v8; // r15
  __m128i *v9; // r12
  __m128i *v10; // rbx
  void *v11; // rdi
  int v12; // ebx
  _QWORD v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (__int64)&a2[a3];
  if ( *(_DWORD *)(a1 + 92) > *(_DWORD *)(a1 + 88) )
  {
    v6 = *(_QWORD *)(a1 + 80) + 80LL * *(unsigned int *)(a1 + 88);
    *(_DWORD *)(v6 + 16) = 1769108563;
    *(_QWORD *)v6 = v6 + 16;
    *(_WORD *)(v6 + 20) = 26478;
    v7 = (_BYTE *)(v6 + 48);
    *(_QWORD *)(v6 + 8) = 6;
    *(_BYTE *)(v6 + 22) = 0;
    *(_QWORD *)(v6 + 32) = v6 + 48;
    if ( v3 && !a2 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)a3 > 0xF )
    {
      if ( a3 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v7 = (_BYTE *)operator new(a3 + 1);
      *(_QWORD *)(v6 + 48) = a3;
      *(_QWORD *)(v6 + 32) = v7;
    }
    else
    {
      if ( a3 == 1 )
      {
        *(_BYTE *)(v6 + 48) = *a2;
LABEL_7:
        *(_QWORD *)(v6 + 40) = a3;
        v7[a3] = 0;
        *(_QWORD *)(v6 + 64) = 0;
        *(_QWORD *)(v6 + 72) = 0;
        ++*(_DWORD *)(a1 + 88);
        return;
      }
      if ( !a3 )
        goto LABEL_7;
    }
    memcpy(v7, a2, a3);
    v7 = *(_BYTE **)(v6 + 32);
    goto LABEL_7;
  }
  v8 = (void *)(a1 + 96);
  v9 = (__m128i *)sub_2237400(a1 + 80, a1 + 96, 0, 80, v13);
  v10 = &v9[5 * *(unsigned int *)(a1 + 88)];
  v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
  v10[2].m128i_i64[0] = (__int64)v10[3].m128i_i64;
  strcpy(v10[1].m128i_i8, "String");
  v10->m128i_i64[1] = 6;
  sub_208BD90((__m128i *)v10[2].m128i_i64, a2, v3);
  v10[4].m128i_i64[0] = 0;
  v10[4].m128i_i64[1] = 0;
  sub_208C920(a1 + 80, v9);
  v11 = *(void **)(a1 + 80);
  v12 = v13[0];
  if ( v8 != v11 )
    free(v11);
  *(_QWORD *)(a1 + 80) = v9;
  *(_DWORD *)(a1 + 92) = v12;
  ++*(_DWORD *)(a1 + 88);
}
