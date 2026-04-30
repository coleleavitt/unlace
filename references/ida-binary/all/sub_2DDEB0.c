__int64 __fastcall sub_2DDEB0(__int64 a1, int a2)
{
  QT::QWidget *v4; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax
  void *v7; // rdi
  int v9; // eax
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  _BYTE *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  _QWORD *v36; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v38; // [rsp+10h] [rbp-28h]
  unsigned __int64 v39; // [rsp+18h] [rbp-20h]

  v39 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  v4 = qword_8CD8B8;
  *(_OWORD *)a1 = 0;
  sub_4C8470(ptr, v4);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v6 = v38;
  v38 = 0;
  v7 = *(void **)a1;
  *(_OWORD *)ptr = 0;
  *(_QWORD *)(a1 + 16) = v6;
  *(__m128i *)a1 = si128;
  if ( !v7 )
    goto LABEL_6;
  if ( !_InterlockedSub((volatile signed __int32 *)v7, 1u) )
    free(v7);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( a2 != -2147483645 )
      goto LABEL_7;
  }
  else
  {
LABEL_6:
    if ( a2 != -2147483645 )
    {
LABEL_7:
      if ( (a2 & 1) == 0 )
        goto LABEL_8;
      v28 = sub_30F160(qword_8CD748);
      if ( !v28 )
        goto LABEL_8;
      v31 = *(_QWORD **)(a1 + 8);
      v32 = 8LL * *(_QWORD *)(a1 + 16);
      v33 = (__int64)&v31[(unsigned __int64)v32 / 8];
      v34 = v32 >> 5;
      v35 = v32 >> 3;
      if ( v34 > 0 )
      {
        v36 = &v31[4 * v34];
        while ( v28 != *v31 )
        {
          if ( v28 == v31[1] )
          {
            ++v31;
            goto LABEL_41;
          }
          if ( v28 == v31[2] )
          {
            v31 += 2;
            goto LABEL_41;
          }
          if ( v28 == v31[3] )
          {
            v31 += 3;
            goto LABEL_41;
          }
          v31 += 4;
          if ( v36 == v31 )
          {
            v35 = (v33 - (__int64)v31) >> 3;
            goto LABEL_46;
          }
        }
        goto LABEL_41;
      }
LABEL_46:
      if ( v35 != 2 )
      {
        if ( v35 != 3 )
        {
          if ( v35 != 1 )
            goto LABEL_8;
          goto LABEL_49;
        }
        if ( v28 == *v31 )
        {
LABEL_41:
          if ( v31 != (_QWORD *)v33 )
            sub_2DDDF0((int **)a1, (__int64)v31, (__int64)(v31 + 1), v33, v29, v30);
LABEL_8:
          if ( (a2 & 2) == 0 )
            return a1;
          v19 = sub_30EDD0(qword_8CD748);
          if ( !v19 )
            return a1;
          v22 = *(_QWORD **)(a1 + 8);
          v23 = 8LL * *(_QWORD *)(a1 + 16);
          v24 = (__int64)&v22[(unsigned __int64)v23 / 8];
          v25 = v23 >> 5;
          v26 = v23 >> 3;
          if ( v25 > 0 )
          {
            v27 = &v22[4 * v25];
            while ( v19 != *v22 )
            {
              if ( v19 == v22[1] )
              {
                ++v22;
                goto LABEL_31;
              }
              if ( v19 == v22[2] )
              {
                v22 += 2;
                goto LABEL_31;
              }
              if ( v19 == v22[3] )
              {
                v22 += 3;
                goto LABEL_31;
              }
              v22 += 4;
              if ( v22 == v27 )
              {
                v26 = (v24 - (__int64)v22) >> 3;
                goto LABEL_52;
              }
            }
            goto LABEL_31;
          }
LABEL_52:
          if ( v26 != 2 )
          {
            if ( v26 != 3 )
            {
              if ( v26 != 1 )
                return a1;
              goto LABEL_55;
            }
            if ( v19 == *v22 )
            {
LABEL_31:
              if ( v22 != (_QWORD *)v24 )
                sub_2DDDF0((int **)a1, (__int64)v22, (__int64)(v22 + 1), v24, v20, v21);
              return a1;
            }
            ++v22;
          }
          if ( v19 != *v22 )
          {
            ++v22;
LABEL_55:
            if ( v19 != *v22 )
              return a1;
            goto LABEL_31;
          }
          goto LABEL_31;
        }
        ++v31;
      }
      if ( v28 != *v31 )
      {
        ++v31;
LABEL_49:
        if ( v28 != *v31 )
          goto LABEL_8;
        goto LABEL_41;
      }
      goto LABEL_41;
    }
  }
  v9 = *(_DWORD *)(a1 + 16) - 1;
  if ( v9 >= 0 )
  {
    v10 = 8LL * v9;
    v11 = 8 * (v9 - (unsigned __int64)(unsigned int)v9);
    while ( 1 )
    {
      v12 = sub_4CD6B0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + v10), 0);
      if ( (unsigned __int8)sub_4B8CC0(v12) )
      {
        if ( !*(_QWORD *)a1 || **(int **)a1 > 1 )
          sub_1C92D0(a1, 0, 0, 0, v13, v14);
        v15 = *(_QWORD *)(a1 + 8);
        v16 = *(_QWORD *)(a1 + 16);
        v17 = (_BYTE *)(v15 + 8 * v16);
        v18 = (_BYTE *)(v15 + v10 + 8);
        if ( v15 == v15 + v10 )
        {
          if ( v18 != v17 )
            *(_QWORD *)(a1 + 8) = v18;
        }
        else if ( v18 != v17 )
        {
          memmove((void *)(v15 + v10), v18, v17 - v18);
          v16 = *(_QWORD *)(a1 + 16);
        }
        *(_QWORD *)(a1 + 16) = v16 - 1;
      }
      if ( v10 == v11 )
        break;
      v10 -= 8;
    }
  }
  return a1;
}
