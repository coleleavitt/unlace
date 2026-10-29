__int64 __fastcall ask_offset_dialog_t__::vfunc_10(__int64 **a1, const char *a2, int a3)
{
  __int64 *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  __m128i v18; // xmm0
  char v19; // al
  void *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rbx
  void *v27; // rax
  void *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *(__int64 **)a2;
        break;
      case 2:
        v13 = *(__int64 **)a2;
        v14 = operator new(0x58u);
        *(_QWORD *)v14 = 0;
        v15 = v14;
        *(_OWORD *)(v14 + 8) = 0;
        v16 = v13[1];
        v29 = v16;
        if ( v16 )
        {
          v21 = v13[1];
          v22 = qalloc_or_throw(56 * v16);
          *(_QWORD *)v15 = v22;
          v23 = v22;
          v24 = 0;
          *(_QWORD *)(v15 + 16) = v21;
          while ( 1 )
          {
            v25 = 56 * v24 + v23;
            v26 = *v13 + 56 * v24;
            *(_QWORD *)v25 = 0;
            *(_OWORD *)(v25 + 8) = 0;
            if ( *(_QWORD *)(v26 + 8) )
            {
              na = *(_QWORD *)(v26 + 8);
              v27 = (void *)qalloc_or_throw(na);
              *(_QWORD *)v25 = v27;
              *(_QWORD *)(v25 + 16) = na;
              memcpy(v27, *(const void **)v26, na);
              *(_QWORD *)(v25 + 8) = na;
            }
            *(_QWORD *)(v25 + 24) = 0;
            *(_OWORD *)(v25 + 32) = 0;
            if ( *(_QWORD *)(v26 + 32) )
            {
              n = *(_QWORD *)(v26 + 32);
              v28 = (void *)qalloc_or_throw(n);
              *(_QWORD *)(v25 + 24) = v28;
              *(_QWORD *)(v25 + 40) = n;
              memcpy(v28, *(const void **)(v26 + 24), n);
              *(_QWORD *)(v25 + 32) = n;
            }
            ++v24;
            *(_QWORD *)(v25 + 48) = *(_QWORD *)(v26 + 48);
            if ( v29 == v24 )
              break;
            v23 = *(_QWORD *)v15;
          }
          *(_QWORD *)(v15 + 8) = v29;
        }
        *(_QWORD *)(v15 + 24) = 0;
        *(_OWORD *)(v15 + 32) = 0;
        v17 = v13[4];
        if ( v17 )
        {
          v20 = (void *)qalloc_or_throw(4 * v17);
          *(_QWORD *)(v15 + 24) = v20;
          *(_QWORD *)(v15 + 40) = v17;
          memcpy(v20, (const void *)v13[3], 4 * v17);
          *(_QWORD *)(v15 + 32) = v17;
        }
        *(_DWORD *)(v15 + 48) = *((_DWORD *)v13 + 12);
        *(_BYTE *)(v15 + 52) = *((_BYTE *)v13 + 52);
        v18 = _mm_loadu_si128((const __m128i *)(v13 + 7));
        *(_QWORD *)(v15 + 72) = v13[9];
        v19 = *((_BYTE *)v13 + 80);
        *(__m128i *)(v15 + 56) = v18;
        *(_BYTE *)(v15 + 80) = v19;
        *a1 = (__int64 *)v15;
        break;
      case 3:
        v3 = *a1;
        if ( *a1 )
        {
          v4 = v3[3];
          if ( v4 )
          {
            v3[4] = 0;
            qfree(v4, a2);
          }
          v5 = *v3;
          if ( *v3 )
          {
            v6 = v3[1];
            if ( v6 )
            {
              v7 = 0;
              for ( i = 0; i != v6; ++i )
              {
                v9 = (__int64 *)(v5 + v7);
                v10 = *(_QWORD *)(v5 + v7 + 24);
                if ( v10 )
                {
                  v9[4] = 0;
                  qfree(v10, a2);
                }
                v11 = *v9;
                if ( *v9 )
                {
                  v9[1] = 0;
                  qfree(v11, a2);
                }
                v5 = *v3;
                v7 += 56;
              }
            }
            v3[1] = 0;
            qfree(v5, a2);
          }
          operator delete(v3, 0x58u);
        }
        break;
    }
  }
  else
  {
    *a1 = (__int64 *)&`typeinfo for'menu_tilist_makedata(action_ctx_base_t &,unsigned long long)::{lambda(unsigned long,unsigned long,int)#1};
  }
  return 0;
}
