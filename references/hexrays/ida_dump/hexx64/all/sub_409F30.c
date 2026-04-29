__int64 __fastcall sub_409F30(unsigned int *a1, __int64 a2)
{
  signed int v2; // ebx
  __int64 (__fastcall *v3)(unsigned int *, unsigned int); // rax
  char v4; // al
  signed int v5; // edx
  __int64 result; // rax
  signed int v7; // eax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == a1[16] )
    return 30;
  v3 = *(__int64 (__fastcall **)(unsigned int *, unsigned int))(*(_QWORD *)a1 + 256LL);
  if ( v3 == sub_3EB7F0 )
  {
    v4 = getinf_flag(3, 2);
    v5 = a1[120];
    if ( v4 && (a1[14] == v2 || v2 == v5) )
      v2 = a1[13];
  }
  else
  {
    v7 = v3(a1, v2);
    v5 = a1[120];
    v2 = v7;
  }
  if ( v2 < v5 || (int)a1[122] < v2 )
    return 0xFFFFFFFFLL;
  result = (unsigned int)((v2 - v5) / (int)a1[20] + 29);
  if ( (v2 - v5) % (int)a1[20] )
    return 0xFFFFFFFFLL;
  return result;
}
