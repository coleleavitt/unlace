void __fastcall sub_D2340(_DWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  _QWORD *v13; // r8
  unsigned __int64 *v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  _QWORD *v17; // rax
  unsigned int v18; // esi
  char v19; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp-20h] BYREF

  v20 = __readfsqword(0x28u);
  if ( !a2 )
    return;
  if ( byte_2515A0 )
  {
    if ( !*(_DWORD *)(get_ph() + 4) && a1[30] != -1 )
    {
      if ( *(_DWORD *)a2 )
      {
        v7 = (_DWORD *)qword_251410;
        v8 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
        if ( (_DWORD *)qword_251410 != v8 )
        {
          while ( *(_DWORD *)a2 != *v7 )
          {
            v7 += 58;
            if ( v8 == v7 )
              goto LABEL_28;
          }
          if ( v7 )
          {
            v9 = sub_CE480((__int64)v7, -1);
            if ( v9 )
            {
              v10 = dword_244118;
              if ( dword_244118 == -1 )
                goto LABEL_36;
              v11 = *(_QWORD *)(v9 + 32LL * dword_244118 + 8);
              v12 = v11;
              if ( dbg )
              {
                if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
                {
                  v13 = qword_2515B0;
                  if ( qword_2515B0 )
                  {
                    *(_DWORD *)qword_2515B0 = v11;
                    v13[1] = v9;
                    *((_DWORD *)v13 + 4) = v10;
                    if ( (unsigned int)sub_CC780((__int64)v13, 11) != 1 )
                      goto LABEL_36;
                    v12 = *(_DWORD *)qword_2515B0;
                  }
                }
              }
              if ( v12 >= a1[30] )
                goto LABEL_36;
            }
          }
        }
      }
    }
LABEL_28:
    sub_D0730(0);
    v14 = (unsigned __int64 *)&v19;
    do
    {
      *(_WORD *)v14 = 0;
      v14 += 3;
      *((_WORD *)v14 - 11) = 0;
      *((_WORD *)v14 - 10) = 0;
      *((_DWORD *)v14 - 1) = 0;
      *((_WORD *)v14 - 9) = 0;
      *(v14 - 2) = 0;
      *((_DWORD *)v14 - 2) = 0;
    }
    while ( v14 != &v20 );
    v15 = *(_QWORD *)(a2 + 40);
    if ( v15 )
    {
      v16 = dword_24411C;
      if ( dbg )
      {
        if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
        {
          v17 = qword_2515B0;
          if ( qword_2515B0 )
          {
            *(_DWORD *)qword_2515B0 = *(_QWORD *)(v15 + 32LL * dword_24411C + 8);
            v17[1] = v15;
            *((_DWORD *)v17 + 4) = v16;
            sub_CC780((__int64)v17, 11);
          }
        }
      }
    }
    if ( (unsigned int)decode_insn() )
    {
      if ( (unsigned __int8)is_ret_insn() )
      {
        v18 = a1[29] - 1;
        if ( v18 <= 0xFFFFFFFD )
        {
          if ( (unsigned int)sub_CCBE0(a2, v18, 2, nullptr, 0, 1) )
            goto LABEL_3;
        }
      }
    }
LABEL_36:
    byte_2515A0 = 0;
  }
LABEL_3:
  v4 = *(_QWORD **)(a2 + 224);
  if ( v4 )
  {
    v5 = nullptr;
    while ( 1 )
    {
      v6 = v4[1];
      if ( a1 == (_DWORD *)v4 )
        break;
      v5 = v4;
      if ( !v6 )
        return;
      v4 = (_QWORD *)v4[1];
    }
    if ( v5 )
      v5[1] = v6;
    else
      *(_QWORD *)(a2 + 224) = v6;
    sub_C6EF0(a1);
  }
}

