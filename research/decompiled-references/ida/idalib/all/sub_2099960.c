__int64 __fastcall sub_2099960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  __int64 *v8; // rsi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  unsigned __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  pthread_rwlock_t *v19; // rax
  __int64 v20[2]; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 *)(a1 + 656);
  v20[0] = a2;
  v8 = (__int64 *)*(unsigned int *)(a1 + 672);
  if ( !(_DWORD)v8 )
  {
    v21 = nullptr;
    goto LABEL_13;
  }
  a4 = v20[0];
  a6 = (unsigned int)((_DWORD)v8 - 1);
  v9 = *(_QWORD *)(a1 + 656);
  v10 = a6 & ((LODWORD(v20[0]) >> 9) ^ (LODWORD(v20[0]) >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v20[0] == *v11 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v12 == -4096 )
  {
LABEL_6:
    v17 = *(_DWORD *)(a1 + 664);
    v21 = v11;
    a3 = (unsigned int)(v17 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * (int)v8 )
    {
      v12 = (unsigned int)((_DWORD)v8 - *(_DWORD *)(a1 + 668) - a3);
      a5 = (unsigned int)v8 >> 3;
      if ( (unsigned int)v12 > (unsigned int)a5 )
      {
LABEL_8:
        v18 = *v11 == -4096;
        *(_DWORD *)(a1 + 664) = a3;
        if ( !v18 )
          --*(_DWORD *)(a1 + 668);
        *v11 = a4;
        v13 = v11 + 1;
        v11[1] = 0;
        goto LABEL_11;
      }
LABEL_14:
      sub_2099750((__int64)v6, (int)v8, a3, a4, a5, a6);
      v8 = v20;
      v12 = (unsigned __int64)v6;
      sub_2096870(v6, v20, &v21);
      a4 = v20[0];
      LODWORD(a3) = *(_DWORD *)(a1 + 664) + 1;
      v11 = v21;
      goto LABEL_8;
    }
LABEL_13:
    LODWORD(v8) = 2 * (_DWORD)v8;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v12 == -8192 && !v16 )
      v16 = v11;
    v10 = a6 & (v15 + v10);
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v20[0] == *v11 )
      break;
    if ( v12 == -4096 )
    {
      if ( v16 )
        v11 = v16;
      goto LABEL_6;
    }
    ++v15;
  }
LABEL_3:
  v13 = v11 + 1;
  result = v11[1];
  if ( !result )
  {
LABEL_11:
    v19 = (pthread_rwlock_t *)sub_20BFB80(v12, v8);
    result = sub_20BFCA0(v19);
    *v13 = result;
  }
  return result;
}
