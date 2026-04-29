__int64 __fastcall sub_36CFD0(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 1144);
  if ( v2 )
  {
    v3 = v2[2];
    while ( v3 )
    {
      sub_364350(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x28u);
    }
    operator delete(v2, 0x30u);
  }
  *(_QWORD *)(a1 + 1144) = 0;
  result = operator new(0x30u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = result + 8;
  *(_QWORD *)(result + 32) = result + 8;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(a1 + 1144) = result;
  return result;
}
