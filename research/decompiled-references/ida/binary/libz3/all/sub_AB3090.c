__int64 __fastcall sub_AB3090(_QWORD *a1, int a2, double a3)
{
  __int64 v3; // r12
  unsigned int *v4; // rbp
  __int64 result; // rax
  __int64 v6; // r12
  unsigned int *v7; // rbp

  *((_BYTE *)a1 + 32) = 1;
  switch ( a2 )
  {
    case 1:
      sub_AB0840();
      break;
    case 2:
      sub_AB2370((__int64)a1, a3);
      break;
    case 0:
      sub_AAFD80(a1, a3);
      break;
  }
  v3 = *a1;
  v4 = (unsigned int *)sub_186B270(0x3C8u);
  sub_B04810(v4, *a1);
  sub_8F1E10(v3, v4);
  result = a1[2];
  if ( *(_BYTE *)(result + 576) )
  {
    v6 = *a1;
    v7 = (unsigned int *)sub_186B270(0xB8u);
    sub_B97DE0(v7, *a1);
    return sub_8F1E10(v6, v7);
  }
  return result;
}

