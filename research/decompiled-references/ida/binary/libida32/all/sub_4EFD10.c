__int64 __fastcall sub_4EFD10(
        __int64 a1,
        double a2,
        double a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7)
{
  void (__fastcall *v8)(__int64 *, unsigned int *, char *); // rax
  unsigned int *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  void *v20; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-438h] BYREF
  int v28; // [rsp+8h] [rbp-430h]
  int v29; // [rsp+10h] [rbp-428h]
  int v30; // [rsp+18h] [rbp-420h]
  int v31; // [rsp+20h] [rbp-418h]
  int v32; // [rsp+28h] [rbp-410h]
  int v33; // [rsp+30h] [rbp-408h]
  int v34; // [rsp+38h] [rbp-400h]
  int v35; // [rsp+40h] [rbp-3F8h]
  int v36; // [rsp+48h] [rbp-3F0h]
  __int64 v37; // [rsp+50h] [rbp-3E8h]
  unsigned __int64 v38; // [rsp+408h] [rbp-30h]

  v8 = *(void (__fastcall **)(__int64 *, unsigned int *, char *))(a1 + 48);
  v38 = __readfsqword(0x28u);
  v9 = a6;
  if ( v8 )
  {
    v9 = (unsigned int *)&v27;
    v8(&v27, a6, (char *)a6 + a7);
  }
  v10 = node2ea(a5);
  v11 = *v9;
  if ( *v9 == v10 && v11 != a5 )
  {
    if ( (unsigned __int8)sub_4EE3F0(a1, v9, a2, a3) )
      return 1;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = v9[1];
    v14 = *(_QWORD *)(v12 + 8);
    if ( (_DWORD)v14 )
    {
      if ( v11 < v13 )
      {
        v15 = *(_QWORD *)v12;
        v16 = *(_QWORD *)(*(_QWORD *)v12 + 16 * v14 - 16);
        if ( !v16 || v11 >= *(_DWORD *)(v16 + 4) )
        {
          v17 = v14 + 1;
          if ( *(_QWORD *)(v12 + 16) >= (unsigned __int64)(v14 + 1) )
          {
LABEL_10:
            v18 = v15 + 16 * v14;
            *(_QWORD *)v18 = 0;
            *(_DWORD *)(v18 + 8) = 0;
            *(_BYTE *)(v18 + 12) = 1;
            v19 = *(unsigned int *)(v12 + 32);
            ++*(_QWORD *)(v12 + 8);
            v20 = (void *)qalloc(v19);
            if ( !v20 )
              sub_3B74D0((int)"ranges_cache_t");
            *(_QWORD *)v18 = memcpy(v20, v9, *(unsigned int *)(v12 + 32));
            *(_QWORD *)(v12 + 24) = *(_QWORD *)v12 + 16LL * *(_QWORD *)(v12 + 8);
            return 1;
          }
LABEL_18:
          v25 = qvector_reserve(*(_QWORD *)(a1 + 24), v15, v17, 16);
          *(_QWORD *)v12 = v25;
          v15 = v25;
          v14 = *(_QWORD *)(v12 + 8);
          goto LABEL_10;
        }
      }
    }
    else if ( v11 < v13 )
    {
      v15 = *(_QWORD *)v12;
      v17 = v14 + 1;
      if ( *(_QWORD *)(v12 + 16) >= (unsigned __int64)(v14 + 1) )
        goto LABEL_10;
      goto LABEL_18;
    }
  }
  sub_82BC50("range 'netnode(%s)[%a]':%a..%a dropped\n", v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
  v22 = *(_QWORD **)(a1 + 24);
  v23 = v22[6];
  v24 = v22[5];
  if ( v22[7] < (unsigned __int64)(v23 + 1) )
  {
    v26 = qvector_reserve(v22 + 5, v24, v23 + 1, 4);
    v22[5] = v26;
    v24 = v26;
    v23 = v22[6];
  }
  *(_DWORD *)(v24 + 4 * v23) = a5;
  ++v22[6];
  return 0;
}

