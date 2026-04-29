__int64 __fastcall sub_9D180(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  _QWORD *v11; // r12
  _DWORD *v12; // rdi
  _DWORD *v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdi
  __int64 v23; // rax
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  int v27; // r15d
  _DWORD *v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  char *v31; // rdx
  unsigned __int64 v32; // rbx
  int v33; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rbp
  __int64 *v40; // r12
  __int64 *v41; // rbx
  __int64 v42; // r14
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // r14
  __int64 v48; // rdi
  int v50; // [rsp+10h] [rbp-58h]
  int v51; // [rsp+14h] [rbp-54h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  _QWORD *v53; // [rsp+18h] [rbp-50h]
  __int64 *v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v1 != 53 || *(_BYTE *)(v1 + 48) != 12 )
  {
    if ( !under_debugger )
      sub_37E160(50030);
    goto LABEL_68;
  }
  v2 = *(__int64 **)(v1 + 56);
  v51 = 0;
  v3 = a1;
  if ( v2[4] )
  {
    v50 = 0;
    v4 = 0;
    do
    {
      v5 = 4 * v4;
      v6 = *(_DWORD *)(v2[3] + 4 * v4);
      v7 = *(_QWORD *)(a1 + 64);
      if ( v6 >= *(_DWORD *)(v7 + 64) )
      {
        if ( !under_debugger )
          sub_37E160(52719);
        goto LABEL_68;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v6);
      v9 = sub_10DEC0(v8, 0);
      v10 = *(_DWORD *)(v9 + 72);
      v11 = (_QWORD *)v9;
      if ( v6 == v10 )
      {
        ++v50;
      }
      else
      {
        v12 = (_DWORD *)v2[3];
        v13 = &v12[v2[4]];
        if ( v12 == v13 )
          goto LABEL_41;
        v14 = (_DWORD *)v2[3];
        while ( v10 != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_41;
        }
        if ( v13 == v14 )
        {
LABEL_41:
          ++v50;
          v12[v4] = v10;
        }
        else
        {
          v15 = *v2;
          v16 = (__int64 *)(*v2 + 24LL * (int)(v14 - v12));
          v17 = 24 * v4;
          v18 = (_QWORD *)(*v2 + 24 * v4);
          v19 = v18[1];
          if ( v19 )
          {
            v20 = v16[1];
            v21 = *v18;
            if ( v20 && 8 * v19 )
            {
              v56 = v17;
              v39 = v18;
              v53 = v11;
              v40 = (__int64 *)*v18;
              v55 = v8;
              v41 = v16;
              while ( 1 )
              {
                v42 = *v40;
                v43 = (_QWORD *)(*v41 + 8 * v20);
                if ( (_QWORD *)*v41 != v43 )
                {
                  v44 = (_QWORD *)*v41;
                  while ( v42 != *v44 )
                  {
                    if ( v43 == ++v44 )
                      goto LABEL_54;
                  }
                  if ( v43 != v44 )
                    break;
                }
LABEL_54:
                if ( v41[2] < (unsigned __int64)(v20 + 1) )
                {
                  v45 = qvector_reserve(v41, *v41, v20 + 1, 8);
                  v46 = v41[1];
                  *v41 = v45;
                  v43 = (_QWORD *)(v45 + 8 * v46);
                }
                *v43 = v42;
                ++v40;
                v20 = v41[1] + 1;
                v41[1] = v20;
                if ( v40 == (__int64 *)(*v39 + 8LL * v39[1]) )
                {
                  v15 = *v2;
                  v11 = v53;
                  v8 = v55;
                  v18 = (_QWORD *)(*v2 + v56);
                  v21 = *v18;
                  goto LABEL_14;
                }
              }
              if ( !under_debugger )
                sub_37E160(50031);
LABEL_68:
              BUG();
            }
          }
          else
          {
            v36 = *v16;
            v52 = v17;
            if ( *v16 )
            {
              v16[1] = 0;
              v54 = v16;
              qfree(v36);
              *v54 = 0;
              v54[2] = 0;
              v15 = *v2;
              v18 = (_QWORD *)(*v2 + v52);
            }
            v21 = *v18;
          }
LABEL_14:
          if ( v21 )
          {
            v18[1] = 0;
            qfree(v21);
            v15 = *v2;
          }
          memmove(v18, v18 + 3, v15 + 24 * v2[1] - (_QWORD)v18 - 24);
          v22 = v2[3];
          v23 = v2[4];
          --v2[1];
          memmove((void *)(v5 + v22), (const void *)(v5 + v22 + 4), 4 * v23 - 4 - v5);
          --v2[4];
        }
        v24 = (_DWORD *)v11[43];
        v25 = v11[44];
        v26 = &v24[v25];
        v27 = *(_DWORD *)(a1 + 72);
        if ( v24 == v26 )
          goto LABEL_38;
        v28 = (_DWORD *)v11[43];
        while ( v27 != *v28 )
        {
          if ( v26 == ++v28 )
            goto LABEL_38;
        }
        if ( v26 == v28 )
        {
LABEL_38:
          v35 = v25 + 1;
          if ( v11[45] < v35 )
          {
            v37 = qvector_reserve(v11 + 43, v24, v35, 4);
            v38 = v11[44];
            v11[43] = v37;
            v26 = (_DWORD *)(v37 + 4 * v38);
          }
          *v26 = v27;
          ++v11[44];
          v27 = *(_DWORD *)(a1 + 72);
        }
        v29 = *(char **)(v8 + 344);
        v30 = *(_QWORD *)(v8 + 352);
        v31 = &v29[4 * v30];
        if ( v29 != v31 )
        {
          while ( v27 != *(_DWORD *)v29 )
          {
            v29 += 4;
            if ( v31 == v29 )
              goto LABEL_28;
          }
          if ( v29 != v31 )
          {
            memmove(v29, v29 + 4, v31 - v29 - 4);
            v30 = *(_QWORD *)(v8 + 352) - 1LL;
            *(_QWORD *)(v8 + 352) = v30;
          }
        }
LABEL_28:
        if ( !v30 )
          **(_DWORD **)(v8 + 64) |= 0x400u;
        ++v51;
      }
      v4 = v50;
      v32 = v2[4];
    }
    while ( v50 < v32 );
    v3 = a1;
    if ( v51 > 0 )
    {
      v47 = nullptr;
      if ( v32 )
      {
        v47 = (void *)qalloc_or_throw(4 * v32);
        memcpy(v47, (const void *)v2[3], 4 * v32);
      }
      v48 = *(_QWORD *)(a1 + 368);
      if ( v48 )
      {
        *(_QWORD *)(a1 + 376) = 0;
        qfree(v48);
      }
      *(_QWORD *)(a1 + 368) = v47;
      *(__m128i *)(a1 + 376) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
    }
    v1 = *(_QWORD *)(a1 + 56);
  }
  if ( (unsigned int)sub_163610(v3, v1, 6) )
  {
    v33 = *(_DWORD *)(v3 + 24);
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    *(_DWORD *)(v3 + 24) = v33;
  }
  return (unsigned int)v51;
}
