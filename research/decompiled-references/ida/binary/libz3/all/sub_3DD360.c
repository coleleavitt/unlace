__int64 __fastcall sub_3DD360(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  unsigned int v5; // ecx
  _QWORD *p_ptr; // rdx
  __int64 result; // rax
  __int16 v8; // cx
  _QWORD *v9; // rbp
  unsigned int v10; // r13d
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // ecx
  int v15; // edi
  int *v16; // rax
  int v17; // esi
  __int16 v18; // ax
  _DWORD *v19; // rdx
  void *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int *v24; // r13
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebp
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbp
  char *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // rax
  void *exception; // rax
  __int64 v36; // rcx
  __int64 v37; // rbp
  char *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // [rsp+8h] [rbp-170h]
  _QWORD *v44; // [rsp+8h] [rbp-170h]
  _QWORD *v45; // [rsp+8h] [rbp-170h]
  __m128i v47; // [rsp+20h] [rbp-158h] BYREF
  void *v48; // [rsp+30h] [rbp-148h] BYREF
  __int64 v49; // [rsp+38h] [rbp-140h]
  _DWORD *ptr; // [rsp+40h] [rbp-138h] BYREF
  int v51; // [rsp+48h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v5 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v41 = *(_QWORD *)(a2 + 16);
      v42 = v5 >> 5;
      result = *(_DWORD *)(v41 + 4 * v42) & (unsigned int)(1 << v5);
      if ( (*(_DWORD *)(v41 + 4 * v42) & (1 << v5)) != 0 )
        return result;
    }
    sub_3D2BC0(a2, v3);
  }
  p_ptr = &ptr;
  ptr = v3;
  v48 = &ptr;
  v51 = 0;
  v49 = 0x1000000001LL;
  for ( result = 0; ; v3 = (_DWORD *)p_ptr[2 * result] )
  {
    while ( 1 )
    {
      v8 = *((_WORD *)v3 + 2);
      v9 = &p_ptr[2 * (unsigned int)result];
      if ( v8 == 1 )
        goto LABEL_28;
      if ( v8 != 2 )
        break;
      v21 = v3[18];
      v22 = *((_DWORD *)v9 + 2);
      v23 = v21 + v3[19] + 1;
      if ( v22 >= v23 )
        goto LABEL_27;
      if ( !v22 )
      {
        v24 = *((unsigned int **)v3 + 3);
        v22 = 1;
        *((_DWORD *)v9 + 2) = 1;
        if ( v24[2] > 1 )
          goto LABEL_39;
LABEL_46:
        v26 = (unsigned int)v49;
        v27 = HIDWORD(v49);
        if ( (unsigned int)v49 >= HIDWORD(v49) )
          goto LABEL_52;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v25 = v22 - 1;
        if ( v21 < v22 )
          v25 = (unsigned int)v25 - v21;
        ++v22;
        v24 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v25];
        *((_DWORD *)v9 + 2) = v22;
        if ( v24[2] <= 1 )
          goto LABEL_46;
LABEL_39:
        if ( *v24 >= *(_DWORD *)(a2 + 8) || (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*v24 >> 5)) & (1 << *v24)) == 0 )
          break;
        if ( v22 >= v23 )
        {
LABEL_27:
          result = (unsigned int)(v49 - 1);
LABEL_28:
          LODWORD(v49) = result;
          if ( !(_DWORD)result )
            goto LABEL_32;
          goto LABEL_29;
        }
        v21 = v3[18];
      }
      sub_3D2BC0(a2, v24);
      v26 = (unsigned int)v49;
      v27 = HIDWORD(v49);
      if ( (unsigned int)v49 >= HIDWORD(v49) )
      {
LABEL_52:
        v30 = (unsigned int)(2 * v27);
        p_ptr = (_QWORD *)sub_186B270(16 * v30);
        v31 = (char *)v48;
        v32 = 0;
        v26 = (unsigned int)v49;
        v33 = 16LL * (unsigned int)v49;
        if ( (_DWORD)v49 )
        {
          do
          {
            *(__m128i *)&p_ptr[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32]);
            v32 += 16LL;
          }
          while ( v32 != v33 );
        }
        if ( v31 && v31 != (char *)&ptr )
        {
          v44 = p_ptr;
          sub_186B220(v31);
          v26 = (unsigned int)v49;
          p_ptr = v44;
        }
        v48 = p_ptr;
        HIDWORD(v49) = v30;
        goto LABEL_48;
      }
LABEL_47:
      p_ptr = v48;
LABEL_48:
      v28 = &p_ptr[2 * v26];
      *v28 = v24;
LABEL_49:
      *((_DWORD *)v28 + 2) = 0;
      v29 = (unsigned int)v49;
      LODWORD(v49) = v49 + 1;
      result = (unsigned int)v29;
LABEL_50:
      v3 = (_DWORD *)p_ptr[2 * v29];
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = v3[6];
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(_QWORD *)&v3[2 * v12 + 8];
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
            v43 = *(_DWORD *)v13;
            sub_186B510(a2 + 8, v14 + 1, 0);
            v15 = 1 << v43;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v43 >> 5));
            v17 = *v16;
          }
          *v16 = v17 | v15;
        }
        v18 = *(_WORD *)(v13 + 4);
        if ( v18 != 1 )
        {
          if ( v18 == 2 )
          {
            v36 = (unsigned int)v49;
            if ( (unsigned int)v49 >= HIDWORD(v49) )
            {
              v37 = (unsigned int)(2 * HIDWORD(v49));
              p_ptr = (_QWORD *)sub_186B270(16 * v37);
              v38 = (char *)v48;
              v39 = 0;
              v36 = (unsigned int)v49;
              v40 = 16LL * (unsigned int)v49;
              if ( (_DWORD)v49 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v39 / 8] = _mm_loadu_si128((const __m128i *)&v38[v39]);
                  v39 += 16LL;
                }
                while ( v40 != v39 );
              }
              if ( v38 != (char *)&ptr && v38 )
              {
                v45 = p_ptr;
                sub_186B220(v38);
                v36 = (unsigned int)v49;
                p_ptr = v45;
              }
              v48 = p_ptr;
              HIDWORD(v49) = v37;
            }
            else
            {
              p_ptr = v48;
            }
            v28 = &p_ptr[2 * v36];
            *v28 = v13;
            goto LABEL_49;
          }
          if ( v18 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v47.m128i_i64[0] = v13;
            v47.m128i_i32[2] = 0;
            sub_3DCD80((char **)&v48, &v47);
            p_ptr = v48;
            result = (unsigned int)(v49 - 1);
            v29 = result;
            goto LABEL_50;
          }
          v34 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( v34 && *a1 == *v34 && v34[1] == 1 )
          {
            exception = __cxa_allocate_exception(1u);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::found, nullptr);
          }
        }
        v11 = *((_DWORD *)v9 + 2);
LABEL_18:
        if ( v11 >= v10 )
        {
          result = (unsigned int)(v49 - 1);
          break;
        }
      }
    }
    LODWORD(v49) = result;
    if ( !*((_WORD *)v3 + 2) )
    {
      v19 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
      if ( v19 )
      {
        if ( *a1 == *v19 && v19[1] == 1 )
        {
          v20 = __cxa_allocate_exception(1u);
          __cxa_throw(v20, (struct type_info *)&`typeinfo for'spacer::found, nullptr);
        }
      }
    }
    p_ptr = v48;
    if ( !(_DWORD)result )
      break;
LABEL_29:
    result = (unsigned int)(result - 1);
  }
LABEL_32:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

