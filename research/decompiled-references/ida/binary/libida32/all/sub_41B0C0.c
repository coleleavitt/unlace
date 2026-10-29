bool __fastcall sub_41B0C0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r12
  unsigned int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD **)(a2 + 1480);
  v4 = a3[1];
  v12[1] = __readfsqword(0x28u);
  v12[0] = 0;
  sub_6141A0(*v3, 26, v12, 8);
  v6 = sub_3B9110(*(_QWORD **)(a2 + 1480), *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 2312LL));
  if ( v6 < LODWORD(v12[0]) || v6 >= HIDWORD(v12[0]) )
  {
    v8 = a3[1];
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve(a3, v9, v8 + 1, 24);
      v8 = a3[1];
      *a3 = v11;
      v9 = v11;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v10);
  }
  return a3[1] == v4;
}

