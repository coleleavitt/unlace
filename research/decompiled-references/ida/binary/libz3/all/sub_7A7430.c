__int64 __fastcall sub_7A7430(__int64 a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, __int64 a5, int a6)
{
  unsigned int v6; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx

  v6 = a3;
  v8 = -2;
  if ( !(unsigned __int8)sub_7E6250((int)a1 + 48, *(_QWORD *)(a1 + 72), (_DWORD)a2, a3, a4, a6) )
    return v8;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v9 )
  {
    v10 = *a2;
    if ( (unsigned int)v10 >= *(_DWORD *)(v9 - 4) )
    {
      v8 = v6;
      if ( !a4 )
        return v8;
      goto LABEL_7;
    }
    v9 = *(_QWORD *)(v9 + 8 * v10);
  }
  v8 = v6 ^ (2 * *(_DWORD *)(v9 + 28));
  if ( !a4 )
    return v8;
LABEL_7:
  sub_7E5160(a1, v8, 0);
  return v8;
}

