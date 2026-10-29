char __fastcall sub_525DE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // r13
  __int64 v4; // rbp
  __int64 *v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int16 v8; // bp
  unsigned __int8 *v9; // r12
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 *v12; // rax
  char v13; // cl
  int v14; // eax
  bool v15; // cf
  int v16; // eax
  __int64 v17; // rdi

  v2 = sub_51B750(a1, a2);
  v3 = *(_WORD *)(v2 + 68);
  v4 = v2;
  if ( (~*(_BYTE *)(v2 + 68) & 0x70) != 0 )
  {
    LOBYTE(v5) = a2 & 0xF;
    if ( (a2 & 0xF) <= 9 )
    {
      if ( !under_debugger )
        interr(941);
      goto LABEL_136;
    }
    v6 = a2;
  }
  else
  {
    v6 = *(_QWORD *)v2;
    if ( !*(_QWORD *)v2 || a2 == v6 )
    {
      if ( !under_debugger )
        interr(935);
      goto LABEL_136;
    }
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)a2) & 0x3F) != 0 && (_BYTE)a2 )
    {
      if ( !under_debugger )
        interr(936);
      goto LABEL_136;
    }
    if ( ((BYTE1(v6) ^ BYTE1(a2)) & 1) != 0 )
    {
      if ( !under_debugger )
        interr(937);
      goto LABEL_136;
    }
    if ( *(_BYTE *)(v2 + 70) || *(_QWORD *)(v2 + 32) )
    {
      if ( !under_debugger )
        interr(938);
      goto LABEL_136;
    }
    v5 = *(__int64 **)(v2 + 40);
    if ( v5 )
    {
      LOBYTE(v5) = sub_51A590(*v5, v5[1]);
      if ( !(_BYTE)v5 )
      {
        if ( !under_debugger )
          interr(939);
        goto LABEL_136;
      }
    }
    if ( (v3 & 0xFE8F) != 0 )
    {
      if ( !under_debugger )
        interr(940);
      goto LABEL_136;
    }
  }
  if ( v6 > 0xFF )
  {
    v7 = sub_51B750(a1, v6);
    v8 = *(_WORD *)(v7 + 68);
    v9 = (unsigned __int8 *)v7;
    if ( (~*(_BYTE *)(v7 + 68) & 0x70) == 0 )
    {
      if ( !under_debugger )
        interr(944);
      goto LABEL_136;
    }
    if ( (v8 & 8) != 0 )
    {
      v10 = *(_QWORD *)(v7 + 32);
      if ( !v10 )
      {
        if ( !under_debugger )
          interr(946);
        goto LABEL_136;
      }
      v11 = *(__int64 **)(v7 + 40);
      if ( !v11 || (unsigned __int8)sub_51A590(*v11, v11[1]) )
        goto LABEL_29;
    }
    else
    {
      v12 = *(__int64 **)(v7 + 40);
      if ( !v12 || (unsigned __int8)sub_51A590(*v12, v12[1]) )
      {
        v10 = *((_QWORD *)v9 + 4);
        if ( !v10 )
        {
          if ( (a2 & 0x100) != 0 )
          {
            if ( !under_debugger )
              interr(954);
            goto LABEL_136;
          }
          LOBYTE(v5) = v9[70];
          if ( (((unsigned __int8)v5 ^ (unsigned __int8)a2) & 0x3F) != 0 )
          {
            if ( !under_debugger )
              interr(955);
            goto LABEL_136;
          }
          if ( (v8 & 1) == 0 )
          {
            if ( !under_debugger )
              interr(957);
            goto LABEL_136;
          }
          v13 = (unsigned __int8)v5 & 0x3F;
          if ( ((unsigned __int8)v5 & 0x3F) != 0x3D )
            goto LABEL_50;
          goto LABEL_108;
        }
LABEL_29:
        if ( (a2 & 0x100) == 0 )
        {
          if ( !under_debugger )
            interr(948);
          goto LABEL_136;
        }
        if ( (v8 & 1) == 0 && v9[70] )
        {
          if ( !under_debugger )
            interr(950);
          goto LABEL_136;
        }
        if ( (a2 & 0xF) != 0xD )
        {
          if ( !under_debugger )
            interr(951);
          goto LABEL_136;
        }
        if ( (v8 & 8) != 0 )
        {
          if ( *(_DWORD *)(v10 + 8) > 0xFFFFFFFu )
          {
            if ( !under_debugger )
              interr(952);
            goto LABEL_136;
          }
        }
        else
        {
          if ( (unsigned __int8)is_ordinal_name(*(_QWORD *)(v10 + 8), 0) )
          {
            if ( !under_debugger )
              interr(953);
            goto LABEL_136;
          }
          v10 = *((_QWORD *)v9 + 4);
          v8 = *((_WORD *)v9 + 34);
        }
        if ( !*(_QWORD *)v10 && (v8 & 0x800) == 0 )
        {
          if ( !under_debugger )
            interr(1104);
          goto LABEL_136;
        }
        if ( (v8 & 0x4000) != 0 && *((_DWORD *)v9 + 4) != -1 )
        {
          if ( !under_debugger )
            interr(3170);
          goto LABEL_136;
        }
        LOBYTE(v5) = v9[70];
        v13 = (unsigned __int8)v5 & 0x3F;
        if ( ((unsigned __int8)v5 & 0x3F) != 0x3D )
        {
          if ( (v8 & 1) == 0 )
          {
            if ( (v8 & 2) == 0 )
            {
              if ( (v8 & 0x4000) == 0 )
                goto LABEL_58;
LABEL_65:
              if ( *((_DWORD *)v9 + 4) != -1 )
              {
                LOBYTE(v5) = v9[70] & 0x3F;
                if ( (_BYTE)v5 == 13 )
                  return (char)v5;
                if ( !under_debugger )
                  interr(3171);
                goto LABEL_136;
              }
LABEL_58:
              if ( v8 >= 0 )
                return (char)v5;
              if ( !under_debugger )
                interr(3172);
LABEL_136:
              BUG();
            }
LABEL_78:
            if ( !under_debugger )
              interr(969);
            goto LABEL_136;
          }
LABEL_50:
          LOBYTE(v5) = (unsigned __int8)v5 & 0xF;
          if ( (_BYTE)v5 == 13 )
          {
            if ( v13 != 45 )
              goto LABEL_57;
            v17 = *(_QWORD *)v9;
            if ( (*(_BYTE *)(*(_QWORD *)v9 + 52LL) & 0x88) != 0x80
              || *(_QWORD *)(v17 + 8)
              && (*(_QWORD *)(v17 + 32) == 0) == ((*(_BYTE *)(*(_QWORD *)v9 + 52LL) & 0x10) != 0)
              || (LODWORD(v5) = sub_401E80(v17, 0), (_DWORD)v5) )
            {
              if ( !under_debugger )
                interr(963);
              goto LABEL_136;
            }
          }
          else
          {
            if ( (unsigned __int8)v5 > 0xDu )
            {
              if ( (_BYTE)v5 == 14 )
              {
                v16 = *v9;
                if ( (((_BYTE)v16 - 4) & 0xFB) != 0 && (unsigned __int8)(v16 - 1) > 1u
                  || (LODWORD(v5) = 8 * v16, v9[1] > (int)v5) )
                {
                  if ( !under_debugger )
                    interr(966);
                  goto LABEL_136;
                }
                goto LABEL_57;
              }
LABEL_76:
              if ( (v8 & 2) != 0 && (v8 & 1) == 0 )
                goto LABEL_78;
LABEL_57:
              if ( (v8 & 0x4000) == 0 )
                goto LABEL_58;
              goto LABEL_65;
            }
            if ( (_BYTE)v5 != 10 )
            {
              if ( (_BYTE)v5 == 11 )
              {
                if ( *v9 > 0x3Fu
                  || (v14 = *((_DWORD *)v9 + 3), v14 < 0)
                  || (v15 = __CFADD__(*((_DWORD *)v9 + 2), v14), LODWORD(v5) = *((_DWORD *)v9 + 2) + v14, v15) )
                {
                  if ( !under_debugger )
                    interr(960);
                  goto LABEL_136;
                }
                goto LABEL_57;
              }
              goto LABEL_76;
            }
            LOBYTE(v5) = sub_525D80((__int64 *)v9, 1);
            if ( !(_BYTE)v5 )
            {
              if ( !under_debugger )
                interr(959);
              goto LABEL_136;
            }
          }
          v8 = *((_WORD *)v9 + 34);
          goto LABEL_76;
        }
LABEL_108:
        if ( !under_debugger )
          interr(962);
        goto LABEL_136;
      }
    }
    if ( !under_debugger )
      interr(947);
    goto LABEL_136;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( !under_debugger )
      interr(942);
    goto LABEL_136;
  }
  if ( (a2 & 0xF) > 9 )
  {
    if ( !under_debugger )
      interr(943);
    goto LABEL_136;
  }
  if ( (v3 & 0x4000) != 0 && *(_DWORD *)(v4 + 16) != -1 || v3 < 0 )
  {
    if ( !under_debugger )
      interr(3169);
    goto LABEL_136;
  }
  return (char)v5;
}

