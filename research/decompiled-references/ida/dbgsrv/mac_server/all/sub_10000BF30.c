/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BF30
// Address: 0x000000010000BF30

//----- (000000010000BF30) ----------------------------------------------------
void __fastcall sub_10000BF30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rcx
  char **v8; // rbx
  char *v9; // r13
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // r15
  const char *v13; // rdx
  const char *v14; // rcx
  char *v15; // r14
  _DWORD *v16; // rax
  int v17; // edx
  __int64 v18; // [rsp-48h] [rbp-48h]

  if ( a2 != a3 )
  {
    v7 = a1;
    v8 = *(char ***)(a1 + 96);
    v9 = *v8;
    v10 = v8[1];
    if ( v8[2] < v10 + 1 )
    {
      v11 = (char *)qvector_reserve((__int64)v8, v9, (unsigned __int64)(v10 + 1), 0x50u);
      v7 = a1;
      v9 = v11;
      *v8 = v11;
      v10 = v8[1];
    }
    v12 = 80LL * (_QWORD)v10;
    *(_OWORD *)&v9[v12 + 58] = 0;
    *(_OWORD *)&v9[v12 + 48] = 0;
    *(_OWORD *)&v9[v12 + 32] = 0;
    *(_OWORD *)&v9[v12 + 16] = 0;
    *(_OWORD *)&v9[v12] = 0;
    ++v8[1];
    v18 = v7;
    v13 = *(const char **)(v7 + 104);
    if ( *(_QWORD *)(a4 + 8) )
      v14 = *(const char **)a4;
    else
      v14 = _s1;
    v15 = &v9[v12];
    sub_100002D00((__int64)&v9[80 * (_QWORD)v10 + 16], "%s:%s", v13, v14);
    *(_QWORD *)&v9[v12] = a2;
    *(_QWORD *)&v9[v12 + 8] = a3;
    v16 = *(_DWORD **)&v9[v12 + 40];
    if ( *(_QWORD *)&v9[v12 + 56] <= 4u )
    {
      v16 = qvector_reserve((__int64)&v9[v12 + 40], *(void **)&v9[v12 + 40], 5u, 1u);
      *(_QWORD *)&v9[v12 + 40] = v16;
    }
    *((_QWORD *)v15 + 6) = 5;
    v17 = 1096040772;
    if ( a6 )
      v17 = 1162104643;
    *v16 = v17;
    *(_BYTE *)(*((_QWORD *)v15 + 5) + 4LL) = 0;
    v15[73] = a6 | 4;
    v15[72] = *(_BYTE *)(*(_QWORD *)(v18 + 88) + 1233LL) + 1;
  }
}
