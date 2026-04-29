unsigned __int64 __fastcall sub_FDE10(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD **)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v7 = v5[17];
  if ( (__int64)v7 <= (__int64)a2 )
    v7 = v5[16];
  v8 = a2 + a3;
  if ( v8 > v7 )
    v8 = v7;
  if ( a2 < v8 )
  {
    v10 = v8;
    v11 = v5[187];
    v16 = 0;
    v12 = v10 - a2;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) & (v5[180] + a2);
    v17 = 0;
    v14 = v13;
    if ( v12 + v13 - 1 >= v13 )
    {
      v16 = qvector_reserve(&v16, 0, 1, 16);
      v15 = (unsigned __int64 *)(16 * v17 + v16);
      *v15 = v14;
      v15[1] = v12;
      *(_QWORD *)&v17 = v17 + 1;
      if ( (_QWORD)v17 )
      {
        switch ( a4 )
        {
          case 1:
            sub_3113F0(a1 + 96, &v16);
            break;
          case 2:
            sub_3113F0(a1 + 136, &v16);
            break;
          case 0:
            sub_3123A0(&v16, a1 + 96);
            sub_3113F0(a1 + 72, &v16);
            break;
        }
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
