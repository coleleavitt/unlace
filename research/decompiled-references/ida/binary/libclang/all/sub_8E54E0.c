__int64 __fastcall sub_8E54E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rax
  int v6; // ecx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx

  v2 = *(unsigned int *)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 32);
  if ( *(_QWORD *)a2 == 0xFFFFFFFFLL )
  {
    v8 = *(_DWORD *)(a2 + 48);
    v9 = sub_8E5480(a2);
    v10 = 16;
    if ( !v8 )
    {
      if ( *(_BYTE *)(v9 + 51) )
      {
        v10 = 32;
        if ( *(_QWORD *)(v9 + 32) )
          v10 = 16;
      }
    }
    sub_A1C030(a1, v3, v4, v10 + v2 + *(unsigned int *)(v9 + 12));
    return a1;
  }
  else
  {
    if ( *(_QWORD *)a2 != v2 )
      goto LABEL_10;
    if ( *(_DWORD *)(a2 + 48) )
      goto LABEL_11;
    if ( !v3 )
      goto LABEL_11;
    v5 = *(_QWORD *)(v3 + 32);
    v6 = *(_DWORD *)(v5 + 16);
    if ( (_DWORD)v2 == v6 || !(_DWORD)v2 )
      goto LABEL_11;
    v4 -= *(_DWORD *)(v3 + v2 + 24);
    if ( v4 != v6 )
      v5 = *(_QWORD *)(v3 + v4 + 32);
    if ( *(_BYTE *)(v5 + 51) )
    {
LABEL_11:
      sub_A1C030(a1, *(_QWORD *)(a2 + 24), v4, *(unsigned int *)(a2 + 32));
      return a1;
    }
    else
    {
LABEL_10:
      sub_A1BFE0(a1, a2);
      return a1;
    }
  }
}

