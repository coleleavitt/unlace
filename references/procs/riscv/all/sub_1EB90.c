__int64 __fastcall sub_1EB90(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v5; // rax
  unsigned int v8; // esi
  __int64 v9; // r10

  v5 = *a4;
  v8 = 0;
  if ( *a4 != -1 )
  {
    v9 = a4[1];
    if ( v9 != -1
      && (*((_BYTE *)a4 + 25) & 1) == 0
      && ((unsigned int)v5 + (unsigned int)a4[2] + 2048 - (unsigned int)v9) >> 12 == a5 )
    {
      *a1 = v5;
      v8 = 1;
      *a2 = a4[1];
    }
  }
  return v8;
}
