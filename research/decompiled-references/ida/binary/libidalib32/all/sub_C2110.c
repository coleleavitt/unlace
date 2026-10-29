__int64 __fastcall sub_C2110(__int64 a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  unsigned int v6; // r10d
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r11
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax

  LOBYTE(v6) = a3 == -1 || a2 >= a3;
  if ( (_BYTE)v6 )
    return 0;
  if ( a2 < 16 * a4 )
    return v6;
  if ( !(_BYTE)a5 )
    return 1;
  v10 = *(_QWORD **)(a1 + 192);
  v11 = v10[1];
  if ( !v11 )
    return a5;
  v12 = 0;
  v13 = 0;
  v14 = a3 - 1;
  while ( 1 )
  {
    if ( a6 != v12 )
    {
      v15 = (unsigned int *)(*v10 + (v13 << 6));
      v16 = v15[1];
      v17 = *v15;
      if ( v16 != v17 && v14 >= v17 && v16 - 1 >= a2 )
        break;
    }
    v13 = ++v12;
    if ( v12 >= v11 )
      return a5;
  }
  return v6;
}

