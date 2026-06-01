unsigned __int64 __fastcall sub_6DDC00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 *v4; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // rdi
  __int16 v26; // ax
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33[10]; // [rsp+0h] [rbp-A8h] BYREF

  v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  v7 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
  if ( v6 == v7 )
    return a2;
  v10 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v11 - 25) > 1 )
  {
    if ( (v6 & 8) != 0 )
    {
      v17 = *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL)) | v6 & 7;
      v18 = 0;
      if ( (v7 & 8) == 0 )
      {
LABEL_9:
        v19 = v18 | v7 & 7;
        if ( v19 == v17 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 33
            || (_BYTE)v11 != 33 )
          {
            return 0;
          }
          v27 = *v4;
          if ( *(_BYTE *)(*v4 + 16) != 33 )
            v27 = sub_B0D320(v27);
          v28 = *(_QWORD *)(v27 + 32);
          v29 = *(_QWORD *)v3;
          if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 33 )
            v29 = sub_B0D320(v29);
          v30 = *(_QWORD *)(v29 + 32);
          v31 = sub_6DDC00(a1, v28, v30);
          if ( v31 != v28 )
          {
            if ( v31 == v30 )
              return a3;
            return 0;
          }
        }
        else
        {
          if ( (((unsigned __int8)v17 ^ (unsigned __int8)v19) & 7) != 0 )
            return 0;
          if ( (unsigned int)(v19 >> 9) != (unsigned int)(v17 >> 9) )
            return 0;
          v20 = (v17 >> 4) & 3;
          v21 = (v19 >> 4) & 3;
          if ( (_DWORD)v20 == 1 || (_DWORD)v21 == 1 )
            return 0;
          if ( (_DWORD)v20 != 2 )
          {
            if ( (_DWORD)v21 == 2 )
              return a3;
            return 0;
          }
        }
        return a2;
      }
    }
    else
    {
      v17 = v6 & 7;
      v18 = 0;
      if ( (v7 & 8) == 0 )
        goto LABEL_9;
    }
    v18 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    return 0;
  v13 = *(_QWORD *)(v10 + 24);
  v14 = *(_QWORD *)(v12 + 24);
  v15 = sub_6DDC00(a1, v14, v13);
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF || v15 != v14 && v15 != v13 )
    return 0;
  v22 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 25 > 1 )
  {
    v22 = sub_B0D320(*v4);
    if ( !v22 )
      return 0;
  }
  sub_6B29F0((__int64)v33, v22);
  v23 = *v4;
  v24 = *(unsigned __int8 *)(v23 + 16);
  if ( (_BYTE)v24 != 41 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
    {
      v32 = sub_B0D320(v23);
      if ( v32 )
      {
        v23 = v32;
        goto LABEL_24;
      }
      v24 = *(unsigned __int8 *)(v23 + 16);
    }
    if ( (unsigned int)(v24 - 25) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      {
LABEL_43:
        v26 = 0;
        goto LABEL_26;
      }
      v23 = sub_B0D320(v23);
      if ( !v23 )
      {
        v26 = 0;
        goto LABEL_26;
      }
    }
    v26 = *(_WORD *)(v23 + 18) >> 3;
    goto LABEL_26;
  }
LABEL_24:
  v25 = *(_QWORD *)(*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      goto LABEL_43;
    v25 = sub_B0D320(v25);
    if ( !v25 )
      goto LABEL_43;
  }
  v26 = *(_WORD *)(v25 + 18) >> 3;
LABEL_26:
  v33[0].m128i_i16[0] = v26;
  return sub_6DB070(a1, v13, v22 + 48, (unsigned __int16)(*(_DWORD *)(v22 + 20) >> 6), v33, 0);
}

