__int64 __fastcall sub_AC9730(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rbp
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // r15
  _QWORD *v28; // rax
  __int64 *v29; // rbp
  _QWORD *v30; // rcx
  __int64 *v31; // r14
  __int64 v32; // rdi
  _QWORD *v33; // r14

  v5 = a3;
  v6 = *(_QWORD *)(sub_AC93B0(a1, a2) + 16);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(v6 + 12);
  v9 = *(_DWORD *)(v6 + 20) + v5 - *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)(v7 + 96);
  v11 = *(unsigned int *)(v7 + 104);
  v12 = (((v9 - v8) ^ (v8 << 8) ^ ((v8 - ((v9 - v8) ^ (v8 << 8))) << 16)) + ((v9 - v8) ^ (v8 << 8)) - v8)
      ^ ((v8 - ((v9 - v8) ^ (v8 << 8))) << 10);
  v13 = v11 - 1;
  v11 *= 32;
  v14 = v10 + v11;
  v15 = 32LL * (v12 & v13);
  v16 = v10 + v15;
  if ( v15 == v11 )
  {
LABEL_13:
    while ( v16 != v10 )
    {
      v25 = *(_DWORD *)(v10 + 4);
      if ( v25 == 2 )
      {
        if ( v12 == *(_DWORD *)v10 && v6 == *(_QWORD *)(v10 + 8) && v9 == *(_DWORD *)(v10 + 16) )
        {
          v17 = v10;
          goto LABEL_9;
        }
      }
      else if ( !v25 )
      {
        break;
      }
      v10 += 32;
    }
LABEL_14:
    v22 = (_QWORD *)sub_AC93B0(a1, a2);
    result = v22[9];
    if ( !result )
      return result;
    v23 = (_QWORD *)v22[15];
    if ( v23 )
    {
      v24 = (_QWORD *)*v23;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 32);
      v27 = *(_QWORD *)(a1 + 16);
      v28 = (_QWORD *)sub_186B270(8u);
      v29 = (__int64 *)v22[14];
      *v28 = 0;
      v30 = v28;
      v22[15] = v28;
      if ( !v29 )
        return 0;
      v31 = &v29[*((unsigned int *)v29 - 1)];
      if ( v29 == v31 )
        return 0;
      do
      {
        v32 = *v29++;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *, __int64))(*(_QWORD *)v32 + 64LL))(
          v32,
          v22[2],
          v22[9],
          v30,
          v27);
        v30 = (_QWORD *)v22[15];
      }
      while ( v31 != v29 );
      v24 = (_QWORD *)*v30;
      if ( !*v30 )
        return 0;
      v33 = &v24[*((unsigned int *)v24 - 1)];
      if ( v24 == v33 )
      {
LABEL_18:
        if ( (unsigned int)v5 < *((_DWORD *)v24 - 1) )
          return v24[v5];
        return 0;
      }
      do
      {
        if ( *v24 )
          sub_AD0440(*v24, v26);
        ++v24;
      }
      while ( v33 != v24 );
      v24 = *(_QWORD **)v22[15];
    }
    if ( v24 )
      goto LABEL_18;
    return 0;
  }
  v17 = v10 + v15;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v17 + 4);
    if ( v18 != 2 )
    {
      if ( !v18 )
        goto LABEL_14;
      goto LABEL_4;
    }
    if ( v12 == *(_DWORD *)v17 && v6 == *(_QWORD *)(v17 + 8) && v9 == *(_DWORD *)(v17 + 16) )
      break;
LABEL_4:
    v17 += 32;
    if ( v14 == v17 )
      goto LABEL_13;
  }
LABEL_9:
  v19 = *(_QWORD *)(v17 + 24);
  do
  {
    v20 = v19;
    v19 = *(_QWORD *)(v19 + 8);
  }
  while ( v19 );
  result = *(_QWORD *)(v20 + 56);
  if ( !result )
    goto LABEL_14;
  return result;
}

