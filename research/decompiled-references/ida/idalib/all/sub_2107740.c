__int64 __fastcall sub_2107740(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r13
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r15
  __int64 *v10; // rax
  size_t *v11; // rdi
  size_t v12; // rax
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  _BYTE *v15; // rcx
  unsigned int v16; // eax
  _BYTE *v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+Ch] [rbp-4Ch]
  int v21; // [rsp+Ch] [rbp-4Ch]
  __int64 *v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a1 + 1344;
  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(a1 + 1344, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 1344) + 8 * v7);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_2107700(v22, v9, 0);
      v10 = v22[0];
      return *v10;
    }
    --*(_DWORD *)(a1 + 1360);
  }
  v11 = *(size_t **)(a1 + 1368);
  v12 = *v11;
  v11[10] += a3 + 25;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = a3 + 25 + v13;
  if ( v11[1] >= v14 && v12 )
  {
    *v11 = v14;
  }
  else
  {
    v21 = v7;
    v19 = sub_986170((__int64)v11, a3 + 25, a3 + 25, 3, v7, v8);
    LODWORD(v7) = v21;
    v13 = v19;
  }
  v15 = (_BYTE *)(v13 + 24);
  if ( a3 )
  {
    v20 = v7;
    v18 = memcpy((void *)(v13 + 24), a2, a3);
    LODWORD(v7) = v20;
    v15 = v18;
  }
  v15[a3] = 0;
  *(_QWORD *)v13 = a3;
  *(_QWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_BYTE *)(v13 + 20) = 0;
  *v9 = v13;
  ++*(_DWORD *)(a1 + 1356);
  v16 = sub_22450D0(v4, (unsigned int)v7);
  sub_2107700(v22, (__int64 *)(*(_QWORD *)(a1 + 1344) + 8LL * v16), 0);
  v10 = v22[0];
  return *v10;
}
