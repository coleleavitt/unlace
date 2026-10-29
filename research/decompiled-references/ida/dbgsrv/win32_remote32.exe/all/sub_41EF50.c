/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EF50
// Address: 0x0041EF50

//----- (0041EF50) --------------------------------------------------------
SIZE_T __userpurge sub_41EF50@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int a3)
{
  SIZE_T result; // eax
  LPVOID v4; // eax
  LPVOID v5; // ecx

  if ( a3 > 0x5555555 )
    goto LABEL_8;
  result = 48 * a3;
  if ( !(48 * a3) )
    return result;
  if ( result < 0x1000 )
    return (SIZE_T)sub_4627C2(result);
  if ( result + 35 < result )
LABEL_8:
    sub_403E00();
  v4 = sub_4627C2(result + 35);
  v5 = v4;
  if ( !v4 )
  {
    sub_467F04(a1, a2);
    JUMPOUT(0x41EFB1);
  }
  result = ((unsigned int)v4 + 35) & 0xFFFFFFE0;
  *(_DWORD *)(result - 4) = v5;
  return result;
}
// 41EFAC: control flows out of bounds to 41EFB1
