__int64 __fastcall sub_451950(__int64 a1, __int64 *a2, __int64 a3, __int16 a4)
{
  unsigned __int64 v5; // rdx
  __int64 *v9; // r12
  __int128 v10; // xmm0
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  void *v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // [rsp+0h] [rbp-68h]
  int v24; // [rsp+8h] [rbp-60h]
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
    v23 = &v9[v5];
    if ( v9 != v23 )
    {
      v10 = 0;
      v11 = a4 & 0x400;
      v24 = a4 & 1;
      v12 = a4 & 2;
      v25 = a4 & 0x200;
      do
      {
        v14 = a2[1];
        v15 = *v9;
        v16 = *a2;
        if ( a2[2] < (unsigned __int64)(v14 + 1) )
        {
          srca = v12;
          na = v11;
          v17 = qvector_reserve(a2, v16, v14 + 1, 48);
          v12 = srca;
          v11 = na;
          *a2 = v17;
          v16 = v17;
          v10 = 0;
          v14 = a2[1];
        }
        v13 = v16 + 48 * v14;
        *(_QWORD *)v13 = 0;
        *(_QWORD *)(v13 + 24) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v13 + 32) = 0xFFFFFFFCFFFFFFFCLL;
        *(_BYTE *)(v13 + 40) = 0;
        *(_OWORD *)(v13 + 8) = v10;
        ++a2[1];
        if ( v24 )
        {
          v18 = *(_QWORD *)(a1 + 184) + 80 * v15;
          if ( v18 != v13 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( v19 && (n = v19 - 1, v19 != 1) )
            {
              v21 = *(void **)v13;
              src = *(void **)v18;
              if ( *(_QWORD *)(v13 + 16) < v19 )
              {
                v35 = v12;
                v33 = v11;
                v31 = *(_QWORD *)(v18 + 8);
                v22 = qvector_reserve(v13, v21, v19, 1);
                v12 = v35;
                v11 = v33;
                *(_QWORD *)v13 = v22;
                v19 = v31;
                v21 = (void *)v22;
              }
              *(_QWORD *)(v13 + 8) = v19;
              v34 = v12;
              v32 = v11;
              v30 = v19;
              memmove(v21, src, n);
              v10 = 0;
              v11 = v32;
              v12 = v34;
              *(_BYTE *)(*(_QWORD *)v13 + v30 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v13 + 8) = 0;
            }
          }
        }
        if ( v25 )
        {
          *(_DWORD *)(v13 + 32) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 80 * v15 + 60);
          *(_DWORD *)(v13 + 36) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 80 * v15 + 64);
        }
        if ( v11 )
          *(_BYTE *)(v13 + 40) = *(_BYTE *)(*(_QWORD *)(a1 + 184) + 80 * v15 + 72);
        if ( v12 )
          *(_DWORD *)(v13 + 24) |= 2u;
        ++v9;
      }
      while ( v23 != v9 );
    }
  }
  return 1;
}
