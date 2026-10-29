unsigned __int64 __fastcall sub_467720(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 48) == -1 )
    return v16 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * *(int *)(a1 + 44) + 16));
  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v2 + 1) )
  {
    v8 = qvector_reserve(a1 + 56, v3, v2 + 1, 1);
    *(_QWORD *)(a1 + 56) = v8;
    v3 = v8;
    v2 = *(_QWORD *)(a1 + 64);
  }
  *(_BYTE *)(v3 + v2) = 0;
  v4 = *(_QWORD *)(a1 + 88);
  ++*(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v4 + 1) )
    {
      v12 = qvector_reserve(a1 + 80, v9, v4 + 1, 1);
      v4 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = v12;
      v9 = v12;
    }
    *(_BYTE *)(v9 + v4) = 0;
    v10 = *(_QWORD *)(a1 + 56);
    v11 = (*(_QWORD *)(a1 + 88))++ == -1;
    v13 = v10;
    if ( !v11 )
    {
      v5 = *(_QWORD *)(a1 + 80);
      goto LABEL_8;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 56);
  }
  v5 = 0;
LABEL_8:
  v14 = v5;
  v15 = 0;
  if ( !(unsigned __int8)deserialize_tinfo(&v15, 0, &v13, &v14, 0, 0) )
  {
    if ( !under_debugger )
      interr(2074);
    BUG();
  }
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
    *(_QWORD *)(a1 + 32),
    &v15,
    *(unsigned int *)(a1 + 44),
    *(unsigned int *)(a1 + 40),
    1);
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1480LL);
  v7 = sub_3B9110(v6, *(_DWORD *)(a1 + 48));
  sub_675160(v6, v7, &v15, 0, 0);
  *(_DWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  clear_tinfo_t(&v15);
  return v16 - __readfsqword(0x28u);
}

