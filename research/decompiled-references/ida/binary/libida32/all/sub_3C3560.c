unsigned __int64 __fastcall sub_3C3560(_QWORD *a1, unsigned int a2, unsigned int a3, int *a4, int a5, unsigned int a6)
{
  __int64 v7; // r13
  int *v9; // rbx
  signed int v10; // r8d
  signed __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  __int64 v14; // rsi
  unsigned int *v15; // r13
  __int64 v16; // rdx
  signed __int64 v18; // [rsp+8h] [rbp-100h]
  int v19; // [rsp+1Ch] [rbp-ECh] BYREF
  _BYTE v20[165]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v21[3]; // [rsp+C5h] [rbp-43h] BYREF
  unsigned __int64 v22; // [rsp+C8h] [rbp-40h]

  v7 = a5;
  v9 = a4;
  v10 = -a5;
  v22 = __readfsqword(0x28u);
  if ( v10 < 0 )
    v10 = v7;
  v11 = sub_3C3380(a1, (__int64)v20, (unsigned __int64)v21, a4, v10, a6) - v20;
  v12 = -1;
  if ( a2 != -1 )
  {
    v18 = v11;
    v13 = sub_614FB0(*a1, 29);
    v11 = v18;
    v12 = a2 + v13;
  }
  v14 = *a1;
  v19 = v12;
  sub_79B440(&v19, v14, a3, v20, v11, 83);
  if ( ((get_merge_state(&v19, v14) & 2) == 0
     || !(unsigned __int8)sub_3EA400(a1, a2) && !rangeset_t_find_range(a1 + 129, a2))
    && (int)v7 > 0 )
  {
    v15 = (unsigned int *)&v9[v7];
    do
    {
      v16 = (unsigned int)*v9++;
      sub_3FE080(a1, a2, v16, 1);
    }
    while ( v15 != (unsigned int *)v9 );
  }
  return v22 - __readfsqword(0x28u);
}

