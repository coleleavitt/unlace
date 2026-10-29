__int64 __fastcall sub_63E5A0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v4 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v4 = (_QWORD *)*v4;
  if ( v4 && (v5 = sub_79A2E0(v4)) != 0 && (*(_BYTE *)(v5 + 28) & 0x7F) != 0 )
  {
    sub_63E460(a1, a2, v5);
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0;
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    return a1;
  }
}

