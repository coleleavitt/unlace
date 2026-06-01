unsigned __int64 __fastcall sub_1705EB0(__int64 *a1, _OWORD *a2, __m128 *a3, char a4)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 *v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  char v27; // cl
  __m128 v28; // xmm1
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // [rsp+0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+8h] [rbp-50h]
  __m128 v33; // [rsp+10h] [rbp-48h] BYREF

  v6 = (unsigned __int64)(a1 + 1);
  v7 = *a1;
  if ( *a1 & 7 | (*a1 >> 3) & 1 && v7 )
  {
    v18 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    v19 = sub_F6C520(*v18 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *v18;
    v6 = v19 * ((v6 - (v6 != 0)) / v19 + (v6 != 0));
  }
  v8 = v7;
  v31 = v6;
  v9 = v7 & 7;
  v33 = _mm_loadh_ps((const double *)&v31);
  if ( !a4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = sub_B8F2F0((__int64 *)&v33);
          if ( !v10 )
            break;
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 80LL);
          v12 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v11 & 4) != 0 )
            v12 = (unsigned __int64 *)*v12;
          if ( !v12 )
            break;
          v16 = (unsigned __int64)(v12 + 1);
          v17 = *v12;
          if ( (v17 & 0xF) != 0 && v17 )
          {
            v20 = sub_F6C520(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
            v16 = v20 * ((v16 - (v16 != 0)) / v20 + (v16 != 0));
          }
          else
          {
            v31 = v17;
          }
          v31 = v16;
          v33 = _mm_loadh_ps((const double *)&v31);
        }
        v7 = v33.m128_u64[0];
        v8 = v33.m128_u64[0];
        v9 = v33.m128_i8[0] & 7;
        if ( (v33.m128_i8[0] & 0xF) != 0 )
          break;
        if ( *(_BYTE *)(*(_QWORD *)(v33.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 8 )
          goto LABEL_9;
        if ( !v33.m128_u64[0] )
          goto LABEL_40;
        v21 = v33.m128_u64[1] + 8;
        v22 = sub_F6C520(*(_QWORD *)(v33.m128_u64[0] + 40));
        v33.m128_u64[0] = *(_QWORD *)(v7 + 40);
        v33.m128_u64[1] = v22 * ((v21 != 0) + (v21 - (unsigned __int64)(v21 != 0)) / v22);
      }
      if ( !v33.m128_u64[0] )
        break;
      v14 = v33.m128_u64[1];
      v15 = sub_F6C520(*(_QWORD *)(v33.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
      v31 = v15 * ((v14 != 0) + (v14 - (v14 != 0)) / v15);
      v33 = _mm_loadh_ps((const double *)&v31);
    }
    if ( MEMORY[0x10102464C458F] != 8 )
    {
      v8 = v33.m128_i8[0] & 7;
      goto LABEL_9;
    }
LABEL_40:
    v8 = 0;
    v7 = 0;
  }
LABEL_9:
  result = v9 | (v8 >> 3) & 1;
  if ( !result )
  {
    result = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) == 11 )
    {
      if ( v7 )
      {
        v23 = v33.m128_u64[1] + 4;
        v24 = sub_F6C520(*(_QWORD *)(v7 + 32));
        v25 = *(_QWORD *)(v7 + 32);
        v32 = v25;
        v26 = v25 & 7;
        v27 = v25;
        v31 = v24 * ((v23 != 0) + (v23 - (unsigned __int64)(v23 != 0)) / v24);
        result = v26 | (v25 >> 3) & 1;
        if ( !result )
        {
          result = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(result + 16) != 40 )
          {
            v32 = v25;
            v28 = _mm_loadh_ps((const double *)&v31);
            v33 = v28;
            goto LABEL_29;
          }
          result = sub_F6D010(v25, v31);
          v31 = v30;
          v25 = result;
          v27 = result;
          v26 = result & 7;
        }
        v28 = _mm_loadh_ps((const double *)&v31);
        v33 = v28;
        if ( v26 )
        {
          v31 = 0;
          *a2 = 0;
          goto LABEL_34;
        }
LABEL_29:
        if ( (v27 & 8) != 0 )
        {
          *a2 = 0;
        }
        else
        {
          v29 = v25 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v29 + 16LL) - 25 > 1 )
            *a2 = 0;
          else
            *a2 = v28;
          result = *(_QWORD *)v29;
          if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 26 )
            goto LABEL_34;
        }
        v31 = 0;
LABEL_34:
        *a3 = _mm_loadh_ps((const double *)&v31);
      }
    }
  }
  return result;
}
