__int64 __fastcall sub_4F60(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD **v5; // r14
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned __int64 v11; // r15
  _QWORD *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rax

  v3 = 2 * a2;
  v5 = (_QWORD **)(a3 + 24 * a2 + 48);
  v7 = *v5;
  v8 = *a1;
  v9 = (__int64)&(*v5)[*(_QWORD *)(a3 + 24 * a2 + 56)];
  if ( *v5 == (_QWORD *)v9 )
    goto LABEL_6;
  while ( v8 != *v7 )
  {
    if ( (_QWORD *)v9 == ++v7 )
      goto LABEL_6;
  }
  v10 = 1;
  if ( (_QWORD *)v9 == v7 )
  {
LABEL_6:
    if ( v8 < a1[1] && (unsigned __int8)rangeset_t_has_common() )
    {
      a1[3] = 0;
      v10 = -1;
      *(_OWORD *)a1 = -1;
    }
    else
    {
      rangeset_t_add();
      v11 = *a1;
      v12 = (_QWORD *)(a3 + 8 * (v3 + a2));
      v13 = v12[7];
      v14 = v12[6];
      if ( v12[8] < (unsigned __int64)(v13 + 1) )
      {
        v16 = qvector_reserve();
        v12[6] = v16;
        v14 = v16;
        v13 = v12[7];
      }
      *(_QWORD *)(v14 + 8 * v13) = v11;
      v10 = 0;
      ++*(_QWORD *)(a3 + 8 * (a2 + v3) + 56);
      *(_BYTE *)(a3 + 240) = 1;
    }
  }
  return v10;
}
