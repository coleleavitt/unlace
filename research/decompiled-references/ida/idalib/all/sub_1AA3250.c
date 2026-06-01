void __fastcall sub_1AA3250(__int64 *a1)
{
  void *v1; // r13
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // eax
  void *v11; // rcx
  int v12; // edx
  int v13; // eax
  _BYTE *v14; // rax
  char v15; // r14
  char v16; // r15
  bool v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rbp
  bool v20; // zf
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rax
  __int16 v24; // dx
  void *v25; // rdi
  unsigned __int64 v26; // r12
  int v27; // r8d
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __int64 *v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax
  const void *v35; // rsi
  unsigned int v36; // eax
  char v37; // dl
  __int64 v38; // rax
  int v39; // ecx
  const void *v40; // rsi
  void *v41; // rdi
  unsigned int v42; // eax
  __int64 v43; // rdx

  v1 = a1 + 10;
  v3 = *((unsigned __int8 *)a1 + 32);
  if ( (unsigned __int8)v3 <= 0xBu )
  {
    v4 = 3719;
    if ( _bittest64(&v4, v3) )
    {
      v5 = *a1;
      *(__m128i *)(v5 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 1));
      *(_QWORD *)(v5 + 24) = a1[3];
      v6 = *a1;
      *(_DWORD *)(v6 + 272) = *((_DWORD *)a1 + 9);
      *(_BYTE *)(v6 + 276) = *((_BYTE *)a1 + 40);
      *(_DWORD *)(*a1 + 280) = *((_DWORD *)a1 + 11);
      *(_DWORD *)(*a1 + 284) = *((_DWORD *)a1 + 12);
      *(_QWORD *)(*a1 + 288) = *(__int64 *)((char *)a1 + 52);
      v7 = *a1;
      v8 = *a1 + 104;
      if ( (__int64 *)v8 != a1 + 8 )
      {
        v9 = *(_QWORD *)(v7 + 104);
        v10 = *((_DWORD *)a1 + 18);
        if ( v9 == v7 + 120 || (v11 = (void *)a1[8], v11 == v1) )
        {
          if ( *(_DWORD *)(v7 + 116) < v10 )
            sub_2237220(v8, v7 + 120, v10, 8);
          v26 = *(unsigned int *)(v7 + 112);
          v27 = v26;
          if ( *((_DWORD *)a1 + 19) < (unsigned int)v26 )
          {
            sub_2237220(a1 + 8, v1, *(unsigned int *)(v7 + 112), 8);
            v26 = *(unsigned int *)(v7 + 112);
            v27 = *(_DWORD *)(v7 + 112);
          }
          v28 = *((unsigned int *)a1 + 18);
          v29 = v26;
          if ( v28 <= v26 )
            v29 = *((unsigned int *)a1 + 18);
          v30 = 0;
          if ( v29 )
          {
            do
            {
              v31 = (__int64 *)(v30 + a1[8]);
              v32 = (__int64 *)(v30 + *(_QWORD *)(v7 + 104));
              v30 += 8;
              v33 = *v32;
              *v32 = *v31;
              *v31 = v33;
            }
            while ( 8 * v29 != v30 );
          }
          if ( v28 < v26 )
          {
            v34 = *(_QWORD *)(v7 + 104);
            v35 = (const void *)(v34 + 8 * v29);
            if ( v35 != (const void *)(8 * v26 + v34) )
            {
              memcpy((void *)(a1[8] + 8 * v28), v35, 8 * v26 - 8 * v29);
              v27 = *((_DWORD *)a1 + 18) - v28 + v26;
            }
            v20 = *((_BYTE *)a1 + 200) == 0;
            *((_DWORD *)a1 + 18) = v27;
            v14 = (_BYTE *)a1[16];
            *(_DWORD *)(v7 + 112) = v29;
            if ( v20 )
              goto LABEL_8;
            goto LABEL_15;
          }
          if ( v28 > v26 )
          {
            v38 = a1[8];
            v39 = v26;
            v40 = (const void *)(v38 + 8 * v29);
            if ( v40 != (const void *)(8 * v28 + v38) )
            {
              memcpy((void *)(*(_QWORD *)(v7 + 104) + 8 * v26), v40, 8 * v28 - 8 * v29);
              v39 = *(_DWORD *)(v7 + 112);
            }
            v14 = (_BYTE *)a1[16];
            v20 = *((_BYTE *)a1 + 200) == 0;
            *(_DWORD *)(v7 + 112) = v39 + v28 - v26;
            *((_DWORD *)a1 + 18) = v29;
            if ( v20 )
              goto LABEL_8;
            goto LABEL_15;
          }
        }
        else
        {
          *(_QWORD *)(v7 + 104) = v11;
          a1[8] = v9;
          v12 = *(_DWORD *)(v7 + 112);
          *(_DWORD *)(v7 + 112) = v10;
          *((_DWORD *)a1 + 18) = v12;
          v13 = *(_DWORD *)(v7 + 116);
          *(_DWORD *)(v7 + 116) = *((_DWORD *)a1 + 19);
          *((_DWORD *)a1 + 19) = v13;
        }
      }
    }
  }
  v14 = (_BYTE *)a1[16];
  if ( !*((_BYTE *)a1 + 200) )
  {
LABEL_8:
    v15 = *((_BYTE *)a1 + 176);
    v16 = *((_BYTE *)a1 + 196);
    v17 = (a1[17] & 2) != 0;
    goto LABEL_9;
  }
