__int64 __fastcall sub_1AF6C20(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int16 v8; // ax
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 i; // rbx
  __int64 v15; // r12
  __int64 *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int8 v20; // al
  _QWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v28; // r15
  _QWORD *v29; // rax
  void **v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rbp
  char ***v34; // rsi
  char ***v35; // rdi
  void **v36; // rbx
  int v37; // eax
  int v38; // eax
  unsigned __int64 *v39; // [rsp+0h] [rbp-218h]
  unsigned __int64 *v40; // [rsp+8h] [rbp-210h]
  void **v42; // [rsp+18h] [rbp-200h]
  int v43; // [rsp+18h] [rbp-200h]
  __int64 *v45; // [rsp+28h] [rbp-1F0h]
  __int64 v46; // [rsp+30h] [rbp-1E8h]
  _BYTE *v47; // [rsp+58h] [rbp-1C0h] BYREF
  _BYTE v48[3]; // [rsp+60h] [rbp-1B8h] BYREF
  int v49; // [rsp+64h] [rbp-1B4h]
  __int64 v50; // [rsp+68h] [rbp-1B0h]
  __int64 v51; // [rsp+70h] [rbp-1A8h]
  _QWORD v52[2]; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v53; // [rsp+90h] [rbp-188h]
  void *v54; // [rsp+98h] [rbp-180h]
  __int64 v55; // [rsp+A0h] [rbp-178h]
  _BYTE v56[136]; // [rsp+A8h] [rbp-170h] BYREF
  _QWORD v57[2]; // [rsp+130h] [rbp-E8h] BYREF
  unsigned int v58; // [rsp+140h] [rbp-D8h]
  void *ptr; // [rsp+148h] [rbp-D0h]
  __int64 v60; // [rsp+150h] [rbp-C8h]
  _BYTE v61[192]; // [rsp+158h] [rbp-C0h] BYREF

  v54 = v56;
  v55 = 0x1000000000LL;
  v60 = 0x1000000000LL;
  v52[0] = 0;
  *(_WORD *)v48 = *(_WORD *)v48 & 0xFE00 | 0x1A;
  v52[1] = 0;
  v53 = 0;
  v57[0] = 0;
  v57[1] = 0;
  v58 = 0;
  ptr = v61;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v50 = a4;
  v49 = a3;
  v51 = 0;
  v8 = *(_WORD *)&v48[1] & 0xF801 | 2;
  v48[1] = v48[1] & 1 | 2;
  v48[2] = HIBYTE(v8) & 0xF7;
  v9 = sub_B62360((__int64)v48);
  v47 = v48;
  v48[1] = (v9 << 6) | v48[1] & 0x3F;
  v48[2] = v48[2] & 0xF8 | (v9 >> 2) & 7;
  sub_1A679B0(a1, a3, (__int64)&v47, 1u, (__int64)v52, (__int64)v57);
  v39 = (unsigned __int64 *)v54;
  v40 = (unsigned __int64 *)((char *)v54 + 8 * (unsigned int)v55);
  if ( v54 != v40 )
  {
    do
    {
      for ( i = sub_B94670(*v39, *a2, v10, v11, v12, v13); i; i = v16[1] )
      {
        v15 = i;
        v16 = (__int64 *)(i & 0xFFFFFFFFFFFFFFF8LL);
        v17 = (__int64)v16;
        v18 = (v15 >> 2) & 1;
        if ( (_DWORD)v18 )
        {
          v17 = 0;
          if ( v16 )
            v17 = *v16;
        }
        v19 = v17;
        v20 = *(_BYTE *)(v17 + 28) & 0x7F;
        v10 = (unsigned int)v20 - 53;
        if ( (unsigned int)v10 <= 1 )
        {
          v19 = *(_QWORD *)(v17 + 64);
          v20 = *(_BYTE *)(v19 + 28) & 0x7F;
        }
        if ( ((v20 + 102) & 0x7Fu) <= 1 )
        {
          if ( (*(_BYTE *)(v17 + 8) & 6) != 0 && !sub_1A427C0(a1, v17, 0, v11, v12, v13) )
          {
            v28 = v17;
            while ( v17 == v28 || !sub_1A468F0(a1, v28, v10, v11, v12, v13) )
            {
              v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
              LOBYTE(v11) = v28 != 0;
              if ( v17 == v28 || v28 == 0 )
                goto LABEL_17;
            }
            if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 53 <= 1 )
              v19 = *(_QWORD *)(v28 + 64);
          }
          if ( *(_DWORD *)(a5 + 12) <= *(_DWORD *)(a5 + 8) )
          {
            v42 = (void **)(a5 + 16);
            v22 = sub_2237400(a5, a5 + 16, 0, 80, &v47);
            v29 = (_QWORD *)(v22 + 80LL * *(unsigned int *)(a5 + 8));
            v29[1] = 0x800000000LL;
            *v29 = v29 + 2;
            v13 = *(_QWORD *)a5;
            v30 = (void **)(*(_QWORD *)a5 + 80LL * *(unsigned int *)(a5 + 8));
            if ( *(void ***)a5 != v30 )
            {
              v45 = v16;
              v31 = *(_QWORD *)a5 + 80LL * *(unsigned int *)(a5 + 8);
              v32 = v22;
              v46 = a5;
              v33 = *(_QWORD *)a5;
              do
              {
                while ( 1 )
                {
                  *(_DWORD *)(v32 + 8) = 0;
                  *(_QWORD *)v32 = v32 + 16;
                  *(_DWORD *)(v32 + 12) = 8;
                  if ( *(_DWORD *)(v33 + 8) )
                    break;
                  v33 += 80;
                  v32 += 80;
                  if ( v31 == v33 )
                    goto LABEL_37;
                }
                v34 = (char ***)v33;
                v35 = (char ***)v32;
                v33 += 80;
                v32 += 80;
                sub_183F920(v35, v34);
              }
              while ( v31 != v33 );
LABEL_37:
              a5 = v46;
              v16 = v45;
              v30 = (void **)(*(_QWORD *)v46 + 80LL * *(unsigned int *)(v46 + 8));
              if ( *(void ***)v46 != v30 )
              {
                v36 = *(void ***)v46;
                do
                {
                  while ( 1 )
                  {
                    v30 -= 10;
                    if ( *v30 == v30 + 2 )
                      break;
                    free(*v30);
                    if ( v30 == v36 )
                    {
                      v16 = v45;
                      a5 = v46;
                      v30 = *(void ***)v46;
                      goto LABEL_42;
                    }
                  }
                }
                while ( v30 != v36 );
                v16 = v45;
                a5 = v46;
                v30 = *(void ***)v46;
              }
            }
LABEL_42:
            v37 = (int)v47;
            if ( v42 != v30 )
            {
              v43 = (int)v47;
              free(v30);
              v37 = v43;
            }
            *(_DWORD *)(a5 + 12) = v37;
            v38 = *(_DWORD *)(a5 + 8);
            *(_QWORD *)a5 = v22;
            v23 = (unsigned int)(v38 + 1);
            *(_DWORD *)(a5 + 8) = v23;
          }
          else
          {
            v21 = (_QWORD *)(*(_QWORD *)a5 + 80LL * *(unsigned int *)(a5 + 8));
            v21[1] = 0x800000000LL;
            *v21 = v21 + 2;
            v22 = *(_QWORD *)a5;
            v23 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
            *(_DWORD *)(a5 + 8) = v23;
          }
          v24 = v19 | 3;
          v47 = (_BYTE *)v24;
          v25 = v22 + 80 * v23 - 80;
          v26 = *(unsigned int *)(v25 + 8);
          v11 = *(unsigned int *)(v25 + 12);
          if ( v26 + 1 > v11 )
          {
            sub_2237220(v25, v25 + 16, v26 + 1, 8);
            v26 = *(unsigned int *)(v25 + 8);
          }
          v10 = *(_QWORD *)v25;
          *(_QWORD *)(*(_QWORD *)v25 + 8 * v26) = v24;
          ++*(_DWORD *)(v25 + 8);
        }
LABEL_17:
        if ( !(_DWORD)v18 )
          break;
        if ( !v16 )
          break;
      }
      ++v39;
    }
    while ( v40 != v39 );
  }
  if ( ptr != v61 )
    free(ptr);
  operator delete(v57[0], 8LL * v58, 8);
  if ( v54 != v56 )
    free(v54);
  return operator delete(v52[0], 8LL * v53, 8);
}
