__int64 __fastcall sub_1CF940(__int64 a1, int a2)
{
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rax

  v3 = *(_QWORD **)(a1 + 32);
  v4 = *(__int64 (**)(void))(*v3 + 96LL);
  if ( (char *)v4 == (char *)sub_130050 )
    *(_DWORD *)(a1 + 40) += *(_DWORD *)(v3[9] + ((__int64)a2 << 6) + 24);
  else
    *(_DWORD *)(a1 + 40) += v4();
  return 0;
}
