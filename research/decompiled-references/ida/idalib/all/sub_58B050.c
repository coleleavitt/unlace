__int64 __fastcall sub_58B050(__int64 a1, _BYTE *a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v9; // r8d
  int v10; // r9d
  int idcv_attr; // eax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // [rsp+8h] [rbp-A0h]
  int v18; // [rsp+14h] [rbp-94h]
  int v20; // [rsp+20h] [rbp-88h] BYREF
  __int128 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  _BYTE v23[40]; // [rsp+40h] [rbp-68h] BYREF
  int v24[2]; // [rsp+68h] [rbp-40h]

  *(_QWORD *)v24 = __readfsqword(0x28u);
  result = get_tinfo_size(0, *a3, 0);
  v18 = result;
  if ( (_DWORD)result == -1 )
  {
    *(_DWORD *)(a1 + 48) = 1562;
    return result;
  }
  if ( *a2 != 5 )
  {
    if ( !under_debugger )
      interr(1101);
    BUG();
  }
  if ( a5 >= a6 )
    return 0;
  while ( 1 )
  {
    qsnprintf((unsigned int)v23, 32, (unsigned int)"%d", a5, v9, v10);
    LOBYTE(v20) = 2;
    v22 = 0;
    v21 = 0;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
      break;
    idcv_attr = get_idcv_attr(&v20, a2, v23, 1);
    *(_DWORD *)(a1 + 48) = idcv_attr;
    if ( !idcv_attr )
      break;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      goto LABEL_7;
LABEL_12:
    free_idcv(&v20);
    ++a5;
    a4 += v18;
    if ( a6 == a5 )
      return 0;
  }
  v12 = sub_58A9F0(a1, &v20, a3, a4, 0);
  if ( v12 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_12;
  v15 = set_idcv_attr(a2, v23, &v20, 1, v13, v14);
  *(_DWORD *)(a1 + 48) = v15;
  if ( !v15 )
    goto LABEL_12;
LABEL_7:
  v12 = -1;
LABEL_8:
  v16 = v12;
  free_idcv(&v20);
  return v16;
}
