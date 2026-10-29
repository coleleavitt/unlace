__int64 __fastcall sub_AF22A0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rbp
  char v9; // dl
  char v10; // al
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r13
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 result; // rax
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // rdi
  unsigned int v27; // ebx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+8h] [rbp-A0h]
  __int64 v33; // [rsp+8h] [rbp-A0h]
  __int64 v34[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v35; // [rsp+30h] [rbp-78h] BYREF
  char v36; // [rsp+38h] [rbp-70h]
  int v37; // [rsp+3Ch] [rbp-6Ch]
  __int64 v38; // [rsp+40h] [rbp-68h]
  int v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 544);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    v6 = *(unsigned int *)(v4 - 4);
  else
    v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  sub_B72D60(&v35, *(_QWORD *)(a1 + 16), v6, v4, 0, 0);
  v41 = v7;
  v42 = 0;
  v35 = (__int64 *)&off_1C57990;
  sub_B73430(&v35, v5);
  v8 = sub_180C100(v5 + 8400, 56);
  v9 = v36;
  v10 = *(_BYTE *)(v8 + 8);
  *(_QWORD *)(v8 + 48) = 0;
  *(_BYTE *)(v8 + 8) = v9 & 3 | v10 & 0xFC;
  *(_DWORD *)(v8 + 12) = v37;
  *(_QWORD *)(v8 + 16) = v38;
  *(_DWORD *)(v8 + 24) = v39;
  v11 = v40;
  *(_QWORD *)v8 = qword_1C6E7C8;
  *(_QWORD *)(v8 + 32) = v11;
  *(_DWORD *)(v8 + 40) = v41;
  if ( !v42 )
  {
    *(_QWORD *)v8 = &off_1C57990;
    goto LABEL_13;
  }
  v12 = *(_DWORD *)(v42 - 4);
  v32 = *(_DWORD *)(v42 - 8);
  v13 = sub_186B270(16LL * v32 + 8) + 8;
  *(_QWORD *)(v13 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v12)).m128i_u64[0];
  *(_QWORD *)(v8 + 48) = v13;
  v14 = v42;
  v33 = v13;
  if ( !v42 || (v15 = v13, v16 = v42 + 16LL * *(unsigned int *)(v42 - 4), v42 == v16) )
  {
    *(_QWORD *)v8 = &off_1C57990;
  }
  else
  {
    do
    {
      sub_15D0E50(v15, v14);
      v14 += 16;
      v15 += 16;
    }
    while ( v14 != v16 );
    v33 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)v8 = &off_1C57990;
    if ( !v33 )
      goto LABEL_13;
  }
  if ( *(_DWORD *)(v33 - 4) )
  {
    v17 = *(_QWORD **)(v5 + 8600);
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 == *((_DWORD *)v17 - 2) )
      {
        v27 = (3 * v18 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v28 || v18 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v34, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v17 - 1, v28);
        v30 = v29[1];
        v17 = v29 + 2;
        *(_QWORD *)(v5 + 8600) = v29 + 2;
        *v29 = v27;
        LODWORD(v29) = v30;
        v21 = &v17[v30];
        v20 = (_DWORD)v29 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v17[v19];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v17 = v31 + 1;
      *v31 = 2;
      v20 = 1;
      *(_QWORD *)(v5 + 8600) = v17;
      v21 = v17;
    }
    *v21 = v8;
    *((_DWORD *)v17 - 1) = v20;
  }
LABEL_13:
  v34[0] = v8 | 3;
  result = sub_8E8670(v5, v34, -2);
  v23 = v42;
  v35 = qword_1C6E7C8;
  if ( v42 )
  {
    v24 = *(unsigned int *)(v42 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v42 + 16 * v24;
      do
      {
        v26 = v23;
        v23 += 16;
        sub_15D0DF0(v26);
      }
      while ( v23 != v25 );
      v23 = v42;
    }
    return sub_186B220((void *)(v23 - 8));
  }
  return result;
}

