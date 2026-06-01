unsigned __int64 __fastcall sub_6306B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[25]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v19[15]; // [rsp+29h] [rbp-4Fh] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v20 = __readfsqword(0x28u);
  if ( a5 != 100 && (unsigned __int8)must_journal(a1, a2, a3) && a4 != a3 )
  {
    v13 = (_BYTE *)pack_dd(v18, v19, (unsigned int)v7);
    if ( (unsigned int)v7 > 0x63 )
      sub_629970(v13, v19, v12);
    v14 = qword_2B34D20[8 * v7 + 2];
    if ( v14 == 4 )
    {
      v17 = pack_dd(v13, v19, (unsigned int)a3);
      v13 = (_BYTE *)pack_dd(v17, v19, (unsigned int)a4);
      goto LABEL_17;
    }
    if ( v14 > 4 )
    {
      if ( v14 == 8 )
      {
        v16 = pack_dq(v13, v19, a3);
        v13 = (_BYTE *)pack_dq(v16, v19, a4);
        goto LABEL_17;
      }
    }
    else
    {
      if ( v14 == 1 )
      {
        if ( v13 < v19 )
        {
          *v13 = a3;
          if ( v13 + 1 >= v19 )
          {
            ++v13;
          }
          else
          {
            v13[1] = a4;
            v13 += 2;
          }
        }
        goto LABEL_17;
      }
      if ( v14 == 2 )
      {
        v15 = pack_dw(v13, v19, (unsigned __int16)a3);
        v13 = (_BYTE *)pack_dw(v15, v19, (unsigned __int16)a4);
LABEL_17:
        add_undo_record(164, v18, v13 - v18);
        goto LABEL_2;
      }
    }
    if ( !under_debugger )
      interr(1762);
LABEL_33:
    BUG();
  }
LABEL_2:
  v8 = *(_QWORD *)(a2 + 16);
  v9 = (_DWORD *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 8));
  if ( v8 == 4 )
  {
    *v9 = a4;
    return v20 - __readfsqword(0x28u);
  }
  if ( v8 > 4 )
  {
    if ( v8 == 8 )
    {
      *(_QWORD *)v9 = a4;
      return v20 - __readfsqword(0x28u);
    }
LABEL_27:
    if ( !under_debugger )
      interr(1749);
    goto LABEL_33;
  }
  if ( v8 == 1 )
  {
    *(_BYTE *)v9 = a4;
    return v20 - __readfsqword(0x28u);
  }
  if ( v8 != 2 )
    goto LABEL_27;
  *(_WORD *)v9 = a4;
  return v20 - __readfsqword(0x28u);
}
