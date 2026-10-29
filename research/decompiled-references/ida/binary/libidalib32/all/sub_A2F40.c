unsigned __int64 __fastcall sub_A2F40(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v7; // rax
  int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+4h] [rbp-44h] BYREF
  int v16; // [rsp+10h] [rbp-38h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v3 = sub_CE480(a1, 0xFFFFFFFFLL);
  v4 = sub_D0B80(v3, 0);
  if ( v4 < a2 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_A1A40((__int64)xmmword_250E60, v4) )
    {
      if ( (unsigned __int8)xrefblk_t_first_from() )
      {
        do
        {
          v8 = v16;
          if ( v16 != v5 )
          {
            v13 = a1[15];
            LODWORD(v15) = v16;
            v14 = a1[16];
            WORD2(v15) = 0;
            v9 = a1[17];
            v10 = v14 + 1;
            if ( (unsigned __int64)&v15 < v13 || (unsigned __int64)&v15 >= v13 + 8 * v9 )
            {
              if ( v9 < v10 )
              {
                v11 = qvector_reserve();
                a1[15] = v11;
                v13 = v11;
                v14 = a1[16];
              }
              *(_QWORD *)(v13 + 8 * v14) = v15;
            }
            else
            {
              if ( v9 < v10 )
              {
                v12 = qvector_reserve();
                a1[15] = v12;
                v13 = v12;
                v14 = a1[16];
              }
              v7 = v13 + 8 * v14;
              *(_DWORD *)v7 = v8;
              *(_WORD *)(v7 + 4) = 0;
            }
            ++a1[16];
            sub_A2DA0((__int64)a1);
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_from() );
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

