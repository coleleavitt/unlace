_BYTE *__fastcall sub_9E70E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r10
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edx
  _QWORD *v11; // rsi
  void *v12; // rbp
  void *v13; // rbx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rax
  _BYTE *result; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-128h]
  int v20; // [rsp+1Ch] [rbp-10Ch]
  __int64 v21; // [rsp+20h] [rbp-108h]
  __int64 v22; // [rsp+38h] [rbp-F0h] BYREF
  int v23; // [rsp+40h] [rbp-E8h] BYREF
  char v24; // [rsp+44h] [rbp-E4h]
  int v25[2]; // [rsp+48h] [rbp-E0h]
  int v26; // [rsp+50h] [rbp-D8h] BYREF
  char v27; // [rsp+54h] [rbp-D4h]
  int v28[2]; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+60h] [rbp-C8h]
  int v30[2]; // [rsp+68h] [rbp-C0h]
  _BYTE v31[184]; // [rsp+70h] [rbp-B8h] BYREF

  v22 = 0;
  ptr = v31;
  *(_QWORD *)v30 = 0x1000000000LL;
  v19 = a1 + 1384;
  sub_9E4980(a1 + 1384);
  v5 = *a2;
  if ( *a2 )
  {
    v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
    if ( v6 != v5 )
    {
      v7 = *a2;
      while ( *(_DWORD *)(v7 + 32) == -1 )
      {
LABEL_11:
        v7 += 40;
        if ( v6 == v7 )
          goto LABEL_27;
      }
      v24 &= 0xFCu;
      v27 &= 0xFCu;
      v23 = 0;
      v13 = qword_1C7F2C0;
      *(_QWORD *)v25 = 0;
      v26 = 1;
      *(_QWORD *)v28 = 0;
      if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v23, v7);
        if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
          goto LABEL_15;
      }
      else
      {
        v23 = *(_DWORD *)v7;
        if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
        {
LABEL_15:
          sub_182C690(v13, &v26, v7 + 16);
          goto LABEL_6;
        }
      }
      v8 = *(_DWORD *)(v7 + 16);
      v27 &= ~1u;
      v26 = v8;
LABEL_6:
      v9 = sub_9E32F0(
             a1,
             (__int64)&v23,
             **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(v7 + 32)),
             a3,
             (__int64)&v22,
             v19);
      if ( v9 )
      {
        v10 = v30[0];
        if ( v30[0] >= (unsigned int)v30[1] )
        {
          v21 = v9;
          v20 = 2 * v30[1];
          v14 = (char *)sub_186B270(8LL * (unsigned int)(2 * v30[1]));
          v10 = v30[0];
          v15 = (char *)ptr;
          v11 = v14;
          v9 = v21;
          if ( v30[0] )
          {
            if ( (unsigned int)(v30[0] - 1) <= 2 || v14 == (char *)ptr + 8 )
            {
              v18 = 0;
              do
              {
                v11[v18] = *(_QWORD *)&v15[v18 * 8];
                ++v18;
              }
              while ( v18 != v10 );
            }
            else
            {
              v16 = 0;
              do
              {
                *(__m128i *)&v11[v16] = _mm_loadu_si128((const __m128i *)&v15[v16 * 8]);
                v16 += 2;
              }
              while ( 2LL * (v10 >> 1) != v16 );
              if ( (v10 & 1) != 0 )
                v11[v10 & 0xFFFFFFFE] = *(_QWORD *)&v15[8 * (v10 & 0xFFFFFFFE)];
            }
          }
          if ( v15 != v31 && v15 )
          {
            sub_186B220(v15);
            v10 = v30[0];
            v9 = v21;
          }
          ptr = v11;
          v30[1] = v20;
        }
        else
        {
          v11 = ptr;
        }
        v11[v10] = v9;
        v30[0] = v10 + 1;
      }
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v23);
      sub_182CBA0(v12, &v26);
      goto LABEL_11;
    }
  }
LABEL_27:
  result = (_BYTE *)sub_15995B0(a3);
  if ( ptr )
  {
    result = v31;
    if ( ptr != v31 )
      return (_BYTE *)sub_186B220(ptr);
  }
  return result;
}

