unsigned __int64 __fastcall sub_3A2A80(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  char *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // esi
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-148h]
  unsigned int v19; // [rsp+Ch] [rbp-13Ch]
  char v20; // [rsp+12h] [rbp-136h] BYREF
  char v21; // [rsp+13h] [rbp-135h] BYREF
  unsigned int v22; // [rsp+14h] [rbp-134h] BYREF
  _DWORD v23[2]; // [rsp+18h] [rbp-130h] BYREF
  char v24; // [rsp+21h] [rbp-127h]
  unsigned int v25; // [rsp+24h] [rbp-124h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-120h]
  char v27; // [rsp+2Dh] [rbp-11Bh]
  _QWORD v28[3]; // [rsp+30h] [rbp-118h] BYREF
  char v29; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v30[8]; // [rsp+108h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  v17 = *(_QWORD *)(*a1 + 1344LL);
  v4 = get_aflags(a2) & 0x800;
  if ( (unsigned __int8)xrefblk_t_first_to(v23, a2, 5) )
  {
    do
    {
      v8 = v23[0];
      if ( (_DWORD)v4 )
      {
        LOBYTE(v26) = 0;
        v25 = -1;
        if ( (unsigned __int8)sub_3DC190(a1, &v25, v23[0]) )
        {
          if ( a2 == v25 && !(unsigned __int8)sub_3DC350(a1, &v25, v8) )
            sub_3A1B40(*(_QWORD **)(*a1 + 1344LL), v8, a2, 0);
        }
      }
      if ( (((__int64 (*)(void))get_merge_state)() & 2) == 0 && v8 != -1 )
        sub_3A1890(a1, v8, v8 + 1, 0x28u);
      if ( a3 )
      {
        if ( (unsigned __int8)(v24 - 16) <= 1u )
        {
          v28[2] = 0;
          v28[0] = -1;
          v28[1] = 0xFFFFFFFFLL;
          v9 = &v29;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 24;
            *((_WORD *)v9 - 11) = 0;
            *((_WORD *)v9 - 10) = 0;
            *((_DWORD *)v9 - 1) = 0;
            *((_WORD *)v9 - 9) = 0;
            *((_QWORD *)v9 - 2) = 0;
            *((_DWORD *)v9 - 2) = 0;
          }
          while ( v30 != (_QWORD *)v9 );
          if ( (unsigned int)decode_insn(v28, v8, v30, 0, 0, v5) && sub_375980(0x21u, v28) != 1 )
          {
            if ( (unsigned __int8)xrefblk_t_first_from(&v25, v8, 5) )
            {
              do
              {
                if ( (unsigned __int8)(v27 - 16) <= 1u && v26 != a2 )
                {
                  v12 = sub_5AFCE0(a1);
                  if ( v12 )
                  {
                    v11 = *(_QWORD *)(v12 + 8);
                    if ( (v11 & 0x200) == 0 && (v11 & 1) == 0 )
                      goto LABEL_8;
                  }
                  else if ( (unsigned __int8)is_spec_ea(v26) && (get_aflags(v26) & 0x400000) == 0 )
                  {
                    goto LABEL_8;
                  }
                }
              }
              while ( (unsigned __int8)xrefblk_t_next_from(&v25) );
            }
            v22 = sub_3BCF60(a1, v8);
            v13 = v22;
            if ( *(char *)(a1[2] + 10LL) < 0
              && (v20 = 1, v21 = 1, v16 = sub_375980(0x2Du, &v22, &v20, &v21), v13 = v22, v16 == 1)
              && v22 != -1
              && v20 )
            {
              v14 = v22;
              v22 = sub_3BCF60(a1, v22);
              v13 = v22;
            }
            else
            {
              v14 = v8;
            }
            v15 = is_public_name(v13);
            if ( (unsigned __int8)sub_3DCE60(a1, v14, v22, v15 ^ 1u) )
            {
              v19 = v22;
              if ( (((__int64 (*)(void))get_merge_state)() & 2) == 0 && v19 != -1 )
                sub_3A1890(a1, v19, v19 + 1, 0xC8u);
            }
          }
        }
LABEL_8:
        if ( sub_3A0D20(v17, v8, (int *)&v25) && (v6 = v25, v7 = v25, !sub_5AFCE0(a1)) )
        {
          if ( (get_merge_state(a1, v6) & 2) == 0 && v7 != -1 )
            sub_3A1890(a1, v7, v7 + 1, 0x1Eu);
        }
        else
        {
          sub_5B2020(a1, v8);
        }
      }
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v23) );
  }
  return v30[0] - __readfsqword(0x28u);
}

