unsigned __int64 __fastcall sub_19FAF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 i; // rax
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // r8
  __int64 v22; // r9

  v6 = a2;
  v7 = sub_F60F10(a3, a2, a3, a4, a5, a6);
  result = sub_B7E900((__int64)v7, a2, v8, v9, v10, v11);
  v15 = result;
  if ( result )
  {
LABEL_2:
    for ( i = *(_QWORD *)(v15 + 48); ; i = *(_QWORD *)(v17 + 32) )
    {
      v17 = sub_F63050(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v13 = (unsigned int)(v18 - 2);
      if ( (unsigned int)v13 > 1 )
        break;
    }
    if ( (_BYTE)v18 == 48 )
    {
      v19 = sub_F63500(v17, a2);
      if ( v19 )
      {
        v20 = *(unsigned __int8 *)(v19 + 48);
        a2 = v6;
        if ( !sub_19F9BC0((__int64 *)(a1 + 96), v6, *(_BYTE *)(v19 + 48)) )
        {
          a2 = v6;
          sub_19FACD0(a1 + 96, v6, v20, v14, v21, v22);
        }
      }
      else if ( *(_BYTE *)(v17 + 16) == 48 )
      {
        a2 = v6;
        sub_19FAF70(a1, v6, v17);
      }
    }
    while ( 1 )
    {
      result = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = result;
      if ( !result )
        break;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  return result;
}
