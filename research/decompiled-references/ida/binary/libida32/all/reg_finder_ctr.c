__int64 __fastcall reg_finder_ctr(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = qalloc_or_throw(32, a2);
  *(_OWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)v2 = 0;
  a1[20] = v2;
  v3 = operator new(0x30u);
  a1[21] = v3;
  *(_QWORD *)(v3 + 24) = v3 + 8;
  *(_QWORD *)(v3 + 32) = v3 + 8;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 40) = 0;
  result = operator new(0x30u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = result + 8;
  *(_QWORD *)(result + 32) = result + 8;
  *(_QWORD *)(result + 40) = 0;
  a1[25] = result;
  return result;
}

