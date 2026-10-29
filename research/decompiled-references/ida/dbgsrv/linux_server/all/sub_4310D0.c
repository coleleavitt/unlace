/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4310D0
// Address: 0x00000000004310D0

//----- (00000000004310D0) ----------------------------------------------------
__int64 __fastcall sub_4310D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char **v3; // r12
  unsigned __int64 v4; // rbx
  char *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  char *v9; // rax

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 208);
    if ( v2 < a2 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(708);
      BUG();
    }
    v3 = *(char ***)(a1 + 200);
    v4 = v2 - a2;
    *(_DWORD *)(a1 + 208) = v4;
    v5 = *v3;
    v6 = (unsigned __int64)v3[1];
    v7 = (unsigned __int8)(*v3)[v4];
    if ( v6 < v4 )
    {
      if ( (unsigned __int64)v3[2] < v4 )
      {
        v9 = (char *)sub_481540((__int64)v3, v5, v4, 1u);
        *v3 = v9;
        v5 = v9;
        v6 = (unsigned __int64)v3[1];
      }
      memset(&v5[v6], 0, v4 - v6);
      v3[1] = (char *)v4;
    }
    else if ( v4 != v6 )
    {
      v3[1] = (char *)v4;
    }
  }
  else
  {
    v7 = -87;
  }
  *(_BYTE *)(a1 + 212) = -87;
  return v7;
}
// 4C94E1: using guessed type char byte_4C94E1;
