unsigned __int64 __fastcall sub_1255B70(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // rdx

  result = *(_QWORD *)(a1[7] + 56LL) + 48 * a3;
  v4 = 16 * a3 + a1[9];
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_QWORD *)v4;
  if ( v5 && a1[3] == v6 )
  {
    if ( v5 <= 1 )
    {
      *(_DWORD *)(v4 + 8) = v5 + 1;
      result = sub_12550F0((__int64)a1, a2, *(_QWORD *)(result + 16));
      --*(_DWORD *)(v4 + 8);
    }
  }
  else
  {
    v7 = a1[3];
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = v7;
    result = sub_12550F0((__int64)a1, a2, *(_QWORD *)(result + 16));
    *(_QWORD *)v4 = v6;
    *(_DWORD *)(v4 + 8) = v5;
  }
  return result;
}
