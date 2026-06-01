_QWORD *__fastcall sub_9B9380(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax

  v6 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v8 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    if ( v8 )
    {
      sub_9B91F0(a1, v8);
      return a1;
    }
    goto LABEL_6;
  }
  v10 = sub_F46EC0();
  if ( !v10 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
    {
      v15 = sub_F44710(*v6, a2, v11, v12, v13);
      sub_9B9380(a1, v15);
      return a1;
    }
    goto LABEL_6;
  }
  v14 = *(_QWORD *)(v10 + 32);
  if ( !v14 )
  {
LABEL_6:
    a1[2] = 0;
    *a1 = "mutex";
    a1[1] = 5;
    return a1;
  }
  sub_9B91F0(a1, v14);
  return a1;
}

