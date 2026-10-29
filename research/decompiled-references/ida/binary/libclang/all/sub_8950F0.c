__int64 __fastcall sub_8950F0(_DWORD *a1)
{
  __int64 v1; // r15
  unsigned int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // r13
  __int64 v10; // rax
  char v11; // bl
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // [rsp+10h] [rbp-148h]
  __m128i v17; // [rsp+20h] [rbp-138h] BYREF
  __int64 v18; // [rsp+30h] [rbp-128h]
  void *ptr[2]; // [rsp+38h] [rbp-120h] BYREF
  _BYTE v20[72]; // [rsp+48h] [rbp-110h] BYREF
  __m128i v21; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-B8h]
  int v23; // [rsp+A8h] [rbp-B0h]
  __int64 v24; // [rsp+B0h] [rbp-A8h]
  __int64 v25; // [rsp+B8h] [rbp-A0h]
  void *v26[2]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v27[64]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v28; // [rsp+110h] [rbp-48h]

  v1 = *(_QWORD *)a1;
  v2 = a1[2];
  LODWORD(v3) = *(_DWORD *)(*(_QWORD *)a1 + 320LL);
LABEL_2:
  if ( v2 >= (unsigned int)v3 )
  {
LABEL_18:
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v4 = 0;
      v3 = (unsigned int)(v3 - 1);
      v5 = *(_QWORD *)(v1 + 312) + 32 * v3;
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        if ( (v6 & 3) != 0 )
        {
          if ( (*(_QWORD *)(v5 + 8) & 3LL) == 1 )
          {
            v13 = v6 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v13 )
            {
              v15 = *(_QWORD *)(v1 + 312) + 32 * v3;
              v14 = sub_8124E0(v13);
              v5 = v15;
              v4 = v14;
            }
          }
        }
        else
        {
          v4 = *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFFCLL) + 24);
        }
      }
      v7 = *(_QWORD *)v5;
      v8 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v9 = *(_QWORD *)(v5 + 24);
      if ( **(_BYTE **)(v1 + 24) )
        break;
      v21 = v8;
      v17 = v8;
      v26[0] = v27;
      LOBYTE(v23) = v23 | 1;
      v28 &= 0xFDu;
      v22 = 0;
      v25 = 0;
      v26[1] = (void *)0x800000000LL;
      v10 = sub_69F240(v17.m128i_i64);
      ptr[0] = v20;
      v17.m128i_i32[0] = 0;
      v17.m128i_i64[1] = 0;
      v18 = v10;
      ptr[1] = (void *)0x800000000LL;
      v23 = 0;
      v24 = 0;
      v25 = v10;
      sub_820970((__int64)v26, (__int64)ptr);
      if ( ptr[0] != v20 )
        free(ptr[0]);
      v28 &= 0xFEu;
      v11 = sub_8912C0(v1, (v4 << 32) | (unsigned int)v4, (__int64)&v21, v7 & 0xFFFFFFFFFFFFFFF8LL, v9);
      if ( v26[0] != v27 )
      {
        free(v26[0]);
        if ( v11 )
          goto LABEL_2;
        break;
      }
      if ( !v11 )
        break;
      if ( v2 >= (unsigned int)v3 )
        goto LABEL_18;
    }
    result = 0;
  }
  *(_DWORD *)(v1 + 320) = v2;
  a1[2] = -1;
  return result;
}

