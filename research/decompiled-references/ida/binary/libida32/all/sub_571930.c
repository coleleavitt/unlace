__int64 __fastcall sub_571930(__int64 a1, _BYTE *a2, _QWORD *a3, unsigned int a4, int a5, int a6)
{
  __int64 result; // rax
  int v9; // r8d
  int v10; // r9d
  int idcv_attr; // eax
  int v12; // eax
  int v13; // eax
  char v14; // [rsp+0h] [rbp-A8h]
  unsigned int v15; // [rsp+0h] [rbp-A8h]
  int v17; // [rsp+10h] [rbp-98h]
  int v19; // [rsp+20h] [rbp-88h] BYREF
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  char v22; // [rsp+40h] [rbp-68h] BYREF
  int v23[2]; // [rsp+68h] [rbp-40h]

  v14 = (char)a2;
  *(_QWORD *)v23 = __readfsqword(0x28u);
  result = get_tinfo_size(0, *a3, 0);
  v17 = result;
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
    qsnprintf((int)&v22, 32, (int)"%d", a5, v9, v10, v14);
    LOBYTE(v19) = 2;
    v21 = 0;
    v20 = 0;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
      break;
    idcv_attr = get_idcv_attr();
    *(_DWORD *)(a1 + 48) = idcv_attr;
    if ( !idcv_attr )
      break;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      goto LABEL_7;
LABEL_12:
    free_idcv(&v19);
    ++a5;
    a4 += v17;
    if ( a6 == a5 )
      return 0;
  }
  v12 = sub_5712E0(a1, &v19, a3, a4, 0);
  if ( v12 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_12;
  v13 = set_idcv_attr();
  *(_DWORD *)(a1 + 48) = v13;
  if ( !v13 )
    goto LABEL_12;
LABEL_7:
  v12 = -1;
LABEL_8:
  v15 = v12;
  free_idcv(&v19);
  return v15;
}

