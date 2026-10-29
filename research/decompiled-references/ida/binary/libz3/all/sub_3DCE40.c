__int64 __fastcall sub_3DCE40(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  unsigned int v5; // ecx
  _QWORD *p_ptr; // rsi
  __int64 *v7; // rdx
  __int16 v8; // cx
  __int64 result; // rax
  char *v10; // r13
  unsigned int v11; // ebp
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r15
  __int16 v15; // dx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // r13
  __int64 *v19; // rbp
  int v20; // r15d
  __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // r10
  __int64 v26; // rdx
  int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rbp
  char *v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __m128i v38; // [rsp+20h] [rbp-158h] BYREF
  void *v39; // [rsp+30h] [rbp-148h] BYREF
  __int64 v40; // [rsp+38h] [rbp-140h]
  _DWORD *ptr; // [rsp+40h] [rbp-138h] BYREF
  int v42; // [rsp+48h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v5 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v35 = *(_QWORD *)(a2 + 16);
      v36 = v5 >> 5;
      result = *(_DWORD *)(v35 + 4 * v36) & (unsigned int)(1 << v5);
      if ( (*(_DWORD *)(v35 + 4 * v36) & (1 << v5)) != 0 )
        return result;
    }
    sub_3D2BC0(a2, v3);
  }
  p_ptr = &ptr;
  ptr = v3;
  LODWORD(v7) = 0;
  v39 = &ptr;
  v42 = 0;
  v40 = 0x1000000001LL;
LABEL_5:
  while ( 2 )
  {
    v8 = *((_WORD *)v3 + 2);
    result = 16LL * (unsigned int)v7;
    v10 = (char *)p_ptr + result;
    if ( v8 == 1 )
      goto LABEL_40;
    if ( v8 == 2 )
    {
      v22 = v3[18];
      v23 = *((_DWORD *)v10 + 2);
      v24 = v22 + v3[19] + 1;
      if ( v23 < v24 )
      {
        if ( v23 )
        {
          while ( 1 )
          {
            v25 = v23 - 1;
            if ( v22 < v23 )
              v25 = (unsigned int)v25 - v22;
            ++v23;
            v14 = *(_QWORD *)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v25];
            *((_DWORD *)v10 + 2) = v23;
            if ( *(_DWORD *)(v14 + 8) <= 1u )
              goto LABEL_59;
LABEL_52:
            if ( *(_DWORD *)v14 >= *(_DWORD *)(a2 + 8)
              || (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*(_DWORD *)v14 >> 5)) & (1 << *(_DWORD *)v14)) == 0 )
            {
              break;
            }
            if ( v23 >= v24 )
              goto LABEL_39;
            v22 = v3[18];
          }
          sub_3D2BC0(a2, (unsigned int *)v14);
          v26 = (unsigned int)v40;
          v27 = HIDWORD(v40);
          if ( (unsigned int)v40 < HIDWORD(v40) )
            goto LABEL_60;
        }
        else
        {
          v14 = *((_QWORD *)v3 + 3);
          v23 = 1;
          *((_DWORD *)v10 + 2) = 1;
          if ( *(_DWORD *)(v14 + 8) > 1u )
            goto LABEL_52;
LABEL_59:
          v26 = (unsigned int)v40;
          v27 = HIDWORD(v40);
          if ( (unsigned int)v40 < HIDWORD(v40) )
            goto LABEL_60;
        }
        v29 = (unsigned int)(2 * v27);
        p_ptr = (_QWORD *)sub_186B270(16 * v29);
        v30 = (char *)v39;
        v31 = 0;
        v26 = (unsigned int)v40;
        v32 = 16LL * (unsigned int)v40;
        if ( (_DWORD)v40 )
        {
          do
          {
            *(__m128i *)&p_ptr[v31 / 8] = _mm_loadu_si128((const __m128i *)&v30[v31]);
            v31 += 16LL;
          }
          while ( v31 != v32 );
        }
LABEL_66:
        if ( v30 != (char *)&ptr && v30 )
        {
          sub_186B220(v30);
          v26 = (unsigned int)v40;
        }
        v39 = p_ptr;
        HIDWORD(v40) = v29;
        goto LABEL_61;
      }
LABEL_39:
      result = (unsigned int)v40;
      LODWORD(v7) = v40 - 1;
