__int64 __fastcall sub_A1380(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r12
  _DWORD *v14; // rdi
  _DWORD *v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r15d
  _DWORD *v28; // rax
  _DWORD *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  int v32; // eax
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rbp
  __int64 *v39; // r12
  __int64 *v40; // rbx
  __int64 v41; // r14
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  void *v46; // r14
  __int64 v47; // rdi
  int v49; // [rsp+10h] [rbp-58h]
  int v50; // [rsp+14h] [rbp-54h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  _QWORD *v52; // [rsp+18h] [rbp-50h]
  __int64 *v53; // [rsp+20h] [rbp-48h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v1 != 53 || *(_BYTE *)(v1 + 48) != 12 )
  {
    if ( !under_debugger )
      sub_383060(50030);
    goto LABEL_68;
  }
  v2 = *(__int64 **)(v1 + 56);
  v50 = 0;
  v3 = a1;
  if ( v2[4] )
  {
    v49 = 0;
    v4 = 0;
    do
    {
      v5 = 4 * v4;
      v6 = *(_DWORD *)(v2[3] + 4 * v4);
      v7 = *(_QWORD *)(a1 + 64);
      if ( v6 >= *(_DWORD *)(v7 + 64) )
      {
        if ( !under_debugger )
          sub_383060(52719);
        goto LABEL_68;
      }
      v8 = 0;
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v6);
      v10 = sub_1120C0(v9, 0);
      v12 = *(unsigned int *)(v10 + 72);
      v13 = (_QWORD *)v10;
      if ( v6 == (_DWORD)v12 )
      {
        ++v49;
      }
      else
      {
        v14 = (_DWORD *)v2[3];
        v15 = &v14[v2[4]];
        if ( v14 == v15 )
          goto LABEL_41;
        v16 = (_DWORD *)v2[3];
        while ( (_DWORD)v12 != *v16 )
        {
          if ( v15 == ++v16 )
            goto LABEL_41;
        }
        if ( v15 == v16 )
        {
LABEL_41:
          ++v49;
          v14[v4] = v12;
        }
        else
        {
          v17 = *v2;
          v18 = (__int64 *)(*v2 + 24LL * (int)(v16 - v14));
          v19 = 24 * v4;
          v20 = (__int64 *)(*v2 + 24 * v4);
          v21 = v20[1];
          if ( v21 )
          {
            v22 = v18[1];
            v23 = *v20;
            if ( v22 && 8 * v21 )
            {
              v55 = v19;
              v38 = v20;
              v52 = v13;
              v39 = (__int64 *)*v20;
              v54 = v9;
              v40 = v18;
              while ( 1 )
              {
                v41 = *v39;
                v42 = (_QWORD *)(*v40 + 8 * v22);
                if ( (_QWORD *)*v40 != v42 )
                {
                  v43 = (_QWORD *)*v40;
                  while ( v41 != *v43 )
                  {
                    if ( v42 == ++v43 )
                      goto LABEL_54;
                  }
                  if ( v42 != v43 )
                    break;
                }
LABEL_54:
                if ( v40[2] < (unsigned __int64)(v22 + 1) )
                {
                  v44 = qvector_reserve((__int64)v40, *v40, v22 + 1, 8);
                  v45 = v40[1];
                  *v40 = v44;
                  v42 = (_QWORD *)(v44 + 8 * v45);
                }
                *v42 = v41;
                ++v39;
                v22 = v40[1] + 1;
                v40[1] = v22;
                if ( v39 == (__int64 *)(*v38 + 8 * v38[1]) )
                {
                  v17 = *v2;
                  v13 = v52;
                  v9 = v54;
                  v20 = (__int64 *)(*v2 + v55);
                  v23 = *v20;
                  goto LABEL_14;
                }
              }
              if ( !under_debugger )
                sub_383060(50031);
LABEL_68:
              BUG();
            }
          }
          else
          {
            v35 = *v18;
            v51 = v19;
            if ( *v18 )
            {
              v18[1] = 0;
              v53 = v18;
              qfree(v35);
              *v53 = 0;
              v53[2] = 0;
              v17 = *v2;
              v20 = (__int64 *)(*v2 + v51);
            }
            v23 = *v20;
          }
LABEL_14:
          if ( v23 )
          {
            v20[1] = 0;
            qfree(v23);
            v17 = *v2;
          }
          memmove(v20, v20 + 3, v17 + 24 * v2[1] - (_QWORD)v20 - 24);
          v24 = v2[3];
          v25 = v2[4];
          --v2[1];
          memmove((void *)(v5 + v24), (const void *)(v5 + v24 + 4), 4 * v25 - 4 - v5);
          --v2[4];
        }
        v8 = v13[43];
        v26 = v13[44];
        v11 = (_DWORD *)(v8 + 4 * v26);
        v27 = *(_DWORD *)(a1 + 72);
        if ( (_DWORD *)v8 == v11 )
          goto LABEL_38;
        v28 = (_DWORD *)v13[43];
        while ( v27 != *v28 )
        {
          if ( v11 == ++v28 )
            goto LABEL_38;
        }
        if ( v11 == v28 )
        {
LABEL_38:
          v34 = v26 + 1;
          if ( v13[45] < v34 )
          {
            v36 = qvector_reserve((__int64)(v13 + 43), v8, v34, 4);
            v37 = v13[44];
            v13[43] = v36;
            v11 = (_DWORD *)(v36 + 4 * v37);
          }
          *v11 = v27;
          ++v13[44];
          v27 = *(_DWORD *)(a1 + 72);
        }
        v29 = *(_DWORD **)(v9 + 344);
        v30 = *(_QWORD *)(v9 + 352);
        v12 = (__int64)&v29[v30];
        if ( v29 != (_DWORD *)v12 )
        {
          while ( v27 != *v29 )
          {
            if ( (_DWORD *)v12 == ++v29 )
              goto LABEL_28;
          }
          if ( v29 != (_DWORD *)v12 )
          {
            v8 = (__int64)(v29 + 1);
            memmove(v29, v29 + 1, v12 - (_QWORD)v29 - 4);
            v30 = *(_QWORD *)(v9 + 352) - 1LL;
            *(_QWORD *)(v9 + 352) = v30;
          }
        }
LABEL_28:
        if ( !v30 )
          **(_DWORD **)(v9 + 64) |= 0x400u;
        ++v50;
      }
      v4 = v49;
      v31 = v2[4];
    }
    while ( v49 < v31 );
    v3 = a1;
    if ( v50 > 0 )
    {
      v46 = nullptr;
      if ( v31 )
      {
        v46 = (void *)qalloc_or_throw(4 * v31, v8, v12, (__int64)v11);
        memcpy(v46, (const void *)v2[3], 4 * v31);
      }
      v47 = *(_QWORD *)(a1 + 368);
      if ( v47 )
      {
        *(_QWORD *)(a1 + 376) = 0;
        qfree(v47);
      }
      *(_QWORD *)(a1 + 368) = v46;
      *(__m128i *)(a1 + 376) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
    }
    v1 = *(_QWORD *)(a1 + 56);
  }
  if ( (unsigned int)sub_167810(v3, v1, 6) )
  {
    v32 = *(_DWORD *)(v3 + 24);
    BYTE1(v32) &= ~2u;
    LOBYTE(v32) = v32 | 0x80;
    *(_DWORD *)(v3 + 24) = v32;
  }
  return (unsigned int)v50;
}
