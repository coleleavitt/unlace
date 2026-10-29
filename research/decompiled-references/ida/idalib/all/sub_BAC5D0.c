unsigned __int64 __fastcall sub_BAC5D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // r14d
  int v8; // r13d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 *v12; // rax
  unsigned __int64 v13; // rbx

  v7 = a6;
  v8 = a5;
  v10 = a4;
  if ( a4 )
  {
    v11 = *(_QWORD *)(a4 + 120);
    if ( v11 )
    {
      v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 )
        goto LABEL_4;
    }
    else
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96), a3, a4, a5, a6);
      v12 = (__int64 *)(*(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 )
        goto LABEL_4;
    }
    v10 = *v12;
  }
LABEL_4:
  v13 = sub_B902D0(104, a1, a2, 0);
  sub_B725B0(v13, 0x16u, a2, v8);
  *(_QWORD *)(v13 + 40) = a3;
  *(_QWORD *)v13 = &off_2B4A650;
  sub_B8E080(v13 + 48, 22);
  *(_DWORD *)(v13 + 60) = v7;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 88) = v10;
  *(_QWORD *)v13 = &off_2C03C70;
  *(_DWORD *)(v13 + 96) = a7;
  return v13;
}
