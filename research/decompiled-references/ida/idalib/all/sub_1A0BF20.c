__int64 __fastcall sub_1A0BF20(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7)
{
  unsigned int v7; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // ecx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-38h]
  int v28; // [rsp+Ch] [rbp-2Ch]

  v7 = a4;
  if ( (_DWORD)a4 )
  {
    v9 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
    LODWORD(v10) = 0;
    if ( (v9 & 8) != 0 )
      v10 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
    v11 = (unsigned int)v10 >> 9;
    v12 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL];
    LODWORD(v13) = 0;
    if ( (v12 & 8) != 0 )
      v13 = *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = (unsigned int)v13 >> 9 == v11;
    v15 = 63;
    if ( v14 )
      v15 = 5;
  }
  else
  {
    v28 = a5;
    v27 = a3;
    v17 = sub_F68450(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    v21 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v18, v19, v20);
    v22 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = 5;
    a3 = v27;
    LODWORD(a5) = v28;
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 8);
      LODWORD(v24) = 0;
      if ( (v23 & 8) != 0 )
        v24 = *(__int64 *)((char *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL));
      v25 = (unsigned int)v24 >> 9;
      v26 = *(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL];
      LODWORD(v21) = 0;
      if ( (v26 & 8) != 0 )
        v21 = *(__int64 *)((char *)&qword_18 + (v26 & 0xFFFFFFFFFFFFFFF0LL));
      v14 = (unsigned int)v21 >> 9 == v25;
      v15 = 63;
      if ( v14 )
        v15 = 5;
    }
  }
  return sub_160A600(a1, a2, a3, v15, v7, 0, a6, a7, a5);
}
