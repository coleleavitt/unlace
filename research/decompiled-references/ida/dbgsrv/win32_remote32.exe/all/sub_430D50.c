/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430D50
// Address: 0x00430D50

//----- (00430D50) --------------------------------------------------------
void __usercall sub_430D50(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 > 0xF )
  {
    v5 = *(_DWORD **)a1;
    if ( v4 + 1 >= 0x1000 )
    {
      if ( (unsigned int)v5 - *(v5 - 1) - 4 > 0x1F )
      {
        sub_467F04(a2, a3);
        JUMPOUT(0x430DDB);
      }
      v5 = (_DWORD *)*(v5 - 1);
    }
    sub_4627F2(v5);
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 15;
  *(_BYTE *)a1 = 0;
}
// 430DD6: control flows out of bounds to 430DDB
