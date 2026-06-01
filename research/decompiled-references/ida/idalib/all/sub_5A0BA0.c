unsigned __int64 __fastcall sub_5A0BA0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v20; // [rsp+0h] [rbp-68h]
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  __m128i v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v20 = sub_3BDD60(a1, a2);
  v7 = sub_3BDF40(a1, a2 + a3);
  v8 = *a1;
  v9 = v7;
  v21 = v7;
  v10 = sub_7BEB00(a1 + 300, *a1, v20, 80);
  if ( v10 < v9 )
  {
    v11 = v10;
    do
    {
      v12 = sub_7BE710(a1 + 300, v8, v11, 65);
      if ( a4 )
      {
        v13 = sub_3BDE50(a1, v11);
        v14 = (_QWORD *)a4[2];
        v22.m128i_i64[1] = v12;
        v22.m128i_i64[0] = v13;
        v15 = a4 + 1;
        if ( !v14 )
          goto LABEL_11;
        do
        {
          while ( 1 )
          {
            v16 = v14[2];
            v17 = v14[3];
            if ( v14[4] < v13 )
              break;
            v15 = v14;
            v14 = (_QWORD *)v14[2];
            if ( !v16 )
              goto LABEL_9;
          }
          v14 = (_QWORD *)v14[3];
        }
        while ( v17 );
LABEL_9:
        if ( a4 + 1 == v15 || v13 < v15[4] )
LABEL_11:
          sub_3A3660(a4, v15, &v22);
      }
      v18 = *a1;
      sub_7BE850(a1 + 300, *a1, v11, 4176);
      sub_7BE850(a1 + 300, v18, v11, 65);
      v11 = sub_7BEBF0(a1 + 300, v8, v11, 80);
    }
    while ( v11 < v21 );
  }
  return v23 - __readfsqword(0x28u);
}
