__int64 __fastcall sub_11C950(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  __int16 v7; // cx
  __int16 v8; // dx
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax

  v4 = *a1;
  if ( (_BYTE)v4 != 10 )
  {
    if ( (unsigned __int8)(v4 - 5) > 1u && (_BYTE)v4 != 9 )
    {
      if ( !under_debugger )
        sub_383060(50279);
      BUG();
    }
    v5 = j__qalloc_or_throw(24, a2, (unsigned int)(v4 - 5), a4);
    *(_QWORD *)v5 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = -1;
    *(_BYTE *)v5 = *a1;
    v6 = a1[1];
    *a1 = 0;
    *(_BYTE *)(v5 + 1) = v6;
    v7 = *((_WORD *)a1 + 1);
    a1[1] = 0;
    v8 = *(_WORD *)(v5 + 2);
    *(_WORD *)(v5 + 2) = v7;
    v9 = *((_DWORD *)a1 + 1);
    *((_WORD *)a1 + 1) = v8;
    v10 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v9;
    *((_DWORD *)a1 + 1) = v10;
    *(_QWORD *)(v5 + 8) = *((_QWORD *)a1 + 1);
    *a1 = 10;
    *((_QWORD *)a1 + 1) = v5;
    *(_DWORD *)(v5 + 4) = -1;
  }
  result = *(unsigned int *)(a2 + 84);
  *((_DWORD *)a1 + 1) = result;
  return result;
}
