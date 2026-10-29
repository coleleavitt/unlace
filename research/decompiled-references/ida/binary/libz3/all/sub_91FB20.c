__int64 __fastcall sub_91FB20(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned int *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  void *v10; // r14
  void *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v21; // [rsp+8h] [rbp-40h]
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]

  v2 = a1[42];
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  v21 = v3 - a2;
  v4 = (unsigned int *)(v2 + 12LL * (v3 - a2));
  sub_91F7F0((__int64)a1, v4[2]);
  v5 = a1[38];
  if ( v5 )
  {
    v22 = v4[1];
    v6 = 80LL * v22;
    v7 = v5 + v6;
    v8 = 80LL * *(unsigned int *)(v5 - 4);
    v9 = v5 + v8;
    if ( v6 != v8 )
    {
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 40);
        sub_182CBA0(v10, v7 + 56);
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 8);
        v12 = v7 + 24;
        v7 += 80;
        sub_182CBA0(v11, v12);
      }
      while ( v9 != v7 );
      v5 = a1[38];
    }
    *(_DWORD *)(v5 - 4) = v22;
  }
  sub_91FA00(a1, *v4);
  v13 = a1[5];
  if ( v13 )
    v14 = *(_DWORD *)(v13 - 4);
  else
    v14 = 0;
  v15 = *(_DWORD *)(v13 + 4LL * (v14 - a2));
  v16 = a1[4];
  if ( v16 )
    v17 = *(_DWORD *)(v16 - 4);
  else
    v17 = 0;
  if ( v17 != v15 )
    sub_91D440(a1, v15);
  v18 = a1[42];
  if ( v18 )
    *(_DWORD *)(v18 - 4) = v21;
  return sub_965AE0(a1, a2);
}

