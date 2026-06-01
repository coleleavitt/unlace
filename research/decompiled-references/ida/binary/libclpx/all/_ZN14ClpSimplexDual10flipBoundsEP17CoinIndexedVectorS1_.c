CoinIndexedVector *__fastcall ClpSimplexDual::flipBounds(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  ClpSimplexDual *v3; // r15
  __int64 v4; // r14
  _DWORD *v5; // r8
  int v6; // r13d
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rbp
  ClpSimplexDual *v10; // rax
  _DWORD *v11; // r15
  ClpSimplexDual *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 v16; // rdi
  char *v17; // rax
  char v18; // dl
  char v19; // cl
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+10h] [rbp-68h]
  int v23; // [rsp+1Ch] [rbp-5Ch]
  _DWORD v25[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v3 = this;
  v4 = *((_QWORD *)this + 124);
  v23 = 0;
  v5 = *(_DWORD **)a2;
  v21 = *((_QWORD *)this + 151);
  v6 = *((_DWORD *)this + 27);
  v22 = *((_QWORD *)this + 127);
  v7 = *((_DWORD *)a2 + 4);
  if ( v7 <= 0 )
    goto LABEL_9;
LABEL_2:
  v8 = v6;
  v9 = (__int64)&v5[v7 - 1 + 1];
  v10 = v3;
  v11 = v5;
  v12 = v10;
  do
  {
    v25[0] = *v11;
    v17 = (char *)(*((_QWORD *)v12 + 33) + v8 + v25[0]);
    v18 = *v17;
    v19 = *v17 & 7;
    if ( v19 == 2 )
    {
      *v17 = v18 & 0xF8 | 3;
      v13 = v25[0];
      v15 = v25[0];
      v14 = *(_QWORD *)(v4 + 8LL * v25[0]);
    }
    else
    {
      if ( v19 != 3 )
        goto LABEL_6;
      *v17 = v18 & 0xF8 | 2;
      v13 = v25[0];
      v14 = *(_QWORD *)(v22 + 8LL * v25[0]);
      v15 = v25[0];
    }
    *(_QWORD *)(v21 + 8 * v13) = v14;
    v16 = *((_QWORD *)v12 + 24);
    v25[0] = v8 + v15;
    (*(void (__fastcall **)(__int64, ClpSimplexDual *, _DWORD *, _DWORD *))(*(_QWORD *)v16 + 352LL))(v16, v12, v25, v25);
LABEL_6:
    ++v11;
  }
  while ( (_DWORD *)v9 != v11 );
  v3 = v12;
  while ( v23 != 1 )
  {
LABEL_9:
    v23 = 1;
    v4 = *((_QWORD *)v3 + 125);
    v21 = *((_QWORD *)v3 + 152);
    v5 = *(_DWORD **)a3;
    v22 = *((_QWORD *)v3 + 128);
    v7 = *((_DWORD *)a3 + 4);
    if ( v7 > 0 )
    {
      v6 = 0;
      goto LABEL_2;
    }
  }
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)a3 + 4) = 0;
  *((_BYTE *)a3 + 28) = 0;
  return a3;
}

