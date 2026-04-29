__int64 __fastcall sub_2975A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 *v7; // r15
  int *v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 tinfo_size; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_37E160(50469);
    BUG();
  }
  v4 = *(__int64 **)a1;
  v21[0] = 0;
  if ( !v4 )
  {
    if ( v3 != 1 )
      goto LABEL_15;
    v19 = 24;
    goto LABEL_37;
  }
  v7 = (__int64 *)v4[1];
  if ( v3 != 1 || (v19 = (__int64)(v7 + 3), v7[3]) )
  {
    if ( v4 == v7 )
      goto LABEL_15;
LABEL_5:
    while ( 1 )
    {
      v8 = (int *)(v7 + 3);
      if ( (unsigned __int8)sub_296B40((__int64)(v7 + 4), a2, v21) )
      {
        v9 = *(_QWORD *)v8;
        tinfo_size = get_tinfo_size(0, v21[0], 0);
        if ( (int)tinfo_size > 0 && !(v9 % tinfo_size) )
          break;
      }
LABEL_10:
      v11 = *(__int64 **)a1;
LABEL_11:
      if ( (*v7 & 2) != 0 )
      {
LABEL_14:
        if ( v11 == v7 )
          goto LABEL_15;
      }
      else
      {
        v12 = (__int64 *)v7[2];
        if ( (*(_BYTE *)v12 & 2) == 0 )
        {
          do
          {
            v7 = v12;
            v12 = (__int64 *)v12[1];
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
          goto LABEL_14;
        }
        v16 = (__int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v17 = *v16;
        if ( (*v16 & 2) == 0 )
        {
          while ( (__int64 *)v16[2] == v7 )
          {
            v7 = v16;
            v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
            v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v17 & 2) != 0 )
            {
              v7 = (__int64 *)v18;
              if ( v11 != (__int64 *)v18 )
                goto LABEL_5;
              goto LABEL_15;
            }
            v16 = (__int64 *)v18;
          }
        }
        v7 = v16;
        if ( v11 == v16 )
          goto LABEL_15;
      }
    }
    if ( (get_tinfo_property(v21[0], 2) & 0x2F) != 0xD )
    {
      v11 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
        {
          if ( v11[3] )
            goto LABEL_11;
          goto LABEL_9;
        }
        v15 = v11[1];
      }
      else
      {
        v15 = 0;
      }
      if ( *(_QWORD *)(v15 + 24) && *(_QWORD *)(a1 + 8) <= 2u )
        goto LABEL_11;
    }
LABEL_9:
    if ( (int)(sub_297440((__int64 **)a1, a2, v21, *v8) + 1) > 0 )
      goto LABEL_38;
    goto LABEL_10;
  }
LABEL_37:
  if ( (unsigned __int8)sub_296B40(v19 + 8, a2, v21) )
  {
LABEL_38:
    copy_tinfo_t(a3, v21);
    v13 = 1;
    goto LABEL_16;
  }
LABEL_15:
  v13 = 0;
LABEL_16:
  clear_tinfo_t(v21);
  return v13;
}
