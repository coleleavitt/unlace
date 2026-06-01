unsigned __int64 __fastcall sub_7549C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  int v4; // r10d
  __int64 v5; // r11
  unsigned __int64 v6; // r13
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  _BYTE *v9; // r14
  int v10; // r12d
  char v11; // r15
  char *v12; // rsi
  char *v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // r13
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdx
  char *v18; // rbx
  unsigned int v19; // esi
  char v20; // cl
  char *i; // rax
  int v22; // edx
  int v23; // eax
  _QWORD *v24; // rbx
  void *v25; // rdi
  _QWORD *v26; // rbx
  void *v27; // rdi
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // r12
  unsigned int v32; // [rsp+Ch] [rbp-64h] BYREF
  unsigned int v33; // [rsp+10h] [rbp-60h] BYREF
  char v34; // [rsp+14h] [rbp-5Ch]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  __int128 v36; // [rsp+20h] [rbp-50h]
  unsigned __int64 v37; // [rsp+30h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24);
  v37 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 164);
  v36 = 0;
  src = nullptr;
  v5 = v2 + 5 * v1;
  if ( (v4 & 4) != 0 )
  {
    v34 = 0;
    v33 = 0;
    v6 = 0xCCCCCCCCCCCCCCCDLL * (sub_7534D0(v2, v2 + 5 * v1, (__int64)&v33) - v2);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 128);
  }
  v7 = (_BYTE *)(v2 + 4);
  v8 = 0;
  v9 = (_BYTE *)(v5 + 4);
  if ( v2 != v5 )
  {
    while ( 1 )
    {
      if ( *v7 )
      {
        v10 = *((_DWORD *)v7 - 1);
        v11 = *v7;
        v12 = (char *)src;
        if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v8 + 1) )
        {
          src = (void *)qvector_reserve(&src, src, v8 + 1, 5);
          v8 = v36;
          v12 = (char *)src;
        }
        v13 = &v12[5 * v8];
        *(_DWORD *)v13 = v10;
        v13[4] = v11;
        v8 = v36 + 1;
        *(_QWORD *)&v36 = v8;
        if ( v8 == v6 )
        {
LABEL_11:
          v14 = *(_QWORD *)(a1 + 32);
          v15 = *(char **)(a1 + 24);
          v16 = (unsigned __int64)&v15[5 * v14];
          if ( v15 == (char *)v16 )
            goto LABEL_22;
          if ( v14 )
          {
            _BitScanReverse64(&v17, v14);
            sub_753540(*(_QWORD *)(a1 + 24), (unsigned __int64)&v15[5 * v14], 2LL * (int)v17);
            if ( (__int64)(5 * v14) > 80 )
            {
              v18 = v15 + 80;
              sub_7538C0(v15, v15 + 80);
              if ( v14 == 16 )
                goto LABEL_21;
              while ( 1 )
              {
                v19 = *(_DWORD *)v18;
                v20 = v18[4];
                for ( i = v18; v20 == *(i - 1); i[9] = i[4] )
                {
                  if ( v19 >= *(_DWORD *)(i - 5) )
                    goto LABEL_20;
LABEL_17:
                  v22 = *(_DWORD *)(i - 5);
                  i -= 5;
                  *(_DWORD *)(i + 5) = v22;
                }
                if ( v20 )
                  goto LABEL_17;
LABEL_20:
                v18 += 5;
                *(_DWORD *)i = v19;
                i[4] = v20;
                if ( (char *)v16 == v18 )
                {
LABEL_21:
                  v8 = v36;
                  goto LABEL_22;
                }
              }
            }
          }
          else
          {
            sub_753540(*(_QWORD *)(a1 + 24), v16, -2);
          }
          sub_7538C0(v15, &v15[5 * v14]);
          v8 = v36;
LABEL_22:
          if ( v8 )
            memcpy(*(void **)(a1 + 24), src, 5 * v8);
          v23 = *(_DWORD *)(a1 + 164);
          if ( (v23 & 4) != 0 )
            goto LABEL_37;
          goto LABEL_25;
        }
      }
      else if ( v8 == v6 )
      {
        goto LABEL_11;
      }
      v7 += 5;
      if ( v7 == v9 )
        goto LABEL_11;
    }
  }
  v23 = v4;
  if ( (v4 & 4) != 0 )
    return v37 - __readfsqword(0x28u);
LABEL_25:
  v24 = *(_QWORD **)(a1 + 120);
  *(_DWORD *)(a1 + 164) = v23 | 4;
  while ( v24 )
  {
    v25 = v24;
    v24 = (_QWORD *)*v24;
    operator delete(v25, 0x10u);
  }
  memset(*(void **)(a1 + 104), 0, 8LL * *(_QWORD *)(a1 + 112));
  v26 = *(_QWORD **)(a1 + 64);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  while ( v26 )
  {
    v27 = v26;
    v26 = (_QWORD *)*v26;
    operator delete(v27, 0x10u);
  }
  memset(*(void **)(a1 + 48), 0, 8LL * *(_QWORD *)(a1 + 56));
  v28 = *(_DWORD *)(a1 + 164);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( (v28 & 4) == 0 )
  {
    v29 = *(_QWORD *)(a1 + 24);
    v30 = v29 + 5LL * *(_QWORD *)(a1 + 32);
    if ( v29 != v30 )
    {
      do
      {
        while ( *(_BYTE *)(v29 + 4) )
        {
          v33 = *(_DWORD *)v29;
          sub_753C70((__int64 *)(a1 + 104), &v33);
          v29 += 5;
          if ( v29 == v30 )
            goto LABEL_35;
        }
        v32 = *(_DWORD *)v29;
        sub_753C70((__int64 *)(a1 + 48), &v32);
        v29 += 5;
      }
      while ( v29 != v30 );
LABEL_35:
      v28 = *(_DWORD *)(a1 + 164);
    }
  }
  *(_DWORD *)(a1 + 164) = v28 | 1;
LABEL_37:
  if ( src )
  {
    *(_QWORD *)&v36 = 0;
    qfree(src);
  }
  return v37 - __readfsqword(0x28u);
}

