__int64 __fastcall sub_22110E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // r12d
  char v7; // al
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v12; // r15d
  unsigned __int64 v13; // rdx

  v5 = 0;
  while ( 1 )
  {
    ++v5;
    if ( a3 + 1 == a2 )
    {
      v8 = a4[1];
      v9 = a4[2];
LABEL_6:
      v10 = v5 + v8;
      if ( v10 > v9 )
      {
        sub_2236E10(a4, a4 + 3, v10, 1);
        v8 = a4[1];
      }
      memset((void *)(*a4 + v8), 92, v5);
      a4[1] += v5;
      return a3;
    }
    v7 = *(_BYTE *)(a3 + a1 + 1);
    if ( v7 != 92 )
      break;
    ++a3;
  }
  v8 = a4[1];
  v9 = a4[2];
  if ( v7 != 34 )
    goto LABEL_6;
  v12 = v5 >> 1;
  v13 = (v5 >> 1) + v8;
  if ( v9 < v13 )
  {
    sub_2236E10(a4, a4 + 3, v13, 1);
    v8 = a4[1];
  }
  if ( v12 )
  {
    memset((void *)(*a4 + v8), 92, v12);
    v8 = a4[1];
  }
  a4[1] = v12 + v8;
  if ( (v5 & 1) != 0 )
  {
    ++a3;
    sub_FC8050(a4, 34);
  }
  return a3;
}
