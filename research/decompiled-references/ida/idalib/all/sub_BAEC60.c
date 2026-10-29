__int64 __fastcall sub_BAEC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 120);
  if ( !v7 )
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120);
  }
  result = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result || a1 != *(_QWORD *)result )
    return result;
  if ( (*(_BYTE *)(result + 72) & 1) != 0 )
    sub_BA8900(a1);
  result = sub_BAE900(a1, a2, a3, a4, a5, a6);
  v9 = result;
  if ( !result )
    return result;
  v12 = sub_BA79C0(result);
  if ( v12 )
  {
LABEL_9:
    if ( (unsigned int)sub_BA8080(v12, a2, v10, v11, v13, v14) == 3 && (*(_BYTE *)(v12 + 29) & 1) != 0 )
    {
      v25 = sub_B8C3D0(v12, a2, v10, v11, v13, v14);
      v10 = *v25;
      v11 = *v25 + 8LL * *((unsigned int *)v25 + 2);
      if ( *v25 < v11 )
      {
        v29 = (__int64 *)*v25;
        while ( 1 )
        {
          v10 = *v29;
          if ( *(_WORD *)(*v29 + 36) == 427 )
            break;
          if ( (__int64 *)v11 == ++v29 )
            goto LABEL_10;
        }
        if ( (__int64 *)v11 == v29 )
          goto LABEL_10;
      }
      else
      {
        if ( v10 == v11 )
          goto LABEL_10;
        if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 427 )
        {
          v26 = (__int64 *)(v11 + 8);
          do
          {
            v11 = (unsigned __int64)v26;
            if ( (__int64 *)v10 == v26 )
              goto LABEL_10;
            v27 = *v26++;
          }
          while ( *(_WORD *)(v27 + 36) != 427 );
        }
      }
      v28 = *(unsigned int *)(v6 + 8);
      v11 = *(unsigned int *)(v6 + 12);
      if ( v28 + 1 > v11 )
      {
        a2 = v6 + 16;
        sub_2237220(v6, v6 + 16, v28 + 1, 8);
        v28 = *(unsigned int *)(v6 + 8);
      }
      v10 = *(_QWORD *)v6;
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v28) = v12;
      ++*(_DWORD *)(v6 + 8);
    }
LABEL_10:
    while ( 1 )
    {
      v12 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        break;
      while ( (*(_BYTE *)(v12 + 28) & 0x7F) == 0x12 )
      {
        if ( (*(_BYTE *)(v12 + 58) & 2) != 0 )
          goto LABEL_9;
        v12 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v12 )
          goto LABEL_14;
      }
    }
  }
LABEL_14:
  v30[0] = sub_BAAD00(v9, a2, v10, v11, v13, v14);
  sub_BA6800(v30);
  result = v30[0];
  if ( v30[0] )
  {
    while ( 1 )
    {
      v17 = sub_B8E970(result + 48);
      if ( v17 )
        break;
LABEL_25:
      v30[0] = *(_QWORD *)(v30[0] + 128);
      sub_BA6800(v30);
      result = v30[0];
      if ( !v30[0] )
        return result;
    }
    while ( (*(_BYTE *)(v17 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v17 + 58) & 2) == 0 )
    {
      v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v17 )
        goto LABEL_25;
    }
LABEL_20:
    if ( (unsigned int)sub_BA8080(v17, a2, v15, v16, v18, v19) == 3 && (*(_BYTE *)(v17 + 29) & 1) != 0 )
    {
      v20 = sub_B8C3D0(v17, a2, v15, v16, v18, v19);
      v15 = *v20;
      v16 = *v20 + 8LL * *((unsigned int *)v20 + 2);
      if ( *v20 >= v16 )
      {
        if ( v15 == v16 )
          goto LABEL_21;
        if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 427 )
        {
          v23 = (__int64 *)(v16 + 8);
          do
          {
            v16 = (unsigned __int64)v23;
            if ( (__int64 *)v15 == v23 )
              goto LABEL_21;
            v24 = *v23++;
          }
          while ( *(_WORD *)(v24 + 36) != 427 );
        }
      }
      else
      {
        v21 = (__int64 *)*v20;
        while ( 1 )
        {
          v15 = *v21;
          if ( *(_WORD *)(*v21 + 36) == 427 )
            break;
          if ( (__int64 *)v16 == ++v21 )
            goto LABEL_21;
        }
        if ( (__int64 *)v16 == v21 )
          goto LABEL_21;
      }
      v22 = *(unsigned int *)(v6 + 8);
      v16 = *(unsigned int *)(v6 + 12);
      if ( v22 + 1 > v16 )
      {
        a2 = v6 + 16;
        sub_2237220(v6, v6 + 16, v22 + 1, 8);
        v22 = *(unsigned int *)(v6 + 8);
      }
      v15 = *(_QWORD *)v6;
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v22) = v17;
      ++*(_DWORD *)(v6 + 8);
    }
LABEL_21:
    while ( 1 )
    {
      v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v17 )
        goto LABEL_25;
      while ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x12 )
      {
        if ( (*(_BYTE *)(v17 + 58) & 2) != 0 )
          goto LABEL_20;
        v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v17 )
          goto LABEL_25;
      }
    }
  }
  return result;
}
