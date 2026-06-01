__int64 sub_127E60()
{
  char *v1; // rbp
  __int64 ph; // rax
  int v3; // ebx
  __int64 v4; // r14
  char v5; // al
  char *v6; // r13
  char *v7; // rax
  char v8[1023]; // [rsp+30h] [rbp-448h] BYREF
  char v9; // [rsp+42Fh] [rbp-49h] BYREF
  char v10; // [rsp+430h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+438h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( sub_9E360() < 0 )
    return 1;
  v1 = v8;
  ea2str();
  sub_8F740((__int64)"%s: ", v8);
  v8[0] = 0;
  ph = get_ph();
  v3 = *(_DWORD *)(ph + 68);
  v4 = ph;
  if ( v3 > *(_DWORD *)(ph + 72) )
  {
    v6 = v8;
    goto LABEL_24;
  }
  v5 = 0;
  do
  {
    if ( *(_DWORD *)(v4 + 80) == v3 )
      goto LABEL_28;
    if ( v5 )
    {
LABEL_33:
      v6 = v1;
      goto LABEL_12;
    }
    while ( 1 )
    {
      get_sreg();
      v6 = &v1[(int)qsnprintf()];
      if ( ((*(_BYTE *)(v4 + 9) & 0x40) == 0 || *(_DWORD *)(v4 + 84) == v3) && get_segm_by_sel() )
      {
        if ( v6 >= &v10 )
        {
LABEL_31:
          if ( under_debugger )
            goto LABEL_38;
          interr();
          goto LABEL_33;
        }
        v1 = v6 + 1;
        *v6 = 40;
        if ( v6 + 1 >= &v10 )
        {
          v9 = 0;
          v1 = &v9;
        }
        get_segm_name();
        v7 = (char *)qstpncpy();
        if ( v7 >= &v10 )
        {
          if ( !under_debugger )
          {
            interr();
            goto LABEL_36;
          }
LABEL_38:
          BUG();
        }
        v6 = v7 + 1;
        *v7 = 41;
        if ( v7 + 1 >= &v10 )
        {
          v9 = 0;
          v6 = &v9;
        }
      }
      if ( v3 + 1 > *(_DWORD *)(v4 + 72) )
        goto LABEL_23;
      if ( v3 + 1 != *(_DWORD *)(v4 + 80) )
      {
        ++v3;
        goto LABEL_12;
      }
      v3 += 2;
      if ( v3 > *(_DWORD *)(v4 + 72) )
        goto LABEL_23;
      if ( v3 == *(_DWORD *)(v4 + 80) )
        break;
LABEL_12:
      if ( v6 >= &v10 )
        goto LABEL_31;
      v1 = v6 + 1;
      *v6 = 32;
      if ( v6 + 1 >= &v10 )
      {
        v9 = 0;
        v1 = &v9;
      }
    }
    v1 = v6;
    v5 = 1;
LABEL_28:
    ++v3;
  }
  while ( v3 <= *(_DWORD *)(v4 + 72) );
  v6 = v1;
LABEL_23:
  if ( v6 >= &v10 )
  {
LABEL_36:
    if ( !under_debugger )
      interr();
    goto LABEL_38;
  }
LABEL_24:
  *v6 = 0;
  sub_8F740((__int64)"%s\n", v8);
  return 1;
}

