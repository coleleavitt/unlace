__int64 __fastcall sub_23F7A0(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // r14
  unsigned __int64 v26; // rbx
  unsigned __int8 v27; // al
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  size_t v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD v36[41]; // [rsp+0h] [rbp-148h] BYREF

  v36[33] = __readfsqword(0x28u);
  if ( a1 == -1 )
    return 0;
  v13 = dword_8CC428;
  if ( dword_8CC5E8 )
    v13 = HIDWORD(qword_8CC340);
  v14 = sub_23F680(v13, a1, (const char *)a3, *(double *)a4.m128_u64);
  if ( !(_BYTE)v14 )
    return 0;
  v20 = a2[1];
  if ( (_WORD)v20 )
  {
    v21 = *a3;
    if ( (~*a3 & 0xFFFFFFFD) != 0 )
    {
      v22 = v20 + (unsigned int)*a2;
      if ( (int)v21 < -1 )
      {
        if ( (_DWORD)v21 == -2 && (unsigned int)v22 <= 0x40 )
        {
          v25 = a3 + 2;
          v26 = (v20 + 7) >> 3;
          goto LABEL_13;
        }
      }
      else
      {
        v21 = 8LL * *((_QWORD *)a3 + 2);
        if ( v21 >= v22 )
        {
          v23 = v20 + 7;
          v24 = (unsigned int)(v23 >> 3);
          if ( (unsigned int)v23 <= 0x807 )
          {
            v25 = *((_QWORD **)a3 + 1);
            v26 = (int)v24;
LABEL_13:
            v27 = getinf_flag(3, 32);
            if ( (int)*a3 < -1 )
              v28 = 8LL * (*a3 == -2);
            else
              v28 = *((_QWORD *)a3 + 2);
            if ( !(unsigned __int8)bitrange_t_extract_using_bitrange(a2, v36, v26, v25, v28, v27) )
            {
              if ( !under_debugger )
                interr(40375, v36, v29, v30, *(double *)a4.m128_u64);
              BUG();
            }
            v31 = *a3;
            if ( (*a3 & 0x80000000) == 0 )
            {
              v33 = *((_QWORD *)a3 + 2);
              if ( v33 < v26 )
              {
                v34 = *((_QWORD *)a3 + 1);
                if ( *((_QWORD *)a3 + 3) < v26 )
                {
                  v35 = qvector_reserve(a3 + 2, v34, v26, 1);
                  v33 = *((_QWORD *)a3 + 2);
                  *((_QWORD *)a3 + 1) = v35;
                  v34 = v35;
                }
                memset((void *)(v34 + v33), 0, v26 - v33);
                *((_QWORD *)a3 + 2) = v26;
              }
              else if ( v33 != v26 )
              {
                *((_QWORD *)a3 + 2) = v26;
              }
            }
            else
            {
              if ( v31 == -1 )
                v32 = *((_QWORD *)a3 + 2);
              else
                v32 = 8LL * (v31 == -2);
              memset(v25, 0, v32);
            }
            if ( (unsigned int)v26 >= 8 )
            {
              *v25 = v36[0];
              *(_QWORD *)((char *)v25 + v26 - 8) = *(_QWORD *)((char *)&v36[-1] + v26);
              qmemcpy(
                (void *)((unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)((char *)v36 - ((char *)v25 - ((unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v26 + (_DWORD)v25 - (((_DWORD)v25 + 8) & 0xFFFFFFF8)) >> 3));
            }
            else if ( (v26 & 4) != 0 )
            {
              *(_DWORD *)v25 = v36[0];
              *(_DWORD *)((char *)v25 + (unsigned int)v26 - 4) = *(_DWORD *)((char *)v36 + (unsigned int)v26 - 4);
            }
            else if ( (_DWORD)v26 )
            {
              *(_BYTE *)v25 = v36[0];
              if ( (v26 & 2) != 0 )
                *(_WORD *)((char *)v25 + v26 - 2) = *(_WORD *)((char *)v36 + v26 - 2);
            }
            return v14;
          }
          sub_169700(
            (int)"warning: register %d size is too large.",
            a1,
            v24,
            v22,
            v15,
            v16,
            a4,
            a5,
            a6,
            a7,
            v17,
            v18,
            a10,
            a11,
            v36[0]);
          return 0;
        }
      }
      sub_169700(
        (int)"warning: bad size for register %d from the debugger.",
        a1,
        v21,
        v22,
        v15,
        v16,
        a4,
        a5,
        a6,
        a7,
        v17,
        v18,
        a10,
        a11,
        v36[0]);
      return 0;
    }
  }
  return v14;
}
