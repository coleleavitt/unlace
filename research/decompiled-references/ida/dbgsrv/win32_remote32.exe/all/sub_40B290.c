/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B290
// Address: 0x0040B290

//----- (0040B290) --------------------------------------------------------
void __usercall sub_40B290(void **a1@<ecx>, __m128i a2@<xmm0>)
{
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  *a1 = &off_48A384;
  sub_40CD70((int)a1, a2);
  v3 = a1[181];
  if ( v3 )
  {
    a1[182] = nullptr;
    sub_453A20(v3);
    a1[181] = nullptr;
    a1[183] = nullptr;
  }
  sub_40A150(a1 + 169);
  sub_409FD0(a1 + 166);
  sub_408AA0(a1 + 151, (int)(a1 + 151), *((int **)a1[151] + 1));
  sub_4627F2(a1[151]);
  sub_409800(a1 + 149);
  v4 = a1[143];
  if ( v4 )
  {
    a1[144] = nullptr;
    sub_453A20(v4);
    a1[143] = nullptr;
    a1[145] = nullptr;
  }
  sub_402EB0(a1 + 141);
  sub_408890(a1 + 139, (int)(a1 + 139), *((int **)a1[139] + 1));
  sub_4627F2(a1[139]);
  sub_408890(a1 + 137, (int)(a1 + 137), *((int **)a1[137] + 1));
  sub_4627F2(a1[137]);
  sub_408890(a1 + 135, (int)(a1 + 135), *((int **)a1[135] + 1));
  sub_4627F2(a1[135]);
  sub_408890(a1 + 133, (int)(a1 + 133), *((int **)a1[133] + 1));
  sub_4627F2(a1[133]);
  sub_408890(a1 + 131, (int)(a1 + 131), *((int **)a1[131] + 1));
  sub_4627F2(a1[131]);
  v5 = a1[122];
  if ( v5 )
  {
    a1[123] = nullptr;
    sub_453A20(v5);
    a1[122] = nullptr;
    a1[124] = nullptr;
  }
  v6 = a1[115];
  if ( v6 )
  {
    a1[116] = nullptr;
    sub_453A20(v6);
    a1[115] = nullptr;
    a1[117] = nullptr;
  }
  sub_40A460(a1);
}
// 48A384: using guessed type int (__stdcall *off_48A384)(int, int);
