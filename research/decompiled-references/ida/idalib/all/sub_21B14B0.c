_BOOL8 __fastcall sub_21B14B0(_QWORD *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*a1 + 64LL);
  if ( (char *)v1 != (char *)sub_21B1110 )
    v1();
  return (__ROL2__(*(_WORD *)(a1[6] + 18LL), 8) & 1) == 0;
}
