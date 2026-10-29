void __fastcall sub_3EA490(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v1 = *(_DWORD *)(a1 + 888);
  if ( (v1 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 888) = v1 | 2;
    *(_BYTE *)(*(_QWORD *)(a1 + 832) + 3800LL) = 1;
    v3 = *(_QWORD *)(a1 + 832);
    v4 = *(_QWORD *)(v3 + 3784);
    if ( v4 )
    {
      sub_14F350(v3, v4);
    }
    else
    {
      v5 = (_QWORD *)operator new(0x10u);
      v6 = *(_QWORD *)(a1 + 832);
      *v5 = off_4E89D0;
      v5[1] = v6;
      *(_QWORD *)(v6 + 3784) = v5;
      sub_14F350(*(_QWORD *)(a1 + 832), *(_QWORD *)(*(_QWORD *)(a1 + 832) + 3784LL));
    }
  }
}
