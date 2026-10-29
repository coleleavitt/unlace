__int64 __fastcall sub_935240(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // rbp
  char v10; // dl
  char v11; // al
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 result; // rax
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rdi
  unsigned int v30; // ebx
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char **exception; // rbp
  unsigned int v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+8h] [rbp-90h]
  __int64 v39[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v40; // [rsp+30h] [rbp-68h] BYREF
  char v41; // [rsp+38h] [rbp-60h]
  int v42; // [rsp+3Ch] [rbp-5Ch]
  __int64 v43; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+48h] [rbp-50h]
  __int64 v45; // [rsp+50h] [rbp-48h]
  unsigned int v46; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 376);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  sub_928E60((_QWORD *)a1, a3, a4, (_QWORD *)(a1 + 376));
  v5 = *(_QWORD *)(a1 + 376);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    v7 = *(unsigned int *)(v5 - 4);
  else
    v7 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v40, v6, v7);
  v44 = v8;
  v45 = 0;
  v40 = (__int64 *)&off_1C57888;
  v46 = a2;
  sub_B72CF0(&v40, v6);
  v9 = sub_180C100(v6 + 8400, 48);
  v10 = v41;
  v11 = *(_BYTE *)(v9 + 8);
  *(_QWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 8) = v10 & 3 | v11 & 0xFC;
  *(_DWORD *)(v9 + 12) = v42;
  v12 = v43;
  *(_QWORD *)v9 = qword_1C6F870;
  *(_QWORD *)(v9 + 16) = v12;
  *(_DWORD *)(v9 + 24) = v44;
  if ( !v45 )
  {
    *(_QWORD *)v9 = &off_1C57888;
    *(_DWORD *)(v9 + 40) = v46;
    goto LABEL_16;
  }
  v13 = *(_DWORD *)(v45 - 4);
  v37 = *(_DWORD *)(v45 - 8);
  v14 = sub_186B270(16LL * v37 + 8) + 8;
  *(_QWORD *)(v14 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v13)).m128i_u64[0];
  *(_QWORD *)(v9 + 32) = v14;
  v15 = v45;
  v38 = v14;
  if ( !v45 || (v16 = v45 + 16LL * *(unsigned int *)(v45 - 4), v45 == v16) )
  {
    *(_QWORD *)v9 = &off_1C57888;
    *(_DWORD *)(v9 + 40) = v46;
  }
  else
  {
    v17 = v14;
    do
    {
      sub_15D0E50(v17, v15);
      v15 += 16;
      v17 += 16;
    }
    while ( v16 != v15 );
    v38 = *(_QWORD *)(v9 + 32);
    *(_QWORD *)v9 = &off_1C57888;
    *(_DWORD *)(v9 + 40) = v46;
    if ( !v38 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v38 - 4) )
  {
    v18 = *(_QWORD **)(v6 + 8600);
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v30 = (3 * v19 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v31 || v19 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_91CD50(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v18 - 1, v31);
        v33 = v32[1];
        v18 = v32 + 2;
        *(_QWORD *)(v6 + 8600) = v32 + 2;
        *v32 = v30;
        LODWORD(v32) = v33;
        v22 = &v18[v33];
        v21 = (_DWORD)v32 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      v18 = v34 + 1;
      *v34 = 2;
      v21 = 1;
      *(_QWORD *)(v6 + 8600) = v18;
      v22 = v18;
    }
    *v22 = v9;
    *((_DWORD *)v18 - 1) = v21;
  }
LABEL_16:
  v23 = *(_QWORD *)(v6 + 8848);
  v24 = v9 | 3;
  v39[0] = v24;
  result = *(unsigned __int8 *)(v23 + a2);
  if ( (_BYTE)result == 0xFF )
  {
    result = sub_8E8670(v6, v39, a2 ^ 1);
  }
  else if ( !(_BYTE)result )
  {
    result = (__int64)sub_8F28B0(v6, a2, v24, 0);
  }
  v26 = v45;
  v40 = qword_1C6F870;
  if ( v45 )
  {
    v27 = *(unsigned int *)(v45 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v45 + 16 * v27;
      do
      {
        v29 = v26;
        v26 += 16;
        sub_15D0DF0(v29);
      }
      while ( v28 != v26 );
      v26 = v45;
    }
    return sub_186B220((void *)(v26 - 8));
  }
  return result;
}

