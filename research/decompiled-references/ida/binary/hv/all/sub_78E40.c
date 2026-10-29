__int64 __fastcall sub_78E40(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  v5 = operator new(0x48u);
  *(_QWORD *)v5 = off_163AF0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = a3;
  *(_QWORD *)(v5 + 40) = -1;
  *(_BYTE *)(v5 + 48) = 1;
  v6 = sub_92640(a1);
  v7 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 8) = v6;
  *(_DWORD *)(v5 + 16) = 0;
  if ( v7 )
    sub_92BC0(v7, a4);
  *(_QWORD *)(v5 + 56) = a2;
  *(_QWORD *)v5 = off_163B18;
  *(_QWORD *)(v5 + 64) = 0;
  return sub_92300(v5);
}

