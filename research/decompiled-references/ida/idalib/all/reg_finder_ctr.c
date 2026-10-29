__int64 __fastcall reg_finder_ctr(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = qalloc_or_throw(32);
  *(_OWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)v1 = 0;
  a1[24] = v1;
  v2 = operator new(0x30u);
  a1[25] = v2;
  *(_QWORD *)(v2 + 24) = v2 + 8;
  *(_QWORD *)(v2 + 32) = v2 + 8;
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  result = operator new(0x30u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = result + 8;
  *(_QWORD *)(result + 32) = result + 8;
  *(_QWORD *)(result + 40) = 0;
  a1[29] = result;
  return result;
}
