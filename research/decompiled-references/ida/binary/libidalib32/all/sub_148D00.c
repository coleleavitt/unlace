unsigned __int64 __fastcall sub_148D00(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rbp
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // rbp
  __int64 *v9; // rbx
  _BYTE *v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned __int8)getn_sreg_range() )
  {
    sub_94360(*a2);
    sub_94360(*a2 + 3);
    sub_94360(*a2 + 6);
    v4 = *a2;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
    sub_94360(*a2 + 9);
    v6 = v4[10];
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v5 < (int)v7 )
      {
        v11 = (int)v7 - v5;
        if ( v7 )
        {
          v12 = 1;
          v13 = 0;
          if ( v11 < v7 )
          {
            v13 = v7 - v11;
            v12 = v7 - v11 + 1;
            memmove((void *)v4[9], (const void *)(v4[9] + v11), v7 - v11);
          }
          v14 = v4[9];
          if ( v4[11] < v12 )
          {
            v16 = qvector_reserve();
            v4[9] = v16;
            v14 = v16;
          }
          v4[10] = v12;
          *(_BYTE *)(v14 + v13) = 0;
        }
      }
    }
    v8 = "u";
    if ( v17 != 2 )
    {
      v8 = " ";
      if ( (unsigned __int8)(v17 - 3) <= 1u )
        v8 = "a";
    }
    v9 = *a2;
    v10 = (_BYTE *)v9[12];
    if ( (unsigned __int64)v9[14] <= 1 )
    {
      v15 = qvector_reserve();
      v9[12] = v15;
      v10 = (_BYTE *)v15;
    }
    v9[13] = 2;
    *v10 = *v8;
    *(_BYTE *)(v9[12] + 1) = 0;
  }
  return v18 - __readfsqword(0x28u);
}

