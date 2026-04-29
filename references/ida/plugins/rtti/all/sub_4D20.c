__int64 __fastcall sub_4D20(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // ebp
  bool v7; // zf
  unsigned __int32 v8; // eax

  v4 = a1[1] - *a1;
  if ( a2 >= v4 || v4 - a2 <= 3 )
    return 0;
  v6 = *(_DWORD *)(a1[2] + a2);
  v7 = (unsigned __int8)getinf_flag() == 0;
  v8 = _byteswap_ulong(v6);
  if ( !v7 )
    v6 = v8;
  *a3 = v6;
  return 1;
}
