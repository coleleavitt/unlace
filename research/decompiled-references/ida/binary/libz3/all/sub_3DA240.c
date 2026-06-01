__int64 __fastcall sub_3DA240(__int64 a1, _DWORD *a2)
{
  void *v2; // rax
  void *exception; // rax
  _DWORD *v4; // r13
  unsigned int v6; // ecx
  _QWORD *v7; // rdx
  __int64 result; // rax
  __int16 v9; // cx
  _QWORD *v10; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int *v14; // r15
  unsigned int v15; // ecx
  int v16; // eax
  int *v17; // rsi
  int v18; // edi
  __int16 v19; // ax
  _DWORD *v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int *v24; // r14
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int **v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  char *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  char *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rdx
  unsigned int v42; // [rsp+0h] [rbp-168h]
  _QWORD *v43; // [rsp+0h] [rbp-168h]
  _QWORD *v44; // [rsp+0h] [rbp-168h]
  unsigned int *v45; // [rsp+10h] [rbp-158h] BYREF
  int v46; // [rsp+18h] [rbp-150h]
  void *v47; // [rsp+20h] [rbp-148h] BYREF
  __int64 v48; // [rsp+28h] [rbp-140h]
  _DWORD *v49; // [rsp+30h] [rbp-138h] BYREF
  int v50; // [rsp+38h] [rbp-130h]

  v4 = a2;
  if ( a2[2] > 1u )
  {
    v6 = *a2;
    if ( *a2 < *(_DWORD *)(a1 + 8) )
    {
      v40 = *(_QWORD *)(a1 + 16);
      v41 = v6 >> 5;
      result = *(_DWORD *)(v40 + 4 * v41) & (unsigned int)(1 << v6);
      if ( (*(_DWORD *)(v40 + 4 * v41) & (1 << v6)) != 0 )
        return result;
    }
    sub_3D2BC0(a1, v4);
  }
  v7 = &v49;
  v49 = v4;
  v47 = &v49;
  v50 = 0;
  v48 = 0x1000000001LL;
  for ( result = 0; ; v4 = (_DWORD *)v7[2 * result] )
  {
    while ( 1 )
    {
      v9 = *((_WORD *)v4 + 2);
      v10 = &v7[2 * (unsigned int)result];
      if ( v9 == 1 )
        goto LABEL_28;
      if ( v9 != 2 )
        break;
      v21 = v4[18];
      v22 = *((_DWORD *)v10 + 2);
      v23 = v21 + v4[19] + 1;
      if ( v22 >= v23 )
        goto LABEL_27;
      if ( !v22 )
      {
        v24 = *((unsigned int **)v4 + 3);
        v22 = 1;
        *((_DWORD *)v10 + 2) = 1;
        if ( v24[2] > 1 )
          goto LABEL_39;
LABEL_46:
        v26 = (unsigned int)v48;
        v27 = HIDWORD(v48);
        if ( (unsigned int)v48 >= HIDWORD(v48) )
          goto LABEL_52;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v25 = v22 - 1;
        if ( v21 < v22 )
          v25 = (unsigned int)v25 - v21;
        ++v22;
        v24 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v25];
        *((_DWORD *)v10 + 2) = v22;
        if ( v24[2] <= 1 )
          goto LABEL_46;
LABEL_39:
        if ( *v24 >= *(_DWORD *)(a1 + 8) || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * (*v24 >> 5)) & (1 << *v24)) == 0 )
          break;
        if ( v22 >= v23 )
        {
LABEL_27:
          result = (unsigned int)(v48 - 1);
LABEL_28:
          LODWORD(v48) = result;
          if ( !(_DWORD)result )
            goto LABEL_32;
          goto LABEL_29;
        }
        v21 = v4[18];
      }
      sub_3D2BC0(a1, v24);
      v26 = (unsigned int)v48;
      v27 = HIDWORD(v48);
      if ( (unsigned int)v48 >= HIDWORD(v48) )
      {
LABEL_52:
        v30 = (unsigned int)(2 * v27);
        v7 = (_QWORD *)sub_186B270(16 * v30);
        v31 = (char *)v47;
        v32 = 0;
        v26 = (unsigned int)v48;
        v33 = 16LL * (unsigned int)v48;
        if ( (_DWORD)v48 )
        {
          do
          {
            *(__m128i *)&v7[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32]);
            v32 += 16LL;
          }
          while ( v32 != v33 );
        }
        if ( v31 != (char *)&v49 && v31 )
        {
          v43 = v7;
          sub_186B220(v31);
          v26 = (unsigned int)v48;
          v7 = v43;
        }
        v47 = v7;
        HIDWORD(v48) = v30;
        goto LABEL_48;
      }
