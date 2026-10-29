__int64 __fastcall sub_833070(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebp
  __int64 *v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // rsi
  char v23; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v25; // [rsp+28h] [rbp-50h]

  v7 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v7 + 2160);
  v10 = sub_8175F0(a2, v9);
  v12 = *a4;
  v13 = (v10 >> 3) & 7;
  if ( (_BYTE)v13 == 7 )
    v13 = 1;
  v14 = sub_2575D20(a2, v9, v11);
  if ( v12 == v14 )
    sub_257CF50(&v24, a4);
  else
    sub_25768A0(&v24, a4);
  v15 = sub_6BF060(*(_QWORD **)(a1 + 16), a3);
  v16 = sub_2582620(a4, v15, v13, &v23);
  v17 = sub_81FBE0(a1, a2, v16);
  if ( v24 == v14 )
  {
    v19 = v25;
    if ( v25 )
    {
      v20 = &v25[3 * *(v25 - 1)];
      if ( v25 == v20 )
      {
        v21 = 0;
      }
      else
      {
        do
        {
          v20 -= 3;
          sub_5FF3B0(v20);
        }
        while ( v19 != v20 );
        v21 = 24 * *(v19 - 1);
      }
      operator delete[](v19 - 1, v21 + 8);
    }
  }
  else
  {
    sub_25769A0(&v24);
  }
  return v17;
}

