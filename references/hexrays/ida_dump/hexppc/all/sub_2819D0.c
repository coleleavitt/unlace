__int64 __fastcall sub_2819D0(__int16 *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  int tinfo_size; // eax
  __int16 v10; // si
  int v11; // edi
  int v12; // eax
  __int16 v13; // dx
  bool v14; // zf

  if ( (unsigned int)get_tinfo_property(*a3, 3) != 1 )
    return 0;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v10 = *a1;
  if ( *a1 < 8 * tinfo_size )
    return 0;
  if ( !a4 )
  {
    v11 = tinfo_size;
    if ( *(unsigned __int8 *)(a2 + 130) >= tinfo_size )
      v11 = *(unsigned __int8 *)(a2 + 130);
    a4 = v11;
  }
  if ( a4 <= tinfo_size )
    return 0;
  v12 = 8 * (a4 - tinfo_size);
  v13 = v12 + a1[1];
  *a1 = v12 + v10;
  v14 = v13 == v12;
  result = 1;
  if ( v14 )
    ++v13;
  a1[1] = v13;
  return result;
}
