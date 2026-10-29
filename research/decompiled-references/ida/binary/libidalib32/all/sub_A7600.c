__int64 __fastcall sub_A7600(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // si
  __int64 v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // r14
  size_t v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r12
  size_t v25; // rbp
  const void *v26; // r13
  __int64 v27; // r12
  unsigned __int64 v28; // rsi
  __int64 v29; // rbp
  const char *v30; // rsi
  const char *v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r14
  __int128 v41; // xmm0
  __int64 v42; // r13
  __int64 v43; // r15
  __int64 v44; // rdx
  int v45; // eax
  size_t v46; // rbp
  void *v47; // rax
  __int64 v48; // rbp
  size_t v49; // r14
  void *v50; // r12
  __int64 i; // rbx
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-78h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]

  v5 = *(_QWORD **)(a1 + 8);
  v7 = 16 * ((v5[15] == 0) + ((__int64)(v5[15] - v5[11]) >> 3) - 1)
     + ((__int64)(v5[10] - v5[8]) >> 5)
     + ((__int64)(v5[12] - v5[13]) >> 5);
  if ( *(_QWORD *)a2 == v7 + 1 )
    return 0;
  v8 = sub_A0850((__int64)v5, (unsigned int)v7 - (unsigned int)*(_QWORD *)a2);
  v9 = *a3;
  v10 = *(_DWORD *)(v8 + 8);
  v11 = v8;
  v12 = a3[1];
  if ( a3[2] < (unsigned __int64)(v12 + 1) )
  {
    v15 = qvector_reserve();
    *a3 = v15;
    v9 = v15;
    v12 = a3[1];
  }
  *(_BYTE *)(v9 + v12) = v10;
  ++a3[1];
  sub_9D5D0(a3);
  sub_9D6E0(a3);
  sub_9D6E0(a3);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v11 + 12);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v11 + 16);
  v13 = *(_QWORD *)v11;
  ++*(_QWORD *)a2;
  *(_QWORD *)(a2 + 16) = v13;
  if ( *(_DWORD *)(v11 + 8) )
  {
    switch ( *(_DWORD *)(v11 + 8) )
    {
      case 1:
        v16 = *(_QWORD *)(v11 + 24);
        if ( !v16 )
          goto LABEL_31;
        v17 = 7;
        if ( *(_QWORD *)(v16 + 32) != *(_DWORD *)(dbg + 64LL) )
          v17 = 3;
        sub_9BE60(a3, v17);
        v18 = *(_QWORD *)(v16 + 8);
        sub_9D5D0(a3);
        if ( (_DWORD)v18 )
          sub_9CF80(a3, *(const void **)v16, (int)v18);
        v19 = *(_QWORD *)(v16 + 32);
        v20 = 0;
        sub_9D5D0(a3);
        v21 = 32LL * (unsigned int)v19;
        if ( (int)v19 > 0 )
        {
          do
          {
            v23 = v20 + *(_QWORD *)(v16 + 24);
            sub_9D5D0(a3);
            if ( *(_DWORD *)v23 == -2 )
            {
              sub_9D6E0(a3);
            }
            else if ( *(_DWORD *)v23 != -3 )
            {
              sub_9D5D0(a3);
              v22 = *(_QWORD *)(v23 + 16);
              if ( v22 )
                sub_9CF80(a3, *(const void **)(v23 + 8), v22);
            }
            v20 += 32;
          }
          while ( v20 != v21 );
        }
        sub_9D5D0(a3);
        v54 = *(_QWORD *)(v16 + 80);
        if ( !v54 )
          return 1;
        v40 = 0;
        v56 = 32 * v54;
        v41 = 0;
        v55 = qalloc_or_throw();
        v42 = v55;
        v43 = v55;
        do
        {
          v44 = *(_QWORD *)(v16 + 72) + 32 * v40;
          v45 = *(_DWORD *)v44;
          *(_QWORD *)(v43 + 8) = 0;
          *(_OWORD *)(v43 + 16) = v41;
          *(_DWORD *)v43 = v45;
          v46 = *(_QWORD *)(v44 + 16);
          if ( v46 )
          {
            v53 = v44;
            v47 = (void *)qalloc_or_throw();
            *(_QWORD *)(v43 + 24) = v46;
            *(_QWORD *)(v43 + 8) = v47;
            memcpy(v47, *(const void **)(v53 + 8), v46);
            *(_QWORD *)(v43 + 16) = v46;
            v41 = 0;
          }
          ++v40;
          v43 += 32;
        }
        while ( v54 != v40 );
        v48 = v55;
        if ( !v56 )
          goto LABEL_65;
        do
        {
          v49 = *(_QWORD *)(v48 + 16);
          if ( v49 )
          {
            v50 = (void *)qalloc_or_throw();
            memcpy(v50, *(const void **)(v48 + 8), v49);
            sub_9D6E0(a3);
            if ( v49 > 0xFFFFFFFF )
            {
LABEL_73:
              if ( !under_debugger )
              {
                interr();
LABEL_75:
                sub_9BA10();
              }
              goto LABEL_79;
            }
            sub_9D5D0(a3);
            sub_9CF80(a3, v50, v49);
            if ( v50 )
              qfree();
          }
          else
          {
            sub_9D6E0(a3);
            sub_9D5D0(a3);
          }
          v48 += 32;
        }
        while ( v48 != v55 + v56 );
LABEL_65:
        if ( v55 )
        {
          for ( i = 0; i != v54; ++i )
          {
            if ( *(_QWORD *)(v42 + 8) )
            {
              *(_QWORD *)(v42 + 16) = 0;
              qfree();
            }
            v42 += 32;
          }
          qfree();
        }
        break;
      case 2:
      case 3:
LABEL_44:
        sub_9D6E0(a3);
        return 1;
      case 4:
        if ( !*(_QWORD *)(v11 + 24) )
          goto LABEL_31;
        sub_9BE60(a3, 1);
        v24 = *(_QWORD *)(v11 + 24);
        sub_9D6E0(a3);
        v25 = *(_QWORD *)(v24 + 16);
        v26 = *(const void **)(v24 + 8);
        if ( HIDWORD(v25) )
        {
          if ( !under_debugger )
          {
            v32 = 5;
            interr();
LABEL_78:
            sub_9B9B0(v32);
          }
LABEL_79:
          BUG();
        }
        sub_9D5D0(a3);
        if ( v25 )
        {
          v27 = a3[1];
          v28 = v27 + v25;
          if ( __CFADD__(v27, v25) )
            v28 = 0x7FFFFFFFFFFFFFFFLL;
          sub_A4E70(a3, v28);
          memcpy((void *)(v27 + *a3), v26, v25);
        }
        break;
      case 5:
        if ( !*(_QWORD *)(v11 + 24) )
          goto LABEL_31;
        sub_9BE60(a3, 1);
        sub_9FB50(a1, v11, a3);
        return 1;
      case 6:
        if ( *(_QWORD *)(v11 + 24) )
        {
          sub_9BE60(a3, 1);
          v29 = *(_QWORD *)(v11 + 24);
          sub_9D6E0(a3);
          sub_9D5D0(a3);
          sub_9D5D0(a3);
          sub_9D5D0(a3);
          switch ( *(_DWORD *)(v29 + 16) & 0xFFFFFFF )
          {
            case 1:
            case 8:
              v31 = s1;
              if ( *(_QWORD *)(v29 + 28) )
                v31 = *(const char **)(v29 + 20);
              v32 = (__int64)a3;
              sub_9D7F0(a3, v31);
              v33 = *(_DWORD *)(v29 + 16) & 0xFFFFFFF;
              if ( (unsigned int)v33 <= 0xB )
              {
                v34 = 2306;
                if ( _bittest64(&v34, v33) )
                {
                  v32 = (__int64)a3;
                  sub_9D6E0(a3);
                  v35 = *(_DWORD *)(v29 + 16) & 0xFFFFFFF;
                  if ( (unsigned int)v35 <= 0xB )
                  {
                    if ( _bittest64(&v34, v35) )
                    {
                      v32 = (__int64)a3;
                      sub_9D5D0(a3);
                      v36 = *(_DWORD *)(v29 + 16) & 0xFFFFFFF;
                      if ( (unsigned int)v36 <= 0xB )
                      {
                        if ( _bittest64(&v34, v36) )
                          goto LABEL_44;
                      }
                    }
                  }
                }
              }
              goto LABEL_78;
            case 2:
            case 4:
              sub_9D5D0(a3);
              return 1;
            case 3:
            case 9:
              v30 = s1;
              if ( *(_QWORD *)(v29 + 28) )
                v30 = *(const char **)(v29 + 20);
              goto LABEL_34;
            case 7:
              sub_9D5D0(a3);
              if ( (*(_DWORD *)(v29 + 16) & 0xFFFFFFF) != 7 )
                goto LABEL_75;
              v37 = a3[1];
              v38 = *(_BYTE *)(v29 + 24);
              v39 = *a3;
              if ( a3[2] < (unsigned __int64)(v37 + 1) )
              {
                v52 = qvector_reserve();
                *a3 = v52;
                v39 = v52;
                v37 = a3[1];
              }
              *(_BYTE *)(v39 + v37) = v38;
              ++a3[1];
              if ( (*(_DWORD *)(v29 + 16) & 0xFFFFFFF) != 7 )
                goto LABEL_75;
              sub_9D6E0(a3);
              if ( (*(_DWORD *)(v29 + 16) & 0xFFFFFFF) != 7 )
                goto LABEL_75;
              v30 = s1;
              if ( *(_QWORD *)(v29 + 44) )
                v30 = *(const char **)(v29 + 36);
LABEL_34:
              sub_9D7F0(a3, v30);
              break;
            default:
              return 1;
          }
        }
        else
        {
LABEL_31:
          sub_9BE60(a3, 0);
        }
        return 1;
      default:
        if ( under_debugger )
          goto LABEL_79;
        interr();
        goto LABEL_73;
    }
  }
  return 1;
}

