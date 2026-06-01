unsigned __int64 __fastcall sub_A747C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 *v4; // r14
  __int64 *v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rax
  __int16 v38; // ax
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __m128i v43[10]; // [rsp+0h] [rbp-A8h] BYREF

  result = a2;
  v4 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v7 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  if ( v7 != v6 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v11 - 25) <= 1 )
    {
      v12 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
        return 0;
      v13 = *(_QWORD *)(v10 + 24);
      v14 = *(_QWORD *)(v12 + 24);
      v15 = v14;
      v16 = sub_A747C0(a1, v14, v13);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v16 != v13 && v16 != v14 )
        return 0;
      v32 = *v5;
      if ( (unsigned int)*(unsigned __int8 *)(*v5 + 16) - 25 > 1 )
      {
        v32 = sub_F63050(*v5, v15, v17, v18, v19);
        if ( !v32 )
          return 0;
      }
      sub_A5E110((__m128 *)v43, v32);
      v35 = *v5;
      v36 = *(unsigned __int8 *)(v35 + 16);
      if ( (_BYTE)v36 == 42 )
      {
LABEL_32:
        v37 = *(_QWORD *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 25 <= 1
          || (v42 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 25,
              (unsigned int)v42 <= 1)
          && (v37 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL), v32, v42, v33, v34)) != 0 )
        {
          v38 = *(_WORD *)(v37 + 20) >> 2;
LABEL_34:
          v39 = *(unsigned __int16 *)(v32 + 22);
          v43[0].m128i_i16[0] = v38;
          return sub_A73610(a1, v13, (__int64 *)(v32 + 48), v39, v43, 0);
        }
LABEL_42:
        v38 = 0;
        goto LABEL_34;
      }
      v40 = *(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v40 + 16) == 42 )
      {
        v41 = sub_F63050(v35, v32, v40, v33, v34);
        if ( v41 )
        {
          v35 = v41;
          goto LABEL_32;
        }
        v36 = *(unsigned __int8 *)(v35 + 16);
      }
      if ( (unsigned int)(v36 - 25) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
          goto LABEL_42;
        v35 = sub_F63050(v35, v32, v40, v33, v34);
        if ( !v35 )
        {
          v38 = 0;
          goto LABEL_34;
        }
      }
      v38 = *(_WORD *)(v35 + 20) >> 2;
      goto LABEL_34;
    }
    v20 = 0;
    if ( (v6 & 8) != 0 )
      v20 = *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL));
    v21 = v20 | v6 & 7;
    v22 = 0;
    if ( (v7 & 8) != 0 )
      v22 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
    v23 = v22 | v7 & 7;
    if ( v23 == v21 )
    {
      v26 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 34
        || (_BYTE)v11 != 34 )
      {
        return 0;
      }
      v27 = *v5;
      if ( *(_BYTE *)(*v5 + 16) != 34 )
        v27 = sub_F63050(*v5, v11, v22, v26, v23);
      v28 = *(_QWORD *)(v27 + 32);
      v29 = *v4;
      if ( *(_BYTE *)(*v4 + 16) != 34 )
        v29 = sub_F63050(*v4, v11, v22, v26, v23);
      v30 = *(_QWORD *)(v29 + 32);
      v31 = sub_A747C0(a1, v28, v30);
      if ( v31 != v28 )
      {
        if ( v31 != v30 )
          return 0;
        return a3;
      }
    }
    else
    {
      if ( (v22 & 7 | v7 & 7) != (v21 & 7) )
        return 0;
      if ( (unsigned int)v23 >> 9 != (unsigned int)v21 >> 9 )
        return 0;
      v24 = (v21 >> 4) & 3;
      v25 = (v23 >> 4) & 3;
      if ( (_DWORD)v24 == 1 || (_DWORD)v25 == 1 )
        return 0;
      if ( (_DWORD)v24 != 2 )
      {
        if ( (_DWORD)v25 != 2 )
          return 0;
        return a3;
      }
    }
    return a2;
  }
  return result;
}
