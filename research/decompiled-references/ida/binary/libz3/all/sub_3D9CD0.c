__int64 __fastcall sub_3D9CD0(__int64 a1, unsigned int *a2)
{
  void *v2; // rax
  void *exception; // rax
  unsigned int *v4; // r13
  unsigned int v6; // ecx
  unsigned int **v7; // rdx
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned int **v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // ecx
  int v16; // eax
  int *v17; // rsi
  int v18; // edi
  __int16 v19; // ax
  _DWORD *v20; // rax
  __int64 result; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // r10
  __int64 v26; // rcx
  int v27; // ebp
  unsigned int **v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbp
  unsigned int **v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdx
  unsigned int v39; // [rsp+8h] [rbp-160h]
  unsigned int **v40; // [rsp+8h] [rbp-160h]
  __int64 v41; // [rsp+10h] [rbp-158h] BYREF
  int v42; // [rsp+18h] [rbp-150h]
  void *v43; // [rsp+20h] [rbp-148h] BYREF
  __int64 v44; // [rsp+28h] [rbp-140h]
  unsigned int *v45; // [rsp+30h] [rbp-138h] BYREF
  int v46; // [rsp+38h] [rbp-130h]

  v4 = a2;
  if ( a2[2] > 1 )
  {
    v6 = *a2;
    if ( *a2 < *(_DWORD *)(a1 + 8) )
    {
      v37 = *(_QWORD *)(a1 + 16);
      v38 = v6 >> 5;
      result = *(_DWORD *)(v37 + 4 * v38) & (unsigned int)(1 << v6);
      if ( (*(_DWORD *)(v37 + 4 * v38) & (1 << v6)) != 0 )
        return result;
    }
    sub_3D2BC0(a1, v4);
  }
  v7 = &v45;
  v45 = v4;
  v43 = &v45;
  v46 = 0;
  v44 = 0x1000000001LL;
  LODWORD(v8) = 0;
LABEL_5:
  while ( 2 )
  {
    v9 = *((_WORD *)v4 + 2);
    v10 = &v7[2 * (unsigned int)v8];
    if ( v9 == 1 )
      goto LABEL_27;
    if ( v9 == 2 )
    {
      v22 = v4[18];
      v23 = *((_DWORD *)v10 + 2);
      v24 = v22 + v4[19] + 1;
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
            v14 = *(_QWORD *)&v4[4 * v4[5] + 20 + 2 * v25];
            *((_DWORD *)v10 + 2) = v23;
            if ( *(_DWORD *)(v14 + 8) <= 1u )
              goto LABEL_45;
LABEL_38:
            if ( *(_DWORD *)v14 >= *(_DWORD *)(a1 + 8)
              || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * (*(_DWORD *)v14 >> 5)) & (1 << *(_DWORD *)v14)) == 0 )
            {
              break;
            }
            if ( v23 >= v24 )
              goto LABEL_26;
            v22 = v4[18];
          }
          sub_3D2BC0(a1, (unsigned int *)v14);
          v26 = (unsigned int)v44;
          v27 = HIDWORD(v44);
          if ( (unsigned int)v44 < HIDWORD(v44) )
          {
LABEL_46:
            v7 = (unsigned int **)v43;
            goto LABEL_47;
          }
        }
        else
        {
          v14 = *((_QWORD *)v4 + 3);
          v23 = 1;
          *((_DWORD *)v10 + 2) = 1;
          if ( *(_DWORD *)(v14 + 8) > 1u )
            goto LABEL_38;
LABEL_45:
          v26 = (unsigned int)v44;
          v27 = HIDWORD(v44);
          if ( (unsigned int)v44 < HIDWORD(v44) )
            goto LABEL_46;
        }
        v30 = (unsigned int)(2 * v27);
        v7 = (unsigned int **)sub_186B270(16 * v30);
        v31 = (unsigned int **)v43;
        v32 = 0;
        v26 = (unsigned int)v44;
        v33 = 16LL * (unsigned int)v44;
        if ( (_DWORD)v44 )
        {
          do
          {
            *(__m128i *)&v7[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32 / 8]);
            v32 += 16LL;
          }
          while ( v32 != v33 );
        }
        goto LABEL_52;
      }
