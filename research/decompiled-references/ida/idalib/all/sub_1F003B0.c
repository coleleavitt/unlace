void __fastcall sub_1F003B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // r13
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // r8
  int v17; // r11d
  __int64 *v18; // r15
  int v19; // r10d
  __int64 *v20; // r11
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r9d
  int v24; // r8d
  __int64 *v25; // r15
  __int64 *v26; // r14
  __m128 v27[4]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a2 & 4) != 0 )
  {
    v7 = *(__int64 **)v6;
    v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  }
  else
  {
    v7 = a2;
    v8 = (__int64)(a2 + 1);
    if ( !v6 )
      return;
  }
  if ( v7 != (__int64 *)v8 )
  {
    while ( 1 )
    {
      v14 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v14 )
        goto LABEL_8;
      a4 = *v7;
      v10 = *(_QWORD *)a1;
      v11 = (v14 - 1) & (((unsigned int)*v7 >> 9) ^ ((unsigned int)*v7 >> 4));
      v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * v11);
      v13 = *v12;
      if ( *v7 != *v12 )
        break;
LABEL_6:
      sub_1F000E0(v27, v12, (_QWORD *)(v10 + 8 * v14), a1, 1);
      if ( ++v7 == (__int64 *)v8 )
        return;
    }
    v19 = 1;
    v20 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( v13 == -8192 && !v20 )
          v20 = v12;
        v11 = (v14 - 1) & (v19 + v11);
        v12 = (__int64 *)(v10 + 8LL * v11);
        v13 = *v12;
        if ( a4 == *v12 )
          goto LABEL_6;
        if ( v13 == -4096 )
          break;
        ++v19;
      }
      if ( v20 )
        v12 = v20;
    }
    a5 = (unsigned int)(3 * v14);
    v6 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    a6 = (unsigned int)(4 * v6);
    if ( (unsigned int)a6 >= (unsigned int)a5 )
    {
LABEL_8:
      sub_1F00150(a1, 2 * v14, v6, a4, a5, a6);
      v14 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v14 )
        goto LABEL_53;
      a4 = *v7;
      v10 = *(_QWORD *)a1;
      v15 = (v14 - 1) & (((unsigned int)*v7 >> 9) ^ ((unsigned int)*v7 >> 4));
      v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * v15);
      v16 = *v12;
      LODWORD(v6) = *(_DWORD *)(a1 + 8) + 1;
      if ( *v12 == *v7 )
        goto LABEL_17;
      v17 = 1;
      v18 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( v16 != -8192 || v18 )
            v12 = v18;
          v15 = (v14 - 1) & (v17 + v15);
          v26 = (__int64 *)(v10 + 8LL * v15);
          v16 = *v26;
          if ( a4 == *v26 )
            break;
          if ( v16 == -4096 )
          {
            if ( v12 )
              goto LABEL_16;
            goto LABEL_51;
          }
          ++v17;
          v18 = v12;
          v12 = (__int64 *)(v10 + 8LL * v15);
        }
LABEL_38:
        v12 = v26;
        goto LABEL_17;
      }
    }
    else
    {
      v21 = (unsigned int)(v14 - *(_DWORD *)(a1 + 12) - v6);
      v22 = (unsigned int)v14 >> 3;
      if ( (unsigned int)v21 > (unsigned int)v22 )
      {
LABEL_16:
        v16 = *v12;
        goto LABEL_17;
      }
      sub_1F00150(a1, v14, v6, a4, v21, v22);
      v14 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v14 )
      {
LABEL_53:
        ++*(_DWORD *)(a1 + 8);
        BUG();
      }
      v10 = *(_QWORD *)a1;
      v23 = (v14 - 1) & (((unsigned int)*v7 >> 9) ^ ((unsigned int)*v7 >> 4));
      v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * v23);
      a4 = *v12;
      LODWORD(v6) = *(_DWORD *)(a1 + 8) + 1;
      v16 = *v12;
      if ( *v7 == *v12 )
        goto LABEL_17;
      v24 = 1;
      v25 = nullptr;
      if ( a4 == -4096 )
      {
        a4 = *v7;
      }
      else
      {
        while ( 1 )
        {
          if ( a4 != -8192 || v25 )
            v12 = v25;
          v23 = (v14 - 1) & (v24 + v23);
          v26 = (__int64 *)(v10 + 8LL * v23);
          a4 = *v26;
          if ( *v7 == *v26 )
          {
            v16 = *v26;
            goto LABEL_38;
          }
          if ( a4 == -4096 )
            break;
          ++v24;
          v25 = v12;
          v12 = (__int64 *)(v10 + 8LL * v23);
        }
        if ( v12 )
        {
          v16 = *v12;
          a4 = *v7;
LABEL_17:
          *(_DWORD *)(a1 + 8) = v6;
          if ( v16 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_19;
        }
        a4 = *v7;
LABEL_51:
        v12 = v26;
      }
    }
    *(_DWORD *)(a1 + 8) = v6;
LABEL_19:
    *v12 = a4;
    goto LABEL_6;
  }
}
