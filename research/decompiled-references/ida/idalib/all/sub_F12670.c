__int64 __fastcall sub_F12670(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v2 = a2;
  if ( *(_BYTE *)(a1 + 16) && (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v2 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v5 = *(unsigned int *)(v3 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 8), v3 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(v3 + 8);
  }
  v6 = HIDWORD(v2);
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v5) = v4;
  v7 = *(unsigned int *)(v3 + 12);
  result = (unsigned int)(*(_DWORD *)(v3 + 8) + 1);
  *(_DWORD *)(v3 + 8) = result;
  if ( result + 1 > v7 )
  {
    sub_2237220(v3, v3 + 16, result + 1, 4);
    result = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * result) = v6;
  ++*(_DWORD *)(v3 + 8);
  return result;
}