LABEL_15:
  v15 = v14[72];
  v16 = v14[92];
  v17 = (v14[32] & 2) != 0;
LABEL_9:
  v18 = (__int64)(a1 + 19);
  *((_DWORD *)v14 + 8) = *((_DWORD *)a1 + 34);
  v19 = a1[16];
  v20 = *(_BYTE *)(v19 + 64) == 0;
  v21 = v19 + 48;
  *(_QWORD *)(v19 + 40) = a1[18];
  if ( v20 )
  {
    if ( !*((_BYTE *)a1 + 168) )
      goto LABEL_12;
    v36 = *((_DWORD *)a1 + 40);
    *(_DWORD *)(v19 + 56) = v36;
    if ( v36 > 0x40 )
    {
      sub_2205510(v21);
      v23 = a1[16];
      v18 = (__int64)(a1 + 19);
    }
    else
    {
      *(_QWORD *)(v19 + 48) = a1[19];
      v23 = v19;
    }
    v37 = *((_BYTE *)a1 + 164);
    *(_BYTE *)(v19 + 64) = 1;
    *(_BYTE *)(v19 + 60) = v37;
  }
  else
  {
    v22 = *(_DWORD *)(v19 + 56);
    if ( *((_BYTE *)a1 + 168) )
    {
      if ( v22 <= 0x40 && (v42 = *((_DWORD *)a1 + 40), v42 <= 0x40) )
      {
        v43 = a1[19];
        *(_DWORD *)(v19 + 56) = v42;
        v23 = v19;
        *(_QWORD *)(v19 + 48) = v43;
      }
      else
      {
        sub_22056A0(v21, a1 + 19);
        v23 = a1[16];
        v18 = (__int64)(a1 + 19);
      }
      *(_BYTE *)(v19 + 60) = *((_BYTE *)a1 + 164);
    }
    else
    {
      *(_BYTE *)(v19 + 64) = 0;
      if ( v22 <= 0x40 )
      {
LABEL_12:
        v23 = v19;
        goto LABEL_13;
      }
      v41 = *(void **)(v19 + 48);
      v23 = v19;
      if ( v41 )
      {
        operator delete[](v41);
        v23 = a1[16];
        v18 = (__int64)(a1 + 19);
      }
    }
  }
LABEL_13:
  *(_BYTE *)(v19 + 72) = *((_BYTE *)a1 + 176);
  *(_BYTE *)(v19 + 73) = *((_BYTE *)a1 + 177);
  *(_QWORD *)(v23 + 80) = a1[23];
  *(_DWORD *)(v23 + 88) = *((_DWORD *)a1 + 48);
  v24 = *((_WORD *)a1 + 98);
  *(_BYTE *)(v23 + 72) = v15;
  *(_WORD *)(v23 + 92) = v24;
  *(_BYTE *)(a1[16] + 92) = v16;
  *(_BYTE *)(a1[16] + 32) = (2 * v17) | *(_BYTE *)(a1[16] + 32) & 0xFD;
  sub_98E4B0(v18);
  v25 = (void *)a1[8];
  if ( v25 != v1 )
    free(v25);
}
