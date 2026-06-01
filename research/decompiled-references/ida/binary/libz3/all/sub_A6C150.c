__int64 __fastcall sub_A6C150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  char *v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  char *v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a4;
  if ( a5 <= a4 )
    v9 = a5;
  if ( a7 >= v9 )
  {
    v12 = a2;
    v20 = a1;
  }
  else
  {
    v10 = a5;
    v30 = a3;
    v11 = a1;
    v25 = a6;
    if ( a4 <= a5 )
      goto LABEL_14;
LABEL_5:
    v12 = a2;
    v13 = v8 / 2;
    v14 = (v30 - a2) >> 4;
    v15 = v11 + 16 * (v8 / 2);
    while ( v14 > 0 )
    {
      while ( 1 )
      {
        v16 = v12 + 16 * (v14 >> 1);
        if ( *(_DWORD *)(v15 + 8) >= *(_DWORD *)(v16 + 8) )
          break;
        v12 = v16 + 16;
        v14 = v14 - (v14 >> 1) - 1;
        if ( v14 <= 0 )
          goto LABEL_9;
      }
      v14 >>= 1;
    }
LABEL_9:
    v17 = (v12 - a2) >> 4;
    while ( 1 )
    {
      v29 = v10;
      v8 -= v13;
      v26 = v17;
      v18 = sub_A692A0((char *)v15, a2, (char *)v12, v8, v17, v25, a7);
      v19 = v26;
      v28 = v26;
      v27 = v18;
      sub_A6C150(v11, v15, (_DWORD)v18, v13, v19, (_DWORD)v25, a7);
      v10 = v29 - v28;
      v20 = (__int64)v27;
      v21 = v29 - v28;
      if ( v8 <= v29 - v28 )
        v21 = v8;
      if ( v21 <= a7 )
        break;
      a2 = v12;
      v11 = (__int64)v27;
      if ( v8 > v10 )
        goto LABEL_5;
LABEL_14:
      v15 = v11;
      v22 = (a2 - v11) >> 4;
      v17 = v10 / 2;
      v12 = a2 + 16 * (v10 / 2);
      while ( v22 > 0 )
      {
        while ( 1 )
        {
          v23 = v15 + 16 * (v22 >> 1);
          if ( *(_DWORD *)(v23 + 8) < *(_DWORD *)(v12 + 8) )
            break;
          v15 = v23 + 16;
          v22 = v22 - (v22 >> 1) - 1;
          if ( v22 <= 0 )
            goto LABEL_18;
        }
        v22 >>= 1;
      }
LABEL_18:
      v13 = (v15 - v11) >> 4;
    }
    a3 = v30;
    a6 = v25;
    v7 = v29 - v28;
  }
  return sub_98F8A0(v20, (__int64 *)v12, a3, v8, v7, a6);
}

