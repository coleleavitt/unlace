__int64 __fastcall sub_22CC10(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r14
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = operator new(0x88u);
  *(_QWORD *)(v4 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)v4 = &forms::label_t___vtable;
  *(_QWORD *)(v4 + 104) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 112) = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(v4 + 104, 0, v5 + 1, 1);
    *(_QWORD *)(v4 + 104) = v8;
    *(_QWORD *)(v4 + 112) = v6;
    memmove(v8, a2, v7);
    *(_BYTE *)(*(_QWORD *)(v4 + 104) + v7) = 0;
  }
  v9 = a1[2];
  *(_BYTE *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 32) = 1;
  v10 = a1[1];
  if ( a1[3] < (unsigned __int64)(v9 + 1) )
  {
    v15 = qvector_reserve(a1 + 1, v10, v9 + 1, 8);
    a1[1] = v15;
    v10 = v15;
    v9 = a1[2];
  }
  *(_QWORD *)(v10 + 8 * v9) = v4;
  v11 = a1[2];
  v12 = a1[1];
  result = v11 + 1;
  v14 = v11 + 2;
  a1[2] = result;
  if ( a1[3] < v14 )
  {
    v16 = qvector_reserve(a1 + 1, v12, v14, 8);
    a1[1] = v16;
    v12 = v16;
    result = a1[2];
  }
  *(_QWORD *)(v12 + 8 * result) = a3;
  ++a1[2];
  return result;
}
