__int64 __fastcall sub_44E800(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // rdx
  __int64 *v9; // r13
  int v10; // r10d
  int v11; // r9d
  __int128 v12; // xmm0
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r11
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-68h]
  int v25; // [rsp+Ch] [rbp-5Ch]
  int na; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-58h]
  int srca; // [rsp+18h] [rbp-50h]
  void *src; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+2Ch] [rbp-3Ch]
  int v35; // [rsp+2Ch] [rbp-3Ch]

  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    if ( a2[2] < v5 )
    {
      *a2 = qvector_reserve(a2, *a2, v5, 48);
      v5 = *(_QWORD *)(a3 + 8);
    }
    v9 = *(__int64 **)a3;
    v24 = *(_QWORD *)a3 + 8 * v5;
    if ( *(_QWORD *)a3 != v24 )
    {
      v25 = a4 & 8;
      v10 = a4 & 1;
      v11 = a4 & 0x10;
      v12 = 0;
      while ( 1 )
      {
        v15 = a2[1];
        v16 = *v9;
        v17 = *a2;
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          srca = v11;
          na = v10;
          v18 = qvector_reserve(a2, v17, v15 + 1, 48);
          v11 = srca;
          v10 = na;
          *a2 = v18;
          v17 = v18;
          v12 = 0;
          v15 = a2[1];
        }
        v13 = v17 + 48 * v15;
        *(_QWORD *)v13 = 0;
        *(_QWORD *)(v13 + 24) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v13 + 32) = 0xFFFFFFFCFFFFFFFCLL;
        *(_BYTE *)(v13 + 40) = 0;
        *(_OWORD *)(v13 + 8) = v12;
        ++a2[1];
        if ( v10 )
        {
          v19 = **(_QWORD **)(a1 + 184) + 88 * v16;
          if ( v13 != v19 + 48 )
          {
            v20 = *(_QWORD *)(v19 + 56);
            if ( v20 && (n = v20 - 1, v20 != 1) )
            {
              v22 = *(void **)v13;
              src = *(void **)(v19 + 48);
              if ( *(_QWORD *)(v13 + 16) < v20 )
              {
                v35 = v11;
                v33 = v10;
                v31 = *(_QWORD *)(v19 + 56);
                v23 = qvector_reserve(v13, v22, v20, 1);
                v11 = v35;
                v10 = v33;
                *(_QWORD *)v13 = v23;
                v20 = v31;
                v22 = (void *)v23;
              }
              *(_QWORD *)(v13 + 8) = v20;
              v34 = v11;
              v32 = v10;
              v30 = v20;
              memmove(v22, src, n);
              v12 = 0;
              v10 = v32;
              v11 = v34;
              *(_BYTE *)(*(_QWORD *)v13 + v30 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v13 + 8) = 0;
            }
          }
        }
        if ( v11 )
          *(_DWORD *)(v13 + 28) = *(_DWORD *)(**(_QWORD **)(a1 + 184) + 88 * v16 + 80);
        if ( !v25 )
          goto LABEL_12;
        v14 = *(_DWORD *)(v13 + 24);
        if ( *(_BYTE *)(**(_QWORD **)(a1 + 184) + 88 * v16 + 84) == 2 )
        {
          ++v9;
          *(_DWORD *)(v13 + 24) = v14 & 0xFFFFFFF7;
          if ( (__int64 *)v24 == v9 )
            return 1;
        }
        else
        {
          *(_DWORD *)(v13 + 24) = v14 | 8;
LABEL_12:
          if ( (__int64 *)v24 == ++v9 )
            return 1;
        }
      }
    }
  }
  return 1;
}
