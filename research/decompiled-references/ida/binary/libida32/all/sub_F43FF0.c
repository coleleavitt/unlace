_QWORD *__fastcall sub_F43FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v11; // rax

  v6 = *(unsigned __int8 *)(a1 + 16);
  v7 = a1;
  if ( (_BYTE)v6 == 42 )
    goto LABEL_2;
  a3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a3 + 16) == 42 )
  {
    v11 = sub_F3F130(a1);
    if ( v11 )
    {
      v7 = v11;
LABEL_2:
      v8 = *(_QWORD *)(v7 + 32);
      goto LABEL_3;
    }
    v6 = *(unsigned __int8 *)(a1 + 16);
  }
  if ( (unsigned int)(v6 - 43) > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      return nullptr;
    v7 = sub_F3F130(a1);
    if ( !v7 )
      return nullptr;
  }
  v8 = sub_990B30(v7, a2, a3, a4, a5);
LABEL_3:
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 48 )
    return nullptr;
  result = sub_F3D150(*(_QWORD **)(v9 + 24), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)result + 28) & 0x7Fu) - 59 > 2 )
    return nullptr;
  return result;
}

