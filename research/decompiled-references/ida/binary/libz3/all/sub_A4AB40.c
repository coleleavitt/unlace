__int64 __fastcall sub_A4AB40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 i; // r15
  unsigned int v16; // edx
  _DWORD *v17; // r14
  __int64 *v18; // rbp
  unsigned int v19; // r14d
  unsigned int v20; // esi
  _DWORD *v21; // r13
  unsigned int *v22; // r12
  char *v23; // r13
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 j; // r15
  unsigned int v28; // esi
  __int64 v29; // rbp
  __int64 v30; // rax
  char *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // esi
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rbp
  __int64 v41; // rax
  char *v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // [rsp+0h] [rbp-B8h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  unsigned int v52; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+24h] [rbp-94h] BYREF
  __int64 v54; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+38h] [rbp-80h]
  _BYTE v57[120]; // [rsp+40h] [rbp-78h] BYREF

  sub_A4A940((_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    v3 = *(int *)(v2 - 4);
  else
    v3 = 0;
  v50 = a1 + 1136;
  if ( *(_DWORD *)(a1 + 1164) || *(_DWORD *)(a1 + 1168) )
  {
    v4 = *(char **)(a1 + 1152);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a1 + 1160)];
    v7 = *(_DWORD *)(a1 + 1160);
    v8 = *(_QWORD *)(a1 + 1152);
    if ( v4 == v6 )
      goto LABEL_18;
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_10;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_10:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
      goto LABEL_18;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 1160);
      *(_QWORD *)(a1 + 1152) = 0;
      v9 >>= 1;
      *(_DWORD *)(a1 + 1160) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      if ( !v9 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 1152) = v11;
LABEL_18:
        *(_QWORD *)(a1 + 1164) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1152) = 0;
      v37 = v7 >> 1;
      v10 = v37;
      *(_DWORD *)(a1 + 1160) = v37;
      v11 = sub_186B270(8LL * v37);
    }
    v12 = v11 + 8 * v10;
    v13 = v11;
    if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
    {
      do
      {
        *(_DWORD *)(v13 + 4) = 0x80000000;
        v13 += 16;
        *(_DWORD *)(v13 - 4) = 0x80000000;
      }
      while ( v13 != v12 );
    }
    goto LABEL_17;
  }
