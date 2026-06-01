unsigned __int64 __fastcall sub_3A7280(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-210h]
  unsigned __int64 v19; // [rsp+18h] [rbp-200h]
  char v20; // [rsp+26h] [rbp-1F2h] BYREF
  char v21; // [rsp+27h] [rbp-1F1h] BYREF
  __int64 v22; // [rsp+28h] [rbp-1F0h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-1E8h] BYREF
  char v24; // [rsp+41h] [rbp-1D7h]
  unsigned __int64 v25; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1C0h]
  char v27; // [rsp+61h] [rbp-1B7h]
  __int128 v28; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-198h]
  __int64 v30; // [rsp+88h] [rbp-190h]
  __int64 v31; // [rsp+90h] [rbp-188h]
  char v32; // [rsp+98h] [rbp-180h] BYREF
  _QWORD v33[8]; // [rsp+1D8h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  v17 = *(_QWORD *)(*a1 + 1536LL);
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
        if ( (unsigned __int8)sub_3E1CA0(a1, &v25, v23[0]) )
        {
          if ( a2 == v25 && !(unsigned __int8)sub_3E1E80(a1, &v25, v8) )
            sub_3A6250(*(_QWORD **)(*a1 + 1536LL), v8, a2, 0);
        }
      }
      if ( (((__int64 (*)(void))get_merge_state)() & 2) == 0 )
        sub_3A5F70(a1, v8, v8 + 1, 0x28u);
      if ( a3 )
      {
        if ( (unsigned __int8)(v24 - 16) <= 1u )
        {
          v9 = &v32;
          v29 = -1;
          v30 = 0;
          v31 = 0;
          v28 = -1;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 40;
            *((_WORD *)v9 - 19) = 0;
            *((_WORD *)v9 - 18) = 0;
            *((_DWORD *)v9 - 2) = 0;
            *((_WORD *)v9 - 17) = 0;
            *((_OWORD *)v9 - 2) = 0;
            *((_QWORD *)v9 - 2) = 0;
          }
          while ( v33 != (_QWORD *)v9 );
          if ( (unsigned int)decode_insn(&v28, v8, v33, 0, 0, v5, 0.0) && sub_3792E0(0x21u, &v28) != 1 )
          {
            if ( (unsigned __int8)xrefblk_t_first_from(&v25, v8, 5) )
            {
              do
              {
                if ( (unsigned __int8)(v27 - 16) <= 1u && v26 != a2 )
                {
                  v12 = sub_5CAA10(a1);
                  if ( v12 )
                  {
                    v11 = *(_QWORD *)(v12 + 16);
                    if ( (v11 & 0x200) == 0 && (v11 & 1) == 0 )
                      goto LABEL_7;
                  }
                  else if ( (unsigned __int8)is_spec_ea(v26) && (get_aflags(v26) & 0x400000) == 0 )
                  {
                    goto LABEL_7;
                  }
                }
              }
              while ( (unsigned __int8)xrefblk_t_next_from(&v25) );
            }
            v22 = sub_3C1F00(a1, v8);
            v13 = v22;
            if ( *(char *)(a1[2] + 10LL) < 0
              && (v20 = 1, v21 = 1, v16 = sub_3792E0(0x2Du, &v22, &v20, &v21), v13 = v22, v16 == 1)
              && v22 != -1
              && v20 )
            {
              v14 = v22;
              v22 = sub_3C1F00(a1, v22);
              v13 = v22;
            }
            else
            {
              v14 = v8;
            }
            v15 = is_public_name(v13);
            if ( (unsigned __int8)sub_3E2A00(a1, v14, v22, v15 ^ 1u) )
            {
              v19 = v22;
              if ( (((__int64 (*)(void))get_merge_state)() & 2) == 0 )
                sub_3A5F70(a1, v19, v19 + 1, 0xC8u);
            }
          }
        }
LABEL_7:
        if ( sub_3A53E0(v17, v8, (__int64 *)&v25) && (v6 = v25, v7 = v25, !sub_5CAA10(a1)) )
        {
          if ( (get_merge_state(a1, v6) & 2) == 0 )
            sub_3A5F70(a1, v7, v7 + 1, 0x1Eu);
        }
        else
        {
          sub_5CCEB0(a1, v8);
        }
      }
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v23) );
  }
  return v33[0] - __readfsqword(0x28u);
}
