__int64 __fastcall sub_B5ACD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( *((_BYTE *)a1 + 73) >> 5 == 2 )
    return 1;
  if ( (*((_BYTE *)a1 + 74) & 1) != 0 || (a1 = sub_B5AA70((__int64)a1, a2, a3, a4, a5, a6)) != nullptr )
  {
    v8 = sub_B5ABC0((__int64)a1, a2, a3, a4, a5, a6);
    if ( v8 )
    {
LABEL_5:
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v10 + 16LL) == 48 )
      {
        v11 = sub_F3D1D0(*v10, a2, v6, v7, v9);
        if ( (unsigned __int8)sub_B5ACD0(v11) )
          return 1;
      }
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = v12;
        if ( !v12 )
          break;
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_5;
      }
    }
  }
  return 0;
}

