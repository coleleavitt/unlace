__int64 __fastcall sub_204AEB0(__int64 a1, __int64 a2, char a3, void *a4, size_t a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 *v21; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF

  v7 = a1 + 16;
  v8 = (__int64 *)(a2 + 56);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v21 = (__int64 *)(a2 + 56);
  v9 = a2 + 8LL * *(unsigned int *)(a2 + 8) + 56;
  if ( v9 != a2 + 56 )
  {
    while ( 1 )
    {
      sub_20497C0((__int64)&src, v8, a3, (__int64)a4, a5, a6);
      a5 = n;
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)a1;
      a4 = src;
      v12 = n + v10;
      v13 = v7 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
      if ( v12 > v13 )
      {
        sub_998B30(a1, v10, 0, src, n);
        v11 = *(_QWORD *)a1;
      }
      else if ( n )
      {
        v14 = (_BYTE *)(v10 + v11);
        if ( n == 1 )
          *v14 = *(_BYTE *)src;
        else
          memcpy(v14, src, n);
        v11 = *(_QWORD *)a1;
      }
      *(_QWORD *)(a1 + 8) = v12;
      *(_BYTE *)(v11 + v12) = 0;
      if ( src != &v24 )
        operator delete(src);
      if ( ++v8 == (__int64 *)v9 )
        break;
      if ( v8 != v21 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = *(_QWORD *)a1;
        v17 = v15 + 1;
        if ( v7 == *(_QWORD *)a1 )
          a4 = byte_9 + 6;
        else
          a4 = *(void **)(a1 + 16);
        if ( v17 > (unsigned __int64)a4 )
        {
          sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, nullptr, 1u);
          v16 = *(_QWORD *)a1;
          v17 = v15 + 1;
        }
        *(_BYTE *)(v16 + v15) = 32;
        v18 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = v17;
        *(_BYTE *)(v18 + v15 + 1) = 0;
      }
    }
  }
  return a1;
}
