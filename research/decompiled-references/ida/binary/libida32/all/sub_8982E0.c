__int64 __fastcall sub_8982E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a4 )
    sub_898200((__int64 **)a1, a4, a2, a3);
  if ( (unsigned __int8)sub_896D40((__int64 **)a1, a2, a3) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 44) = -1;
    *(_QWORD *)(a1 + 56) = 0;
    v7 = *(_QWORD *)(a1 + 16) + 16 * v6;
    *(_DWORD *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 80) = v7;
    *(_QWORD *)(a1 + 48) = v7;
    *(_QWORD *)(a1 + 72) = 0;
    sub_8964D0(a1);
  }
  return 0;
}

