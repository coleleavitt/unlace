unsigned __int64 __fastcall sub_586AE0(_QWORD *a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v7; // eax
  __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r15
  unsigned int v20; // [rsp+0h] [rbp-58h]
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  __m128i v22; // [rsp+10h] [rbp-48h] BYREF

  v22.m128i_i64[1] = __readfsqword(0x28u);
  v20 = sub_3B90A0(a1, a2);
  v7 = sub_3B9170(a1, a2 + a3);
  v8 = *a1;
  v9 = v7;
  v21 = v7;
  v10 = sub_79B770(a1 + 289, *a1, v20, 80);
  if ( v10 < v9 )
  {
    v11 = v10;
    do
    {
      v12 = sub_79B3A0(a1 + 289, v8, v11, 65);
      if ( a4 )
      {
        v13 = sub_3B9110(a1, v11);
        v14 = a4[2];
        v22.m128i_i64[0] = __PAIR64__(v12, v13);
        v15 = (__int64)(a4 + 1);
        if ( !v14 )
          goto LABEL_11;
        do
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v14 + 16);
            v17 = *(_QWORD *)(v14 + 24);
            if ( *(_DWORD *)(v14 + 32) < v13 )
              break;
            v15 = v14;
            v14 = *(_QWORD *)(v14 + 16);
            if ( !v16 )
              goto LABEL_9;
          }
          v14 = *(_QWORD *)(v14 + 24);
        }
        while ( v17 );
LABEL_9:
        if ( a4 + 1 == (_QWORD *)v15 || v13 < *(_DWORD *)(v15 + 32) )
LABEL_11:
          sub_39EC70(a4, v15, &v22);
      }
      v18 = *a1;
      sub_79B4D0(a1 + 289, *a1, v11, 4176);
      sub_79B4D0(a1 + 289, v18, v11, 65);
      v11 = sub_79B840(a1 + 289, v8, v11, 80);
    }
    while ( v11 < v21 );
  }
  return v22.m128i_i64[1] - __readfsqword(0x28u);
}

