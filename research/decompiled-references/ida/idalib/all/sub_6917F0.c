unsigned __int64 __fastcall sub_6917F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // r12
  void *v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-188h]
  unsigned __int64 v17; // [rsp+168h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 8);
  v7 = *(_QWORD *)(a2 + 40);
  v17 = __readfsqword(0x28u);
  v16 = *v6;
  if ( v7 != -1 )
  {
    v12 = v6[16];
    a5 = (__int64)(v6 + 15);
    a4 = v6[17];
    v13 = v6[15];
    a3 = v12 + 1;
    if ( a4 < v12 + 1 )
    {
      v14 = qvector_reserve(v6 + 15, v13, a3, 8);
      v6[15] = v14;
      v13 = v14;
      v12 = v6[16];
    }
    *(_QWORD *)(v13 + 8 * v12) = v7;
    ++v6[16];
    *(_QWORD *)(a2 + 40) = -1;
  }
  v8 = *(void **)(a2 + 16);
  if ( v8 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v8);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
  }
  v9 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == -1 )
    v9 = sub_631AD0(**(_QWORD **)(v16 + 1672), 19, a3, a4, a5, a6);
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 == -1 )
    v10 = sub_631AD0(**(_QWORD **)(v16 + 1672), 20, a3, a4, a5, a6);
  if ( v9 < v10 )
    callui(27, (int)&callui, a3, a4, a5, a6);
  *(_BYTE *)(a2 + 48) = 1;
  return v17 - __readfsqword(0x28u);
}
