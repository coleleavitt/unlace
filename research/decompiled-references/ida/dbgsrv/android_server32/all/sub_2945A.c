/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2945A
// Address: 0x0002945A

//----- (0002945A) --------------------------------------------------------
void __fastcall sub_2945A(int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  if ( (unsigned int)(a1 - 28866) < 2 )
  {
    sub_28DC0(a2);
    __asm { POP             {R7,PC} }
  }
  __asm { POP             {R7,PC}; jumptable 000294B2 case 0 }
}
// 29D16: unbalanced stack, ignored a potential tail call
