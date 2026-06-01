__int64 __fastcall sub_B8CE60(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r14d
  __int64 v11; // r8
  int *v12; // r9
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ebp
  int v22; // r14d
  void *v23; // r13
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  unsigned int *v26; // rdx
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *v30; // rbx
  int v33; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 1408);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = (unsigned int *)(v3 + 12LL * v5);
  sub_B8CC20(a1, *v6);
  v7 = *(_QWORD *)(a1 + 1368);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = v6[1];
  *(_DWORD *)(a1 + 1376) = v6[2];
  v8 = *(_QWORD *)(a1 + 1408);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v5;
  v9 = *(_QWORD *)(a1 + 1032);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = *(_QWORD *)(a1 + 1104);
  v33 = v10 - a2;
  v12 = (int *)(v9 + 12LL * (unsigned int)(v10 - a2));
  v13 = *(_QWORD *)(a1 + 1008);
  if ( v11 )
  {
    v14 = *(_DWORD *)(v11 - 4);
    v15 = v12[1];
    if ( v15 < v14 )
    {
      v16 = v14 - 1 - v15;
      v17 = (unsigned int *)(v11 + 4LL * (v14 - 1));
      v18 = (__int64)&v17[-v16 - 1];
      do
      {
        v19 = *v17--;
        *(_BYTE *)(v13 + (v19 << 6) + 60) = 0;
      }
      while ( v17 != (unsigned int *)v18 );
    }
    *(_DWORD *)(v11 - 4) = v15;
  }
  v20 = *v12;
  *(_DWORD *)(a1 + 1096) = v12[2];
  if ( v13 )
  {
    v21 = *(_DWORD *)(v13 - 4) - v20;
    if ( v21 )
    {
      v22 = 0;
      do
      {
        while ( 1 )
        {
          v25 = (unsigned __int64)(unsigned int)(*(_DWORD *)(v13 - 4) - 1) << 6;
LABEL_19:
          v26 = (unsigned int *)(v13 + v25);
          v27 = v26[1];
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 8LL * *v26);
          --*(_DWORD *)(v28 - 4);
          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v27);
          --*(_DWORD *)(v29 - 4);
          if ( !v13 )
            break;
          v23 = qword_1C7F2C0;
          ++v22;
          v24 = v13 + ((unsigned __int64)(unsigned int)(*(_DWORD *)(v13 - 4) - 1) << 6);
          sub_182CBA0(qword_1C7F2C0, v24 + 8);
          sub_182CBA0(v23, v24 + 24);
          v13 = *(_QWORD *)(a1 + 1008);
          --*(_DWORD *)(v13 - 4);
          if ( v21 == v22 )
            goto LABEL_21;
        }
        v30 = qword_1C7F2C0;
        ++v22;
        sub_182CBA0(qword_1C7F2C0, 0x3FFFFFFFC8LL);
        sub_182CBA0(v30, 0x3FFFFFFFD8LL);
        v13 = *(_QWORD *)(a1 + 1008);
        --*(_DWORD *)(v13 - 4);
      }
      while ( v22 != v21 );
LABEL_21:
      v9 = *(_QWORD *)(a1 + 1032);
    }
  }
  else
  {
    v21 = -v20;
    if ( v20 )
    {
      v22 = 0;
      v25 = 0x3FFFFFFFC0LL;
      goto LABEL_19;
    }
  }
  if ( v9 )
    *(_DWORD *)(v9 - 4) = v33;
  return sub_965AE0(a1, a2);
}

