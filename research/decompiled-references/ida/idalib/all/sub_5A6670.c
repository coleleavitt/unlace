__int64 __fastcall sub_5A6670(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v7; // ebx
  char v9; // al
  unsigned int *v10; // rsi
  __int64 v11; // rdi
  __int64 custom_argloc; // rax
  char tinfo; // al
  _QWORD *v14; // [rsp+0h] [rbp-48h]
  _QWORD *v15; // [rsp+8h] [rbp-40h]
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v16[0] = 0;
  if ( (!a3 || !*(_BYTE *)a3) && (*a4 & 1) != 0 )
  {
    v9 = *(_BYTE *)a2;
    v10 = *(unsigned int **)(a2 + 8);
    if ( v9 != 2 )
    {
      if ( v9 != 8 )
        goto LABEL_3;
      v11 = *v10;
      if ( (_DWORD)v11 != 6 )
      {
        if ( (int)v11 <= 6 )
          goto LABEL_3;
        v15 = a3;
        custom_argloc = retrieve_custom_argloc(v11, v10, a3);
        a3 = v15;
        if ( !custom_argloc )
          goto LABEL_3;
        v14 = v15;
        tinfo = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(custom_argloc + 120))(v16, v10);
        goto LABEL_18;
      }
      v10 = *((unsigned int **)v10 + 1);
    }
    v14 = a3;
    tinfo = get_tinfo(v16, v10);
LABEL_18:
    a3 = v14;
    if ( tinfo )
      a3 = v16;
  }
LABEL_3:
  v7 = sub_5A4700(a1, a2, a3, (__int64)a4, 0);
  if ( (_BYTE)v7 )
  {
LABEL_4:
    v7 = 1;
    goto LABEL_5;
  }
  if ( (*a4 & 4) != 0 && (unsigned int)get_qerrno() == 1242 )
  {
    set_qerrno(0);
    goto LABEL_4;
  }
LABEL_5:
  clear_tinfo_t(v16);
  return v7;
}
