/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C2C0
// Address: 0x0042C2C0

//----- (0042C2C0) --------------------------------------------------------
void __thiscall sub_42C2C0(unsigned int *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax

  sub_42E4D0(this);
  *(this + 24) = 0;
  if ( *(this + 56) )
  {
    sub_422F80(this + 56, 0);
    sub_453A20((void *)*(this + 56));
    *(this + 56) = 0;
    *(this + 58) = 0;
  }
  v2 = (void *)*(this + 52);
  if ( v2 )
  {
    *(this + 53) = 0;
    sub_453A20(v2);
    *(this + 52) = 0;
    *(this + 54) = 0;
  }
  v3 = (void *)*(this + 49);
  if ( v3 )
  {
    *(this + 50) = 0;
    sub_453A20(v3);
    *(this + 49) = 0;
    *(this + 51) = 0;
  }
  v4 = (void *)*(this + 46);
  if ( v4 )
  {
    *(this + 47) = 0;
    sub_453A20(v4);
    *(this + 46) = 0;
    *(this + 48) = 0;
  }
  v5 = (void *)*(this + 43);
  if ( v5 )
  {
    *(this + 44) = 0;
    sub_453A20(v5);
    *(this + 43) = 0;
    *(this + 45) = 0;
  }
  v6 = (void *)*(this + 40);
  if ( v6 )
  {
    *(this + 41) = 0;
    sub_453A20(v6);
    *(this + 40) = 0;
    *(this + 42) = 0;
  }
  v7 = (void *)*(this + 37);
  if ( v7 )
  {
    *(this + 38) = 0;
    sub_453A20(v7);
    *(this + 37) = 0;
    *(this + 39) = 0;
  }
  v8 = (void *)*(this + 34);
  if ( v8 )
  {
    *(this + 35) = 0;
    sub_453A20(v8);
    *(this + 34) = 0;
    *(this + 36) = 0;
  }
  v9 = (void *)*(this + 31);
  if ( v9 )
  {
    *(this + 32) = 0;
    sub_453A20(v9);
    *(this + 31) = 0;
    *(this + 33) = 0;
  }
  if ( *(this + 21) )
  {
    sub_415F90(this + 21, 0);
    sub_453A20((void *)*(this + 21));
    *(this + 21) = 0;
    *(this + 23) = 0;
  }
  if ( *(this + 18) )
  {
    sub_415F90(this + 18, 0);
    sub_453A20((void *)*(this + 18));
    *(this + 18) = 0;
    *(this + 20) = 0;
  }
  if ( *(this + 15) )
  {
    sub_415F90(this + 15, 0);
    sub_453A20((void *)*(this + 15));
    *(this + 15) = 0;
    *(this + 17) = 0;
  }
  v10 = (void *)*(this + 4);
  if ( v10 )
  {
    *(this + 5) = 0;
    sub_453A20(v10);
    *(this + 4) = 0;
    *(this + 6) = 0;
  }
}
