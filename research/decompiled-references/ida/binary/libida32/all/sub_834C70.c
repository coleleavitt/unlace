__int64 __fastcall sub_834C70(unsigned int **a1, int *a2, int a3, _DWORD *a4, int *a5, int a6, __int64 a7, __int64 a8)
{
  int *v9; // r10
  int *v11; // r11
  int v12; // r13d
  int v13; // ebx
  int i; // eax
  unsigned int v15; // ebp
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int *v19; // [rsp+10h] [rbp-60h]
  int v21; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-40h]

  v9 = a2;
  v22 = __readfsqword(0x28u);
  v11 = (int *)(*(_QWORD *)(a8 + 264) + 8LL * a6);
  if ( a6 <= 0 || (*(_BYTE *)(a8 + 234) & 0x20) != 0 )
  {
    v12 = 0x7FFFFFFF;
  }
  else
  {
    v17 = *v11;
    if ( (*v11 & 0x40000000) != 0 )
      return (unsigned int)-1;
    v12 = 0x7FFFFFFF;
    if ( v17 < 0 )
    {
      if ( a3 )
        *a1 = sub_8337A0(*a1, 2);
      v15 = (unsigned __int16)v17;
      *v9 = v11[1];
      return v15;
    }
  }
  v19 = (unsigned int *)(*(_QWORD *)(a8 + 264) + 8LL * a6);
  v13 = -1;
  for ( i = sub_833A30(a1, &v21, a4, a5, a7, a8); ; i = sub_833A30(a1, &v21, a4, a5, a7, a8) )
  {
    if ( i < 0 )
    {
      if ( a6 > 0 )
        *v19 |= 0x40000000u;
      return (unsigned int)-1;
    }
    if ( v13 < i )
      v13 = i;
    if ( v12 > v21 )
      v12 = v21;
    if ( **a1 == -2145583104 )
      break;
    ++*a1;
  }
  v15 = v13;
  if ( a6 > 0 )
  {
    v18 = *v19;
    v19[1] = v12;
    *v19 = v13 | v18 | 0x80000000;
  }
  *a2 = v12;
  return v15;
}

