void __fastcall sub_166BFA0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int **a5)
{
  int v6; // eax
  unsigned int *v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int *v12; // r12
  size_t v13; // r13
  const void *v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 *v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-110h]
  __int64 v33; // [rsp+20h] [rbp-F8h]
  unsigned int v34; // [rsp+2Ch] [rbp-ECh]
  __int64 *v35; // [rsp+30h] [rbp-E8h]
  __int64 v36; // [rsp+38h] [rbp-E0h]
  _QWORD v37[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 *v38[4]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int8 *v39; // [rsp+70h] [rbp-A8h] BYREF
  char v40; // [rsp+C8h] [rbp-50h]
  char v41; // [rsp+D4h] [rbp-44h]

  v6 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(a1 + 544)) + 8) & 0x7F;
  if ( v6 && v6 != 24 )
  {
    sub_168B9F0(v38, a1 + 8, a2, 4820, 0);
    if ( v40 )
    {
      sub_AE9DF0(&v39, (__int64)"alloc_text", 1u);
    }
    else if ( v41 )
    {
      sub_1669EA0((__int64)v38, (__int64)"alloc_text");
    }
LABEL_13:
    sub_15F7200(v38);
  }
  else
  {
    v7 = *a5;
    v30 = a1 + 1984;
    v33 = (__int64)&(*a5)[4 * *((unsigned int *)a5 + 2)];
    if ( *a5 != (unsigned int *)v33 )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)v7 + 1);
        v9 = *v7;
        v10 = sub_1A5B7C0(a1, *(_QWORD *)(a1 + 192), v8, *v7, 0, 0);
        if ( !v10 )
        {
          sub_168B9F0(v38, a1 + 8, v9, 5348, 0);
          v28 = *(unsigned int **)(v8 + 16);
          v29 = *v28;
          v37[0] = v28 + 4;
          v37[1] = v29;
          sub_166BAF0((__int64)v38, (__int64)v37);
          sub_15F7200(v38);
          return;
        }
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 34 > 5 )
        {
          v20 = a1 + 8;
          v21 = 4813;
LABEL_12:
          sub_168B9F0(v38, v20, v9, v21, 0);
          goto LABEL_13;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && !(unsigned __int8)sub_B74CC0(v11) )
        {
          v20 = a1 + 8;
          v21 = 4812;
          goto LABEL_12;
        }
        v12 = *(unsigned int **)(v8 + 16);
        v13 = *v12;
        v14 = v12 + 4;
        v15 = sub_2244B30(v14, v13);
        v16 = (unsigned int)sub_2244CB0(v30, v14, v13, v15);
        v18 = (__int64 *)(*(_QWORD *)(a1 + 1984) + 8 * v16);
        if ( !*v18 )
          goto LABEL_16;
        if ( *v18 == -8 )
          break;
        sub_1668930(v38, v18, 0);
        v19 = v38[0];
LABEL_19:
        v27 = *v19;
        v7 += 4;
        *(_QWORD *)(v27 + 16) = a3;
        *(_DWORD *)(v27 + 8) = v9;
        *(_QWORD *)(v27 + 24) = a4;
        if ( (unsigned int *)v33 == v7 )
          return;
      }
      --*(_DWORD *)(a1 + 2000);
LABEL_16:
      v35 = v18;
      v34 = v16;
      v22 = sub_22300B0(v13 + 33, 8, v16, v17, v18, v16);
      v23 = v34;
      v24 = v35;
      v25 = v22;
      if ( v13 )
      {
        v36 = v22;
        memcpy((void *)(v22 + 32), v14, v13);
        v25 = v36;
        v24 = v35;
        v23 = v34;
      }
      *(_BYTE *)(v25 + v13 + 32) = 0;
      *(_QWORD *)v25 = v13;
      *(_DWORD *)(v25 + 8) = 0;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 24) = 0;
      *v24 = v25;
      ++*(_DWORD *)(a1 + 1996);
      v26 = sub_22450D0(v30, v23);
      sub_1668930(v38, (__int64 *)(*(_QWORD *)(a1 + 1984) + 8LL * v26), 0);
      v19 = v38[0];
      goto LABEL_19;
    }
  }
}
