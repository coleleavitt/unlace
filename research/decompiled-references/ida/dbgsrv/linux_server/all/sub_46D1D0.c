/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D1D0
// Address: 0x000000000046D1D0

//----- (000000000046D1D0) ----------------------------------------------------
void __fastcall sub_46D1D0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r12
  char *v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rax

  sub_458010(a1);
  v1 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)a1 = off_4C4968;
  *(_OWORD *)(a1 + 920) = -1;
  *(_QWORD *)(a1 + 936) = -1;
  *(_DWORD *)(a1 + 944) = -1;
  v2 = v1 + 1;
  if ( v1 == -1 )
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v3 = *(char **)(a1 + 488);
    v4 = v1 + 1;
    if ( *(_QWORD *)(a1 + 504) < v2 )
    {
      v6 = (char *)sub_481540(a1 + 488, v3, v1 + 1, 1u);
      *(_QWORD *)(a1 + 488) = v6;
      memset(&v6[*(_QWORD *)(a1 + 496)], 0, v2 - *(_QWORD *)(a1 + 496));
    }
    else
    {
      memset(&v3[v1], 0, sizeof(char));
    }
  }
  v5 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 496) = v4;
  *(_BYTE *)(v5 + v1) = -52;
  *(_OWORD *)(a1 + 864) = -1;
  *(_QWORD *)(a1 + 912) = 0x10000000000LL;
  *(_OWORD *)(a1 + 880) = -1;
  *(_OWORD *)(a1 + 896) = 0;
  sub_457C50(a1, "linux");
}
// 4C4968: using guessed type __int64 (__fastcall *off_4C4968[4])();
