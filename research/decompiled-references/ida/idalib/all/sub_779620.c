signed __int64 __fastcall sub_779620(_QWORD *a1, int a2, __int64 a3, signed __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  signed __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  void (*v17)(); // rax
  signed __int64 v19; // [rsp+8h] [rbp-40h]
  signed __int64 v20; // [rsp+8h] [rbp-40h]
  signed __int64 v21; // [rsp+8h] [rbp-40h]

  v8 = a1[6] + 176LL * a2;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_QWORD *)(v8 + 24);
  v11 = v10 + 9 * v9;
  if ( v10 == v11 )
    goto LABEL_29;
  v12 = *(_QWORD *)(v8 + 24);
  while ( *(_QWORD *)a3 != *(_QWORD *)v12 || *(_BYTE *)(a3 + 8) != *(_BYTE *)(v12 + 8) )
  {
    v12 += 9;
    if ( v11 == v12 )
      goto LABEL_29;
  }
  v13 = v12 - v10;
  v14 = 0x8E38E38E38E38E39LL * v13;
  if ( v13 == -9 )
  {
LABEL_29:
    if ( !under_debugger )
      interr(1789);
LABEL_31:
    BUG();
  }
  if ( a5 )
  {
    v15 = v14 + a4;
    goto LABEL_9;
  }
  if ( a4 == -1 )
    v15 = v9 - 1;
  else
    v15 = a4 - (a4 > v14);
  if ( v15 < 0 || v15 >= v9 )
  {
    if ( !under_debugger )
      interr(3432);
    goto LABEL_31;
  }
LABEL_9:
  v16 = 0;
  if ( v15 >= 0 )
    v16 = v15;
  if ( v16 >= v9 )
    v16 = v9 - 1;
  if ( v16 != v14 )
  {
    v17 = *(void (**)())(*a1 + 128LL);
    if ( v17 != nullsub_237 )
    {
      v21 = v14;
      ((void (__fastcall *)(_QWORD *, _QWORD, signed __int64, unsigned __int64))v17)(a1, a2, v14, v16);
      v14 = v21;
    }
    v19 = v14;
    sub_7795B0((__int64)a1, (_QWORD *)(v8 + 24), v14, v16);
    v14 = v19;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      sub_777F00(a1, a2, 4, 0, 0);
      *(_DWORD *)(v8 + 168) |= 1u;
      v14 = v19;
      if ( !a5 )
        return v14;
      goto LABEL_18;
    }
    *(_DWORD *)(v8 + 168) |= 1u;
    if ( a5 )
    {
LABEL_18:
      v20 = v14;
      sub_39ADA0(0x45u, a1[4], a5, v16);
      sub_774BB0((__int64)a1, 69, a5, v16);
      return v20;
    }
  }
  return v14;
}
