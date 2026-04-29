__int64 __fastcall sub_17B50(int *a1, __int64 a2, int a3)
{
  int v3; // ebp
  int v4; // edx
  __int64 v5; // rax
  signed int v7; // r13d
  int v8; // ebx

  v3 = a3 + 3;
  v4 = (a3 + 3) >> 2;
  v5 = *a1;
  if ( v4 + (int)v5 > 6 )
  {
    v7 = (a1[1] + 3) & 0xFFFFFFFC;
    a1[1] = v7;
    cleanup_argloc(a2);
    *(_QWORD *)(a2 + 8) = v7;
    *(_DWORD *)a2 = 1;
    a1[1] += v3 & 0xFFFFFFFC;
    return 1;
  }
  else if ( v4 == 1 )
  {
    *a1 = v5 + 1;
    v8 = dword_231E0[v5];
    cleanup_argloc(a2);
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)a2 = 3;
    return 1;
  }
  else
  {
    sub_17730(a1, a2, v4);
    return 1;
  }
}
