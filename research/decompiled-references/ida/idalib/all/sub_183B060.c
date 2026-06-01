void __fastcall sub_183B060(__int64 *a1, int a2, __int64 a3, unsigned int a4, __m128 a5)
{
  int v7; // edx
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // r12
  int v11; // r9d
  int v12; // eax
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp-8h] [rbp-40h]
  __int64 v25[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *((_DWORD *)a1 + 4);
  v8 = *a1;
  v9 = v7 - 3;
  if ( !a3
    || (a3 & 4) == 0
    || (v10 = a3 & 0xFFFFFFFFFFFFFFF8LL, (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0)
    || (*(_BYTE *)(v10 + 68) & 2) == 0 )
  {
    if ( v9 <= 1 )
    {
      v11 = a4 & 1;
      v12 = (a4 >> 2) & 1;
    }
    else
    {
      if ( !v7 || v7 == 5 )
      {
LABEL_12:
        v14 = 0;
        v15 = 0;
        v11 = 0;
        v12 = 0;
        goto LABEL_13;
      }
      v11 = 0;
      v12 = 0;
    }
    if ( !*((_BYTE *)a1 + 34) )
    {
LABEL_8:
      v14 = a4 & 1;
      v15 = (a4 >> 2) & 1;
      goto LABEL_13;
    }
    v15 = (a4 >> 2) & 1;
    v14 = 1;
LABEL_13:
    v17 = sub_1A68D90(v8, a2, v7, v14, v15, 0, v11, v12) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      return;
    v18 = (__int64)(a1 + 5);
    v19 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a3 & 4) == 0 && v19 )
    {
      v20 = *(__int64 **)(v19 + 16);
      v21 = *v20;
      v25[1] = (__int64)(v20 + 1);
      v25[0] = v21;
      v22 = (unsigned int)sub_F6CCB0(v25, a5);
LABEL_24:
      sub_183AC70(v18, v22, v17, v16);
      return;
    }
LABEL_23:
    v22 = *(unsigned int *)(v10 + 24);
    goto LABEL_24;
  }
  if ( v9 > 1 )
  {
    if ( v7 != 5 )
    {
      v11 = 0;
      v12 = 0;
      if ( v7 )
        goto LABEL_8;
    }
    goto LABEL_12;
  }
  v23 = sub_1A68D90(v8, a2, v7, a4 & 1, (a4 >> 2) & 1, 0, a4 & 1, (a4 >> 2) & 1);
  v16 = v24;
  v17 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v18 = (__int64)(a1 + 5);
    goto LABEL_23;
  }
}
