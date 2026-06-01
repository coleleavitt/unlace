unsigned __int64 __fastcall sub_3C32D0(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int *a4, int a5)
{
  __int64 v6; // r13
  int v9; // eax
  __int64 v10; // rsi
  unsigned int *v11; // r13
  __int64 v12; // rdx
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v6 = a5;
  v15 = __readfsqword(0x28u);
  v9 = -1;
  if ( a2 != -1 )
    v9 = a2 + sub_614FB0(*a1, 29);
  v10 = *a1;
  v14 = v9;
  sub_79B4D0(&v14, v10, a3, 83);
  if ( (int)v6 > 0 )
  {
    v11 = &a4[v6];
    do
    {
      v12 = *a4++;
      sub_3FEBE0(a1, a2, v12);
    }
    while ( a4 != v11 );
  }
  return v15 - __readfsqword(0x28u);
}

