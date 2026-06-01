__int64 __fastcall sub_1A39870(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned __int64 *v8; // rbx
  int v9; // r14d
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-60h]

  v2 = (_QWORD *)(a2 + 8);
  v3 = *(_QWORD **)(a2 + 8);
  result = a1 + 24;
  if ( v3 != (_QWORD *)(a2 + 8) )
  {
    do
    {
      v5 = v3[17];
      if ( v5 )
      {
        v6 = *(_DWORD *)(a1 + 16);
        do
        {
          v7 = v5;
          v8 = (unsigned __int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
          v9 = (v7 >> 2) & 1;
          if ( v9 )
          {
            if ( v8 )
            {
              v10 = (_QWORD *)*v8;
              v11 = *v8;
            }
            else
            {
              v11 = 0;
              v10 = nullptr;
            }
          }
          else
          {
            v11 = (unsigned __int64)v8;
            v10 = v8;
          }
          v12 = *((_BYTE *)v10 + 29);
          v13 = v6;
          v14 = v6 + 1LL;
          v15 = v11 | (v12 >> 5) & 3;
          if ( v14 > *(unsigned int *)(a1 + 20) )
          {
            v16 = v15;
            sub_2237220(a1 + 8, a1 + 24, v14, 8);
            v13 = *(unsigned int *)(a1 + 16);
            v15 = v16;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v15;
          result = *(unsigned int *)(a1 + 16);
          *(_DWORD *)a1 = 2;
          v6 = result + 1;
          *(_DWORD *)(a1 + 16) = result + 1;
          if ( !v9 )
            break;
          if ( !v8 )
            break;
          v5 = v8[1];
        }
        while ( v5 );
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v2 != v3 );
  }
  return result;
}
