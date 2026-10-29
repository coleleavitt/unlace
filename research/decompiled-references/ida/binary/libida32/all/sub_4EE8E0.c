__int64 __fastcall sub_4EE8E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(v2 + 8);
  if ( !(_DWORD)v3 )
    return 0xFFFFFFFFLL;
  v4 = v3 - 1;
  if ( a2 >= sub_4EE890(a1, (int)v3 - 1)[1] )
    return v4;
  v6 = sub_4EF830(*(_QWORD *)(a1 + 24), a2);
  v7 = *(_QWORD **)(a1 + 24);
  if ( v6 == *v7 + 16LL * v7[1] )
    return 0xFFFFFFFFLL;
  v8 = (v6 - *v7) >> 4;
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(v8 - 1);
}

