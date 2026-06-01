__int64 __fastcall sub_5D6770(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  const char *v12; // r13
  size_t v13; // rax
  __int64 v14; // r13
  __int16 v15; // bp
  __int64 *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rbx
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v3 = sub_5D0010(a1, **(const char ***)(a1 + 120), nullptr);
  v4 = *(__int64 **)(a1 + 120);
  if ( v3 )
  {
    v5 = *v4;
    set_error_string();
    return set_qerrno(52, v5);
  }
  else
  {
    v7 = (__int64 *)v4[6];
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v25 = qvector_reserve(v7, v9, v8 + 1, 56);
      v8 = v7[1];
      *v7 = v25;
      v9 = v25;
    }
    v10 = v9 + 56 * v8;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_OWORD *)(v10 + 8) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    ++v7[1];
    *(_QWORD *)(v10 + 48) = *a2;
    v11 = *(_QWORD *)(a1 + 120);
    v12 = *(const char **)v11;
    if ( *(_QWORD *)v11 )
    {
      v13 = strlen(*(const char **)v11);
      *(_QWORD *)v10 = v12;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)(v13 + 1), (__m128i)(v13 + 1));
      v11 = *(_QWORD *)(a1 + 120);
    }
    sub_5D6650(a1, v10 + 24, *(_DWORD *)(v11 + 188));
    **(_QWORD **)(a1 + 120) = 0;
    v14 = *a2;
    v15 = *((_WORD *)a2 + 4);
    v16 = *(__int64 **)(*(_QWORD *)(a1 + 120) + 56LL);
    v17 = v16[1];
    v18 = *v16;
    if ( v16[2] < (unsigned __int64)(v17 + 1) )
    {
      v27 = qvector_reserve(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 56LL), v18, v17 + 1, 16);
      *v16 = v27;
      v18 = v27;
      v17 = v16[1];
    }
    v19 = 16 * v17 + v18;
    *(_QWORD *)v19 = v14;
    *(_WORD *)(v19 + 8) = v15;
    ++v16[1];
    v20 = *(_QWORD *)(a1 + 120);
    v21 = *(__int64 **)(v20 + 64);
    v22 = *(_DWORD *)(v20 + 188);
    v23 = v21[1];
    v24 = *v21;
    if ( v21[2] < (unsigned __int64)(v23 + 1) )
    {
      v26 = qvector_reserve(v21, v24, v23 + 1, 4);
      *v21 = v26;
      v24 = v26;
      v23 = v21[1];
    }
    *(_DWORD *)(v24 + 4 * v23) = v22;
    ++v21[1];
    return 0;
  }
}

