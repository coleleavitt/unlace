unsigned __int64 __fastcall sub_613BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _BYTE v22[25]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v23[15]; // [rsp+29h] [rbp-4Fh] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v24 = __readfsqword(0x28u);
  if ( a5 != 100 && (unsigned __int8)must_journal(a1, a2, a3) && a4 != a3 )
  {
    v14 = (_BYTE *)pack_dd(v22, v23, (unsigned int)v7);
    if ( (unsigned int)v7 > 0x63 )
      sub_60D510(v14, v23, v12);
    v16 = qword_2B0AD60[8 * v7 + 2];
    if ( v16 == 4 )
    {
      v21 = pack_dd(v14, v23, (unsigned int)a3);
      v14 = (_BYTE *)pack_dd(v21, v23, (unsigned int)a4);
      goto LABEL_17;
    }
    if ( v16 > 4 )
    {
      if ( v16 == 8 )
      {
        v18 = pack_dq(v14, v23, a3, v13, v15);
        v14 = (_BYTE *)pack_dq(v18, v23, a4, v19, v20);
        goto LABEL_17;
      }
    }
    else
    {
      if ( v16 == 1 )
      {
        if ( v14 < v23 )
        {
          *v14 = a3;
          if ( v14 + 1 >= v23 )
          {
            ++v14;
          }
          else
          {
            v14[1] = a4;
            v14 += 2;
          }
        }
        goto LABEL_17;
      }
      if ( v16 == 2 )
      {
        v17 = pack_dw(v14, v23, (unsigned __int16)a3);
        v14 = (_BYTE *)pack_dw(v17, v23, (unsigned __int16)a4);
LABEL_17:
        add_undo_record(164, v22, v14 - v22);
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
    return v24 - __readfsqword(0x28u);
  }
  if ( v8 > 4 )
  {
    if ( v8 == 8 )
    {
      *(_QWORD *)v9 = a4;
      return v24 - __readfsqword(0x28u);
    }
LABEL_27:
    if ( !under_debugger )
      interr(1749);
    goto LABEL_33;
  }
  if ( v8 == 1 )
  {
    *(_BYTE *)v9 = a4;
    return v24 - __readfsqword(0x28u);
  }
  if ( v8 != 2 )
    goto LABEL_27;
  *(_WORD *)v9 = a4;
  return v24 - __readfsqword(0x28u);
}

