void __fastcall sub_147CDF0(
        __int64 a1,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        __m128i a7,
        double a8)
{
  __int64 v10; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // rbx
  _QWORD *i; // r15
  __int64 v14; // r14
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 *v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  void *v34; // rdi
  __int64 v35; // rax
  unsigned __int8 *v38; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v39; // [rsp+8h] [rbp-F0h]
  __int64 v40; // [rsp+10h] [rbp-E8h]
  __int64 v41; // [rsp+10h] [rbp-E8h]
  __int64 v42; // [rsp+18h] [rbp-E0h]
  __int64 v43; // [rsp+18h] [rbp-E0h]
  __int64 v44; // [rsp+24h] [rbp-D4h] BYREF
  char v45; // [rsp+2Ch] [rbp-CCh]
  int v46[4]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v47; // [rsp+40h] [rbp-B8h]
  __m128i v48; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v49; // [rsp+60h] [rbp-98h]
  char v50; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v51; // [rsp+70h] [rbp-88h] BYREF
  __int64 v52; // [rsp+78h] [rbp-80h]

  v10 = (unsigned int)a2[4];
  if ( a5 && !(_DWORD)v10 )
  {
    if ( !*a2 || !a2[1] )
      return;
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(_QWORD *)(v25 + 56);
    v27 = *(__int64 **)(v25 + 88);
    sub_13DBB50(*a2, (__int64)v46, v27, v26, 0, a7, a8);
    if ( v47 == 20 )
    {
      sub_13DC730(&v48, v46[0], v27, v26, 0, a7, a8);
      if ( v50 )
      {
        if ( v49 == 20 )
        {
          sub_1564820(&v51, a1, (unsigned int)*a2, a3);
          v35 = *(_QWORD *)a2;
          v45 = 1;
          v44 = v35;
          sub_AEC610((__int64 *)&v51, &v44);
          sub_AEA040((__int64)&v51);
          return;
        }
      }
    }
    v10 = (unsigned int)a2[4];
  }
  v11 = *((_QWORD **)a2 + 1);
  v12 = &v11[v10];
  if ( v12 != v11 )
  {
    for ( i = *((_QWORD **)a2 + 1); v12 != i; ++i )
    {
      while ( 1 )
      {
        v14 = *i;
        if ( (*(_BYTE *)(*i + 35LL) & 2) == 0 )
          break;
        sub_1564820(&v51, a1, *(unsigned int *)(v14 + 24), a4);
        v15 = v51;
        if ( !v51 )
        {
          v18 = v52;
          v19 = *(_DWORD *)(v52 + 14976);
          if ( v19 )
          {
            v20 = (unsigned int)(v19 - 1);
            *(_DWORD *)(v52 + 14976) = v20;
            v15 = *(unsigned __int8 **)(v18 + 8 * v20 + 14848);
            v21 = *((unsigned int *)v15 + 134);
            *v15 = 0;
            v22 = *((_QWORD *)v15 + 66);
            *((_DWORD *)v15 + 106) = 0;
            v23 = v22 + (v21 << 6);
            while ( v22 != v23 )
            {
              while ( 1 )
              {
                v23 -= 64;
                v24 = *(void **)(v23 + 24);
                if ( v24 == (void *)(v23 + 40) )
                  break;
                v42 = v23;
                v40 = v22;
                v38 = v15;
                operator delete(v24);
                v22 = v40;
                v23 = v42;
                v15 = v38;
                if ( v40 == v42 )
                  goto LABEL_21;
              }
            }
LABEL_21:
            *((_DWORD *)v15 + 134) = 0;
LABEL_27:
            v51 = v15;
            goto LABEL_13;
          }
LABEL_26:
          v15 = (unsigned __int8 *)operator new(0x3A0u);
          *v15 = 0;
          *((_QWORD *)v15 + 12) = v15 + 112;
          *((_QWORD *)v15 + 16) = v15 + 144;
          *((_QWORD *)v15 + 20) = v15 + 176;
          *((_QWORD *)v15 + 24) = v15 + 208;
          *((_QWORD *)v15 + 28) = v15 + 240;
          *((_QWORD *)v15 + 32) = v15 + 272;
          *((_QWORD *)v15 + 36) = v15 + 304;
          *((_QWORD *)v15 + 40) = v15 + 336;
          *((_QWORD *)v15 + 44) = v15 + 368;
          *((_QWORD *)v15 + 48) = v15 + 400;
          *((_QWORD *)v15 + 52) = v15 + 432;
          *((_QWORD *)v15 + 13) = 0;
          v15[112] = 0;
          *((_QWORD *)v15 + 17) = 0;
          v15[144] = 0;
          *((_QWORD *)v15 + 21) = 0;
          v15[176] = 0;
          *((_QWORD *)v15 + 25) = 0;
          v15[208] = 0;
          *((_QWORD *)v15 + 29) = 0;
          v15[240] = 0;
          *((_QWORD *)v15 + 33) = 0;
          v15[272] = 0;
          *((_QWORD *)v15 + 37) = 0;
          v15[304] = 0;
          *((_QWORD *)v15 + 41) = 0;
          v15[336] = 0;
          *((_QWORD *)v15 + 45) = 0;
          v15[368] = 0;
          *((_QWORD *)v15 + 49) = 0;
          v15[400] = 0;
          *((_QWORD *)v15 + 53) = 0x800000000LL;
          *((_QWORD *)v15 + 66) = v15 + 544;
          *((_QWORD *)v15 + 67) = 0x600000000LL;
          goto LABEL_27;
        }
LABEL_13:
        ++i;
        v15[*v15 + 1] = 16;
        v16 = v51;
        v17 = *v51;
        *v51 = v17 + 1;
        *(_QWORD *)&v16[8 * v17 + 16] = v14;
        sub_AEA040((__int64)&v51);
        *(_BYTE *)(v14 + 58) |= 1u;
        if ( v12 == i )
          return;
      }
      if ( (unsigned __int8)((*(_BYTE *)(v14 + 34) & 0xF) - 2) <= 1u || (*(_BYTE *)(*i + 35LL) & 1) != 0 )
      {
        if ( *(_WORD *)(*(_QWORD *)(v14 + 72) + 8LL) != 420 )
        {
          sub_1564820(&v51, a1, *(unsigned int *)(v14 + 24), a3);
          v15 = v51;
          if ( !v51 )
          {
            v28 = v52;
            v29 = *(_DWORD *)(v52 + 14976);
            if ( v29 )
            {
              v30 = (unsigned int)(v29 - 1);
              *(_DWORD *)(v52 + 14976) = v30;
              v15 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
              v31 = *((unsigned int *)v15 + 134);
              *v15 = 0;
              v32 = *((_QWORD *)v15 + 66);
              *((_DWORD *)v15 + 106) = 0;
              v33 = v32 + (v31 << 6);
              while ( v32 != v33 )
              {
                while ( 1 )
                {
                  v33 -= 64;
                  v34 = *(void **)(v33 + 24);
                  if ( v34 == (void *)(v33 + 40) )
                    break;
                  v43 = v32;
                  v41 = v33;
                  v39 = v15;
                  operator delete(v34);
                  v33 = v41;
                  v32 = v43;
                  v15 = v39;
                  if ( v43 == v41 )
                  {
                    *((_DWORD *)v39 + 134) = 0;
                    goto LABEL_27;
                  }
                }
              }
              goto LABEL_21;
            }
            goto LABEL_26;
          }
          goto LABEL_13;
        }
        if ( a6 )
        {
          sub_1815810(*(_QWORD *)(a1 + 96), *i);
          *(_BYTE *)(v14 + 58) |= 1u;
        }
      }
    }
  }
}
