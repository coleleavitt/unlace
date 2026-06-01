__int64 __fastcall sub_1741D50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  int v12; // r15d
  int v13; // r12d
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int *v16; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i *v20; // rdi
  const __m128i *v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // r15
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  _QWORD *v29; // [rsp+8h] [rbp-110h]
  int v30; // [rsp+8h] [rbp-110h]
  unsigned __int8 v31; // [rsp+8h] [rbp-110h]
  int v32; // [rsp+10h] [rbp-108h]
  __int64 v33; // [rsp+18h] [rbp-100h]
  unsigned int *v34; // [rsp+20h] [rbp-F8h]
  _BYTE *v35; // [rsp+20h] [rbp-F8h]
  _BYTE v36[8]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int8 v37; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int *v39; // [rsp+48h] [rbp-D0h]
  __int64 v40; // [rsp+50h] [rbp-C8h]
  void *ptr; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-B0h]
  _DWORD v43[25]; // [rsp+70h] [rbp-A8h] BYREF
  char v44; // [rsp+D4h] [rbp-44h]

  if ( sub_B77D90(a2) && sub_B77AF0(a2) )
  {
    v29 = (_QWORD *)sub_B77AF0(a2);
    if ( a9 )
    {
      v12 = a7;
      v13 = a8;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = sub_B77EF0(a2);
    sub_1DC3850((unsigned int)v36, a1, v14, (_DWORD)v29, v12, v13, 0);
    v15 = v37;
    if ( v37 )
      goto LABEL_15;
    v16 = (unsigned int *)sub_B77B50(a2);
    if ( v16 )
    {
      v17 = *v16;
      v42 = 0x400000000LL;
      ptr = v43;
      v43[24] = 0;
      v44 = 0;
      if ( a2 )
      {
        v34 = v16 + 2;
        v33 = v17;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        v19 = (unsigned int)v42 + 1LL;
        v38 = v18 & 0xFFFFFFFFFFFFFFFBLL;
        v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
        v39 = v34;
        v21 = (const __m128i *)&v38;
        v40 = v33;
        if ( v19 > HIDWORD(v42) )
        {
          if ( ptr > &v38 || v20 <= (__m128i *)&v38 )
          {
            sub_2237220(&ptr, v43, v19, 24);
            v21 = (const __m128i *)&v38;
            v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
          }
          else
          {
            v35 = ptr;
            sub_2237220(&ptr, v43, v19, 24);
            v21 = (const __m128i *)((char *)ptr + (char *)&v38 - v35);
            v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v42);
          }
        }
      }
      else
      {
        v39 = v16 + 2;
        v20 = (__m128i *)v43;
        v21 = (const __m128i *)&v38;
        v38 = 0;
        v40 = v17;
      }
      *v20 = _mm_loadu_si128(v21);
      v20[1].m128i_i64[0] = v21[1].m128i_i64[0];
      LODWORD(v42) = v42 + 1;
      v22 = sub_1E03DC0(a1, a2, v29[6], a4, &ptr);
      if ( (_BYTE)v22 )
      {
        if ( ptr != v43 )
        {
          v31 = v22;
          free(ptr);
          v22 = v31;
        }
        goto LABEL_14;
      }
      if ( ptr != v43 )
        free(ptr);
    }
    v23 = *(_QWORD *)sub_BC3640(v29) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v23 )
    {
LABEL_15:
      sub_1DBADA0(v36);
      return v15;
    }
    v22 = sub_1E03DC0(a1, a2, *(_QWORD *)(v23 + 48), a4, a3);
LABEL_14:
    v15 = v22;
    goto LABEL_15;
  }
  if ( (unsigned int)sub_B778D0(a2) == 2 || (v15 = 0, (unsigned int)sub_B778D0(a2) == 5) )
  {
    if ( (unsigned int)sub_B778D0(a2) == 2 )
      v25 = (unsigned __int64)sub_B77970(a2);
    else
      v25 = sub_B77AB0(a2);
    if ( a9 )
    {
      v26 = a7;
      v27 = a8;
    }
    else
    {
      v26 = 0;
      v27 = 0;
    }
    v32 = v27;
    v30 = v26;
    v28 = sub_B77EF0(a2);
    sub_1DC3850((unsigned int)&ptr, a1, v28, v25, v30, v32, 0);
    if ( (_BYTE)v42 || (v15 = sub_1E03DC0(a1, a2, v25, a4, a3), (_BYTE)v15) )
    {
      v15 = 1;
      sub_1DBADA0(&ptr);
    }
    else
    {
      sub_1DBADA0(&ptr);
    }
  }
  return v15;
}
