__int64 __fastcall sub_9EE8A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rcx
  __int64 v7; // rbx
  void *v8; // rbp
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rbx
  char v15; // si
  __int64 v16; // rax
  char v17; // si
  __m128i v18; // xmm0
  void *v19; // rdi
  void *v20; // [rsp+0h] [rbp-58h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)v4 >= v5 )
  {
    v22 = 2 * v5;
    v21 = sub_186B270(80LL * v5);
    v4 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v4 )
    {
      v11 = v21;
      v12 = 0;
      v13 = 0;
      do
      {
        ++v13;
        v11 += 40;
        v14 = v12 + *(_QWORD *)a1;
        v12 += 40;
        v15 = *(_BYTE *)(v14 + 4);
        *(_DWORD *)(v11 - 40) = *(_DWORD *)v14;
        *(_BYTE *)(v11 - 36) = v15 & 3 | *(_BYTE *)(v11 - 36) & 0xFC;
        v16 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v11 - 32) = v16;
        LODWORD(v16) = *(_DWORD *)(v14 + 16);
        v17 = *(_BYTE *)(v14 + 20);
        v18 = _mm_loadu_si128((const __m128i *)(v14 + 24));
        *(_QWORD *)(v14 + 24) = 0;
        *(_DWORD *)(v11 - 24) = v16;
        LOBYTE(v16) = *(_BYTE *)(v11 - 20);
        *(__m128i *)(v11 - 16) = v18;
        *(_BYTE *)(v11 - 20) = v17 & 3 | v16 & 0xFC;
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14);
        sub_182CBA0(v20, v14 + 16);
        v4 = *(unsigned int *)(a1 + 8);
      }
      while ( v13 < (unsigned int)v4 );
    }
    v19 = *(void **)a1;
    if ( *(_QWORD *)a1 && v19 != (void *)(a1 + 16) )
    {
      sub_186B220(v19);
      v4 = *(unsigned int *)(a1 + 8);
    }
    *(_QWORD *)a1 = v21;
    *(_DWORD *)(a1 + 12) = v22;
    v6 = v21;
  }
  else
  {
    v6 = *(_QWORD *)a1;
  }
  v7 = v6 + 40 * v4;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(v7 + 16) = 1;
  *(_QWORD *)(v7 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(v8, v7, a2);
  else
    *(_DWORD *)v7 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v8, v7 + 16, a2 + 16);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(v7 + 20) &= ~1u;
    *(_DWORD *)(v7 + 16) = v9;
  }
  result = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v7 + 32) = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

