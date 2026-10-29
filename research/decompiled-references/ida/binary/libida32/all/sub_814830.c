__int64 __fastcall sub_814830(unsigned int a1, int a2)
{
  __int64 v2; // rbx

  v2 = operator new(0x18u);
  *(_QWORD *)v2 = off_2B12CB0;
  *(_DWORD *)(v2 + 20) = a1;
  *(_DWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 8) = qfilelength(a1);
  return create_generic_linput(v2);
}

