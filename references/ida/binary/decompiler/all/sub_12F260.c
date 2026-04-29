char __fastcall sub_12F260(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, unsigned int a5)
{
  char v7; // al

  if ( *(_DWORD *)(a1 + 4) != -1 )
    return sub_12EF70(a2, 0, 0, a1, a3, a4, a5);
  v7 = *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL);
  if ( v7 )
    v7 = sub_119750((unsigned __int8 *)a1);
  return a4 == (unsigned __int8)v7;
}
