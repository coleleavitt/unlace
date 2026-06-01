__int64 __fastcall sub_CEACE0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  void **v6; // r8
  void **v7; // r15
  void **v8; // r12
  __int64 v9; // r13
  unsigned int v10; // edx
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  char v17; // al
  int v18; // eax
  int v19; // eax
  __int64 *v20; // rsi
  void **v21; // rbx
  void **v22; // r12
  void (__fastcall ***v23)(void *); // rbp
  __int64 v25; // rbp
  char *v26; // rax
  int *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v32[2]; // [rsp+0h] [rbp-E8h]
  _QWORD *v33; // [rsp+8h] [rbp-E0h]
  int v34; // [rsp+10h] [rbp-D8h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  int v37[2]; // [rsp+28h] [rbp-C0h]
  int v38; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-B0h]
  void *v40; // [rsp+40h] [rbp-A8h]
  int v41; // [rsp+48h] [rbp-A0h]

  v6 = *(void ***)(a2 + 24);
  *(_QWORD *)v37 = 0x1000000000LL;
  v7 = v6;
  v34 = a2;
  v8 = &v6[*(unsigned int *)(a2 + 32)];
  ptr = &v38;
  if ( v8 == v6 )
    goto LABEL_30;
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = (__int64 *)*v7;
      if ( *v7 )
        ++*((_DWORD *)v13 + 8);
      if ( (*((_BYTE *)v13 + 123) & 0x20) == 0 )
      {
        v9 = v13[2];
        goto LABEL_4;
      }
      v14 = v13[11];
      v15 = *v13;
      if ( !v14 )
        goto LABEL_24;
      v16 = v13[11];
      v17 = *(_BYTE *)(v14 + 3) >> 6;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_16;
      }
      else
      {
        do
        {
          v16 = *(_QWORD *)(v16 + 16);
          v17 = *(_BYTE *)(v16 + 3) >> 6;
        }
        while ( !v17 );
        if ( v17 != 1 )
        {
LABEL_16:
          if ( v17 == 2 )
            v18 = *(_DWORD *)(v16 + 4) - 1;
          else
            v18 = *(_DWORD *)(v16 + 4);
          if ( !v18 )
          {
LABEL_28:
            v14 = 0;
            goto LABEL_24;
          }
          goto LABEL_19;
        }
      }
      if ( *(_DWORD *)(v16 + 4) == -1 )
        goto LABEL_28;
LABEL_19:
      v19 = 17;
      while ( 1 )
      {
        if ( *(char *)(v14 + 3) < 0 )
        {
          if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
          {
            v20 = *(__int64 **)(v14 + 16);
            goto LABEL_23;
          }
          goto LABEL_53;
        }
        if ( !*(_DWORD *)(v14 + 4) )
          break;
LABEL_53:
        v14 = *(_QWORD *)(v14 + 16);
        if ( !--v19 )
        {
          sub_233F80((__int64 *)(v15 + 616), (_DWORD *)v13 + 22);
          v15 = *v13;
          v20 = *(__int64 **)(v13[11] + 16);
          goto LABEL_23;
        }
      }
      v20 = (__int64 *)(v14 + 8);
LABEL_23:
      v14 = *v20;
LABEL_24:
      v9 = sub_132F960(v15, v14);
LABEL_4:
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      v10 = v37[0];
      if ( v37[0] >= (unsigned int)v37[1] )
      {
        v25 = (unsigned int)(2 * v37[1]);
        v26 = (char *)sub_186B270(8 * v25);
        v10 = v37[0];
        v27 = (int *)ptr;
        v11 = v26;
        if ( v37[0] )
        {
          if ( (unsigned int)(v37[0] - 1) <= 2 || v26 == (char *)ptr + 8 )
          {
            v30 = 0;
            do
            {
              a6 = *(_QWORD *)&v27[v30 / 4];
              v11[v30 / 8] = a6;
              v30 += 8LL;
            }
            while ( 8LL * v10 != v30 );
          }
          else
          {
            v28 = 0;
            a6 = 16LL * ((unsigned int)v37[0] >> 1);
            do
            {
              *(__m128i *)&v11[v28 / 8] = _mm_loadu_si128((const __m128i *)&v27[v28 / 4]);
              v28 += 16LL;
            }
            while ( a6 != v28 );
            if ( (v10 & 1) != 0 )
            {
              v29 = v10 & 0xFFFFFFFE;
              a6 = *(_QWORD *)&v27[2 * v29];
              v11[v29] = a6;
            }
          }
        }
        if ( v27 != &v38 && v27 )
        {
          v33 = v11;
          sub_186B220(v27);
          v10 = v37[0];
          v11 = v33;
        }
        ptr = v11;
        v37[1] = v25;
      }
      else
      {
        v11 = ptr;
      }
      v11[v10] = v9;
      v12 = (*((_DWORD *)v13 + 8))-- == 1;
      v37[0] = v10 + 1;
      if ( v12 )
      {
        ++v7;
        sub_ED44E0(v13);
        sub_186B220(v13);
        if ( v8 == v7 )
          goto LABEL_30;
        continue;
      }
      break;
    }
    if ( v8 != ++v7 )
      continue;
    break;
  }
LABEL_30:
  sub_132FA30(a1, a3, v34 + 16, (int)&ptr, (int)v6, a6, a1, (int)v33, v34, a3, (int)ptr, v37[0], v38, v39, v40, v41);
  v21 = (void **)ptr;
  v22 = (void **)((char *)ptr + 8 * (unsigned int)v37[0]);
  if ( ptr < v22 )
  {
    do
    {
      while ( 1 )
      {
        v23 = (void (__fastcall ***)(void *))*v21;
        if ( *v21 )
        {
          v12 = (*((_DWORD *)v23 + 2))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_36;
      }
      ++v21;
      (**v23)(v23);
      sub_186B220(v23);
    }
    while ( v21 < v22 );
LABEL_36:
    v21 = (void **)ptr;
  }
  if ( v21 != (void **)&v38 && v21 )
    sub_186B220(v21);
  return *(_QWORD *)v32;
}

