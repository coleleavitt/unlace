__int64 __fastcall sub_70A940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v4 = operator new(0x48u);
  *(_QWORD *)v4 = off_2B0E3E8;
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = a3;
  *(_QWORD *)(v4 + 40) = -1;
  *(_BYTE *)(v4 + 48) = 1;
  v5 = qlsize(a1);
  v6 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 8) = v5;
  *(_DWORD *)(v4 + 16) = 0;
  if ( v6 )
    MD5Init(v6);
  *(_QWORD *)(v4 + 56) = a2;
  *(_QWORD *)v4 = off_2B0E410;
  *(_QWORD *)(v4 + 64) = 0;
  return create_generic_linput(v4);
}

