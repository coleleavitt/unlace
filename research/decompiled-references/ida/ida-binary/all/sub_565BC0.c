__int64 __fastcall sub_565BC0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = *(_DWORD *)(a1 + 80);
  v3 = *(_DWORD *)(a1 + 56);
  result = a1;
  if ( *(_DWORD *)(a1 + 88) && !v2 )
  {
    v6 = *(unsigned int *)(a1 + 164);
    if ( (_DWORD)v6 != *(_DWORD *)(a1 + 160)
      && (_DWORD)v6
      && (v7 = *(_QWORD *)(a1 + 96) + 24 * v6, *(_DWORD *)(v7 + 16) == v3) )
    {
      v2 = *(_DWORD *)(v7 - 4);
      v8 = *(_QWORD *)(v7 - 16);
      *(_DWORD *)(result + 80) = v2;
      *(_QWORD *)(result + 84) = v8;
    }
    else
    {
      *(_QWORD *)(result + 80) = *(_QWORD *)(result + 56);
      *(_DWORD *)(result + 88) = *(_DWORD *)(result + 64);
      v2 = v3;
    }
  }
  if ( v2 < *(_DWORD *)(result + 68) )
  {
    *(_QWORD *)(result + 68) = *(_QWORD *)(result + 80);
    *(_DWORD *)(result + 76) = *(_DWORD *)(result + 88);
  }
  v5 = v3 + 5;
  if ( *(_DWORD *)result != -1 )
    v5 = v3 + 1;
  if ( *a2 < v5 )
    *a2 = v5;
  return result;
}
