bool __fastcall sub_6B9D50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // al
  char *v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  char *v22; // [rsp+10h] [rbp-48h] BYREF
  __m128i v23; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      v7 = *(unsigned __int8 *)(v6 + 16);
      if ( v7 != 30 )
        break;
      if ( !v6 && MEMORY[0x10102464C458F] == 30 )
        v6 = sub_F3F310();
      a3 = *(_QWORD *)(v6 + 24);
    }
    if ( v7 != 8 )
      break;
    v8 = sub_F468B0();
    v9 = *(_QWORD *)(v8 + 32);
    v10 = v8;
    if ( v9 && *(_WORD *)(v9 + 36) == 2 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v22 = nullptr;
      v23 = 0;
      v12 = sub_6B44D0(&v22, v9, v11);
      v13 = v22;
      v14 = _mm_loadu_si128(&v23);
      if ( v12 )
      {
        v15 = a2[1];
        v16 = *a2;
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          v21 = v14;
          v20 = qvector_reserve(a2, v16, v15 + 1, 24);
          v15 = a2[1];
          v14 = _mm_load_si128(&v21);
          *a2 = v20;
          v16 = v20;
        }
        v17 = v16 + 24 * v15;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        ++a2[1];
        v18 = *(char **)v17;
        *(_QWORD *)v17 = v13;
        *(__m128i *)(v17 + 8) = v14;
      }
      else
      {
        v18 = v22;
      }
      a3 = *(_QWORD *)(v10 + 48);
      if ( v18 )
        qfree(v18);
    }
    else
    {
      a3 = *(_QWORD *)(v8 + 48);
    }
  }
  return a2[1] != 0;
}

