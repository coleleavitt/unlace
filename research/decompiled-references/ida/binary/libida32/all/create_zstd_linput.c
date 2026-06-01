__int64 __fastcall create_zstd_linput(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = operator new(0x8058u);
  *(_DWORD *)(v4 + 20) = a3;
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)v4 = off_2B12F18;
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 40) = a2;
  *(_BYTE *)(v4 + 32848) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32824) = v4 + 56;
  *(_OWORD *)(v4 + 32832) = 0;
  v5 = sub_952B40();
  *(_QWORD *)(v4 + 48) = v5;
  if ( !v5 )
  {
    if ( !under_debugger )
      interr(3402);
    BUG();
  }
  return create_generic_linput(v4);
}

