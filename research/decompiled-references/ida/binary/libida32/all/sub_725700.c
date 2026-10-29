__int64 __fastcall sub_725700(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4, unsigned __int16 a5)
{
  int v5; // r15d
  __int64 v7; // r12
  signed __int64 v9; // r14
  int v10; // eax
  __int64 result; // rax
  __int16 v12; // bx
  int v13; // edx
  __int64 v14; // rdi
  int v16; // [rsp+Ch] [rbp-3Ch]

  v5 = a5;
  v7 = (int)a3;
  v9 = *(_QWORD *)a2;
  if ( (unsigned __int8)sub_722280(*(_QWORD *)a2, a3, a4, a5) )
  {
    v10 = *(_DWORD *)(a2 + 32) + 1;
    if ( *(_DWORD *)(a2 + 32) == -1 )
      v10 = -1;
    *(_DWORD *)(a2 + 32) = v10;
    result = 6LL * (*(__int16 *)(v9 + 4) + 4) + 6;
    v12 = *(_WORD *)(v9 + 6LL * *(__int16 *)(v9 + 4) + 10) - result;
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        if ( !under_debugger )
          interr(1259);
        BUG();
      }
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    v16 = v13;
    v14 = sub_71ECD0(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a2 + 8LL * v16 + 16) = v14;
    if ( !v14 )
    {
      dword_2CA2738 = 16;
      sub_722BC0(16, 0);
    }
    *(_WORD *)(v9 + 6 * v7 + 10) = v16;
    sub_71D1E0(v14, a4, v5);
    result = *(unsigned __int16 *)(a2 + 8);
    v12 = a5 - *(_WORD *)(a1 + 4240) + result - 6;
  }
  *(_WORD *)(a2 + 8) = v12;
  return result;
}

