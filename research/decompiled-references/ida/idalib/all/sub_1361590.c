__int64 __fastcall sub_1361590(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int *v5; // rbx
  int *v6; // rbp
  int *v7; // rax
  unsigned int v8; // edx
  int v9; // r14d
  unsigned int v10; // ebx
  int v13; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  _BYTE v16[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (int *)a3;
  ptr = v16;
  v15 = 0x400000000LL;
  sub_135F720(a1, a2, a3, a4, (__int64)&ptr);
  v6 = &v5[3 * a4];
  if ( v6 == v5 )
  {
LABEL_18:
    v10 = 1;
  }
  else
  {
    v7 = v5;
    v8 = 0;
    do
    {
      if ( *v7 )
        v8 -= (v7[1] == 0) - 1;
      v7 += 3;
    }
    while ( v6 != v7 );
    if ( (unsigned int)v15 >= v8 )
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( v5[1] != *v5 )
          break;
        if ( !(unsigned __int8)sub_1020490((__int64)a2, v9, nullptr) )
          goto LABEL_12;
LABEL_17:
        v5 += 3;
        if ( v6 == v5 )
          goto LABEL_18;
      }
      while ( 1 )
      {
        v13 = 0;
        if ( !(unsigned __int8)sub_1020490((__int64)a2, v9, &v13) || v13 != (_DWORD)a1 )
          break;
        if ( ++v9 == v5[1] )
          goto LABEL_17;
      }
    }
LABEL_12:
    v10 = 0;
  }
  if ( ptr != v16 )
    free(ptr);
  return v10;
}
