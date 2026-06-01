__int64 __fastcall sub_655A30(__int64 *a1, char *a2, char **a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // eax
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  int v18; // eax
  __int64 v19; // rdx
  __m128i *v20; // rsi
  __m128i si128; // xmm0
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-1478h]
  __int64 v25; // [rsp+8h] [rbp-1470h]
  __int64 v26; // [rsp+10h] [rbp-1468h]
  int v28; // [rsp+1Ch] [rbp-145Ch]
  int v29; // [rsp+20h] [rbp-1458h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-1454h] BYREF
  int v31[2]; // [rsp+28h] [rbp-1450h] BYREF
  char v32[1024]; // [rsp+30h] [rbp-1448h] BYREF
  _BYTE v33[4104]; // [rsp+430h] [rbp-1048h] BYREF
  unsigned __int64 v34; // [rsp+1438h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a3 )
    {
      v20 = (__m128i *)*a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v23 = qvector_reserve(a3, v20, 21, 1);
        *a3 = (char *)v23;
        v20 = (__m128i *)v23;
      }
      si128 = _mm_load_si128(xmmword_23A7DE0);
      a3[1] = (_BYTE *)(&dword_14 + 1);
      v20[1].m128i_i32[0] = 1684366441;
      *v20 = si128;
      (*a3)[20] = 0;
    }
    return 0;
  }
  v7 = sub_654C80(a1, a4, a2, a3, v32, (__int64)v33, 4096, (FILE **)v31, (__int64)&v29);
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( *(_QWORD *)v31 )
  {
    v9 = sub_64BEE0(*(_QWORD *)(v7 + 56), *(__int64 *)v31, *(_BYTE *)(v7 + 32) & 0xCF, v29);
    switch ( v9 )
    {
      case 2:
        goto LABEL_22;
      case 3:
        goto LABEL_22;
      case 1:
        goto LABEL_22;
    }
    v10 = sub_64BEE0(*(_QWORD *)(v8 + 64), *(__int64 *)v31, *(_DWORD *)(v8 + 32), v29);
    if ( v10 == 1 || v10 == 2 || v10 == 3 )
      goto LABEL_22;
    v11 = *(_DWORD *)(v8 + 32);
    if ( (v11 & 2) != 0 )
    {
      v22 = sub_64BEE0(*(_QWORD *)(v8 + 72), *(__int64 *)v31, v11 & 0xCF, v29);
      if ( v22 == 1 || v22 == 2 || v22 == 3 )
        goto LABEL_22;
      v11 = *(_DWORD *)(v8 + 32);
    }
    if ( (v11 & 0x80) == 0 )
    {
LABEL_30:
      sub_64CA30(a1, v8);
      if ( !(unsigned __int8)is_cvt64(a1, v8, v19) )
        add_base_tils(a3, v8, a4, v32, a5);
      *(_DWORD *)(v8 + 32) &= ~0x40u;
      qfclose(*(_QWORD *)v31);
      sub_6511B0(*a1, 6u, a5 ^ 1, 0, nullptr);
      mark_builtin_widgets(512, 0, 1);
      return v8;
    }
    if ( !(unsigned int)freadbytes(*(_QWORD *)v31, v8 + 84, 4, 0) )
    {
      v12 = qcalloc(*(int *)(v8 + 84), 8);
      *(_QWORD *)(v8 + 88) = v12;
      if ( v12 )
      {
        if ( *(_DWORD *)(v8 + 84) )
        {
          v24 = 0;
          while ( 1 )
          {
            v14 = operator new(0x20u);
            *(_OWORD *)(v14 + 8) = 0;
            *(_QWORD *)(v14 + 24) = 0;
            *(_QWORD *)v14 = v8;
            v26 = v14;
            *(_QWORD *)(*(_QWORD *)(v8 + 88) + 8 * v24) = v14;
            v28 = *(_DWORD *)(v8 + 32);
            v25 = *(_QWORD *)v31;
            if ( (unsigned int)freadbytes(*(_QWORD *)v31, v14 + 8, 4, 0)
              || (unsigned int)freadbytes(v25, v26 + 12, 4, 0)
              || (unsigned int)freadbytes(v25, v26 + 16, 4, 0)
              || (unsigned int)freadbytes(v25, &v30, 4, 0) )
            {
              goto LABEL_22;
            }
            v13 = v30;
            if ( v30 )
            {
              *(_DWORD *)(v26 + 20) = v30;
              v16 = qalloc(v13);
              *(_QWORD *)(v26 + 24) = v16;
              if ( !v16 )
                goto LABEL_22;
              v17 = sub_647400;
              if ( (v28 & 1) == 0 )
                v17 = (__int64 (__fastcall *)(__int64, __int64, __int64))qfread;
              v18 = v17(v25, v16, v30);
              if ( v30 != v18 )
                goto LABEL_22;
            }
            if ( ++v24 >= (unsigned __int64)*(int *)(v8 + 84) )
              goto LABEL_30;
          }
        }
        goto LABEL_30;
      }
    }
LABEL_22:
    sub_35A790(a3);
    sub_651E30(a1, v8, 0);
    qfclose(*(_QWORD *)v31);
    return 0;
  }
  return v8;
}
