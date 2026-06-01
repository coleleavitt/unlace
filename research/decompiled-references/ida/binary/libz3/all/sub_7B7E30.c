void __fastcall sub_7B7E30(_QWORD *a1, double a2)
{
  char *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  char *v8; // rbp
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // r8
  char *v17; // r14
  __int64 v18; // r15
  __int64 i; // rcx
  signed __int64 v20; // r13
  char *v21; // rax
  char *v22; // r12
  int v23; // ecx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+8h] [rbp-40h]

  v3 = (char *)a1[94];
  if ( v3 )
    v4 = *((unsigned int *)v3 - 1);
  else
    v4 = 0;
  v5 = a1[93];
  if ( !v5 || (unsigned int)v4 >= 2 * *(_DWORD *)(v5 - 4) )
  {
    v6 = a1[3];
    v7 = *(_DWORD *)(v6 + 3612);
    if ( *(_DWORD *)(v6 + 3616) == v7 || !v7 )
    {
      v8 = &v3[8 * v4];
      if ( v3 != v8 )
      {
        do
        {
          v9 = *(_QWORD *)v3;
          v10 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
          if ( !v10 )
          {
            while ( 1 )
            {
              v24 = sub_828140(v9);
              v25 = (_BYTE *)(v24 + 64);
              v26 = 4LL * *(unsigned int *)(v24 + 32);
              v27 = &v25[v26];
              if ( !v26 )
                break;
              v23 = 0;
              do
              {
                if ( (*v25 & 1) != *(_BYTE *)(*(_QWORD *)(a1[3] + 3448LL) + (*(_DWORD *)v25 >> 1)) )
                  ++v23;
                v25 += 4;
              }
              while ( v27 != v25 );
LABEL_27:
              v3 += 8;
              *(_DWORD *)(v9 + 28) = v23;
              if ( v8 == v3 )
                goto LABEL_16;
              v9 = *(_QWORD *)v3;
              v10 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
              if ( v10 )
                goto LABEL_9;
            }
LABEL_26:
            v23 = 0;
            goto LABEL_27;
          }
LABEL_9:
          if ( v10 != 1 )
            goto LABEL_26;
          v11 = sub_81AF20(v9);
          v12 = v11 + 76;
          v13 = 8LL * *(unsigned int *)(v11 + 32);
          v14 = v12 + v13;
          if ( !v13 )
            goto LABEL_26;
          v15 = 0;
          do
          {
            if ( (*(_BYTE *)(v12 + 4) & 1) != *(_BYTE *)(*(_QWORD *)(a1[3] + 3448LL) + (*(_DWORD *)(v12 + 4) >> 1)) )
              ++v15;
            v12 += 8;
          }
          while ( v14 != v12 );
          v3 += 8;
          *(_DWORD *)(v9 + 28) = v15;
        }
        while ( v8 != v3 );
LABEL_16:
        v8 = (char *)a1[94];
      }
      if ( v8 )
      {
        v16 = 8LL * *((unsigned int *)v8 - 1);
        v17 = &v8[v16];
        if ( &v8[v16] != v8 )
        {
          v18 = ((v16 >> 3) + 1) >> 1;
          for ( i = v18; ; i = (v28 + 1) >> 1 )
          {
            v20 = 8 * i;
            v29 = v16;
            v28 = i;
            v21 = (char *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
            v16 = v29;
            v22 = v21;
            if ( v21 )
              break;
            if ( v28 == 1 )
            {
              v20 = 0;
              sub_7AEB70(v8, (__int64)v17);
              goto LABEL_23;
            }
          }
          if ( v18 == v28 )
          {
            sub_7AD230(v8, &v8[v20], v21);
            sub_7AD230(&v8[v20], v17, v22);
            sub_7AD000(v8, &v8[v20], v17, v20 >> 3, (v29 - v20) >> 3, v22);
          }
          else
          {
            sub_7ADF60(v8, v17, v21, v28);
          }
LABEL_23:
          operator delete(v22, v20);
        }
      }
      sub_7B1910((__int64)a1, "glue-psm", a2);
      sub_7B7C50((__int64)a1, a1 + 94, 1);
    }
  }
}

