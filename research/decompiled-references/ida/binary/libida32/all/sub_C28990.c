__int64 __fastcall sub_C28990(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // r14d
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r9d
  unsigned __int64 v32; // rdi
  unsigned int v33; // r15d
  unsigned int v34; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __m128i *v40; // r12
  __int64 v41; // rax
  __m128i *v42; // rcx
  unsigned __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rsi
  char v49; // al
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // r8
  void *v54; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int32 v55; // [rsp+18h] [rbp-90h]
  __int8 v56; // [rsp+1Ch] [rbp-8Ch]
  __m128i v57; // [rsp+20h] [rbp-88h] BYREF
  __m128i v58; // [rsp+30h] [rbp-78h] BYREF
  char v59; // [rsp+40h] [rbp-68h]

  v6 = (__int64 *)a2;
  v7 = a2[1].m128i_i64[1];
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 13 )
  {
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_3;
    goto LABEL_24;
  }
  if ( v9 != 47 )
  {
    if ( v9 != 10 )
      goto LABEL_3;
    goto LABEL_24;
  }
  v36 = sub_F3D1D0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v7,
          a4,
          a5);
  if ( ((*(_BYTE *)(v36 + 74) & 1) != 0 || (*(_QWORD *)(v36 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F3D1D0(v8, a2, v37, v38, v39) + 76) >= 0 )
  {
LABEL_24:
    v7 = a2[1].m128i_i64[0];
    goto LABEL_3;
  }
  v7 = a2[1].m128i_i64[1];
LABEL_3:
  if ( (unsigned __int8)sub_F34640(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
    return (unsigned int)sub_BF05D0(*(_QWORD *)a1, (__int64)a2);
  v13 = a2[1].m128i_i64[1];
  v56 = 0;
  v55 = 1;
  v54 = nullptr;
  if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v10, v11, v12) )
    v17 = a2[1].m128i_i64[0];
  else
    v17 = a2[1].m128i_i64[1];
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 57 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1
     || (v18 = sub_F3F310(v18, a2, v14, v15)) == 0) )
  {
    v40 = &v57;
    v41 = a2[1].m128i_i64[1];
    v42 = &v58;
    v33 = 1;
    v57 = _mm_loadu_si128(a2 + 1);
    while ( 1 )
    {
      v43 = v40->m128i_i64[0];
      if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v14, (__int64)v42, v16) )
      {
        v47 = *(_QWORD *)a1;
        if ( v43 != v6[2] )
          goto LABEL_35;
      }
      else
      {
        v47 = *(_QWORD *)a1;
        if ( v43 != v6[3] )
        {
LABEL_35:
          a2 = (const __m128i *)&v54;
          if ( (unsigned __int8)sub_C23520(v43, (__int64)&v54, v47, v44, v45, v46) == 1 )
            goto LABEL_36;
          goto LABEL_40;
        }
      }
      v48 = *(_QWORD *)(a1 + 8);
      v49 = *(_BYTE *)(a1 + 16);
      v58.m128i_i64[0] = v47;
      v58.m128i_i64[1] = v48;
      a2 = (const __m128i *)v43;
      v59 = v49;
      if ( (unsigned __int8)sub_C24FB0(&v58, v43, v47, v44, v45, v46) == 1 )
      {
LABEL_36:
        v40 = (__m128i *)((char *)v40 + 8);
        if ( v40 == &v58 )
          goto LABEL_42;
        goto LABEL_37;
      }
LABEL_40:
      v33 = sub_BEDB10(*(_QWORD *)a1);
      if ( !(_BYTE)v33 )
        goto LABEL_17;
      v40 = (__m128i *)((char *)v40 + 8);
      v33 = 0;
      if ( v40 == &v58 )
      {
LABEL_42:
        v34 = v55;
        if ( (_BYTE)v33 )
        {
          v58.m128i_i32[2] = v55;
          if ( v55 > 0x40 )
            sub_21E17D0(&v58);
          else
            v58.m128i_i64[0] = (__int64)v54;
          v50 = v6[1];
          v51 = *(_QWORD *)(a1 + 8);
          v52 = *(_QWORD *)a1;
          v58.m128i_i8[12] = v56;
          v33 = sub_BF65F0(v52, (unsigned __int64)v6, v51, v50, (__int64)&v58);
          if ( v58.m128i_i32[2] > 0x40u && v58.m128i_i64[0] )
            operator delete[]((void *)v58.m128i_i64[0]);
          goto LABEL_17;
        }
        goto LABEL_18;
      }
LABEL_37:
      v41 = v6[3];
    }
  }
  v19 = a2[1].m128i_i64[1];
  v58.m128i_i8[4] &= ~1u;
  v58.m128i_i32[0] = 0;
  if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v14, v15, v16) )
    v22 = a2[1].m128i_u64[0];
  else
    v22 = a2[1].m128i_u64[1];
  v23 = *(_QWORD *)a1;
  v27 = sub_C15CD0((__int64)&v58, *(_QWORD *)a1, v22, v20, v21);
  if ( (_BYTE)v27 || (unsigned __int8)sub_BEDB10(*(_QWORD *)a1) )
  {
    v28 = *(_QWORD *)a1;
    if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v6[3] + 8) & 0xFFFFFFFFFFFFFFF0LL), v23, v24, v25, v26) )
      v32 = v6[3];
    else
      v32 = v6[2];
    v33 = sub_C23520(v32, (__int64)&v54, v28, v29, v30, v31);
    if ( !(_BYTE)v33 )
    {
      sub_BEDB10(*(_QWORD *)a1);
      goto LABEL_15;
    }
    if ( (_BYTE)v27 )
    {
      sub_C00890(*(_QWORD *)(a1 + 8), *(_QWORD **)(*(_QWORD *)a1 + 16LL), (__int64)&v58);
      if ( v56 )
      {
        v53 = (__int64)v54;
        if ( v55 > 0x40 )
          v53 = *(_QWORD *)v54;
      }
      else if ( v55 > 0x40 )
      {
        v53 = *(_QWORD *)v54;
      }
      else
      {
        v53 = 0;
        if ( v55 )
          v53 = (__int64)((_QWORD)v54 << (64 - (unsigned __int8)v55)) >> (64 - (unsigned __int8)v55);
      }
      v33 = v27;
      sub_BEF2C0(*(_QWORD *)a1, (unsigned __int64)v6, *(_QWORD *)(a1 + 8), *(_QWORD *)(v18 + 32), v53);
      goto LABEL_15;
    }
  }
  v33 = 0;
LABEL_15:
  if ( v58.m128i_i32[0] > 1u )
    sub_A2BBA0(v58.m128i_i32);
LABEL_17:
  v34 = v55;
LABEL_18:
  if ( v34 > 0x40 && v54 )
    operator delete[](v54);
  return v33;
}

