unsigned __int64 __fastcall sub_1F16500(_QWORD *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v4 = (unsigned int)*a4;
  if ( (unsigned int)v4 >= *((_DWORD *)a3 + 2) )
    return 0;
  v6 = *a3;
  *a4 = v4 + 1;
  v7 = *(_QWORD *)(v6 + 8 * v4);
  if ( v7 > 0x1007 )
    v7 = sub_1EE4660((__int64)a1, a2, v7);
  return sub_1F0CF20(a1, v7);
}
