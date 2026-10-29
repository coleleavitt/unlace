__int64 __fastcall sub_3BA450(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  char v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  char v8; // dl
  __int64 v9; // rax

  v2 = a1[2];
  v3 = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) != v3 )
  {
    v8 = sub_4F8910(a1, a2);
    v9 = a1[2];
    if ( v8 == 2 )
      v3 = *(_DWORD *)(v9 + 16);
    else
      v3 = *(_DWORD *)(v9 + 20);
  }
  if ( v3 <= 8 )
    return (unsigned int)sub_3BA060(a1, a2);
  v5 = 2 * v3;
  v6 = sub_3BA340(a1, a2);
  v7 = sub_3BA340(a1, (int)a2 + 2);
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
    return v7 | (v6 << v5);
  else
    return v6 | (v7 << v5);
}

