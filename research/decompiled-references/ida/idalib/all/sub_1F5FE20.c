unsigned __int64 __fastcall sub_1F5FE20(__int64 *a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rsi

  sub_1F5FBE0((__int64)a1, a2);
  v3 = *((_DWORD *)a1 + 5);
  *((_DWORD *)a1 + 5) = v3 + 1;
  *(_BYTE *)(a2 + 2) = (16 * (((1 << v3) & (_DWORD)a1[2]) != 0)) | *(_BYTE *)(a2 + 2) & 0xEF;
  v4 = *((_DWORD *)a1 + 5);
  *((_DWORD *)a1 + 5) = v4 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (((1 << v4) & (_DWORD)a1[2]) != 0)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v5 = *((_DWORD *)a1 + 5);
  *((_DWORD *)a1 + 5) = v5 + 1;
  if ( ((1 << v5) & (_DWORD)a1[2]) != 0 )
  {
    v6 = *(_QWORD *)(*a1 + 8);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 13072))-- - 8);
    *(_QWORD *)(a2 + 56) = v7;
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0;
  }
  *(_DWORD *)(a2 + 72) = sub_1EE7490(*a1);
  v8 = *a1;
  result = 0;
  v10 = *(unsigned int *)(*a1 + 24);
  if ( (unsigned int)v10 < *(_DWORD *)(*a1 + 40) )
  {
    v11 = *(_QWORD **)(v8 + 8);
    v12 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 24) = v10 + 1;
    result = sub_1F15160(v11, v12, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v10));
    *(_QWORD *)(a2 + 64) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 64) = 0;
  }
  return result;
}
