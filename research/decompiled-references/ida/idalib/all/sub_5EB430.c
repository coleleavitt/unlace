__int64 __fastcall sub_5EB430(__int64 a1, const void *a2)
{
  __int64 **v2; // rax
  __int64 *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  size_t v8; // rax
  size_t v9; // r14
  __int64 result; // rax
  void *v11; // rdi
  size_t v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *(__int64 ***)(a1 + 8);
  if ( !v2 || !v2[1] )
  {
    if ( !under_debugger )
      interr(1555);
    BUG();
  }
  v3 = *v2;
  v5 = (*v2)[1];
  v6 = **v2;
  if ( (*v2)[2] < (unsigned __int64)(v5 + 1) )
  {
    v13 = qvector_reserve(v3, v6, v5 + 1, 144);
    v5 = v3[1];
    *v3 = v13;
    v6 = v13;
  }
  v7 = v6 + 144 * v5;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 112) = 1;
  *(_DWORD *)(v7 + 120) = -1;
  *(_QWORD *)(v7 + 128) = 0;
  *(_BYTE *)(v7 + 136) = 0;
  *(_OWORD *)v7 = 0;
  *(_OWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  *(_OWORD *)(v7 + 64) = 0;
  ++v3[1];
  if ( a2 && (v8 = strlen((const char *)a2), (v9 = v8) != 0) )
  {
    v11 = *(void **)(v7 + 16);
    v12 = v8 + 1;
    if ( *(_QWORD *)(v7 + 32) < v8 + 1 )
    {
      v14 = qvector_reserve(v7 + 16, *(_QWORD *)(v7 + 16), v12, 1);
      *(_QWORD *)(v7 + 16) = v14;
      v11 = (void *)v14;
    }
    *(_QWORD *)(v7 + 24) = v12;
    memmove(v11, a2, v9);
    *(_BYTE *)(*(_QWORD *)(v7 + 16) + v9) = 0;
  }
  else
  {
    *(_QWORD *)(v7 + 24) = 0;
  }
  result = copy_tinfo_t(v7 + 64);
  *((_BYTE *)v3 + 80) = 1;
  return result;
}
