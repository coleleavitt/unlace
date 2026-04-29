__int64 __fastcall sub_1CF370(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // r13

  if ( *(_BYTE *)a3 != 7 )
  {
    if ( *(_BYTE *)a3 != 6 )
    {
      if ( !under_debugger )
        sub_37E160(51812);
      BUG();
    }
    sub_334A40(*(_QWORD *)(a1 + 1504), a3);
    v7 = *(_QWORD *)(a3 + 8);
    if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
      || v7 == -1
      || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL)) == 0 )
    {
LABEL_23:
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          v8 = sub_64DD0(a1, a2, v7, 1);
          if ( !v8 )
            return 0;
          goto LABEL_19;
        }
        v8 = sub_64DD0(a1, a2, a2, 0);
        if ( v8 )
        {
          v14 = j__qalloc_or_throw(80);
          *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 40) = 0;
          *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 56) = 0;
          *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 72) = 0;
          sub_32B920(v14, a2);
          *(_DWORD *)v14 = 55;
          sub_118810((char *)a3, (char *)(v14 + 32));
          sub_B1090((_QWORD *)v8, v14);
LABEL_19:
          v11 = *(_DWORD *)(v8 + 72);
          *(_BYTE *)a3 = 7;
          *(_DWORD *)(a3 + 8) = v11;
          return v8;
        }
      }
    }
    else
    {
      v9 = 0;
      do
      {
        while ( *(_QWORD *)(v8 + 32) != v7 )
        {
          v10 = *(_QWORD *)(v8 + 48);
          if ( v10 )
          {
            if ( *(_QWORD *)(v10 + 24) == v7 )
              break;
          }
          v8 = *(_QWORD *)(v8 + 8);
          if ( !v8 )
            goto LABEL_15;
        }
        if ( (*(_BYTE *)(v8 + 24) & 2) == 0 )
          goto LABEL_17;
        if ( !v9 )
          v9 = v8;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v8 );
LABEL_15:
      if ( !v9 )
        goto LABEL_23;
      v8 = v9;
LABEL_17:
      if ( *(_DWORD *)(v8 + 76) != 6 || a4 )
        goto LABEL_19;
    }
    return 0;
  }
  v13 = *(unsigned int *)(a3 + 8);
  if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 64) )
    sub_1CF350();
  return *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v13);
}
