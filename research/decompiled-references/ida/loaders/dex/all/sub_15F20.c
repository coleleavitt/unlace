__int64 __fastcall sub_15F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi

  if ( !*(_BYTE *)(a1 + 72) )
    goto LABEL_16;
  v2 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v2 + 1) )
  {
    v13 = qvector_reserve(a1 + 16, v5, v2 + 1, 8);
    *(_QWORD *)(a1 + 16) = v13;
    v5 = v13;
    v2 = *(_QWORD *)(a1 + 24);
  }
  *(_QWORD *)(v5 + 8 * v2) = a2;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 64);
  ++*(_QWORD *)(a1 + 24);
  if ( v7 < v6 + 1 )
  {
    v14 = qvector_reserve(a1 + 48, 0, v6 + 1, 8);
    v15 = *(_QWORD *)(a1 + 56);
    v16 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v7;
    v17 = *(__int64 **)(a1 + 48);
    v8 = v14;
    v18 = v15 - 1;
    if ( v18 >= 0 )
    {
      v19 = v14;
      do
      {
        v20 = *v17;
        v19 += 8;
        ++v17;
        *(_QWORD *)(v19 - 8) = v20;
      }
      while ( v18-- != 0 );
      v17 = *(__int64 **)(a1 + 48);
    }
    qfree(v17);
    *(_QWORD *)(a1 + 48) = v8;
    v6 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 64) = v16;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 48);
  }
  v9 = (_QWORD *)(v8 + 8 * v6);
  *v9 = -1;
  v10 = *(_QWORD *)(a1 + 56) + 1LL;
  *(_QWORD *)(a1 + 56) = v10;
  v11 = v10;
  if ( *(_QWORD *)(a1 + 24) != (unsigned int)v10 )
  {
    if ( under_debugger )
      goto LABEL_19;
    interr(20108);
LABEL_16:
    if ( !under_debugger )
    {
      interr(20107);
LABEL_18:
      sub_7550((__int64)"Wrong processor, should be Dalvik");
    }
LABEL_19:
    BUG();
  }
  sub_15DD0(a1, v9, "$ dex_var", v10, 1u);
  if ( *(_DWORD *)(get_ph() + 4) != 60 )
    goto LABEL_18;
  sub_7490(0xBB9u);
  return v11;
}

