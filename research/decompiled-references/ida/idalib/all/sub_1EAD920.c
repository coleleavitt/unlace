__int64 __fastcall sub_1EAD920(__int64 a1, __int64 a2, int a3)
{
  size_t v4; // rax
  _DWORD *v6; // r9
  unsigned int v7; // edx
  __int64 v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int *v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax

  if ( a3 )
  {
    if ( (unsigned int)(-2 - a3) < *(_DWORD *)(a2 + 9308) && a3 <= 0 )
    {
      v6 = *(_DWORD **)(a2 + 608);
      v7 = -a3;
      v8 = 16LL * *(unsigned int *)(a2 + 616);
      v9 = v6;
      v10 = v8 >> 4;
      if ( !v8 )
        goto LABEL_16;
      do
      {
        while ( 1 )
        {
          v11 = v10 >> 1;
          v12 = &v9[4 * (v10 >> 1)];
          if ( v7 < *v12 )
            break;
          v9 = v12 + 4;
          v10 = v10 - v11 - 1;
          if ( v10 <= 0 )
            goto LABEL_10;
        }
        v10 >>= 1;
      }
      while ( v11 );
LABEL_10:
      v13 = v9 - 4;
      if ( v6 == v9 )
LABEL_16:
        v13 = &v9[(unsigned __int64)v8 / 4];
      v14 = *((_QWORD *)v13 + 1);
      v15 = *(_DWORD *)(v14 + 4);
      if ( v15 <= 1 || v15 == 5 )
      {
        v16 = *(_QWORD *)(v14 + 40);
        v17 = *(_QWORD *)(v14 + 48);
        v18 = *(_DWORD *)(v14 + 812);
        *(_QWORD *)(a1 + 8) = v16;
        *(_DWORD *)a1 = v18;
        *(_QWORD *)(a1 + 16) = v17;
        return a1;
      }
    }
    else
    {
      v4 = j__strlen("source location entry ID out-of-range for AST file");
      sub_1EAD680(a2, "source location entry ID out-of-range for AST file", v4);
    }
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = &byte_22F0C30;
  *(_QWORD *)(a1 + 16) = j__strlen(&byte_22F0C30);
  return a1;
}
