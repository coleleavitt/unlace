__int64 __fastcall sub_9C3F30(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v2 = *(_DWORD *)(a2 + 48);
  if ( v2 == 1 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( v2 == 2 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 48) = 2;
    *(_QWORD *)(a1 + 32) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v4 = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)v4 != -1 )
  {
    if ( v2 )
    {
      if ( v2 == 3 )
        BUG();
      v5 = *(_QWORD *)(a2 + 24);
      v6 = *(_QWORD *)(v5 + 32);
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 24);
      v6 = *(_QWORD *)(v5 + 32);
      if ( *(_DWORD *)(v6 + 16) != (_DWORD)v4 && (_DWORD)v4 )
      {
        v7 = (unsigned int)v4;
        v6 = *(_QWORD *)(v5 + (unsigned int)v4 + 32);
        goto LABEL_8;
      }
    }
    v7 = (unsigned int)v4;
LABEL_8:
    v8 = 32;
    if ( *(_QWORD *)(v6 + 32) )
      v8 = 16;
    sub_A1C030(a1, v5, v4, v7 + v8);
    return a1;
  }
  if ( v2 == 3 )
    BUG();
  sub_A1C030(a1, *(_QWORD *)(a2 + 24), v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL) + 12LL));
  return a1;
}

