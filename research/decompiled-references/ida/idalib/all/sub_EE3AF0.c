unsigned __int64 __fastcall sub_EE3AF0(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // ebx
  char v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // r13
  char v12; // dl
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  char v15; // dl

  v2 = sub_B7ED20(a2, 1u);
  v3 = *(unsigned __int8 *)(a2 + 74);
  v4 = v2;
  result = sub_B7E900(a2, 1, v5, v6, v7, v8);
  v10 = (unsigned int)~v3 >> 7;
  v11 = result;
  if ( !result )
    return result;
  do
  {
LABEL_2:
    v12 = 0;
    if ( !v4 )
      goto LABEL_3;
    v13 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
    {
      if ( (*(_BYTE *)((*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 <= 2 )
      {
LABEL_16:
        v15 = v4;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v14;
        if ( !v14 )
          break;
        if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_16;
      }
    }
    v15 = 0;
LABEL_15:
    v12 = v10 | v15;
LABEL_3:
    sub_EE23D0(a1, v11, v12);
    result = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = result;
    if ( !result )
      return result;
  }
  while ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 );
  while ( 1 )
  {
    result = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = result;
    if ( !result )
      return result;
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_2;
  }
}