LABEL_19:
  v51 = a1 + 1192;
  sub_9E4980(a1 + 1192);
  ptr = v57;
  result = 0x1000000000LL;
  v56 = 0x1000000000LL;
  if ( (int)v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v18 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 8 * i);
      if ( (unsigned __int8)sub_966310(a1, v18) )
      {
        v54 = 0;
        v52 = i;
        sub_98C1C0(v50, &v52, &v54);
        v19 = *(_DWORD *)(v54 + 4);
        if ( v19 != (_DWORD)i && v18[1] != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v19) + 8LL) )
        {
          if ( sub_99A460(a1, i) )
          {
            if ( !sub_99A460(a1, v19) && !sub_98B080(*(_DWORD **)(a1 + 1192), *(_DWORD *)(a1 + 1200), v19) )
            {
              v53 = v19;
              sub_9E1E20(v51, (int *)&v53);
              v20 = v56;
              if ( (unsigned int)v56 >= HIDWORD(v56) )
              {
                v40 = (unsigned int)(2 * HIDWORD(v56));
                v41 = sub_186B270(4 * v40);
                v20 = v56;
                v42 = (char *)ptr;
                v21 = (_DWORD *)v41;
                if ( (_DWORD)v56 )
                {
                  if ( (unsigned int)(v56 - 1) <= 2 || (unsigned __int64)(v41 - ((_QWORD)ptr + 4)) <= 8 )
                  {
                    v48 = 0;
                    v49 = 4LL * (unsigned int)v56;
                    do
                    {
                      v21[v48 / 4] = *(_DWORD *)&v42[v48];
                      v48 += 4LL;
                    }
                    while ( v48 != v49 );
                  }
                  else
                  {
                    v43 = 0;
                    v44 = 16LL * ((unsigned int)v56 >> 2);
                    do
                    {
                      *(__m128i *)&v21[v43 / 4] = _mm_loadu_si128((const __m128i *)&v42[v43]);
                      v43 += 16LL;
                    }
                    while ( v43 != v44 );
                    v45 = v20 & 0xFFFFFFFC;
                    if ( (v20 & 3) != 0 )
                    {
                      v21[v45] = *(_DWORD *)&v42[4 * v45];
                      v46 = v45 + 1;
                      if ( (unsigned int)v46 < v20 )
                      {
                        v47 = v45 + 2;
                        v21[v46] = *(_DWORD *)&v42[4 * v46];
                        if ( (unsigned int)v47 < v20 )
                          v21[v47] = *(_DWORD *)&v42[4 * v47];
                      }
                    }
                  }
                }
                if ( v42 != v57 && v42 )
                {
                  sub_186B220(v42);
                  v20 = v56;
                }
                ptr = v21;
                HIDWORD(v56) = v40;
              }
              else
              {
                v21 = ptr;
              }
              v21[v20] = v19;
              LODWORD(v56) = v56 + 1;
            }
          }
          else
          {
            v16 = v56;
            if ( (unsigned int)v56 >= HIDWORD(v56) )
            {
              v29 = (unsigned int)(2 * HIDWORD(v56));
              v30 = sub_186B270(4 * v29);
              v16 = v56;
              v31 = (char *)ptr;
              v17 = (_DWORD *)v30;
              if ( (_DWORD)v56 )
              {
                if ( (unsigned int)(v56 - 1) <= 2 || (unsigned __int64)(v30 - ((_QWORD)ptr + 4)) <= 8 )
                {
                  v38 = 0;
                  v39 = 4LL * (unsigned int)v56;
                  do
                  {
                    v17[v38 / 4] = *(_DWORD *)&v31[v38];
                    v38 += 4LL;
                  }
                  while ( v38 != v39 );
                }
                else
                {
                  v32 = 0;
                  v33 = 16LL * ((unsigned int)v56 >> 2);
                  do
                  {
                    *(__m128i *)&v17[v32 / 4] = _mm_loadu_si128((const __m128i *)&v31[v32]);
                    v32 += 16LL;
                  }
                  while ( v32 != v33 );
                  v34 = v16 & 0xFFFFFFFC;
                  if ( (v16 & 3) != 0 )
                  {
                    v17[v34] = *(_DWORD *)&v31[4 * v34];
                    v35 = v34 + 1;
                    if ( (unsigned int)v35 < v16 )
                    {
                      v36 = v34 + 2;
                      v17[v35] = *(_DWORD *)&v31[4 * v35];
                      if ( (unsigned int)v36 < v16 )
                        v17[v36] = *(_DWORD *)&v31[4 * v36];
                    }
                  }
                }
              }
              if ( v31 && v31 != v57 )
              {
                sub_186B220(v31);
                v16 = v56;
              }
              ptr = v17;
              HIDWORD(v56) = v29;
            }
            else
            {
              v17 = ptr;
            }
            v17[v16] = i;
            LODWORD(v56) = v56 + 1;
          }
        }
      }
    }
    if ( (_DWORD)v56 )
    {
      sub_9E4980(v51);
      sub_9E4980(a1 + 1216);
      v22 = (unsigned int *)ptr;
      v23 = (char *)ptr + 4 * (unsigned int)v56;
      if ( v23 != ptr )
      {
        do
        {
          v24 = *v22;
          if ( *v22 == -1 || (v25 = *(_QWORD *)(a1 + 592) + 4LL * v24, ((*(_BYTE *)(v25 + 3) >> 4) & 3) != 1) )
          {
            sub_9DAF10(a1, v24);
          }
          else
          {
            v26 = *(_QWORD *)(*(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)v25 & 0xFFFFFFF));
            if ( v26 )
            {
              for ( j = v26 + 40LL * *(unsigned int *)(v26 - 4); v26 != j; v26 += 40 )
              {
                v28 = *(_DWORD *)(v26 + 32);
                if ( v28 != -1
                  && v24 != v28
                  && !sub_99A460(a1, v28)
                  && (unsigned __int8)sub_9DAF10(a1, *(_DWORD *)(v26 + 32)) )
                {
                  break;
                }
              }
            }
          }
          ++v22;
        }
        while ( v23 != (char *)v22 );
        v22 = (unsigned int *)ptr;
      }
      result = (__int64)v57;
      if ( v22 != (unsigned int *)v57 && v22 )
        return sub_186B220(v22);
    }
    else
    {
      result = (__int64)v57;
      if ( ptr != v57 )
      {
        if ( ptr )
          return sub_186B220(ptr);
      }
    }
  }
  return result;
}

