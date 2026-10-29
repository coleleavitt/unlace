__int64 __fastcall sub_1665300(__int64 a1, __int64 a2)
{
  int v2; // edx
  char v3; // r12
  unsigned __int8 v4; // cl
  __int64 result; // rax
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9

  v2 = *(unsigned __int8 *)(a1 + 1238);
  v3 = *(_BYTE *)(a1 + 1237);
  v4 = v2 - 1;
  result = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2;
  if ( (unsigned __int8)(v2 - 1) > 0xFDu && v3 != 3 )
  {
    if ( v3 != 1 )
      return result;
    goto LABEL_8;
  }
  if ( v3 != 3 )
  {
    if ( v4 > 0xFDu )
    {
LABEL_8:
      if ( v3 == 1 && v6 )
      {
        v12 = sub_B31A90(*(_QWORD *)(a1 + 248), 0);
        sub_B8CC60(a2, v12, v13, v14, v15, v16);
      }
LABEL_11:
      result = *(unsigned int *)(a1 + 1256);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_12;
    }
LABEL_7:
    v7 = sub_B313F0(*(_QWORD *)(a1 + 248), 8 * v2, 0);
    sub_B8CC60(a2, v7, v8, v9, v10, v11);
    goto LABEL_8;
  }
  if ( !v6 && *(_BYTE *)(a1 + 1236) )
  {
    if ( v4 > 0xFDu )
      goto LABEL_11;
    goto LABEL_7;
  }
  v20 = sub_B315A0(*(_QWORD *)(a1 + 248), 0);
  sub_B8CC60(a2, v20, v21, v22, v23, v24);
  result = *(unsigned int *)(a1 + 1256);
  if ( !(_DWORD)result )
    return result;
LABEL_12:
  v17 = *(_QWORD *)(a1 + 1248);
  v18 = *(_DWORD *)(a1 + 1240);
  v19 = v17 + 12 * result;
  result = v19 - 12;
  if ( v18 == *(_DWORD *)(v19 - 8) )
  {
    do
    {
      if ( *(_BYTE *)(result + 8) )
        *(_BYTE *)(result + 9) = 1;
      if ( v17 == result )
        break;
      result -= 12;
    }
    while ( *(_DWORD *)(result + 4) == v18 );
  }
  return result;
}
