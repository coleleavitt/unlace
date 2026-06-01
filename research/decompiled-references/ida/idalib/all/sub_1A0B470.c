__int64 __fastcall sub_1A0B470(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx

  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = a3;
  v7 = *(_QWORD *)(a4 + 16);
  v8 = sub_A72040(a2, v7);
  if ( v8 )
  {
    *(_DWORD *)a1 = 7;
    result = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(a1 + 16) = result;
    return result;
  }
  v10 = *(_QWORD *)(a4 + 16);
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 57 <= 1 )
    goto LABEL_4;
  v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v12 <= 1 )
  {
    v11 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF0LL), v7, v12, v10);
    if ( v11 )
    {
LABEL_4:
      *(_DWORD *)a1 = 12;
      result = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(a1 + 16) = result;
      return result;
    }
    v10 = *(_QWORD *)(a4 + 16);
  }
  v13 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *v13;
  if ( *(_BYTE *)(*v13 + 16) != 14 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) != 14 )
    {
      *(_DWORD *)a1 = 15;
      BUG();
    }
    v14 = sub_F63050(*v13, v7, v15, v13);
  }
  *(_DWORD *)a1 = 15;
  result = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
