/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430060
// Address: 0x00430060

//----- (00430060) --------------------------------------------------------
_DWORD *__usercall sub_430060@<eax>(int a1@<ebx>, int a2@<edi>, int a3, SIZE_T *a4)
{
  bool v4; // zf
  unsigned int v5; // eax
  _DWORD *result; // eax
  LPVOID v7; // eax
  LPVOID v8; // ecx

  v4 = (*a4)++ == -1;
  v5 = *a4;
  if ( v4 )
  {
    --*a4;
    return nullptr;
  }
  else if ( v5 < 0x1000 )
  {
    result = sub_4627C2(*a4);
    --*a4;
  }
  else
  {
    if ( v5 + 35 < v5 )
      sub_403E00();
    v7 = sub_4627C2(v5 + 35);
    v8 = v7;
    if ( !v7 )
    {
      sub_467F04(a1, a2);
      JUMPOUT(0x4300BD);
    }
    result = (_DWORD *)(((unsigned int)v7 + 35) & 0xFFFFFFE0);
    *(result - 1) = v8;
    --*a4;
  }
  return result;
}
// 4300B8: control flows out of bounds to 4300BD
