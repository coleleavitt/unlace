__int64 __fastcall sub_B4BF60(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rdx
  unsigned int v11; // r13d
  size_t v12; // r12
  _OWORD *v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 *v19; // rsi
  int v20; // edi
  __int64 *v21; // rsi
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v26; // r14
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rsi
  int v33; // edi
  __int64 *v34; // rsi
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rsi
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]

  sub_9671F0(a1);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    v3 = *(int *)(v2 - 4);
  else
    v3 = 0;
  v4 = *(_QWORD *)(a1 + 400);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 432);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  if ( *(_DWORD *)(a1 + 420) || *(_DWORD *)(a1 + 424) )
  {
    v6 = *(char **)(a1 + 408);
    v7 = 0;
    v8 = *(unsigned int *)(a1 + 416);
    v9 = v6;
    v10 = &v6[16 * v8];
    if ( v6 == v10 )
      goto LABEL_22;
    do
    {
      while ( *(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = 0;
        v9 += 16;
        if ( v10 == v9 )
          goto LABEL_14;
      }
      v9 += 16;
      ++v7;
    }
    while ( v10 != v9 );
LABEL_14:
    if ( (unsigned int)v8 <= 0x10 || 3 * (int)v8 >= (unsigned int)(4 * v7) )
      goto LABEL_22;
    if ( v6 )
    {
      sub_186B220(v6);
      v11 = *(_DWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 408) = 0;
      v11 >>= 1;
      *(_DWORD *)(a1 + 416) = v11;
      v12 = v11;
      v13 = (_OWORD *)sub_186B270(v12 * 16);
      if ( !v11 )
      {
LABEL_21:
        *(_QWORD *)(a1 + 408) = v13;
LABEL_22:
        *(_QWORD *)(a1 + 420) = 0;
        goto LABEL_23;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 408) = 0;
      v38 = (unsigned int)v8 >> 1;
      *(_DWORD *)(a1 + 416) = v38;
      v12 = v38;
      v13 = (_OWORD *)sub_186B270(16 * v38);
    }
    v14 = &v13[v12];
    v15 = v13;
    if ( ((v12 * 16) & 0x10) == 0 || (v15 = v13 + 1, *v13 = 0, v14 != v13 + 1) )
    {
      do
      {
        *v15 = 0;
        v15 += 2;
        *(v15 - 1) = 0;
      }
      while ( v14 != v15 );
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( (int)v3 > 0 )
  {
    v39 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = v16;
      do
      {
        v18 = v17;
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v17);
      }
      while ( v18 != v17 );
      if ( v17 == (_DWORD)v16 )
      {
        v26 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v16);
        v27 = sub_15D1F10(*v26);
        v28 = sub_15F0200(a1 + 56);
        v30 = *(_DWORD **)(v27 + 24);
        if ( v30 )
        {
          if ( v28 == *v30 )
          {
            v31 = (unsigned int)v30[1];
            if ( !(_DWORD)v31 )
            {
              if ( (unsigned __int8)sub_15FD0A0(a1 + 56, v27, v31, v29)
                && (*(_BYTE *)(v26[1] + 44LL) & 2) == 0
                && (unsigned __int8)sub_B4BAC0(a1, (__int64)v26) )
              {
                v39 = 1;
                goto LABEL_29;
              }
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 464LL)
                && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v16) + 8LL) )
              {
                v32 = *(__int64 **)(a1 + 384);
                if ( v32 )
                  v33 = *((_DWORD *)v32 - 1);
                else
                  v33 = 0;
                sub_B397E0(v33, v32);
                v34 = *(__int64 **)(a1 + 392);
                if ( v34 )
                  v35 = *((_DWORD *)v34 - 1);
                else
                  v35 = 0;
                sub_B39810(v35, v34);
                v36 = *(_QWORD *)(a1 + 384);
                if ( v36 )
                  *(_DWORD *)(v36 - 4) = 0;
                v37 = *(_QWORD *)(a1 + 392);
                if ( v37 )
                  *(_DWORD *)(v37 - 4) = 0;
                sub_B45840(a1, v16);
                v39 = 1;
              }
            }
          }
        }
      }
      if ( v3 == ++v16 )
        goto LABEL_29;
    }
  }
  v39 = 0;
LABEL_29:
  v19 = *(__int64 **)(a1 + 384);
  if ( v19 )
    v20 = *((_DWORD *)v19 - 1);
  else
    v20 = 0;
  sub_B397E0(v20, v19);
  v21 = *(__int64 **)(a1 + 392);
  if ( v21 )
    v22 = *((_DWORD *)v21 - 1);
  else
    v22 = 0;
  sub_B39810(v22, v21);
  v23 = *(_QWORD *)(a1 + 384);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  v24 = *(_QWORD *)(a1 + 392);
  if ( v24 )
    *(_DWORD *)(v24 - 4) = 0;
  return v39;
}

