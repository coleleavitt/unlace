__int64 __fastcall sub_89DEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rdx
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // r12
  unsigned __int8 *v17; // rbx
  _BYTE *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r13
  void *v26; // rdi
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  char v28; // [rsp+10h] [rbp-48h]

  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 41 )
  {
    if ( !v9 )
    {
      v27.m128i_i64[0] = a1;
      v27.m128i_i64[1] = a3;
      v28 = 0;
      return (unsigned int)sub_871080((__int64)&v27, a2, (__int64 *)v10, a4, a5, a6);
    }
    goto LABEL_8;
  }
  if ( v9 )
  {
LABEL_8:
    v27.m128i_i64[0] = a1;
    v27.m128i_i64[1] = a3;
    v28 = 0;
    return (unsigned int)sub_869D30(&v27, a2);
  }
  v11 = sub_B19540(v8, *(_QWORD *)(a1 + 16));
  if ( (_BYTE)v11
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 47
    && (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
    v27.m128i_i64[0] = a1;
    v27.m128i_i64[1] = a3;
    v28 = 0;
    LOBYTE(v12) = sub_89CD60(v27.m128i_i64, a2);
    return v12;
  }
  else
  {
    v14 = sub_A2E130(a1, a2, 2256, 0);
    v15 = *(_QWORD *)(a2 + 8);
    v16 = (_QWORD *)v14;
    if ( v14 )
    {
      v17 = *(unsigned __int8 **)v14;
      if ( !*(_QWORD *)v14 )
      {
        v20 = *(_QWORD *)(v14 + 8);
        v21 = *(_DWORD *)(v20 + 14976);
        if ( v21 )
        {
          v22 = (unsigned int)(v21 - 1);
          *(_DWORD *)(v20 + 14976) = v22;
          v17 = *(unsigned __int8 **)(v20 + 8 * v22 + 14848);
          v23 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v24 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v25 = v24 + (v23 << 6);
          while ( v24 != v25 )
          {
            while ( 1 )
            {
              v25 -= 64;
              v26 = *(void **)(v25 + 24);
              if ( v26 == (void *)(v25 + 40) )
                break;
              operator delete(v26, *(_QWORD *)(v25 + 40) + 1LL);
              if ( v24 == v25 )
                goto LABEL_19;
            }
          }
LABEL_19:
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v17 = (unsigned __int8 *)operator new(0x3A0u);
          *v17 = 0;
          *((_QWORD *)v17 + 12) = v17 + 112;
          *((_QWORD *)v17 + 16) = v17 + 144;
          *((_QWORD *)v17 + 20) = v17 + 176;
          *((_QWORD *)v17 + 24) = v17 + 208;
          *((_QWORD *)v17 + 28) = v17 + 240;
          *((_QWORD *)v17 + 32) = v17 + 272;
          *((_QWORD *)v17 + 36) = v17 + 304;
          *((_QWORD *)v17 + 40) = v17 + 336;
          *((_QWORD *)v17 + 44) = v17 + 368;
          *((_QWORD *)v17 + 48) = v17 + 400;
          *((_QWORD *)v17 + 13) = 0;
          v17[112] = 0;
          *((_QWORD *)v17 + 17) = 0;
          v17[144] = 0;
          *((_QWORD *)v17 + 21) = 0;
          v17[176] = 0;
          *((_QWORD *)v17 + 25) = 0;
          v17[208] = 0;
          *((_QWORD *)v17 + 29) = 0;
          v17[240] = 0;
          *((_QWORD *)v17 + 33) = 0;
          v17[272] = 0;
          *((_QWORD *)v17 + 37) = 0;
          v17[304] = 0;
          *((_QWORD *)v17 + 41) = 0;
          v17[336] = 0;
          *((_QWORD *)v17 + 45) = 0;
          v17[368] = 0;
          *((_QWORD *)v17 + 49) = 0;
          v17[400] = 0;
          *((_QWORD *)v17 + 52) = v17 + 432;
          *((_QWORD *)v17 + 53) = 0x800000000LL;
          *((_QWORD *)v17 + 66) = v17 + 544;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        *v16 = v17;
      }
      v17[*v17 + 1] = 8;
      v18 = (_BYTE *)*v16;
      v19 = *(unsigned __int8 *)*v16;
      *v18 = v19 + 1;
      *(_QWORD *)&v18[8 * v19 + 16] = v15;
    }
  }
  return v11;
}

