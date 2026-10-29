unsigned __int64 __fastcall sub_16BA8C0(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  int v6; // r10d
  unsigned int v7; // ebp
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // esi
  unsigned int v16; // eax
  bool v17; // zf
  unsigned int v18; // r15d
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // esi
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // eax
  int v28; // [rsp+0h] [rbp-44h]

  v6 = *a1;
  if ( *a1 == 2 )
    return sub_16BA790((__int64)(a1 + 2), a3);
  v7 = a3;
  if ( v6 == 8 )
  {
    v18 = 1;
    v19 = sub_16BA8C0(*((_QWORD *)a1 + 1));
    v28 = a1[4];
    if ( v28 != 1 )
    {
      do
      {
        v21 = sub_16BA8C0(*((_QWORD *)a1 + 1) + 56LL * v18);
        v22 = v19;
        v23 = v21;
        v24 = HIDWORD(v21);
        if ( BYTE4(v19) )
        {
          if ( BYTE4(v21) )
          {
            v25 = 1;
            v26 = 0;
          }
          else
          {
            v23 = v21 - 1;
            v26 = 1;
            v25 = 0;
          }
        }
        else
        {
          v27 = v21 - 1;
          v17 = (_BYTE)v24 == 0;
          v26 = 1;
          if ( v17 )
            v23 = v27;
          v22 = v19 - 1;
          v25 = 0;
        }
        if ( v22 < v23 )
          v22 = v23;
        ++v18;
        v5 = (v25 << 32) | (v26 + v22) | v5 & 0xFFFFFF0000000000LL;
        v19 = v5 & 0xFFFFFFFFFFLL | v19 & 0xFFFFFF0000000000LL;
      }
      while ( v28 != v18 );
    }
    return v19;
  }
  else if ( v6 == 5 )
  {
    v9 = sub_16BA790((__int64)(a1 + 2), a3);
    v10 = sub_16BA790((__int64)(a1 + 6), v7);
    v11 = v9;
    v12 = v10;
    v13 = HIDWORD(v10);
    if ( BYTE4(v9) )
    {
      if ( BYTE4(v10) )
      {
        v14 = 1;
        v15 = 0;
      }
      else
      {
        v12 = v10 - 1;
        v15 = 1;
        v14 = 0;
      }
    }
    else
    {
      v16 = v10 - 1;
      v17 = (_BYTE)v13 == 0;
      v11 = v9 - 1;
      v15 = 1;
      if ( v17 )
        v12 = v16;
      v14 = 0;
    }
    if ( v11 < v12 )
      v11 = v12;
    return (v11 + v15) | (unsigned __int64)(v14 << 32);
  }
  else
  {
    return (unsigned int)a3
         | ((unsigned __int64)(unsigned __int8)sub_F65460(
                                                 *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL),
                                                 a2,
                                                 a3,
                                                 a4,
                                                 a5,
                                                 a2 & 0xFFFFFFFFFFFFFFF0LL) << 32);
  }
}
