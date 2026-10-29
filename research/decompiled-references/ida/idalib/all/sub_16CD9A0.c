__int64 __fastcall sub_16CD9A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  char v7; // r14
  __int64 *v8; // r13
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int i; // eax
  __int64 *v15; // rdi
  __int64 v16; // r10
  int v17; // eax
  __int64 *v18; // rcx
  unsigned __int8 v19; // r14
  unsigned int *v21; // rax
  bool v22; // zf
  unsigned int *v23; // [rsp+8h] [rbp-70h]
  __int64 *v24; // [rsp+28h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]

  v6 = a6;
  v7 = a5;
  v8 = a4;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 2448);
  if ( !v11 )
  {
    v11 = operator new(0x18u);
    *(_QWORD *)v11 = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 16) = 0;
    v21 = *(unsigned int **)(a1 + 2448);
    *(_QWORD *)(a1 + 2448) = v11;
    if ( !v21 )
    {
      v25 = a2;
      v26 = a3;
      goto LABEL_17;
    }
    v23 = v21;
    operator delete(*(_QWORD *)v21, 32LL * v21[4], 8);
    operator delete(v23, 0x18u);
    v11 = *(_QWORD *)(a1 + 2448);
  }
  v12 = *(_DWORD *)(v11 + 16);
  v13 = *(_QWORD *)v11;
  v25 = v10;
  v26 = a3;
  if ( !v12 )
  {
LABEL_17:
    v24 = nullptr;
    v12 = 0;
LABEL_18:
    v12 *= 2;
    goto LABEL_19;
  }
  a6 = 1;
  a5 = v12 - 1;
  a4 = nullptr;
  for ( i = a5
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)((0xBF58476D1CE4E5B9LL * a3) >> 31) ^ (484763065 * (_DWORD)a3)
              | ((unsigned __int64)(((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((0xBF58476D1CE4E5B9LL * a3) >> 31) ^ (484763065 * a3)))); ; i = a5 & v17 )
  {
    v15 = (__int64 *)(v13 + 32LL * i);
    v16 = *v15;
    if ( v10 == *v15 && a3 == v15[1] )
    {
      v18 = v15 + 2;
      goto LABEL_13;
    }
    if ( v16 == -4096 )
      break;
    if ( v16 == -8192 && v15[1] == -2 && !a4 )
      a4 = (__int64 *)(v13 + 32LL * i);
LABEL_10:
    v17 = a6 + i;
    a6 = (unsigned int)(a6 + 1);
  }
  if ( v15[1] != -1 )
    goto LABEL_10;
  if ( !a4 )
    a4 = (__int64 *)(v13 + 32LL * i);
  v13 = (unsigned int)(*(_DWORD *)(v11 + 8) + 1);
  v24 = a4;
  if ( 4 * (int)v13 >= 3 * v12 )
    goto LABEL_18;
  if ( v12 - *(_DWORD *)(v11 + 12) - (unsigned int)v13 <= v12 >> 3 )
  {
LABEL_19:
    sub_16CD6F0(v11, v12, v13, (__int64)a4, a5, a6);
    sub_16CA920((__int64 *)v11, &v25, &v24);
    a4 = v24;
    a3 = v26;
    v10 = v25;
    v22 = *v24 == -4096;
    ++*(_DWORD *)(v11 + 8);
    if ( v22 )
      goto LABEL_28;
    goto LABEL_20;
  }
  v22 = *a4 == -4096;
  *(_DWORD *)(v11 + 8) = v13;
  if ( v22 )
  {
LABEL_28:
    if ( a4[1] == -1 )
      goto LABEL_21;
  }
LABEL_20:
  --*(_DWORD *)(v11 + 12);
LABEL_21:
  *a4 = v10;
  v18 = a4 + 2;
  *(v18 - 1) = a3;
  *v18 = 0;
LABEL_13:
  v19 = (2 * (v6 & 1)) | v7 & 1;
  *v18 = (__int64)v8;
  *((_BYTE *)v18 + 8) = v19;
  return v19;
}