LABEL_40:
      LODWORD(v40) = (_DWORD)v7;
      if ( !(_DWORD)v7 )
        break;
      goto LABEL_41;
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v11 = v3[6];
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 < v11 )
    {
      while ( 1 )
      {
        v13 = v12++;
        v14 = *(_QWORD *)&v3[2 * v13 + 8];
        *((_DWORD *)v10 + 2) = v12;
        if ( *(_DWORD *)(v14 + 8) > 1u )
        {
          if ( *(_DWORD *)v14 < *(_DWORD *)(a2 + 8)
            && (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*(_DWORD *)v14 >> 5)) & (1 << *(_DWORD *)v14)) != 0 )
          {
            goto LABEL_18;
          }
          sub_3D2BC0(a2, (unsigned int *)v14);
        }
        v15 = *(_WORD *)(v14 + 4);
        if ( v15 != 1 )
        {
          if ( v15 == 2 )
          {
            v26 = (unsigned int)v40;
            if ( (unsigned int)v40 >= HIDWORD(v40) )
            {
              v29 = (unsigned int)(2 * HIDWORD(v40));
              p_ptr = (_QWORD *)sub_186B270(16 * v29);
              v30 = (char *)v39;
              v33 = 0;
              v26 = (unsigned int)v40;
              v34 = 16LL * (unsigned int)v40;
              if ( (_DWORD)v40 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v33 / 8] = _mm_loadu_si128((const __m128i *)&v30[v33]);
                  v33 += 16LL;
                }
                while ( v33 != v34 );
              }
              goto LABEL_66;
            }
LABEL_60:
            p_ptr = v39;
LABEL_61:
            v7 = &p_ptr[2 * v26];
            *((_DWORD *)v7 + 2) = 0;
            v28 = (unsigned int)v40;
            *v7 = v14;
            LODWORD(v40) = v28 + 1;
            LODWORD(v7) = v28;
LABEL_62:
            v3 = (_DWORD *)p_ptr[2 * v28];
            goto LABEL_5;
          }
          if ( v15 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v14 + 24) )
          {
            v38.m128i_i64[0] = v14;
            v38.m128i_i32[2] = 0;
            sub_3DCD80((char **)&v39, &v38);
            p_ptr = v39;
            LODWORD(v7) = v40 - 1;
            v28 = (unsigned int)(v40 - 1);
            goto LABEL_62;
          }
        }
        v12 = *((_DWORD *)v10 + 2);
LABEL_18:
        if ( v12 >= v11 )
        {
          LODWORD(v7) = v40 - 1;
          break;
        }
      }
    }
    LODWORD(v40) = (_DWORD)v7;
    result = *((unsigned __int16 *)v3 + 2);
    if ( !(_WORD)result )
    {
      v16 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
      if ( v16 )
      {
        if ( *(_DWORD *)(a1 + 8) == *v16 && v16[1] == 1 || !*v16 && v16[1] == 2 )
        {
          v17 = 2LL * (unsigned int)v3[6];
          v18 = (__int64 *)&v3[v17 + 8];
          if ( v17 * 4 )
          {
            v19 = (__int64 *)(v3 + 8);
            v20 = 0;
            while ( 1 )
            {
              if ( !(_WORD)result
                && (result = *(_QWORD *)(*((_QWORD *)v3 + 2) + 24LL)) != 0
                && !*(_DWORD *)result
                && *(_DWORD *)(result + 4) == 2
                || v20 )
              {
                result = *v19;
                if ( *v19 != *(_QWORD *)(a1 + 24) )
                {
                  v38.m128i_i64[0] = *v19;
                  v21 = *(_QWORD *)(a1 + 40);
                  if ( result )
                    ++*(_DWORD *)(result + 8);
                  result = sub_3D5DC0((_QWORD *)(v21 + 8), &v38);
                }
              }
              ++v19;
              ++v20;
              if ( v18 == v19 )
                break;
              result = *((unsigned __int16 *)v3 + 2);
            }
            LODWORD(v7) = v40;
          }
        }
      }
    }
    p_ptr = v39;
    if ( (_DWORD)v7 )
    {
LABEL_41:
      v7 = (__int64 *)(unsigned int)((_DWORD)v7 - 1);
      v3 = (_DWORD *)p_ptr[2 * (_QWORD)v7];
      continue;
    }
    break;
  }
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

