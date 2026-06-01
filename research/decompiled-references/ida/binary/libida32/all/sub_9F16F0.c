__int64 __fastcall sub_9F16F0(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4)
{
  __int64 v5; // rax
  int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _WORD *v12; // rcx
  _WORD *v13; // rdx
  int v14; // r9d
  __int64 v15; // r10
  _WORD *v16; // rsi
  unsigned __int16 *v17; // rsi
  char *v18; // r12
  char *v19; // rbp
  char *v20; // [rsp+0h] [rbp-E8h] BYREF
  int v21; // [rsp+8h] [rbp-E0h]
  __int64 v22; // [rsp+10h] [rbp-D8h] BYREF

  if ( !*(_QWORD *)(*a2 + 96) )
    goto LABEL_3;
  v5 = sub_9E95C0(a2, a3, a4);
  if ( !BYTE4(v5) )
    goto LABEL_3;
  v7 = v5;
  v8 = *a2;
  v9 = *(_QWORD *)(*a2 + 96);
  v10 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (8LL * (unsigned int)v5 - 0xAE502812AA7333LL))
         ^ ((0x9DDFEA08EB382D69LL * (8LL * (unsigned int)v5 - 0xAE502812AA7333LL)) >> 47)))
       ^ ((0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (8LL * (unsigned int)v5 - 0xAE502812AA7333LL))
          ^ ((0x9DDFEA08EB382D69LL * (8LL * (unsigned int)v5 - 0xAE502812AA7333LL)) >> 47))) >> 47));
  v11 = *(unsigned int *)(*(_QWORD *)(v9 + 8) + 4LL * ((unsigned int)v10 & (*(_DWORD *)v9 - 1)));
  if ( !(_DWORD)v11 )
    goto LABEL_3;
  v12 = (_WORD *)(*(_QWORD *)(v9 + 16) + v11);
  v13 = v12 + 1;
  if ( !*v12 )
    goto LABEL_3;
  v14 = 0;
  while ( 1 )
  {
    v15 = (unsigned __int16)v13[4];
    v16 = v13 + 6;
    if ( v10 == *(_QWORD *)v13 && v7 == *((_DWORD *)v13 + 3) )
      break;
    ++v14;
    v13 = (_WORD *)((char *)v16 + (unsigned int)v15 + (unsigned __int16)v13[5]);
    if ( (unsigned __int16)*v12 == v14 )
      goto LABEL_3;
  }
  v17 = (_WORD *)((char *)v16 + v15);
  if ( v17 )
  {
    sub_9F0770((__int64)&v20, v17);
    sub_9F1420((unsigned int **)a1, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16), (__int64)&v20);
    v18 = v20;
    v19 = &v20[176 * v21];
    if ( v20 != v19 )
    {
      do
      {
        v19 -= 176;
        sub_9E5F30((__int64)(v19 + 16));
      }
      while ( v18 != v19 );
      v19 = v20;
    }
    if ( v19 != (char *)&v22 )
      free(v19);
  }
  else
  {
LABEL_3:
    *(_BYTE *)(a1 + 196) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
  }
  return a1;
}

