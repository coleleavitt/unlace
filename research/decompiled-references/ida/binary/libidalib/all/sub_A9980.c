unsigned __int64 __fastcall sub_A9980(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-118h]
  unsigned int v19; // [rsp+14h] [rbp-104h]
  unsigned int v20; // [rsp+14h] [rbp-104h]
  unsigned __int64 v21; // [rsp+D8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  qlread();
  v5 = unpack_dw();
  v18 = v5;
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(_BYTE *)a1 > 7u )
      {
        qlread();
        v19 = unpack_dd();
        v9 = v19 | (unsigned __int64)(sub_A8B10(a2) << 32);
      }
      else
      {
        qlread();
        v9 = (unsigned int)unpack_dd();
      }
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
      if ( v10 == v9 )
        v9 = -1;
      v7 = v10 & (v7 + v9);
      if ( *(_BYTE *)a1 <= 7u )
      {
        v11 = (unsigned int)sub_A8B10(a2);
      }
      else
      {
        v20 = sub_A8B10(a2);
        v11 = v20 | (unsigned __int64)(sub_A8B10(a2) << 32);
      }
      v12 = *a3;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
      if ( v13 == v11 )
        v11 = -1;
      v8 = v13 & (v8 + v11);
      v14 = a3[1];
      if ( a3[2] < (unsigned __int64)(v14 + 1) )
      {
        v16 = qvector_reserve();
        *a3 = v16;
        v12 = v16;
        v14 = a3[1];
      }
      ++v6;
      v15 = 80 * v14 + v12;
      *(_QWORD *)v15 = v7;
      *(_QWORD *)(v15 + 8) = v8;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 64) = 0;
      *(_WORD *)(v15 + 72) = 0;
      *(_OWORD *)(v15 + 24) = 0;
      *(_OWORD *)(v15 + 48) = 0;
      ++a3[1];
    }
    while ( v18 != v6 );
  }
  return v21 - __readfsqword(0x28u);
}

