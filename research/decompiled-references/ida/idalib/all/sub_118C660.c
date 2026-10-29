__int64 __fastcall sub_118C660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  char *v8; // rbp
  __int64 v9; // [rsp+8h] [rbp-20h]

  result = sub_10DCD30(a1, 0xD34u);
  if ( !result || *(_DWORD *)(a2 + 24) != 57 )
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-x";
    ++*(_DWORD *)(a3 + 8);
    if ( sub_10DCD30(a1, 0xC96u) )
    {
      result = sub_12CC8C0(20);
      v6 = *(unsigned int *)(a3 + 8);
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v9 = result;
        sub_2237220(a3, a3 + 16, v6 + 1, 8);
        v6 = *(unsigned int *)(a3 + 8);
        result = v9;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = result;
      ++*(_DWORD *)(a3 + 8);
    }
    else
    {
      v7 = *(unsigned int *)(a2 + 24);
      v8 = (char *)"c++";
      if ( (_DWORD)v7 != 35 )
      {
        v8 = "c++-cpp-output";
        if ( (_DWORD)v7 != 36 )
          v8 = (char *)sub_12CC8C0(v7);
      }
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v8;
      ++*(_DWORD *)(a3 + 8);
    }
  }
  return result;
}
