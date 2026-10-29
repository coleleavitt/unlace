unsigned __int64 __fastcall sub_3AB1E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 *v4; // r14
  unsigned __int64 *v5; // r13
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  int v15; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int64 *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v3 = sub_3A9C10(a2, &v15);
  if ( v15 > 0 )
  {
    v4 = (unsigned __int64 *)v3;
    v5 = (unsigned __int64 *)(v3 + 8LL * v15);
    do
    {
      v6 = (_QWORD *)a1[2];
      if ( v6 )
      {
        v7 = *v4;
        v8 = a1 + 1;
        do
        {
          while ( 1 )
          {
            v9 = v6[2];
            v10 = v6[3];
            if ( v6[4] < v7 )
              break;
            v8 = v6;
            v6 = (_QWORD *)v6[2];
            if ( !v9 )
              goto LABEL_8;
          }
          v6 = (_QWORD *)v6[3];
        }
        while ( v10 );
LABEL_8:
        if ( a1 + 1 != v8 && v7 >= v8[4] )
          goto LABEL_11;
      }
      else
      {
        v8 = a1 + 1;
      }
      v16 = v4;
      v8 = sub_3A9D80(a1, v8, &v16);
LABEL_11:
      v11 = v8[6];
      v12 = v8[5];
      if ( v8[7] < (unsigned __int64)(v11 + 1) )
      {
        v14 = qvector_reserve(v8 + 5, v12, v11 + 1, 8);
        v8[5] = v14;
        v12 = v14;
        v11 = v8[6];
      }
      ++v4;
      *(_QWORD *)(v12 + 8 * v11) = a2;
      ++v8[6];
    }
    while ( v5 != v4 );
  }
  return v17 - __readfsqword(0x28u);
}
