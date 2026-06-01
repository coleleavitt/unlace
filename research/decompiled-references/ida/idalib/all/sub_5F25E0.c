__int64 __fastcall sub_5F25E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  const char *v11; // r13
  size_t v12; // rax
  __int64 v13; // r13
  __int16 v14; // bp
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // rbx
  int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = sub_5EBE00(a1, **(const char ***)(a1 + 128), nullptr);
  v4 = *(_QWORD **)(a1 + 128);
  if ( v3 )
  {
    set_error_string(0, *v4);
    return set_qerrno(52);
  }
  else
  {
    v6 = (__int64 *)v4[6];
    v7 = v6[1];
    v8 = *v6;
    if ( v6[2] < (unsigned __int64)(v7 + 1) )
    {
      v24 = qvector_reserve(v6, v8, v7 + 1, 56);
      v7 = v6[1];
      *v6 = v24;
      v8 = v24;
    }
    v9 = v8 + 56 * v7;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    ++v6[1];
    *(_QWORD *)(v9 + 48) = *a2;
    v10 = *(_QWORD *)(a1 + 128);
    v11 = *(const char **)v10;
    if ( *(_QWORD *)v10 )
    {
      v12 = strlen(*(const char **)v10);
      *(_QWORD *)v9 = v11;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)(v12 + 1), (__m128i)(v12 + 1));
      v10 = *(_QWORD *)(a1 + 128);
    }
    sub_5F24C0(a1, v9 + 24, *(_DWORD *)(v10 + 188));
    **(_QWORD **)(a1 + 128) = 0;
    v13 = *a2;
    v14 = *((_WORD *)a2 + 4);
    v15 = *(__int64 **)(*(_QWORD *)(a1 + 128) + 56LL);
    v16 = v15[1];
    v17 = *v15;
    if ( v15[2] < (unsigned __int64)(v16 + 1) )
    {
      v26 = qvector_reserve(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 56LL), v17, v16 + 1, 16);
      *v15 = v26;
      v17 = v26;
      v16 = v15[1];
    }
    v18 = 16 * v16 + v17;
    *(_QWORD *)v18 = v13;
    *(_WORD *)(v18 + 8) = v14;
    ++v15[1];
    v19 = *(_QWORD *)(a1 + 128);
    v20 = *(__int64 **)(v19 + 64);
    v21 = *(_DWORD *)(v19 + 188);
    v22 = v20[1];
    v23 = *v20;
    if ( v20[2] < (unsigned __int64)(v22 + 1) )
    {
      v25 = qvector_reserve(v20, v23, v22 + 1, 4);
      *v20 = v25;
      v23 = v25;
      v22 = v20[1];
    }
    *(_DWORD *)(v23 + 4 * v22) = v21;
    ++v20[1];
    return 0;
  }
}
