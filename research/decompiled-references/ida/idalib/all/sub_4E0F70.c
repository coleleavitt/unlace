unsigned __int64 __fastcall sub_4E0F70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int8 v4; // al
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  char v13; // al
  _QWORD *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v19; // [rsp+8h] [rbp-C070h]
  unsigned __int64 v20; // [rsp+10h] [rbp-C068h]
  __int64 v21; // [rsp+20h] [rbp-C058h]
  unsigned __int64 v22; // [rsp+28h] [rbp-C050h]
  _DWORD v23[4096]; // [rsp+30h] [rbp-C048h] BYREF
  _QWORD v24[4097]; // [rsp+4030h] [rbp-8048h] BYREF
  unsigned __int64 v25; // [rsp+C038h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1728);
  v25 = __readfsqword(0x28u);
  v21 = *(_QWORD *)(a1 + 1672);
  v4 = is_cvt64(a1, a2, a3);
  *(_BYTE *)(v3 + 704) = 0;
  v5 = v4;
  if ( (unsigned __int8)is_cvt64(a1, a2, v6) )
    *(_BYTE *)(v3 + 704) = 1;
  v7 = *(_QWORD *)(v21 + 2408);
  v8 = v7;
  if ( sub_8B8E80(v7, 0) )
  {
    v9 = (unsigned int)(2 - v5);
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL) - **(_QWORD **)(v7 + 56);
    v22 = v9;
    v11 = v10 % v9;
    v19 = v10 / v9;
    if ( v10 >= v9 )
    {
      v20 = 0;
      do
      {
        v12 = 4096;
        if ( v19 <= 0x1000 )
          v12 = v19;
        v13 = is_cvt64(v8, v9, v11);
        v14 = v24;
        v9 = v20;
        if ( v13 )
          v14 = v23;
        v15 = 0;
        v8 = *(_QWORD *)(v21 + 2408);
        sub_8B9680(v8, v20, v14);
        do
        {
          v17 = v24[v15];
          if ( (unsigned __int8)is_cvt64(v8, v9, v16) )
            v17 = (unsigned int)v23[v15];
          v9 = v17;
          v8 = v3;
          ++v15;
          sub_4DEFE0(v3, v17);
        }
        while ( v12 != v15 );
        v11 = v12 * v22;
        v20 += v12 * v22;
        v19 -= v12;
      }
      while ( v19 );
    }
  }
  register_undo_handler(214, sub_4E0EC0, 0, 1);
  register_undo_handler(215, sub_4E0E00, 0, 1);
  return v25 - __readfsqword(0x28u);
}
