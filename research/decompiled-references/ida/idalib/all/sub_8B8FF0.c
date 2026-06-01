__int64 __fastcall sub_8B8FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  _DWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi

  if ( a4 <= 0 )
    return -1;
  v4 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  while ( a2 == v4 && v4 != -1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = sub_8B8E80((_QWORD *)v10, v4);
    v12 = nullptr;
    if ( v11 )
    {
      v13 = *(_QWORD **)v10;
      v14 = v11 >> *(_DWORD *)(*(_QWORD *)v10 + 8LL);
      if ( (_DWORD)v14 == *(_DWORD *)(v10 + 72) )
      {
        v15 = *(_QWORD *)(v10 + 80);
      }
      else
      {
        *(_DWORD *)(v10 + 72) = v14;
        v15 = sub_8BCA60(v13, (unsigned int)v14, 1);
        v13 = *(_QWORD **)v10;
        *(_QWORD *)(v10 + 80) = v15;
      }
      v12 = (_DWORD *)((v11 & (*v13 - 1LL) & 0xFFFFFFFFFFFFFFFCLL) + v15);
    }
    if ( *(_DWORD *)(a3 + 4 * v8) != *v12 )
      break;
    v16 = *(_QWORD *)(a1 + 16);
    if ( v16 == -1 )
    {
      if ( a4 == ++v8 )
        return -1;
      return v8;
    }
    ++v8;
    v9 = sub_8B8F90(*(_QWORD **)(a1 + 8), v16);
    *(_QWORD *)(a1 + 16) = v9;
    v4 = v9;
    if ( a4 == v8 )
      return -1;
  }
  return v8;
}
