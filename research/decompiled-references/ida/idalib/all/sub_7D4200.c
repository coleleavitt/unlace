__int64 __fastcall sub_7D4200(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __m128i v3; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbp
  char v8; // al
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned int v11; // ebx
  __int64 v12; // rax
  void *v14; // rsi
  unsigned __int64 v15; // rbx
  const void *v16; // r15
  void *v17; // rdi
  void *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22[2]; // [rsp+0h] [rbp-68h] BYREF
  int v23; // [rsp+8h] [rbp-60h]
  int v24[2]; // [rsp+10h] [rbp-58h]
  void *ptr[2]; // [rsp+18h] [rbp-50h]
  int v26[2]; // [rsp+28h] [rbp-40h]

  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *(_QWORD *)v26 = __readfsqword(0x28u);
  *(_OWORD *)(a2 + 1) = 0;
  LOBYTE(v23) = 32;
  *(_QWORD *)v22 = &off_2B3BA40;
  v5 = *a2;
  *a2 = 0;
  *(_QWORD *)v24 = v5;
  *(__m128i *)ptr = v3;
  v6 = sub_7BFA10(a1, (unsigned __int8 *)v22, a3);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v8 = *(_BYTE *)(v6 + 8);
    if ( v8 == 33 )
    {
      v9 = *a2;
      v10 = _mm_loadu_si128((const __m128i *)(a2 + 1));
      *a2 = v7[2];
      a2[1] = v7[3];
      a2[2] = v7[4];
      v11 = 1;
      v7[2] = v9;
      v12 = *v7;
      *(__m128i *)(v7 + 3) = v10;
      (*(void (__fastcall **)(_QWORD *))(v12 + 8))(v7);
    }
    else
    {
      if ( v8 == 11 && a3 != v7 + 2 )
      {
        v15 = v7[3];
        if ( v15 < 2 )
        {
          a3[1] = 0;
        }
        else
        {
          v16 = (const void *)v7[2];
          v17 = (void *)*a3;
          if ( a3[2] < v15 )
          {
            v21 = qvector_reserve(a3, *a3, v7[3], 1);
            *a3 = v21;
            v17 = (void *)v21;
          }
          a3[1] = v15;
          memmove(v17, v16, v15 - 1);
          *(_BYTE *)(*a3 + v15 - 1) = 0;
        }
      }
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      if ( (unsigned __int64)a3[1] <= 1 )
      {
        v14 = (void *)*a3;
        if ( (unsigned __int64)a3[2] <= 0xD )
        {
          v19 = qvector_reserve(a3, v14, 14, 1);
          *a3 = v19;
          v14 = (void *)v19;
        }
        a3[1] = 14;
        v11 = 0;
        qmemcpy(v14, "Unknown error", 13);
        *(_BYTE *)(*a3 + 13) = 0;
      }
      else
      {
        v11 = 0;
      }
    }
  }
  else
  {
    v18 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xB )
    {
      v20 = qvector_reserve(a3, v18, 12, 1);
      *a3 = v20;
      v18 = (void *)v20;
    }
    a3[1] = 12;
    v11 = 0;
    qmemcpy(v18, "No response", 11);
    *(_BYTE *)(*a3 + 11) = 0;
  }
  sub_7DCC30(v22);
  return v11;
}
