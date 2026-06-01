unsigned __int64 __fastcall sub_6DD7D0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // r14
  char v7; // al
  unsigned __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  char *v12; // rdx
  char *v13; // rdi
  __int64 v14; // rdx
  int v15; // r12d
  unsigned int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-158h]
  __int64 v29; // [rsp+8h] [rbp-150h]
  __m128i v30[8]; // [rsp+10h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+98h] [rbp-C0h]
  _BYTE s[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 26 )
  {
LABEL_2:
    v8 = sub_6DAB40(a1, *(_QWORD *)(v6 + 24), a3, a4);
    v9 = *(_DWORD *)(v6 + 20);
    ptr = s;
    v29 = v8;
    v10 = (unsigned __int16)(v9 >> 6);
    v32 = 0x1000000000LL;
    v11 = 8 * v10;
    if ( !(8 * v10) )
    {
LABEL_15:
      sub_6B29F0((__int64)v30, v6);
      v24 = sub_6DB070((__int64)a1, v29, (__int64)ptr, (unsigned int)v32, v30, 0);
      if ( ptr != s )
        free(ptr);
      return v24;
    }
    if ( v11 > 0x80 )
    {
      sub_25D6060(&ptr, s, v10, 8);
      v26 = 8LL * (unsigned int)v32;
      if ( v11 == v26 )
      {
LABEL_6:
        LODWORD(v32) = v10;
        v15 = v10;
        v16 = 0;
        do
        {
          v21 = v16;
          v20 = *(_QWORD *)(v6 + 8LL * v16 + 48);
          v22 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v22 + 16) == 41
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41
            && (v28 = *(_QWORD *)(v6 + 8LL * v16 + 48), v23 = sub_B0D320(v22), v20 = v28, (v22 = v23) != 0) )
          {
            v17 = *(_QWORD *)(v22 + 32);
            v18 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v18 & 8) != 0
              && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v18 & 0xFFFFFFFFFFFFFFF0LL))
                               | (unsigned __int64)(((unsigned __int8)v17 | (unsigned __int8)v18) & 7)) >> 9)
               - 16 <= 2 )
            {
              v19 = sub_6DA9D0(a1, v17, v14, v20);
              v20 = sub_6C4160((__int64)a1, v19);
            }
          }
          ++v16;
          *((_QWORD *)ptr + v21) = v20;
        }
        while ( v16 != v15 );
        goto LABEL_15;
      }
      v13 = (char *)ptr + v26;
      v12 = (char *)ptr + v11;
    }
    else
    {
      v12 = &s[v11];
      v13 = s;
    }
    memset(v13, 0, v12 - v13);
    goto LABEL_6;
  }
  a3 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a3 + 16) == 26 )
  {
    v6 = sub_B0D320(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v6 )
      goto LABEL_2;
    v6 = *(_QWORD *)v4;
    v7 = *(_BYTE *)(*(_QWORD *)v4 + 16LL);
  }
  if ( v7 != 25 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 25 )
      return a2;
    v6 = sub_B0D320(v6);
    if ( !v6 )
      return a2;
  }
  v27 = sub_6DAB40(a1, *(_QWORD *)(v6 + 24), a3, a4);
  LOWORD(ptr) = *(_WORD *)(v6 + 18) >> 3;
  return sub_6C7100((__int64)a1, v27, (unsigned __int16 *)&ptr);
}

