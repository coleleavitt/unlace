__int64 __fastcall sub_78110(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-30h]

  if ( a2 != sub_92670(a1[3], a2, 0) )
    return -1;
  result = sub_923E0(a1[3], a3, a4);
  v8 = a1[4];
  if ( result > 0 && v8 )
  {
    v9 = a1[5];
    if ( v9 != -1 && v9 != a2 )
    {
      *(_BYTE *)(v8 + 96) = 1;
      v8 = a1[4];
    }
    if ( !*(_BYTE *)(v8 + 96) )
    {
      v10 = result;
      sub_932D0(v8, a3, result);
      v8 = a1[4];
      result = v10;
    }
    *(_QWORD *)(v8 + 88) += result;
  }
  a1[5] = result + a2;
  return result;
}

