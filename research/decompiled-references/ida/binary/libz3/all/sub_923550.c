_DWORD *__fastcall sub_923550(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // r12d
  __int64 *v6; // r14
  __int64 v7; // rsi
  char v8; // al
  void *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // [rsp+8h] [rbp-70h]
  char v13; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+30h] [rbp-48h] BYREF

  result = *(_DWORD **)(a1 + 32);
  if ( result )
  {
    v2 = (unsigned int)*(result - 1);
    if ( (int)v2 > 0 )
    {
      v4 = 0;
      while ( 1 )
      {
        result = *(_DWORD **)(a1 + 280);
        if ( !result || *(result - 1) <= (int)v4 )
          break;
        v6 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 8 * v4);
        v7 = *v6;
        v14[0] = 0;
        v14[1] = 0;
        v15[0] = 1;
        v15[1] = 0;
        v8 = sub_1666AE0(a1 + 88, v7, v14, &v13);
        v9 = qword_1C7F2C0;
        if ( !v8 || LODWORD(v14[0]) )
        {
          sub_182CBA0(qword_1C7F2C0, v14);
          ++v4;
          result = (_DWORD *)sub_182CBA0(v9, v15);
          if ( v4 == v2 )
            return result;
        }
        else
        {
          sub_182CBA0(qword_1C7F2C0, v14);
          sub_182CBA0(v9, v15);
          result = *(_DWORD **)(a1 + 280);
          v5 = result[v4];
          if ( v5 )
          {
            v10 = *v6;
            v11 = 0;
            v12 = sub_15D1F10(v10);
            do
            {
              result = (_DWORD *)sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 2 * v11));
              if ( (_DWORD *)v12 == result )
              {
                result = (_DWORD *)(v11 + *(_QWORD *)(a1 + 280));
                *result -= v5;
              }
              v11 += 4;
            }
            while ( 4 * v2 != v11 );
          }
          if ( ++v4 == v2 )
            return result;
        }
      }
    }
  }
  return result;
}

