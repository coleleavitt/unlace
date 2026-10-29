__int64 __fastcall sub_4586A0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // r14
  unsigned int v12; // eax
  unsigned __int64 v13; // rbp
  unsigned int v14; // ebp
  unsigned int *v15; // rax
  unsigned int v16; // eax
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rax

  v5 = a2;
  if ( a3 > 1 )
  {
    if ( a3 != 2 )
      goto LABEL_12;
    v6 = sub_3BD5D0((__int64)a1, a2);
    v7 = v6;
    if ( v6 == -1 )
      return -1;
    v8 = sub_3B9AA0((__int64)a1, v6, 4);
    if ( sub_3B8910((__int64)a1, v7) && (v8 & 0x600) != 0x200 )
    {
      if ( (v8 & 0xFFFFFFFFFFF7FE00LL) != 0 )
        return v7;
      if ( !v7 )
        return 0;
      v17 = (unsigned int *)sub_4EE820(a1 + 194, v7);
      if ( v17 )
      {
        v5 = *v17;
      }
      else
      {
        v5 = 0;
        v20 = sub_4EEB90(a1 + 194, v7);
        if ( v20 )
          v5 = *(_DWORD *)(v20 + 4);
      }
      v18 = sub_3BCA60(a1, v7, v5, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_454B40, nullptr);
      v7 = v18;
      if ( v18 == -1 )
      {
        if ( !sub_3B8910((__int64)a1, v5) )
          v5 = sub_3B87D0((__int64)a1, v5);
      }
      else
      {
        if ( (sub_3B9AA0((__int64)a1, v18, 4) & 0x600) == 0 )
        {
          if ( (sub_3B9AA0((__int64)a1, v7, 4) & 0x600) == 0 )
            return v7;
          goto LABEL_39;
        }
        v5 = sub_3BD3E0((__int64)a1, v7);
      }
      if ( (sub_3B9AA0((__int64)a1, v5, 4) & 0x600) != 0 )
      {
LABEL_39:
        if ( !under_debugger )
          interr(2103);
        goto LABEL_59;
      }
      goto LABEL_12;
    }
    if ( !under_debugger )
      interr(2102);
LABEL_59:
    BUG();
  }
  v11 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( !sub_3B8910((__int64)a1, a2) || (v11 & 0x600) == 0x200 )
  {
    v12 = sub_3BD3E0((__int64)a1, a2);
    v5 = v12;
    if ( v12 == -1 )
      return -1;
    v13 = sub_3B9AA0((__int64)a1, v12, 4);
    if ( !sub_3B8910((__int64)a1, v5) || (v13 & 0x600) == 0x200 )
    {
      if ( !under_debugger )
        interr(2101);
      goto LABEL_59;
    }
    if ( (v13 & 0xFFFFFFFFFFF7FE00LL) != 0 )
      return v5;
  }
  else
  {
    if ( a3 )
    {
      if ( (v11 & 0x400) != 0 )
      {
        v5 = sub_3BD3E0((__int64)a1, a2);
        goto LABEL_12;
      }
      goto LABEL_25;
    }
    if ( (v11 & 0xFFFFFFFFFFF7FE00LL) != 0 )
      goto LABEL_12;
  }
  if ( v5 )
  {
    v14 = sub_3B8820((__int64)a1, v5);
    if ( v14 == -1 )
      goto LABEL_12;
    v15 = (unsigned int *)sub_4EE820(a1 + 194, v5);
    if ( v15 )
    {
      v16 = *v15;
    }
    else
    {
      v22 = sub_4EEB90(a1 + 194, v5);
      if ( !v22 )
        goto LABEL_24;
      v16 = *(_DWORD *)(v22 + 4);
    }
    if ( v14 < v16 )
      goto LABEL_12;
LABEL_24:
    if ( (sub_3B9AA0((__int64)a1, v14, 4) & 0x600) != 0 )
      goto LABEL_12;
LABEL_25:
    v7 = a4;
    if ( a4 == -1 )
    {
      v19 = sub_4EE820(a1 + 194, v5);
      if ( v19 )
      {
        v7 = *(_DWORD *)(v19 + 4);
      }
      else
      {
        v21 = (unsigned int *)sub_4EE960(a1 + 194, v5);
        if ( !v21 )
        {
          v5 = sub_3BC980(a1, v5, 0xFFFFFFFF, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_454B40, nullptr);
          goto LABEL_12;
        }
        v7 = *v21;
      }
    }
    v5 = sub_3BC980(a1, v5, v7, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_454B40, nullptr);
    if ( v5 != -1 )
      return v5;
    if ( v7 != -1 )
    {
      if ( sub_3B8910((__int64)a1, v7) )
        return v7;
      v5 = sub_3B87D0((__int64)a1, v7);
    }
LABEL_12:
    if ( v5 != -1 )
      return v5;
    return -1;
  }
  return 0;
}

