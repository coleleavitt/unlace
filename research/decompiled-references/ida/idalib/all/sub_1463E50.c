__int64 __fastcall sub_1463E50(__int64 a1, int *a2, __int64 *a3)
{
  unsigned int v4; // ebp
  unsigned __int8 *v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // edx
  char v11; // [rsp+1Fh] [rbp-F9h] BYREF
  void *v12; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-F0h]
  void *ptr; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-E0h]
  __int64 v16; // [rsp+48h] [rbp-D0h] BYREF
  __m128 v17[4]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+94h] [rbp-84h]
  unsigned __int8 v19; // [rsp+96h] [rbp-82h]
  void *v20; // [rsp+98h] [rbp-80h]
  __int64 v21; // [rsp+B0h] [rbp-68h] BYREF
  char v22; // [rsp+D0h] [rbp-48h]

  v4 = 0;
  v11 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  ptr = &v16;
  v5 = (unsigned __int8 *)sub_145C740(a1, (__int64)a2, (__int64 *)&ptr, &v11);
  if ( v11 )
    goto LABEL_2;
  sub_13E2260(v17, v5, v6, *a2, *(_QWORD *)(a1 + 88), *(char **)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 48));
  v4 = v22 & 1;
  if ( (v22 & 1) == 0 )
  {
    if ( v18 )
      goto LABEL_7;
    v4 = v19;
    if ( !v19 )
    {
      v13 = 64;
      v12 = nullptr;
      if ( (unsigned __int8)sub_13E3040((__int64)v17, &v12) )
      {
        v8 = v13;
      }
      else
      {
        sub_14634E0((__int64 *)a1, a2);
        v8 = v13;
        if ( v13 > 0x40 )
        {
          v10 = v8 - sub_2206780(&v12);
          v9 = -1;
          if ( v10 <= 0x40 )
            v9 = *(_QWORD *)v12;
        }
        else
        {
          v9 = (__int64)v12;
        }
        *a3 = v9;
        v4 = 1;
      }
      if ( v8 > 0x40 && v12 )
        operator delete[](v12);
      goto LABEL_7;
    }
  }
  v4 = 0;
LABEL_7:
  if ( v20 != &v21 )
    free(v20);
LABEL_2:
  if ( ptr != &v16 )
    free(ptr);
  return v4;
}
