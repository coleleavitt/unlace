__int64 __fastcall sub_955D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // [rsp+0h] [rbp-48h]
  unsigned int v10; // [rsp+Ch] [rbp-3Ch]

  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 72) = 1;
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(unsigned int *)(result + 184);
    v3 = *(unsigned int *)(a2 + 72);
    v10 = result;
    if ( (_DWORD)v3 )
    {
      v4 = *(unsigned int *)(a2 + 20);
      v5 = a2 + 16 * v4;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 80) + 24LL) == 1 )
          goto LABEL_6;
        v5 += 8;
      }
      while ( a2 + 8 * (v3 + 2 * v4) != v5 );
      ++v10;
LABEL_6:
      v6 = 0;
      v7 = 0;
      v9 = 8 * v3;
      while ( 1 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(a2 + 80 + 16 * v4 + v6) + 24LL);
        if ( v8 != 1 && v7 >= v10 )
          break;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), a2);
        if ( v8 != 1 )
          goto LABEL_8;
        v6 += 8;
        if ( v9 == v6 )
          return result;
LABEL_9:
        v4 = *(unsigned int *)(a2 + 20);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40), a2);
LABEL_8:
      ++v7;
      v6 += 8;
      if ( v9 == v6 )
        return result;
      goto LABEL_9;
    }
  }
  return result;
}

