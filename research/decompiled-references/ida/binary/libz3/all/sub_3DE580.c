__int64 __fastcall sub_3DE580(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v5; // ecx
  __int64 *p_ptr; // rdx
  __int64 v7; // rax
  __int16 v8; // cx
  __int64 *v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // ecx
  int v15; // edi
  int *v16; // rax
  int v17; // esi
  __int16 v18; // ax
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  __int64 result; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  unsigned int *v25; // r14
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // ebp
  __int64 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  _DWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 *v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned int v44; // [rsp+10h] [rbp-178h]
  __int64 *v45; // [rsp+10h] [rbp-178h]
  __int64 *v46; // [rsp+10h] [rbp-178h]
  __int64 v48; // [rsp+28h] [rbp-160h] BYREF
  __m128i v49; // [rsp+30h] [rbp-158h] BYREF
  void *v50; // [rsp+40h] [rbp-148h] BYREF
  __int64 v51; // [rsp+48h] [rbp-140h]
  __int64 ptr; // [rsp+50h] [rbp-138h] BYREF
  int v53; // [rsp+58h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1 )
  {
    v5 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v42 = *(_QWORD *)(a2 + 16);
      v43 = v5 >> 5;
      result = *(_DWORD *)(v42 + 4 * v43) & (unsigned int)(1 << v5);
      if ( (*(_DWORD *)(v42 + 4 * v43) & (1 << v5)) != 0 )
        return result;
    }
    sub_3D2BC0(a2, (unsigned int *)v3);
  }
  p_ptr = &ptr;
  ptr = v3;
  v50 = &ptr;
  v53 = 0;
  v51 = 0x1000000001LL;
  LODWORD(v7) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_WORD *)(v3 + 4);
      v9 = &p_ptr[2 * (unsigned int)v7];
      if ( v8 == 1 )
        goto LABEL_28;
      if ( v8 != 2 )
        break;
      v22 = *(_DWORD *)(v3 + 72);
      v23 = *((_DWORD *)v9 + 2);
      v24 = v22 + *(_DWORD *)(v3 + 76) + 1;
      if ( v23 >= v24 )
        goto LABEL_27;
      if ( !v23 )
      {
        v25 = *(unsigned int **)(v3 + 24);
        v23 = 1;
        *((_DWORD *)v9 + 2) = 1;
        if ( v25[2] > 1 )
          goto LABEL_39;
LABEL_46:
        v27 = (unsigned int)v51;
        v28 = HIDWORD(v51);
        if ( (unsigned int)v51 >= HIDWORD(v51) )
          goto LABEL_52;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v26 = v23 - 1;
        if ( v22 < v23 )
          v26 = (unsigned int)v26 - v22;
        ++v23;
        v25 = *(unsigned int **)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v26 + 80);
        *((_DWORD *)v9 + 2) = v23;
        if ( v25[2] <= 1 )
          goto LABEL_46;
LABEL_39:
        if ( *v25 >= *(_DWORD *)(a2 + 8) || (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*v25 >> 5)) & (1 << *v25)) == 0 )
          break;
        if ( v23 >= v24 )
        {
LABEL_27:
          LODWORD(v7) = v51 - 1;
LABEL_28:
          LODWORD(v51) = v7;
          if ( !(_DWORD)v7 )
            goto LABEL_32;
          goto LABEL_29;
        }
        v22 = *(_DWORD *)(v3 + 72);
      }
      sub_3D2BC0(a2, v25);
      v27 = (unsigned int)v51;
      v28 = HIDWORD(v51);
      if ( (unsigned int)v51 >= HIDWORD(v51) )
      {
LABEL_52:
        v31 = (unsigned int)(2 * v28);
        p_ptr = (__int64 *)sub_186B270(16 * v31);
        v32 = (__int64 *)v50;
        v33 = 0;
        v27 = (unsigned int)v51;
        v34 = 16LL * (unsigned int)v51;
        if ( (_DWORD)v51 )
        {
          do
          {
            *(__m128i *)&p_ptr[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33 / 8]);
            v33 += 16LL;
          }
          while ( v33 != v34 );
        }
        if ( v32 != &ptr && v32 )
        {
          v45 = p_ptr;
          sub_186B220(v32);
          v27 = (unsigned int)v51;
          p_ptr = v45;
        }
        v50 = p_ptr;
        HIDWORD(v51) = v31;
        goto LABEL_48;
      }