LABEL_47:
      v7 = v47;
LABEL_48:
      v28 = (unsigned int **)&v7[2 * v26];
      *v28 = v24;
LABEL_49:
      *((_DWORD *)v28 + 2) = 0;
      v29 = (unsigned int)v48;
      LODWORD(v48) = v48 + 1;
      result = (unsigned int)v29;
LABEL_50:
      v4 = (_DWORD *)v7[2 * v29];
    }
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v11 = v4[6];
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 < v11 )
    {
      while ( 1 )
      {
        v13 = v12++;
        v14 = *(unsigned int **)&v4[2 * v13 + 8];
        *((_DWORD *)v10 + 2) = v12;
        if ( v14[2] > 1 )
        {
          v15 = *v14;
          if ( *v14 < *(_DWORD *)(a1 + 8) )
          {
            v17 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v15 >> 5));
            v18 = *v17;
            v16 = 1 << v15;
            if ( ((1 << v15) & *v17) != 0 )
              goto LABEL_18;
          }
          else
          {
            v42 = *v14;
            sub_186B510(a1 + 8, v15 + 1, 0);
            v16 = 1 << v42;
            v17 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v42 >> 5));
            v18 = *v17;
          }
          *v17 = v18 | v16;
        }
        v19 = *((_WORD *)v14 + 2);
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            v35 = (unsigned int)v48;
            if ( (unsigned int)v48 >= HIDWORD(v48) )
            {
              v36 = (unsigned int)(2 * HIDWORD(v48));
              v7 = (_QWORD *)sub_186B270(16 * v36);
              v37 = (char *)v47;
              v38 = 0;
              v35 = (unsigned int)v48;
              v39 = 16LL * (unsigned int)v48;
              if ( (_DWORD)v48 )
              {
                do
                {
                  *(__m128i *)&v7[v38 / 8] = _mm_loadu_si128((const __m128i *)&v37[v38]);
                  v38 += 16LL;
                }
                while ( v39 != v38 );
              }
              if ( v37 != (char *)&v49 && v37 )
              {
                v44 = v7;
                sub_186B220(v37);
                v35 = (unsigned int)v48;
                v7 = v44;
              }
              v47 = v7;
              HIDWORD(v48) = v36;
            }
            else
            {
              v7 = v47;
            }
            v28 = (unsigned int **)&v7[2 * v35];
            *v28 = v14;
            goto LABEL_49;
          }
          if ( v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v14[6] )
          {
            v45 = v14;
            v46 = 0;
            sub_3DCD80(&v47, &v45);
            v7 = v47;
            result = (unsigned int)(v48 - 1);
            v29 = result;
            goto LABEL_50;
          }
          v34 = *(_DWORD **)(*((_QWORD *)v14 + 2) + 24LL);
          if ( v34 && *v34 == 5 && v34[1] == 16 )
          {
            exception = __cxa_allocate_exception(1u);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::contains_mod_ns::found, nullptr);
          }
        }
        v12 = *((_DWORD *)v10 + 2);
LABEL_18:
        if ( v12 >= v11 )
        {
          result = (unsigned int)(v48 - 1);
          break;
        }
      }
    }
    LODWORD(v48) = result;
    if ( !*((_WORD *)v4 + 2) )
    {
      v20 = *(_DWORD **)(*((_QWORD *)v4 + 2) + 24LL);
      if ( v20 )
      {
        if ( *v20 == 5 && v20[1] == 16 )
        {
          v2 = __cxa_allocate_exception(1u);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'spacer::contains_mod_ns::found, nullptr);
        }
      }
    }
    v7 = v47;
    if ( !(_DWORD)result )
      break;
LABEL_29:
    result = (unsigned int)(result - 1);
  }
LABEL_32:
  if ( v7 )
  {
    result = (__int64)&v49;
    if ( v7 != &v49 )
      return sub_186B220(v7);
  }
  return result;
}

