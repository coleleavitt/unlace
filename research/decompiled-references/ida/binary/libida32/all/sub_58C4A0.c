__int64 __fastcall sub_58C4A0(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // ebx
  unsigned int *v10; // r14
  __int64 v11; // rdi
  __int64 custom_argloc; // rax
  char tinfo; // al
  __int64 v14; // rsi
  _QWORD *v15; // [rsp+8h] [rbp-40h]
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v16[0] = 0;
  if ( (!a3 || !*(_BYTE *)a3) && (*(_BYTE *)a4 & 1) != 0 )
  {
    if ( *(_BYTE *)a2 == 2 )
    {
      v14 = *(unsigned int *)(a2 + 8);
    }
    else
    {
      if ( *(_BYTE *)a2 != 8 )
        goto LABEL_3;
      v10 = *(unsigned int **)(a2 + 8);
      v11 = *v10;
      if ( (_DWORD)v11 != 6 )
      {
        if ( (int)v11 <= 6 )
          goto LABEL_3;
        v15 = a3;
        custom_argloc = retrieve_custom_argloc(v11, a2);
        a3 = v15;
        if ( !custom_argloc )
          goto LABEL_3;
        tinfo = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(custom_argloc + 120))(v16, v10);
        goto LABEL_18;
      }
      v14 = v10[2];
    }
    v15 = a3;
    tinfo = get_tinfo(v16, v14);
LABEL_18:
    a3 = v15;
    if ( tinfo )
      a3 = v16;
  }
LABEL_3:
  v7 = a2;
  v8 = sub_58A550(a1, a2, a3, a4, 0);
  if ( (_BYTE)v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)a4 & 4) != 0 && (unsigned int)get_qerrno() == 1242 )
  {
    set_qerrno(0, v7);
    goto LABEL_4;
  }
LABEL_5:
  clear_tinfo_t(v16);
  return v8;
}

