__int64 __fastcall sub_B5AC50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rax

  v8 = (_QWORD *)sub_B5ABC0(a1, a2, a3, a4, a5, a6);
  if ( !v8 )
    return 0;
LABEL_2:
  v10 = v8[5];
  if ( (v10 & 7) == 0 && (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return (__int64)v8;
  v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v11 + 16LL) != 48 || (v12 = sub_F3D1D0(*v11, a2, v6, v7, v9), (result = sub_B5AC50(v12)) == 0) )
  {
    while ( 1 )
    {
      v14 = v8[1] & 0xFFFFFFFFFFFFFFF8LL;
      v8 = (_QWORD *)v14;
      if ( !v14 )
        return 0;
      if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  return result;
}

