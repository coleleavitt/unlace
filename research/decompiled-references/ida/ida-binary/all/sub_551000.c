__int64 __fastcall sub_551000(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  size_t v7; // rbp
  void *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF

  v11[5] = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = qstrftime(v11, 40, "%F", a3);
    *(_QWORD *)a1 = 0;
    v7 = v6;
    *(_OWORD *)(a1 + 8) = 0;
    if ( v6 )
    {
      v8 = nullptr;
      v9 = v6 + 1;
      if ( v6 != -1 )
      {
        v10 = qvector_reserve(a1, 0, v6 + 1, 1);
        *(_QWORD *)a1 = v10;
        v8 = (void *)v10;
      }
      *(_QWORD *)(a1 + 8) = v9;
      memmove(v8, v11, v7);
      *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v4 = qvector_reserve(a1, 0, 6, 1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 6;
    *(_DWORD *)v4 = 1702257998;
    *(_BYTE *)(v4 + 4) = 114;
    *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
  }
  return a1;
}
