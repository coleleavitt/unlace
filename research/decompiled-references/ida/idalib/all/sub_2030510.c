__int64 __fastcall sub_2030510(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a1 )
    return sub_995540(a3, " <cannot get addrspace!>");
  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(v3 + 8) - 17 <= 1 )
    v3 = **(_QWORD **)(v3 + 16);
  v4 = a3;
  v5 = *(_DWORD *)(v3 + 8) >> 8;
  if ( v5 || (v9 = sub_202ED50(a2)) == 0 || (result = *(unsigned int *)(v9 + 320), (_DWORD)result) )
  {
    v6 = sub_995540(v4, " addrspace(");
    v7 = sub_227B910(v6, v5);
    return sub_995540(v7, ")");
  }
  return result;
}
