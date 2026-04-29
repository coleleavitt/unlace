__int64 __fastcall sub_3CA9E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r11d
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax

  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a3 + 72);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a3 + 56);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a3 + 8);
  v7 = sub_3C8680(a3, v6, v5);
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 24);
  }
  else if ( v10 >= 0 )
  {
    v14 = *(_QWORD *)(a3 + 64);
    if ( v10 < *(_DWORD *)(v14 + 64) )
    {
      if ( (unsigned int)v10 >= *(_DWORD *)(v14 + 64) )
        sub_3C5320(a3);
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8LL * v10);
      if ( v15 )
        v9 = *(_QWORD *)(v15 + 32);
    }
  }
  *(_QWORD *)(v8 + 56) = v9;
  *(_QWORD *)(v8 + 64) = -1;
  *(_QWORD *)(v8 + 48) = -1;
  *(_DWORD *)(v8 + 32) = 73;
  result = sub_3C8680(a3, v10, v11);
  if ( result )
  {
    *(_QWORD *)(v13 + 48) = *(_QWORD *)(result + 24);
    result = *(unsigned int *)result;
    *(_DWORD *)(v13 + 32) = result;
  }
  return result;
}
