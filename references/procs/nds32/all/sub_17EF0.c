__int64 __fastcall sub_17EF0(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // al
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  char v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a2 + 88);
  v15 = __readfsqword(0x28u);
  v3 = v2;
  v4 = v2 & 0xF0;
  if ( (v3 & 0xF0) == 0xC0 )
    v4 = *(_DWORD *)(a2 + 28);
  if ( v4 <= 0x10 )
    getinf(99);
  if ( (get_tinfo_property(*(_QWORD *)(a2 + 32), 2) & 0x2F) != 0xD
    && (get_tinfo_property(*(_QWORD *)(a2 + 32), 2) & 0xF) != 0xB )
  {
    if ( !*(_BYTE *)(a2 + 32) )
    {
LABEL_8:
      v11 = 0;
      v12 = 0;
      goto LABEL_9;
    }
LABEL_7:
    if ( !(unsigned __int8)sub_17C10(a1, (_DWORD *)(a2 + 40), (_QWORD *)(a2 + 32)) )
      return 0;
    goto LABEL_8;
  }
  if ( (unsigned __int64)get_tinfo_size(0, *(_QWORD *)(a2 + 32), 0) <= 8 )
    goto LABEL_7;
  v13 = 0;
  v14 = 0;
  cleanup_argloc(&v13);
  LODWORD(v13) = 3;
  LODWORD(v14) = 0;
  copy_argloc(a2 + 40, &v13);
  cleanup_argloc(&v13);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v11 = 1;
  cleanup_argloc(&v13);
  LODWORD(v13) = 3;
  LODWORD(v14) = 0;
  cleanup_argloc(&v13);
LABEL_9:
  v8 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
  {
LABEL_20:
    *(_QWORD *)(a2 + 56) = SHIDWORD(v11);
    return 1;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)a2 + 80 * v8;
    if ( !v12 )
      goto LABEL_17;
    if ( !*(_BYTE *)(v9 + 64) )
      break;
    if ( (unsigned __int8)getinf_flag(67, 16, v5, v6, v7) )
      goto LABEL_18;
LABEL_17:
    if ( !(unsigned __int8)sub_179D0((int *)&v11, (_DWORD *)v9, (_QWORD *)(v9 + 64)) )
    {
LABEL_18:
      if ( !(unsigned __int8)sub_17AD0((__int64)&v11, v9, (_QWORD *)(v9 + 64)) )
        return 0;
    }
    if ( (unsigned __int64)++v8 >= *(_QWORD *)(a2 + 8) )
      goto LABEL_20;
  }
  if ( *(_DWORD *)v9 == 1 )
    sub_17B50((int *)&v11, *(_QWORD *)a2 + 80 * v8, *(_DWORD *)(v9 + 8));
  return 0;
}
