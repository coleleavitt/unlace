__int64 __fastcall sub_56F240(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ecx
  void *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r14
  char v17; // cl
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // r13
  __int64 result; // rax
  unsigned __int16 v21; // si
  unsigned int v22; // esi
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned int v29; // ebp
  __int64 v30; // r15
  unsigned int v31; // ebp
  __int64 v32; // r8
  __int64 v33; // [rsp+8h] [rbp-40h]

  v6 = *(_DWORD *)(a3 + 24);
  v7 = *(_DWORD *)(a3 + 28);
  v8 = *(void **)(a3 + 16);
  v9 = v6 + 1;
  if ( v7 < (unsigned int)v9 )
  {
    v10 = 2 * v7;
    if ( 2 * v7 < (unsigned int)v9 )
      v10 = v6 + 1;
    if ( v10 < 8 )
      v10 = 8;
    if ( v7 < v10 )
    {
      if ( v8 )
        v8 = off_8C52A8(v8, 8LL * v10);
      else
        v8 = off_8C52B8(8LL * v10);
      v6 = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 16) = v8;
      v7 = v10;
      *(_DWORD *)(a3 + 28) = v10;
      v9 = v6 + 1;
    }
  }
  v11 = v6;
  v12 = v6 + 2;
  *(_DWORD *)(a3 + 24) = v9;
  *((_QWORD *)v8 + v11) = a1;
  if ( v7 < v12 )
  {
    v13 = 2 * v7;
    if ( 2 * v7 < v12 )
      v13 = v12;
    if ( v13 < 8 )
      v13 = 8;
    if ( v7 >= v13 )
    {
      *((_QWORD *)v8 + v9) = a2;
      goto LABEL_18;
    }
    if ( v8 )
      v8 = off_8C52A8(v8, 8LL * v13);
    else
      v8 = off_8C52B8(8LL * v13);
    v9 = *(unsigned int *)(a3 + 24);
    *(_QWORD *)(a3 + 16) = v8;
    *(_DWORD *)(a3 + 28) = v13;
    v12 = v9 + 1;
  }
  *(_DWORD *)(a3 + 24) = v12;
  *((_QWORD *)v8 + v9) = a2;
  while ( v12 )
  {
LABEL_18:
    v14 = *((_QWORD *)v8 + v12 - 1);
    v15 = v12 - 2;
    v16 = *((_QWORD *)v8 + v15);
    *(_DWORD *)(a3 + 24) = v15;
    v12 -= 2;
    v17 = v16 & 1;
    if ( (v16 & 1) != 0 )
    {
      v18 = BYTE1(v16);
      if ( (v14 & 1) == 0 )
        goto LABEL_27;
LABEL_20:
      v19 = BYTE1(v14);
      if ( v18 < v19 )
        goto LABEL_31;
      if ( v19 < v18 || !v17 && *(_DWORD *)(v16 + 36) )
        goto LABEL_24;
    }
    else
    {
      v18 = *(_WORD *)(v16 + 40);
      if ( (v14 & 1) != 0 )
        goto LABEL_20;
LABEL_27:
      v21 = *(_WORD *)(v14 + 40);
      if ( v18 < v21 )
        goto LABEL_31;
      if ( v21 < v18 )
      {
LABEL_24:
        result = 1;
LABEL_25:
        *(_DWORD *)(a3 + 24) = 0;
        return result;
      }
      v22 = *(_DWORD *)(v14 + 36);
      if ( v17 )
      {
        if ( v22 )
          goto LABEL_31;
      }
      else
      {
        v23 = *(_DWORD *)(v16 + 36);
        if ( v23 < v22 )
        {
LABEL_31:
          result = 0xFFFFFFFFLL;
          goto LABEL_25;
        }
        if ( v22 < v23 )
          goto LABEL_24;
        if ( v23 )
        {
          v24 = *(_DWORD *)(a3 + 28);
          v25 = 8LL * (v23 - 1);
          do
          {
            v32 = *(_QWORD *)(v16 + v25 - 8LL * *(unsigned int *)(v16 + 36));
            v27 = v12 + 1;
            v30 = *(_QWORD *)(v14 + v25 - 8LL * *(unsigned int *)(v14 + 36));
            if ( v24 < (unsigned int)v27 )
            {
              v31 = 2 * v24;
              if ( 2 * v24 < (unsigned int)v27 )
                v31 = v12 + 1;
              if ( v31 < 8 )
                v31 = 8;
              if ( v24 < v31 )
              {
                v33 = *(_QWORD *)(v16 + v25 - 8LL * *(unsigned int *)(v16 + 36));
                if ( v8 )
                  v26 = off_8C52A8(v8, 8LL * v31);
                else
                  v26 = off_8C52B8(8LL * v31);
                v32 = v33;
                v8 = v26;
                v12 = *(_DWORD *)(a3 + 24);
                *(_QWORD *)(a3 + 16) = v8;
                v24 = v31;
                *(_DWORD *)(a3 + 28) = v31;
                v27 = v12 + 1;
              }
            }
            v28 = v12;
            v12 += 2;
            *(_DWORD *)(a3 + 24) = v27;
            *((_QWORD *)v8 + v28) = v32;
            if ( v24 < v12 )
            {
              v29 = 2 * v24;
              if ( 2 * v24 < v12 )
                v29 = v12;
              if ( v29 < 8 )
                v29 = 8;
              if ( v24 < v29 )
              {
                if ( v8 )
                  v8 = off_8C52A8(v8, 8LL * v29);
                else
                  v8 = off_8C52B8(8LL * v29);
                v27 = *(unsigned int *)(a3 + 24);
                *(_QWORD *)(a3 + 16) = v8;
                v24 = v29;
                *(_DWORD *)(a3 + 28) = v29;
                v12 = v27 + 1;
              }
            }
            v25 -= 8;
            *(_DWORD *)(a3 + 24) = v12;
            *((_QWORD *)v8 + v27) = v30;
          }
          while ( v25 != -8 );
        }
      }
    }
  }
  return 0;
}
