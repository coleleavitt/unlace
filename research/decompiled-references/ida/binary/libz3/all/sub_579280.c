__int64 __fastcall sub_579280(__int64 a1, _DWORD *a2)
{
  int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0;
  v4 = *(unsigned int *)(v3 - 4);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = v5;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v5) + 8LL) + 32LL) != 4 )
      break;
    v8 = sub_596A60();
    v9 = *(_QWORD *)(v8 + 56);
    v10 = *(_QWORD *)(v8 + 16);
    if ( !v9 )
    {
      if ( !v10 )
        goto LABEL_12;
LABEL_10:
      v11 = *(_DWORD *)(v10 - 4);
      goto LABEL_11;
    }
    LODWORD(v9) = *(_DWORD *)(v9 - 4);
    if ( v10 )
      goto LABEL_10;
    v11 = 0;
LABEL_11:
    if ( v11 != (_DWORD)v9 )
      break;
LABEL_12:
    ++v5;
    v7 = v2;
    if ( v4 == v5 )
      goto LABEL_13;
LABEL_6:
    v3 = *(_QWORD *)(a1 + 32);
    v2 = v7;
  }
  if ( (_BYTE)v6 )
    return 0;
  ++v5;
  v6 = 1;
  if ( v4 != v5 )
    goto LABEL_6;
LABEL_13:
  if ( !(_BYTE)v6 )
    return 0;
  *a2 = v7;
  return v6;
}

