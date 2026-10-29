bool __fastcall sub_41AD70(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r12
  unsigned int v7; // eax
  int v8; // r13d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a2 + 1480);
  v5 = a3[1];
  v19[1] = __readfsqword(0x28u);
  v19[0] = 0;
  sub_6141A0(*v4, 26, v19, 8);
  v7 = sub_3B9110(*(_QWORD **)(a2 + 1480), *(_DWORD *)(a2 + 1332));
  if ( v7 < LODWORD(v19[0]) || v7 >= HIDWORD(v19[0]) )
  {
    v10 = a3[1];
    v11 = *a3;
    if ( a3[2] < (unsigned __int64)(v10 + 1) )
    {
      v17 = qvector_reserve(a3, v11, v10 + 1, 24);
      v10 = a3[1];
      *a3 = v17;
      v11 = v17;
    }
    v12 = v11 + 24 * v10;
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v12);
  }
  v8 = sub_614FB0(a2, 94);
  if ( (unsigned int)(v8 - 1) <= 0xFFFFFFFD )
  {
    v13 = sub_3B9110(*(_QWORD **)(a2 + 1480), v8);
    if ( v13 < LODWORD(v19[0]) || v13 >= HIDWORD(v19[0]) )
    {
      v14 = a3[1];
      v15 = *a3;
      if ( a3[2] < (unsigned __int64)(v14 + 1) )
      {
        v18 = qvector_reserve(a3, v15, v14 + 1, 24);
        v14 = a3[1];
        *a3 = v18;
        v15 = v18;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      ++a3[1];
      sub_3573A0((char **)v16);
    }
  }
  return a3[1] == v5;
}