LABEL_26:
      LODWORD(v8) = v44 - 1;
LABEL_27:
      LODWORD(v44) = v8;
      if ( !(_DWORD)v8 )
        break;
      goto LABEL_28;
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
        v14 = *(_QWORD *)&v4[2 * v13 + 8];
        *((_DWORD *)v10 + 2) = v12;
        if ( *(_DWORD *)(v14 + 8) > 1u )
        {
          v15 = *(_DWORD *)v14;
          if ( *(_DWORD *)v14 < *(_DWORD *)(a1 + 8) )
          {
            v17 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v15 >> 5));
            v18 = *v17;
            v16 = 1 << v15;
            if ( ((1 << v15) & *v17) != 0 )
              goto LABEL_18;
          }
          else
          {
            v39 = *(_DWORD *)v14;
            sub_186B510(a1 + 8, v15 + 1, 0);
            v16 = 1 << v39;
            v17 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v39 >> 5));
            v18 = *v17;
          }
          *v17 = v18 | v16;
        }
        v19 = *(_WORD *)(v14 + 4);
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            v26 = (unsigned int)v44;
            if ( (unsigned int)v44 < HIDWORD(v44) )
              goto LABEL_46;
            v30 = (unsigned int)(2 * HIDWORD(v44));
            v7 = (unsigned int **)sub_186B270(16 * v30);
            v31 = (unsigned int **)v43;
            v35 = 0;
            v26 = (unsigned int)v44;
            v36 = 16LL * (unsigned int)v44;
            if ( (_DWORD)v44 )
            {
              do
              {
                *(__m128i *)&v7[v35 / 8] = _mm_loadu_si128((const __m128i *)&v31[v35 / 8]);
                v35 += 16LL;
              }
              while ( v36 != v35 );
            }
LABEL_52:
            if ( v31 != &v45 && v31 )
            {
              v40 = v7;
              sub_186B220(v31);
              v26 = (unsigned int)v44;
              v7 = v40;
            }
            v43 = v7;
            HIDWORD(v44) = v30;
LABEL_47:
            v28 = &v7[2 * v26];
            *v28 = (unsigned int *)v14;
            *((_DWORD *)v28 + 2) = 0;
            v29 = (unsigned int)v44;
            LODWORD(v44) = v44 + 1;
            LODWORD(v8) = v29;
LABEL_48:
            v4 = v7[2 * v29];
            goto LABEL_5;
          }
          if ( v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v14 + 24) )
          {
            v41 = v14;
            v42 = 0;
            sub_3DCD80(&v43, &v41);
            v7 = (unsigned int **)v43;
            LODWORD(v8) = v44 - 1;
            v29 = (unsigned int)(v44 - 1);
            goto LABEL_48;
          }
          v34 = *(_DWORD **)(sub_15D1F10(v14) + 24);
          if ( v34 && *v34 == 5 && !v34[1] )
          {
            exception = __cxa_allocate_exception(1u);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::contains_real_ns::found, nullptr);
          }
        }
        v12 = *((_DWORD *)v10 + 2);
LABEL_18:
        if ( v12 >= v11 )
        {
          LODWORD(v8) = v44 - 1;
          break;
        }
      }
    }
    LODWORD(v44) = v8;
    v20 = *(_DWORD **)(sub_15D1F10(v4) + 24);
    if ( v20 && *v20 == 5 && !v20[1] )
    {
      v2 = __cxa_allocate_exception(1u);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'spacer::contains_real_ns::found, nullptr);
    }
    LODWORD(v8) = v44;
    v7 = (unsigned int **)v43;
    if ( (_DWORD)v44 )
    {
LABEL_28:
      v8 = (unsigned int)(v8 - 1);
      v4 = v7[2 * v8];
      continue;
    }
    break;
  }
  result = (__int64)&v45;
  if ( v7 != &v45 )
  {
    if ( v7 )
      return sub_186B220(v7);
  }
  return result;
}

