void __fastcall sub_77AD30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 4) != 0 )
  {
    *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 40) = a2;
  }
  else
  {
    v4 = sub_798D40(a1);
    v5 = *(_QWORD *)(v4 + 2192);
    *(_QWORD *)(v4 + 2272) += 48LL;
    v6 = v4;
    v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v6 + 2200) >= v7 + 48 && v5 )
      *(_QWORD *)(v6 + 2192) = v7 + 48;
    else
      v7 = sub_779030(v6 + 2192, 48, 3);
    *(_DWORD *)(v7 + 16) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_OWORD *)v7 = 0;
    *(_QWORD *)(a1 + 56) = v7 | 4;
    *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v2 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)((*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 40) = a2;
  }
}

