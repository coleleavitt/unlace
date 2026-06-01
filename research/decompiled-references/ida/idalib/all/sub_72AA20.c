__int64 __fastcall sub_72AA20(__int64 a1)
{
  unsigned int v1; // ebp
  bool v3; // cc
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  char v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v1 = *(unsigned __int8 *)(a1 + 848);
  v15 = __readfsqword(0x28u);
  if ( (_BYTE)v1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 616) <= 6u;
  *(_WORD *)(a1 + 848) = 1;
  if ( v3 || (v5 = *(_QWORD *)(a1 + 656)) == 0 )
  {
    if ( !under_debugger )
      interr(3322);
    goto LABEL_23;
  }
  v6 = qlsize(v5);
  if ( qlseek(*(_QWORD *)(a1 + 656), 0, 1) >= v6
    || (unsigned __int8)sub_836CD0(a1, *(_QWORD *)(a1 + 656)) && sub_836AD0(a1, *(_QWORD *)(a1 + 656), &v14, 1, 1) == 1 )
  {
    v7 = *(_QWORD *)(a1 + 656);
    v8 = byte_2CD5EE0;
    byte_2CD5EE0 = *(_BYTE *)(a1 + 634);
    if ( v6 == qlseek(v7, 0, 1) )
    {
      v9 = *(_QWORD *)(a1 + 648);
      v14 = 0;
      v10 = sub_836AD0(a1, v9, &v14, 4, 1);
      v11 = v14;
      if ( v10 == 4 && !v14 || *(_DWORD *)(a1 + 628) == v14 )
      {
        v12 = *(_DWORD *)(a1 + 716) == 1;
        *(_BYTE *)(a1 + 849) = 1;
        *(_DWORD *)(a1 + 624) = v11;
        if ( !v12 )
          goto LABEL_13;
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 716) == 1;
        *(_DWORD *)(a1 + 624) = v14;
        if ( !v12 )
        {
LABEL_13:
          byte_2CD5EE0 = v8;
          return 1;
        }
      }
      v13 = *(unsigned __int8 *)(a1 + 840);
      if ( !(_BYTE)v13 )
      {
        MD5Final(a1 + 728, a1 + 744);
        *(_QWORD *)(a1 + 720) = *(_QWORD *)(a1 + 832);
        v13 = *(unsigned __int8 *)(a1 + 840);
      }
      *(_DWORD *)(a1 + 716) = v13 + 2;
      goto LABEL_13;
    }
    if ( !under_debugger )
      interr(3323);
LABEL_23:
    BUG();
  }
  return v1;
}
