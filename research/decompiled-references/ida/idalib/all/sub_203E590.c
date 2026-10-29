void __fastcall sub_203E590(_QWORD *a1, int **a2, const void *a3, size_t a4)
{
  __int64 v4; // r14
  int *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  size_t v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned int v16; // r14d
  void *v17; // rdi
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  size_t v21; // rax
  _QWORD *v22; // rdi
  int *v23; // [rsp+8h] [rbp-70h]
  __int64 v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v4 )
  {
    v7 = *a2;
    if ( !*((_DWORD *)a1 + 78) )
    {
      v22 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL) & 4) != 0 )
        v22 = (_QWORD *)*v22;
      sub_2092460(v22, a1 + 38);
      v7 = *a2;
      v4 = *((unsigned int *)a2 + 2);
    }
    v8 = a1[1];
    v9 = a1[4];
    v10 = 4 * v4;
    v25[0] = (__int64)off_2BE5D20;
    v25[1] = (__int64)(a1 + 5);
    v25[3] = v8;
    v25[2] = v9;
    v23 = &v7[v10];
    while ( v23 != v7 )
    {
      v15 = *a1;
      v16 = *v7;
      v17 = *(void **)(*a1 + 32LL);
      if ( a4 > *(_QWORD *)(*a1 + 24LL) - (_QWORD)v17 )
      {
        sub_227BF10(*a1, a3, a4);
        v15 = *a1;
      }
      else if ( a4 )
      {
        memcpy(v17, a3, a4);
        *(_QWORD *)(v15 + 32) += a4;
        v15 = *a1;
      }
      if ( v16 < *((_DWORD *)a1 + 78) )
      {
        v11 = j__strlen("!");
        sub_9954E0(v15, "!", v11);
        sub_202FE80(*(char **)(a1[38] + 16LL * v16), *(_QWORD *)(a1[38] + 16LL * v16 + 8), *a1);
        v12 = *a1;
        v13 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 24LL) )
          goto LABEL_13;
      }
      else
      {
        v18 = j__strlen("!<unknown kind #");
        v19 = sub_9954E0(v15, "!<unknown kind #", v18);
        v20 = sub_227B910(v19, v16);
        v21 = j__strlen(">");
        sub_9954E0(v20, ">", v21);
        v12 = *a1;
        v13 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 24LL) )
        {
LABEL_13:
          sub_227BA10(v12, 32);
          goto LABEL_7;
        }
      }
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 32;
LABEL_7:
      v14 = *((_QWORD *)v7 + 1);
      v7 += 4;
      sub_20399E0(*a1, v14, v25);
    }
  }
}
