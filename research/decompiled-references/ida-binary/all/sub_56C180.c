void __fastcall sub_56C180(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  int v5; // r8d
  _DWORD *v9; // r14
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // r9
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 *v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r14
  int v32; // [rsp+4h] [rbp-44h]
  int v33; // [rsp+8h] [rbp-40h]
  unsigned int v34; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_DWORD *)(a4 + 8);
  v5 = *(unsigned __int16 *)(a1 + 40);
  if ( a2 )
  {
    v9 = (_DWORD *)a1;
    v10 = *(_DWORD *)(a4 + 8);
    v11 = 0;
    while ( *v9 <= 1u )
    {
      v17 = (unsigned int)v9[9];
      if ( (unsigned int)v17 <= 1 )
        break;
      if ( ((unsigned __int8)v9 & 1) != 0 )
        BUG();
      v18 = (__int64 *)&v9[-2 * v17];
      v19 = *v18;
      if ( (*v18 & 1) != 0 )
        break;
      v20 = *(unsigned int *)(v19 + 36);
      if ( (unsigned int)v20 <= 1 )
        break;
      if ( *(_DWORD *)v19 > 1u )
        break;
      if ( *(_WORD *)(v19 + 40) != (_WORD)v5 )
        break;
      v21 = (__int64 *)(v19 - 8 * v20);
      v22 = *v21;
      if ( (*v21 & 1) != 0 )
        break;
      v23 = *(unsigned int *)(v22 + 36);
      if ( (unsigned int)v23 <= 1 || *(_DWORD *)v22 > 1u || *(_WORD *)(v22 + 40) != (_WORD)v5 )
        break;
      *v18 = v22;
      v24 = (__int64 *)(v22 + 8 * ((unsigned int)(v23 - 1) - v23));
      *v21 = *v24;
      v25 = *(_DWORD *)(a4 + 12);
      *v24 = v19;
      v15 = *(_QWORD **)a4;
      if ( v25 >= v10 + 1 )
        goto LABEL_25;
      v12 = 2 * v25;
      if ( 2 * v25 < 8 )
        v12 = 8;
      if ( v12 < v10 + 1 )
        v12 = v10 + 1;
      if ( v25 >= v12 )
      {
LABEL_25:
        v16 = v10++;
      }
      else
      {
        v34 = v12;
        v33 = v11;
        v32 = v5;
        if ( v15 )
        {
          v13 = off_8C52A8(v15, 8LL * v12);
          v5 = v32;
          v11 = v33;
          v14 = v34;
        }
        else
        {
          v13 = off_8C52B8(8LL * v12);
          v14 = v34;
          v11 = v33;
          v5 = v32;
        }
        v15 = v13;
        *(_DWORD *)(a4 + 12) = v14;
        v16 = *(unsigned int *)(a4 + 8);
        *(_QWORD *)a4 = v13;
        v10 = v16 + 1;
      }
      ++v11;
      *(_DWORD *)(a4 + 8) = v10;
      v15[v16] = v9;
      if ( a2 == v11 )
        break;
      v9 = (_DWORD *)v22;
    }
    for ( ; v4 < v10; v10 = *(_DWORD *)(a4 + 8) )
    {
      v28 = *(_QWORD **)a4;
      v29 = v10 - 1;
      *(_DWORD *)(a4 + 8) = v29;
      v30 = v28[v29];
      if ( (v30 & 1) != 0 )
        BUG();
      v31 = *(_QWORD *)(v30 - 8LL * *(unsigned int *)(v30 + 36));
      if ( (v31 & 1) != 0 )
      {
        LODWORD(v26) = *(_DWORD *)(v31 + 36);
        v27 = 0;
      }
      else
      {
        v26 = *(unsigned int *)(v31 + 36);
        v27 = v31 - 8 * v26;
      }
      sub_56BAE0(*(_QWORD *)(v27 + 8LL * (unsigned int)(v26 - 1)), a3);
      sub_56BAE0(v31, a3);
      sub_56BAE0(v30, a3);
    }
  }
}
