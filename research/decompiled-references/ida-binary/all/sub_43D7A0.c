__int64 __fastcall sub_43D7A0(__int64 *a1, __int64 *a2, __int64 a3, __int16 a4)
{
  unsigned __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 *v7; // rbp
  __int64 *v9; // r13
  __int128 v10; // xmm0
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rbx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  _QWORD *v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  int v28; // [rsp+4h] [rbp-74h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+10h] [rbp-68h]
  int v31; // [rsp+14h] [rbp-64h]
  int v32; // [rsp+18h] [rbp-60h]
  bool v33; // [rsp+1Fh] [rbp-59h]
  int na; // [rsp+20h] [rbp-58h]
  size_t n; // [rsp+20h] [rbp-58h]
  int srca; // [rsp+28h] [rbp-50h]
  void *src; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+30h] [rbp-48h]
  unsigned __int64 v39; // [rsp+30h] [rbp-48h]
  int v40; // [rsp+38h] [rbp-40h]
  int v41; // [rsp+38h] [rbp-40h]
  int v42; // [rsp+3Ch] [rbp-3Ch]
  int v43; // [rsp+3Ch] [rbp-3Ch]

  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
    return 1;
  v6 = a1;
  v7 = a2;
  if ( a2[2] >= v5 )
  {
    v33 = 0;
    v28 = a4 & 0x10;
    if ( (a4 & 0x10) == 0 )
      goto LABEL_4;
    goto LABEL_29;
  }
  a2 = (__int64 *)*a2;
  a1 = v7;
  v33 = 0;
  *v7 = qvector_reserve(v7, a2, v5, 48);
  v28 = a4 & 0x10;
  if ( (a4 & 0x10) != 0 )
  {
LABEL_29:
    v25 = sub_426230(a1, (const char *)a2);
    v33 = sub_41E260((__int64)v25, (const char *)v6 + 288) != nullptr;
  }
LABEL_4:
  v9 = *(__int64 **)a3;
  v29 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
  if ( v29 != *(_QWORD *)a3 )
  {
    v10 = 0;
    v11 = a4 & 2;
    v31 = a4 & 1;
    v30 = a4 & 0x200;
    v12 = a4 & 8;
    v32 = a4 & 0x400;
    while ( 1 )
    {
      v18 = v7[1];
      v19 = *v9;
      v20 = *v7;
      if ( v7[2] < (unsigned __int64)(v18 + 1) )
      {
        srca = v12;
        na = v11;
        v21 = qvector_reserve(v7, v20, v18 + 1, 48);
        v12 = srca;
        v11 = na;
        *v7 = v21;
        v20 = v21;
        v10 = 0;
        v18 = v7[1];
      }
      v13 = v20 + 48 * v18;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 24) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v13 + 32) = 0xFFFFFFFCFFFFFFFCLL;
      *(_BYTE *)(v13 + 40) = 0;
      *(_OWORD *)(v13 + 8) = v10;
      ++v7[1];
      if ( v31 )
      {
        v22 = v6[29] + 152 * v19;
        if ( v22 != v13 )
        {
          v23 = *(_QWORD *)(v22 + 8);
          if ( v23 && (n = v23 - 1, v23 != 1) )
          {
            v26 = *(void **)v13;
            src = *(void **)v22;
            if ( *(_QWORD *)(v13 + 16) < v23 )
            {
              v43 = v12;
              v41 = v11;
              v39 = *(_QWORD *)(v22 + 8);
              v27 = qvector_reserve(v13, v26, v23, 1);
              v12 = v43;
              v11 = v41;
              *(_QWORD *)v13 = v27;
              v23 = v39;
              v26 = (void *)v27;
            }
            *(_QWORD *)(v13 + 8) = v23;
            v42 = v12;
            v40 = v11;
            v38 = v23;
            memmove(v26, src, n);
            v10 = 0;
            v11 = v40;
            v12 = v42;
            *(_BYTE *)(*(_QWORD *)v13 + v38 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v13 + 8) = 0;
          }
        }
      }
      if ( v30 )
      {
        *(_DWORD *)(v13 + 32) = *(_DWORD *)(v6[29] + 152 * v19 + 144);
        *(_DWORD *)(v13 + 36) = v6[30];
      }
      if ( v32 )
        *(_BYTE *)(v13 + 40) = *(_BYTE *)(v6[29] + 152 * v19 + 148);
      if ( v11 )
        *(_DWORD *)(v13 + 24) |= 2u;
      if ( v28 )
      {
        v14 = *(_DWORD *)(v13 + 24);
        v15 = v14 | 0x10;
        v16 = v14 & 0xFFFFFFEF;
        if ( !v33 )
          v15 = v16;
        *(_DWORD *)(v13 + 24) = v15;
      }
      if ( !v12 )
        goto LABEL_20;
      v17 = *(_DWORD *)(v13 + 24);
      if ( *((_BYTE *)v6 + 284) )
      {
        *(_DWORD *)(v13 + 24) = v17 | 8;
LABEL_20:
        if ( (__int64 *)v29 == ++v9 )
          return 1;
      }
      else
      {
        ++v9;
        *(_DWORD *)(v13 + 24) = v17 & 0xFFFFFFF7;
        if ( (__int64 *)v29 == v9 )
          return 1;
      }
    }
  }
  return 1;
}
