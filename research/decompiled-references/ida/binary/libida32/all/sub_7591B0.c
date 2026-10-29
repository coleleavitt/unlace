unsigned __int64 __fastcall sub_7591B0(_QWORD *a1, unsigned int a2, __int64 a3, signed __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rax
  signed __int64 v15; // r9
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  void (*v19)(); // rax
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v8 = a1[6] + 176LL * (int)a2;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_QWORD *)(v8 + 24);
  v11 = v10 + 5 * v9;
  if ( v10 == v11 )
    goto LABEL_29;
  v12 = a2;
  v13 = *(_QWORD *)(v8 + 24);
  while ( *(_DWORD *)a3 != *(_DWORD *)v13 || *(_BYTE *)(a3 + 4) != *(_BYTE *)(v13 + 4) )
  {
    v13 += 5;
    if ( v11 == v13 )
      goto LABEL_29;
  }
  v14 = v13 - v10;
  v15 = 0xCCCCCCCCCCCCCCCDLL * v14;
  v16 = 0xCCCCCCCCCCCCCCCDLL * v14;
  if ( v14 == -5 )
  {
LABEL_29:
    if ( !under_debugger )
      interr(1789);
LABEL_31:
    BUG();
  }
  if ( a5 )
  {
    v17 = v15 + a4;
    goto LABEL_9;
  }
  if ( a4 == -1 )
    v17 = v9 - 1;
  else
    v17 = a4 - (a4 > v15);
  if ( v17 < 0 || v17 >= v9 )
  {
    if ( !under_debugger )
      interr(3432);
    goto LABEL_31;
  }
LABEL_9:
  v18 = 0;
  if ( v17 >= 0 )
    v18 = v17;
  if ( v18 >= v9 )
    v18 = v9 - 1;
  if ( v18 != v16 )
  {
    v19 = *(void (**)())(*a1 + 128LL);
    if ( v19 != nullsub_216 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64))v19)(a1, a2, v16, v18);
      v12 = a2;
    }
    v21 = v12;
    sub_759140((__int64)a1, (_QWORD *)(v8 + 24), v16, v18);
    if ( !*(_BYTE *)(a3 + 4) )
    {
      sub_7579F0(a1, v21, 4, 0, 0);
      *(_DWORD *)(v8 + 164) |= 1u;
      if ( !a5 )
        return v16;
      goto LABEL_18;
    }
    *(_DWORD *)(v8 + 164) |= 1u;
    if ( a5 )
    {
LABEL_18:
      sub_396090(0x45u, a1[4], a5, v18);
      sub_754740((__int64)a1, 69, a5, v18);
    }
  }
  return v16;
}

