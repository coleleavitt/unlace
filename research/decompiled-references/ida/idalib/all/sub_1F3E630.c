_QWORD *__fastcall sub_1F3E630(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 *v7; // rbp
  _QWORD *result; // rax
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r12
  char v20; // cl
  __int64 v21; // r8
  int v22; // esi
  unsigned int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rbp
  __int64 v28; // r12
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r10
  int v37; // r11d
  __int64 v38; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v39; // [rsp+8h] [rbp-50h] BYREF
  __m128i v40[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = (__int64 *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
  result = (_QWORD *)*v7;
  if ( *v7 != *(_QWORD *)a3 )
  {
    if ( v6 )
      v6 += 48;
    v11 = *a1;
    if ( result )
      result += 6;
    v38 = v6;
    v39 = result;
    sub_1F3B1C0(v40, v11 + 12992, &v38, &v39, a5, a6);
    v13 = *v7;
    sub_1EFE8D0(*a1, *v7, *(_QWORD *)a3);
    result = (_QWORD *)sub_BAC410(a2, v13, v14, v15, v16, v17);
    if ( (_DWORD)result != *(_DWORD *)(a3 + 76) )
    {
      v19 = *a1;
      v20 = *(_BYTE *)(v19 + 12392) & 1;
      if ( v20 )
      {
        v21 = v19 + 12400;
        v22 = 1;
      }
      else
      {
        v29 = *(_DWORD *)(v19 + 12408);
        v21 = *(_QWORD *)(v19 + 12400);
        if ( !v29 )
        {
          v40[0].m128i_i64[0] = 0;
          v30 = *(_DWORD *)(v19 + 12392);
          v31 = (v30 >> 1) + 1;
          goto LABEL_17;
        }
        v22 = v29 - 1;
      }
      v23 = v22 & (((unsigned int)*v7 >> 9) ^ ((unsigned int)*v7 >> 4));
      v24 = v21 + 56LL * v23;
      v25 = *(_QWORD *)v24;
      if ( *v7 == *(_QWORD *)v24 )
      {
LABEL_11:
        v26 = *(unsigned int *)(v24 + 16);
        v27 = (_QWORD *)(v24 + 8);
        v28 = *(_QWORD *)a3;
        if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 20) )
        {
          sub_2237220(v24 + 8, v24 + 24, v26 + 1, 16);
          v26 = *(unsigned int *)(v24 + 16);
        }
LABEL_13:
        result = (_QWORD *)(*v27 + 16 * v26);
        *result = v28;
        result[1] = a3;
        ++*((_DWORD *)v27 + 2);
        return result;
      }
      v18 = 1;
      v36 = 0;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v25 == -8192 && !v36 )
            v36 = v24;
          v37 = v18 + 1;
          v23 = v22 & (v18 + v23);
          v18 = v23;
          v24 = v21 + 56LL * v23;
          v25 = *(_QWORD *)v24;
          if ( *v7 == *(_QWORD *)v24 )
            goto LABEL_11;
          if ( v25 == -4096 )
          {
            if ( v36 )
              v24 = v36;
            break;
          }
          LODWORD(v18) = v37;
        }
      }
      v40[0].m128i_i64[0] = v24;
      v32 = 6;
      v29 = 2;
      v30 = *(_DWORD *)(v19 + 12392);
      v31 = (v30 >> 1) + 1;
      if ( v20 )
      {
LABEL_18:
        v33 = (unsigned int)(4 * v31);
        if ( (unsigned int)v33 >= v32 )
        {
          v29 *= 2;
        }
        else
        {
          v31 = v29 - *(_DWORD *)(v19 + 12396) - (unsigned int)v31;
          v33 = v29 >> 3;
          if ( (unsigned int)v31 > (unsigned int)v33 )
          {
LABEL_20:
            *(_DWORD *)(v19 + 12392) = (2 * (v30 >> 1) + 2) | v30 & 1;
            v34 = (__int64 *)v40[0].m128i_i64[0];
            if ( *(_QWORD *)v40[0].m128i_i64[0] != -4096 )
              --*(_DWORD *)(v19 + 12396);
            v35 = *v7;
            v27 = v34 + 1;
            v34[2] = 0x200000000LL;
            *v34 = v35;
            v34[1] = (__int64)(v34 + 3);
            v26 = 0;
            v28 = *(_QWORD *)a3;
            goto LABEL_13;
          }
        }
        sub_1F3DFD0(v19 + 12392, v29, v31, v33, v21, v18);
        sub_1F20F80(v19 + 12392, v7, v40);
        v30 = *(_DWORD *)(v19 + 12392);
        goto LABEL_20;
      }
      v29 = *(_DWORD *)(v19 + 12408);
LABEL_17:
      v32 = 3 * v29;
      goto LABEL_18;
    }
  }
  return result;
}
