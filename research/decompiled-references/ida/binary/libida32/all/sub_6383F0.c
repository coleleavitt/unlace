__int64 __fastcall sub_6383F0(__int64 *a1, char *a2, char **a3, __int64 a4, unsigned __int8 a5)
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
  __m128i *v19; // rsi
  __m128i si128; // xmm0
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-1478h]
  __int64 v24; // [rsp+8h] [rbp-1470h]
  __int64 v25; // [rsp+10h] [rbp-1468h]
  int v27; // [rsp+1Ch] [rbp-145Ch]
  int v28; // [rsp+20h] [rbp-1458h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-1454h]
  int v30[2]; // [rsp+28h] [rbp-1450h] BYREF
  char v31[1024]; // [rsp+30h] [rbp-1448h] BYREF
  _BYTE v32[4104]; // [rsp+430h] [rbp-1048h] BYREF
  unsigned __int64 v33; // [rsp+1438h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a3 )
    {
      v19 = (__m128i *)*a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v22 = qvector_reserve(a3, v19, 21, 1);
        *a3 = (char *)v22;
        v19 = (__m128i *)v22;
      }
      si128 = _mm_load_si128(xmmword_2383DC0);
      a3[1] = (_BYTE *)(&dword_14 + 1);
      v19[1].m128i_i32[0] = 1684366441;
      *v19 = si128;
      (*a3)[20] = 0;
    }
    return 0;
  }
  v7 = sub_637640(a1, a4, a2, a3, v31, (__int64)v32, 4096, (FILE **)v30, (__int64)&v28);
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( *(_QWORD *)v30 )
  {
    v9 = sub_62E8E0(*(_QWORD *)(v7 + 56), *(__int64 *)v30, *(_BYTE *)(v7 + 32) & 0xCF, v28);
    switch ( v9 )
    {
      case 2:
        goto LABEL_22;
      case 3:
        goto LABEL_22;
      case 1:
        goto LABEL_22;
    }
    v10 = sub_62E8E0(*(_QWORD *)(v8 + 64), *(__int64 *)v30, *(_DWORD *)(v8 + 32), v28);
    if ( v10 == 1 || v10 == 2 || v10 == 3 )
      goto LABEL_22;
    v11 = *(_DWORD *)(v8 + 32);
    if ( (v11 & 2) != 0 )
    {
      v21 = sub_62E8E0(*(_QWORD *)(v8 + 72), *(__int64 *)v30, v11 & 0xCF, v28);
      if ( v21 == 1 || v21 == 2 || v21 == 3 )
        goto LABEL_22;
      v11 = *(_DWORD *)(v8 + 32);
    }
    if ( (v11 & 0x80) == 0 )
      goto LABEL_30;
    if ( !(unsigned int)freadbytes() )
    {
      v12 = qcalloc(*(int *)(v8 + 84), 8);
      *(_QWORD *)(v8 + 88) = v12;
      if ( v12 )
      {
        if ( *(_DWORD *)(v8 + 84) )
        {
          v23 = 0;
          do
          {
            v14 = operator new(0x20u);
            *(_OWORD *)(v14 + 8) = 0;
            *(_QWORD *)(v14 + 24) = 0;
            *(_QWORD *)v14 = v8;
            v25 = v14;
            *(_QWORD *)(*(_QWORD *)(v8 + 88) + 8 * v23) = v14;
            v27 = *(_DWORD *)(v8 + 32);
            v24 = *(_QWORD *)v30;
            if ( (unsigned int)freadbytes()
              || (unsigned int)freadbytes()
              || (unsigned int)freadbytes()
              || (unsigned int)freadbytes() )
            {
              goto LABEL_22;
            }
            v13 = v29;
            if ( v29 )
            {
              *(_DWORD *)(v25 + 20) = v29;
              v16 = qalloc(v13);
              *(_QWORD *)(v25 + 24) = v16;
              if ( !v16 )
                goto LABEL_22;
              v17 = sub_629E00;
              if ( (v27 & 1) == 0 )
                v17 = (__int64 (__fastcall *)(__int64, __int64, __int64))qfread;
              v18 = v17(v24, v16, v29);
              if ( v29 != v18 )
                goto LABEL_22;
            }
          }
          while ( ++v23 < (unsigned __int64)*(int *)(v8 + 84) );
        }
LABEL_30:
        sub_62F430(a1, v8);
        add_base_tils(a3, v8, a4, v31, a5);
        *(_DWORD *)(v8 + 32) &= ~0x40u;
        qfclose(*(_QWORD *)v30);
        sub_633BB0(*a1, 6u, a5 ^ 1, 0, nullptr);
        mark_builtin_widgets(512, 0, 1);
        return v8;
      }
    }
LABEL_22:
    sub_3573A0(a3);
    sub_634830(a1, v8, 0);
    qfclose(*(_QWORD *)v30);
    return 0;
  }
  return v8;
}

