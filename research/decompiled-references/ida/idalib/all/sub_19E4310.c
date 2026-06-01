void __fastcall sub_19E4310(__int64 **a1, __int64 a2, __m128 a3, double a4)
{
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 *v16; // rbp
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = sub_BFB9F0(a2);
  if ( (*(_WORD *)v6 & 0x1FF) == 0x57 )
  {
    v7 = *(_QWORD *)(v6 + 32);
    v8 = 1;
    v9 = **(_QWORD **)(v6 + 24);
  }
  else
  {
    v16 = *(__int64 **)(v6 + 24);
    v19[0] = *v16;
    v19[1] = (__int64)(v16 + 1);
    v8 = 3;
    v17 = (unsigned int)sub_F6CE20(v19);
    v18 = sub_F6CCB0(v19, a3);
    v9 = *v16;
    v7 = v18 | (unsigned __int64)(v17 << 32);
  }
  v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43;
  if ( (unsigned int)v11 <= 1
    || (v11 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v11 <= 1)
    && (v10 = sub_F63050(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v5)) != 0 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 32);
      if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = *(_QWORD *)v13;
        v11 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 43;
        if ( (unsigned int)v11 <= 1 )
          break;
        v14 = sub_F63050(v10, a2, v11, v5);
        v12 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          goto LABEL_7;
      }
    }
  }
  else
  {
    v12 = v9;
  }
LABEL_7:
  v15 = sub_19CF160(v12, a2, v11, v5);
  sub_19E3560(*a1, v7, v9, v15, *(_QWORD *)(v6 + 16), v6, (__m128i)a3, a4, 1, v8);
}
