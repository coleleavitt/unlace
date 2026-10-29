__int64 __fastcall sub_70A9D0(__int64 a1)
{
  void *v2; // rax
  void *v3; // rdi
  __int64 result; // rax

  close_linput(*(void **)(a1 + 656));
  v2 = *(void **)(a1 + 648);
  v3 = *(void **)(a1 + 640);
  *(_QWORD *)(a1 + 656) = 0;
  if ( v2 != v3 )
  {
    close_linput(v2);
    v3 = *(void **)(a1 + 640);
  }
  *(_QWORD *)(a1 + 648) = 0;
  result = close_linput(v3);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  return result;
}