LABEL_47:
      p_ptr = (__int64 *)v50;
LABEL_48:
      v29 = &p_ptr[2 * v27];
      *v29 = (__int64)v25;
LABEL_49:
      *((_DWORD *)v29 + 2) = 0;
      v30 = (unsigned int)v51;
      LODWORD(v51) = v51 + 1;
      LODWORD(v7) = v30;
LABEL_50:
      v3 = p_ptr[2 * v30];
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = *(_DWORD *)(v3 + 24);
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(_QWORD *)(v3 + 8 * v12 + 32);
        *((_DWORD *)v9 + 2) = v11;
        if ( *(_DWORD *)(v13 + 8) > 1u )
        {
          v14 = *(_DWORD *)v13;
          if ( *(_DWORD *)v13 < *(_DWORD *)(a2 + 8) )
          {
            v15 = 1 << v14;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v14 >> 5));
            v17 = *v16;
            if ( ((1 << v14) & *v16) != 0 )
              goto LABEL_18;
          }
          else
          {
            v44 = *(_DWORD *)v13;
            sub_186B510(a2 + 8, v14 + 1, 0);
            v15 = 1 << v44;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v44 >> 5));
            v17 = *v16;
          }
          *v16 = v17 | v15;
        }
        v18 = *(_WORD *)(v13 + 4);
        if ( v18 != 1 )
        {
          if ( v18 == 2 )
          {
            v37 = (unsigned int)v51;
            if ( (unsigned int)v51 >= HIDWORD(v51) )
            {
              v38 = (unsigned int)(2 * HIDWORD(v51));
              p_ptr = (__int64 *)sub_186B270(16 * v38);
              v39 = (__int64 *)v50;
              v40 = 0;
              v37 = (unsigned int)v51;
              v41 = 16LL * (unsigned int)v51;
              if ( (_DWORD)v51 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v40 / 8] = _mm_loadu_si128((const __m128i *)&v39[v40 / 8]);
                  v40 += 16LL;
                }
                while ( v41 != v40 );
              }
              if ( v39 != &ptr && v39 )
              {
                v46 = p_ptr;
                sub_186B220(v39);
                v37 = (unsigned int)v51;
                p_ptr = v46;
              }
              v50 = p_ptr;
              HIDWORD(v51) = v38;
            }
            else
            {
              p_ptr = (__int64 *)v50;
            }
            v29 = &p_ptr[2 * v37];
            *v29 = v13;
            goto LABEL_49;
          }
          if ( v18 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v49.m128i_i64[0] = v13;
            v49.m128i_i32[2] = 0;
            sub_3DCD80((char **)&v50, &v49);
            p_ptr = (__int64 *)v50;
            LODWORD(v7) = v51 - 1;
            v30 = (unsigned int)(v51 - 1);
            goto LABEL_50;
          }
          v35 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( !v35 || *v35 == -1 )
          {
            v48 = v13;
            v36 = *a1;
            ++*(_DWORD *)(v13 + 8);
            sub_3D5DC0((_QWORD *)(v36 + 8), &v48);
          }
        }
        v11 = *((_DWORD *)v9 + 2);
LABEL_18:
        if ( v11 >= v10 )
        {
          LODWORD(v7) = v51 - 1;
          break;
        }
      }
    }
    LODWORD(v51) = v7;
    if ( !*(_WORD *)(v3 + 4) && !*(_DWORD *)(v3 + 24) )
    {
      v19 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( !v19 || *v19 == -1 )
      {
        v49.m128i_i64[0] = v3;
        v20 = *a1;
        ++*(_DWORD *)(v3 + 8);
        sub_3D5DC0((_QWORD *)(v20 + 8), &v49);
        LODWORD(v7) = v51;
      }
    }
    p_ptr = (__int64 *)v50;
    if ( !(_DWORD)v7 )
      break;
LABEL_29:
    v7 = (unsigned int)(v7 - 1);
    v3 = p_ptr[2 * v7];
  }
LABEL_32:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

