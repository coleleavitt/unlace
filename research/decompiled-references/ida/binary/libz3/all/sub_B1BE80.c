unsigned __int64 __fastcall sub_B1BE80(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bp
  char v5; // bl
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  int v13; // r13d
  int v14; // r12d
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = 1;
    v19 = 2 * (v6 != 1);
  }
  else
  {
    v19 = 2;
    v7 = 0;
  }
  v8 = a2 >> 1;
  v9 = a3 >> 1;
  v10 = v8 + (v5 & 1);
  v11 = v9 + (v4 & 1);
  v12 = v11 + v10 - 1;
  if ( v12 > (int)v9 + (int)v8 )
    v12 = v9 + v8;
  v13 = v12 * (3 * (v6 == 2) + 3);
  v14 = 2 * v12;
  if ( (a4 & 1) != 0 )
  {
    v15 = sub_B1BD80(a1, v8, v9, (a4 - 1) >> 1);
    v16 = (a4 + 1) >> 1;
  }
  else
  {
    v20 = a4 >> 1;
    v15 = sub_B1BD80(a1, v8, v9, a4 >> 1);
    v16 = v20 + 1;
  }
  v17 = sub_B1BD80(a1, v10, v11, v16);
  return ((unsigned __int64)(unsigned int)(v13 + v7 + v19 + HIDWORD(v15) + HIDWORD(v17)) << 32)
       | (unsigned int)(v14 + v17 + v15 + 1);
}

