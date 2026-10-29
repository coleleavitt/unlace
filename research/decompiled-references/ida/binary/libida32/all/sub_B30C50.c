void __fastcall sub_B30C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax

  if ( a2 )
  {
    v7 = *(__int64 **)a1;
    v8 = *v7;
    v7[10] += 56;
    v9 = (_QWORD *)((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v7[1] >= (unsigned __int64)(v9 + 7) && v8 )
      *v7 = (__int64)(v9 + 7);
    else
      v9 = (_QWORD *)sub_962430((__int64)v7, 56, 56, 4, a5, a6);
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    *(_QWORD *)(a1 + 40) = v9;
    *v9 = a2;
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL) &= ~1u;
  }
}

