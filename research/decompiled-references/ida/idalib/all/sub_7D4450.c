_QWORD *__fastcall sub_7D4450(__int64 *a1, __int64 *a2, __int64 *a3, int a4)
{
  __m128i v4; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  char v9; // al
  void *v11; // rsi
  unsigned __int64 v12; // r13
  const void *v13; // r15
  void *v14; // rdi
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19[2]; // [rsp+0h] [rbp-88h] BYREF
  int v20; // [rsp+8h] [rbp-80h]
  int v21; // [rsp+Ch] [rbp-7Ch]
  int v22[2]; // [rsp+10h] [rbp-78h]
  void *ptr[2]; // [rsp+18h] [rbp-70h]
  int v24[2]; // [rsp+28h] [rbp-60h]
  __int64 v25[2]; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v26 = __readfsqword(0x28u);
  *(_OWORD *)(a2 + 1) = 0;
  LOBYTE(v20) = 14;
  *(_QWORD *)v19 = &off_2B3B6E0;
  v6 = *a2;
  *a2 = 0;
  *(_QWORD *)v22 = 0;
  v21 = a4;
  *(_QWORD *)v24 = v6;
  *(_OWORD *)ptr = 0;
  *(__m128i *)v25 = v4;
  qtime64(a1, a2);
  v7 = sub_7BFA10(a1, (unsigned __int8 *)v19, a3);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v9 = *(_BYTE *)(v7 + 8);
    if ( v9 != 15 )
    {
      if ( v9 == 11 && a3 != v8 + 2 )
      {
        v12 = v8[3];
        if ( v12 < 2 )
        {
          a3[1] = 0;
        }
        else
        {
          v13 = (const void *)v8[2];
          v14 = (void *)*a3;
          if ( a3[2] < v12 )
          {
            v18 = qvector_reserve(a3, *a3, v8[3], 1);
            *a3 = v18;
            v14 = (void *)v18;
          }
          a3[1] = v12;
          memmove(v14, v13, v12 - 1);
          *(_BYTE *)(*a3 + v12 - 1) = 0;
        }
      }
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
      if ( (unsigned __int64)a3[1] <= 1 )
      {
        v11 = (void *)*a3;
        if ( (unsigned __int64)a3[2] <= 0xD )
        {
          v16 = qvector_reserve(a3, v11, 14, 1);
          *a3 = v16;
          v11 = (void *)v16;
        }
        a3[1] = 14;
        v8 = nullptr;
        qmemcpy(v11, "Unknown error", 13);
        *(_BYTE *)(*a3 + 13) = 0;
      }
      else
      {
        v8 = nullptr;
      }
    }
  }
  else
  {
    v15 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xB )
    {
      v17 = qvector_reserve(a3, v15, 12, 1);
      *a3 = v17;
      v15 = (void *)v17;
    }
    a3[1] = 12;
    v8 = nullptr;
    qmemcpy(v15, "No response", 11);
    *(_BYTE *)(*a3 + 11) = 0;
  }
  sub_7DDCC0(v19);
  return v8;
}
