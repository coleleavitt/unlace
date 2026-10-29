__int64 __fastcall sub_241AB0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // r12
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)(v1 - 1) > 0x3B && v1 != 67 )
    return *(_QWORD *)a1;
  if ( (v3 = *(_QWORD *)(a1 + 24), v4 = *(_DWORD *)(v3 + 8), (unsigned int)(v4 - 1) > 0x3B) && v4 != 67
    || ((v5 = *(_QWORD *)(v3 + 24), v6 = *(_DWORD *)(v5 + 8), (unsigned int)(v6 - 1) > 0x3B) && v6 != 67
     || (result = sub_241AB0(*(_QWORD *)(v5 + 24)), result == -1))
    && (result = *(_QWORD *)v5, *(_QWORD *)v5 == -1) )
  {
    result = *(_QWORD *)v3;
    if ( *(_QWORD *)v3 == -1 )
      return *(_QWORD *)a1;
  }
  return result;
}
