__int64 __fastcall sub_397EF0(__int64 a1, __int64 a2)
{
  __m128i *v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v16[1] = (__int64 *)__readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 61 )
  {
    v15 = *(_QWORD *)a2;
    if ( v15 != -1 )
    {
      v4 = *(__m128i **)(a1 + 64);
      v16[0] = (__int64 *)&v15;
      v5 = sub_397C00(v4, &v15, v16);
      v6 = *(_QWORD *)(a1 + 72);
      v7 = *(_QWORD **)(v5 + 32);
      v8 = *(_QWORD *)(v5 + 40);
      v9 = (_QWORD *)(v5 + 24);
      v10 = &v7[v8];
      if ( v7 == v10 )
        goto LABEL_9;
      v11 = *(_QWORD **)(v5 + 32);
      while ( v6 != *v11 )
      {
        if ( v10 == ++v11 )
          goto LABEL_9;
      }
      if ( v11 == v10 )
      {
LABEL_9:
        v12 = v8 + 1;
        if ( v9[3] < v12 )
        {
          v13 = qvector_reserve(v9 + 1, v7, v12, 8);
          v14 = v9[2];
          v9[1] = v13;
          v10 = (_QWORD *)(v13 + 8 * v14);
        }
        *v10 = v6;
        ++v9[2];
      }
    }
  }
  return 0;
}
