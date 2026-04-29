__int64 __fastcall sub_2AAD60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  unsigned __int8 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
LABEL_9:
    sub_2A6AC0();
  v5 = 264 * a3;
  v6 = 264 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A7CC0 )
  {
    if ( *(_DWORD *)(v6 + 120) == *(_DWORD *)(v6 + 248) && !(unsigned int)sub_1310E0(v6 + 8, v6 + 136) )
      goto LABEL_9;
  }
  else if ( !v7() )
  {
    goto LABEL_9;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(unsigned __int8 (***)(void))v8;
  if ( (char *)v9 == (char *)sub_2A7CC0 )
  {
    if ( *(_DWORD *)(v8 + 120) == *(_DWORD *)(v8 + 248) && !(unsigned int)sub_1310E0(v8 + 8, v8 + 136) )
      goto LABEL_9;
  }
  else if ( !v9() )
  {
    goto LABEL_9;
  }
  switch_dbctx(*(int *)(a1 + 8));
  v10 = v5 + *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a2 + 40) + v5;
  v12 = v10;
  *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v11 + 8));
  *(_DWORD *)(v10 + 24) = *(_DWORD *)(v11 + 24);
  sub_11ECE0(v10 + 32, v11 + 32);
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(v11 + 112);
  *(_DWORD *)(v12 + 120) = *(_DWORD *)(v11 + 120);
  result = *(unsigned __int8 *)(v11 + 128);
  *(_BYTE *)(v12 + 128) = result;
  return result;
}
