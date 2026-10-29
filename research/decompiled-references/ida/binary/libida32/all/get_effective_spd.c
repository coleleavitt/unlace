__int64 __fastcall get_effective_spd(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r12
  unsigned int *v4; // rax
  unsigned int v5; // edx

  v2 = a2;
  v3 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (get_aflags(a2) & 0x8000000) != 0 )
    v2 = sub_3BCF60((__int64)v3, a2);
  v4 = sub_59ED40(v3, a1, v2);
  v5 = 0;
  if ( v4 )
    return v4[1];
  return v5;
}

