__int64 __fastcall sub_36C830(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CCB488 )
  {
    v4 = *(_QWORD *)(qword_2CCB480 + 8 * v2);
    if ( v4 )
      v3 = (int)qfseek(v4, *(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 72));
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
