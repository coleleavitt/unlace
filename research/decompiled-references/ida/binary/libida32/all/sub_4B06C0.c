__int64 __fastcall sub_4B06C0(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // r13d
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi

  v3 = a3;
  v4 = sub_4B05F0(a1, a2, a3);
  if ( (_BYTE)v4 )
  {
    v5 = sub_4AFDE0((int *)a1);
    v6 = *a1;
    *(_OWORD *)(a2 + 1061) = 0;
    *(_QWORD *)(a2 + 1077) = 0;
    netnode_supval(v6, (unsigned int)(v5 >> 2) - v3, a2 + 1061, 24, 71);
  }
  return v4;
}

