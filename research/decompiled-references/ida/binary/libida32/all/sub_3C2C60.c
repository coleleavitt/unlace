__int64 __fastcall sub_3C2C60(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // rax

  if ( *((_DWORD *)a1 + 383) == a2 )
    return *((unsigned int *)a1 + 384);
  *((_DWORD *)a1 + 383) = a2;
  v2 = a2;
  do
  {
    v2 = sub_3BD5D0((__int64)a1, v2);
    if ( v2 == -1 )
      break;
    if ( (unsigned __int8)sub_614FB0(*a1, 9) && (unsigned __int8)is_spec_ea(v2) )
      v2 &= -(unsigned __int8)sub_614FB0(*a1, 9);
    v3 = (unsigned int *)sub_3C2B90(a1, v2);
    if ( v3 )
      v2 = *v3;
  }
  while ( (getinf(45) & 0x20) == 0 && (get_aflags(v2) & 0x10) != 0 );
  *((_DWORD *)a1 + 384) = v2;
  return v2;
}

