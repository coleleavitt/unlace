__int64 __fastcall sub_1EE33D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi
  size_t v11; // rax
  __int64 v12; // [rsp+0h] [rbp-40h]

  result = *(unsigned int *)(a1 + 6928);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 )
    {
      v5 = 0;
      v6 = 8LL * ((unsigned int)(result - 2) >> 1) + 8;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(a1 + 6920);
          v7 = 0;
          v10 = *(_DWORD *)(v8 + v5);
          if ( v10 )
          {
            if ( v10 <= *(_DWORD *)(a1 + 4728) )
            {
              v7 = sub_1EE3290(a1, v10);
              v8 = *(_QWORD *)(a1 + 6920);
            }
            else
            {
              v11 = j__strlen("selector ID out of range in AST file");
              sub_1EAD680(a1, "selector ID out of range in AST file", v11);
              v8 = *(_QWORD *)(a1 + 6920);
              v7 = 0;
            }
          }
          v2 = *(unsigned int *)(v8 + v5 + 4) | v2 & 0xFFFFFFFF00000000LL;
          v9 = *(unsigned int *)(a2 + 8);
          if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
            break;
          v5 += 8;
          result = *(_QWORD *)a2 + 16 * v9;
          *(_QWORD *)result = v7;
          *(_QWORD *)(result + 8) = v2;
          ++*(_DWORD *)(a2 + 8);
          if ( v6 == v5 )
            goto LABEL_11;
        }
        v5 += 8;
        v12 = v7;
        sub_2237220(a2, a2 + 16, v9 + 1, 16);
        result = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(result + 8) = v2;
        ++*(_DWORD *)(a2 + 8);
      }
      while ( v5 != v6 );
    }
LABEL_11:
    *(_DWORD *)(a1 + 6928) = 0;
  }
  return result;
}
