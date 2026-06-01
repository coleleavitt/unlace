__int64 __fastcall sub_6F6DE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // edx
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int v13; // ecx
  __int64 v14; // r10
  int v15; // r14d
  _QWORD *v16; // rdi
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rcx
  int v21; // r9d
  int v22; // r8d
  int v23; // ecx
  int v24; // esi
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // r12d
  _QWORD *v29; // r11
  int v30; // ecx
  int v31; // ecx
  _QWORD *v32; // r10
  __int64 v33; // r13
  __int64 v34; // r9
  int v35; // r11d
  __int64 v36; // rsi
  __int64 v37; // [rsp+0h] [rbp-48h]
  __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 1112);
  v5 = *(_QWORD *)(a1 + 1096);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v5 + 24LL * v6);
    v8 = *v7;
    if ( *v7 == a2 )
    {
LABEL_3:
      if ( v7 != (__int64 *)(v5 + 24 * v4) )
        return v7[1];
    }
    else
    {
      v10 = 1;
      while ( v8 != -4096 )
      {
        v21 = v10 + 1;
        v6 = (v4 - 1) & (v10 + v6);
        v7 = (__int64 *)(v5 + 24LL * v6);
        v8 = *v7;
        if ( *v7 == a2 )
          goto LABEL_3;
        v10 = v21;
      }
    }
  }
  result = sub_70BEA0(a1);
  v12 = *(_DWORD *)(a1 + 1112);
  v13 = 0;
  if ( !v12 )
    goto LABEL_26;
  v14 = *(_QWORD *)(a1 + 1096);
  v15 = 1;
  v16 = nullptr;
  LODWORD(v17) = (v12 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v18 = (_QWORD *)(v14 + 24LL * (unsigned int)v17);
  v19 = *v18;
  if ( *v18 != a2 )
  {
    while ( v19 != -4096 )
    {
      if ( !v16 && v19 == -8192 )
        v16 = v18;
      v17 = (v12 - 1) & ((_DWORD)v17 + v15);
      v18 = (_QWORD *)(v14 + 24 * v17);
      v19 = *v18;
      if ( *v18 == a2 )
        goto LABEL_9;
      ++v15;
    }
    if ( !v16 )
      v16 = v18;
    v22 = *(_DWORD *)(a1 + 1104) + 1;
    v13 = 2 * v12;
    if ( 4 * v22 < 3 * v12 )
    {
      if ( v12 >> 3 < v12 - *(_DWORD *)(a1 + 1108) - v22 )
      {
LABEL_23:
        *(_DWORD *)(a1 + 1104) = v22;
        if ( *v16 != -4096 )
          --*(_DWORD *)(a1 + 1108);
        *v16 = a2;
        v20 = v16 + 1;
        v16[1] = 0;
        v16[2] = 0;
        goto LABEL_10;
      }
      v38 = result;
      v40 = v11;
      sub_6F6BC0((__int64 *)(a1 + 1096), v12);
      v30 = *(_DWORD *)(a1 + 1112);
      v22 = *(_DWORD *)(a1 + 1104) + 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        v32 = nullptr;
        result = v38;
        v11 = v40;
        LODWORD(v33) = v31 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v34 = *(_QWORD *)(a1 + 1096);
        v35 = 1;
        v16 = (_QWORD *)(v34 + 24LL * (unsigned int)v33);
        v36 = *v16;
        if ( *v16 != a2 )
        {
          while ( v36 != -4096 )
          {
            if ( v36 == -8192 && !v32 )
              v32 = v16;
            v33 = v31 & (unsigned int)(v33 + v35);
            v16 = (_QWORD *)(v34 + 24 * v33);
            v36 = *v16;
            if ( *v16 == a2 )
              goto LABEL_23;
            ++v35;
          }
          if ( v32 )
            v16 = v32;
        }
        goto LABEL_23;
      }
LABEL_49:
      ++*(_DWORD *)(a1 + 1104);
      BUG();
    }
LABEL_26:
    v37 = result;
    v39 = v11;
    sub_6F6BC0((__int64 *)(a1 + 1096), v13);
    v23 = *(_DWORD *)(a1 + 1112);
    v22 = *(_DWORD *)(a1 + 1104) + 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      v25 = *(_QWORD *)(a1 + 1096);
      result = v37;
      v11 = v39;
      LODWORD(v26) = (v23 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v16 = (_QWORD *)(v25 + 24LL * (unsigned int)v26);
      v27 = *v16;
      if ( *v16 != a2 )
      {
        v28 = 1;
        v29 = nullptr;
        while ( v27 != -4096 )
        {
          if ( !v29 && v27 == -8192 )
            v29 = v16;
          v26 = v24 & (unsigned int)(v26 + v28);
          v16 = (_QWORD *)(v25 + 24 * v26);
          v27 = *v16;
          if ( *v16 == a2 )
            goto LABEL_23;
          ++v28;
        }
        if ( v29 )
          v16 = v29;
      }
      goto LABEL_23;
    }
    goto LABEL_49;
  }
LABEL_9:
  v20 = v18 + 1;
LABEL_10:
  *v20 = result;
  v20[1] = v11;
  return result;
}

