/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035310
// Address: 0x0000000100035310

//----- (0000000100035310) ----------------------------------------------------
__int64 __fastcall sub_100035310(_QWORD *a1, const void *a2, int a3)
{
  _QWORD *v4; // r14
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  size_t v8; // rax
  size_t v9; // r15
  unsigned __int64 v10; // r13
  void *v11; // rax
  char **v12; // r12
  __int64 v13; // rbx
  int i; // r14d
  __int64 v15; // rax
  const char **v16; // rdx
  __int64 v17; // rbx
  const char **v18; // r12
  __int64 v19; // r13
  const char **v20; // r15
  char *v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  char *v26; // rax
  char *v27; // r13
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  char *v30; // rdi
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v36; // [rsp+8h] [rbp-78h]
  char *v37; // [rsp+10h] [rbp-70h]
  char **v39; // [rsp+20h] [rbp-60h]
  unsigned __int64 v40; // [rsp+28h] [rbp-58h]
  int v41; // [rsp+34h] [rbp-4Ch]
  char *__src; // [rsp+38h] [rbp-48h]
  const char *v43; // [rsp+40h] [rbp-40h] BYREF
  char *v44; // [rsp+48h] [rbp-38h] BYREF

  v4 = a1;
  v5 = (void *)a1[2];
  v6 = a1[3];
  if ( a1[4] < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve((__int64)(a1 + 2), v5, v6 + 1, 0x18u);
    a1[2] = v5;
    v6 = a1[3];
  }
  v7 = (__int64)v5 + 24 * v6;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)(v7 + 16) = 0;
  ++a1[3];
  if ( a2 && (v8 = strlen((const char *)a2)) != 0 )
  {
    v9 = v8;
    v10 = v8 + 1;
    v11 = *(void **)v7;
    if ( *(_QWORD *)(v7 + 16) < v10 )
    {
      v11 = qvector_reserve(v7, *(void **)v7, v10, 1u);
      *(_QWORD *)v7 = v11;
    }
    *(_QWORD *)(v7 + 8) = v10;
    memmove(v11, a2, v9);
    *(_BYTE *)(*(_QWORD *)v7 + v9) = 0;
  }
  else
  {
    *(_QWORD *)(v7 + 8) = 0;
  }
  __src = qstrtok(*(char **)v7, "|", &v43);
  if ( __src )
  {
    v12 = (char **)(a1 + 5);
    v41 = a3;
    v39 = (char **)(a1 + 5);
    do
    {
      v40 = v4[6];
      if ( v40 )
      {
        v37 = *v12;
        v13 = 0;
        for ( i = 0; i < v40; v13 = ++i )
        {
          v17 = 32 * v13;
          v18 = *(const char ***)&v37[v17];
          v15 = *(_QWORD *)&v37[v17 + 8];
          v19 = 8 * v15;
          v20 = v18;
          if ( 8 * v15 )
          {
            v36 = *(_QWORD *)&v37[v17 + 8];
            v20 = *(const char ***)&v37[v17];
            while ( strcmp(*v20, __src) )
            {
              ++v20;
              v19 -= 8;
              if ( !v19 )
                goto LABEL_15;
            }
            v15 = v36;
          }
          v16 = &v18[v15];
          if ( v20 != v16 )
          {
            v25 = v15;
            v26 = &v37[v17];
            a3 = v41;
            v4 = a1;
            v12 = v39;
            if ( *((_DWORD *)v26 + 6) == v41 )
              goto LABEL_36;
            v27 = v26;
            v28 = (char *)v16 - (char *)v20;
            if ( v28 >= 9 )
            {
              memmove(v20, v20 + 1, v28 - 8);
              v25 = *((_QWORD *)v27 + 1);
            }
            *((_QWORD *)v27 + 1) = v25 - 1;
            v29 = a1[6];
            if ( !v29 )
              goto LABEL_39;
            v30 = *v39;
            v31 = 1;
            v32 = 0;
            while ( 1 )
            {
              v33 = 32 * v32;
              if ( *(_DWORD *)&v30[v33 + 24] == v41 )
                break;
              v32 = v31++;
              if ( v29 <= v32 )
                goto LABEL_39;
            }
            v34 = (__int64)&v30[v33];
            if ( !v34 )
            {
LABEL_39:
              sub_100035DC0(v39, v29 + 1);
              v34 = a1[5] + 32LL * a1[6];
              *(_OWORD *)v34 = 0;
              *(_QWORD *)(v34 + 16) = 0;
              ++a1[6];
              *(_DWORD *)(v34 + 24) = v41;
            }
            goto LABEL_35;
          }
LABEL_15:
          ;
        }
        v12 = v39;
        v21 = *v39;
        v22 = 1;
        v23 = 0;
        a3 = v41;
        v4 = a1;
        while ( 1 )
        {
          v24 = 32 * v23;
          if ( *(_DWORD *)&v21[v24 + 24] == v41 )
            break;
          v23 = v22++;
          if ( v40 <= v23 )
            goto LABEL_34;
        }
        v34 = (__int64)&v21[v24];
        if ( v34 )
          goto LABEL_35;
      }
LABEL_34:
      sub_100035DC0(v12, v40 + 1);
      v34 = v4[5] + 32LL * v4[6];
      *(_OWORD *)v34 = 0;
      *(_QWORD *)(v34 + 16) = 0;
      ++v4[6];
      *(_DWORD *)(v34 + 24) = a3;
LABEL_35:
      v44 = __src;
      sub_100035A90((char **)v34, &v44);
LABEL_36:
      __src = qstrtok(nullptr, "|", &v43);
    }
    while ( __src );
  }
  return __stack_chk_guard;
}
