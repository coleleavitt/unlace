__int64 __fastcall sub_25F010(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD **v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // r12
  int tinfo_size; // ebx
  int v20; // eax
  int v21; // ebx
  unsigned __int64 v22; // rdx
  __int64 tinfo_property; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 88);
  v27[1] = (_QWORD *)__readfsqword(0x28u);
  v4 = a2;
  if ( v3 == -1 )
  {
    if ( !sub_259850(a2, *(_QWORD *)(a1 + 64), 0) )
      goto LABEL_6;
  }
  else if ( *(_DWORD *)(a2 + 8) == 65 && v3 == *(_DWORD *)(a2 + 32) )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    v25 = 0;
    v9 = v7 - 1;
    v10 = *(_QWORD *)(v8 + 8LL * ((int)v7 - 1));
    v11 = *(_DWORD *)(v10 + 8);
    if ( *(_BYTE *)(a1 + 93) )
    {
      if ( v11 != 48 )
      {
        if ( v11 != 35 )
        {
          v13 = 0;
          goto LABEL_11;
        }
        v12 = 1;
        goto LABEL_27;
      }
      copy_tinfo_t();
      tinfo_property = (int)get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xA )
        goto LABEL_19;
      v12 = tinfo_property;
      if ( tinfo_property == -1 )
        goto LABEL_19;
      v9 = v7 - 2;
      v4 = v10;
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v7 - 2)) + 8LL);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v7 - 2));
    }
    else
    {
      v12 = 1;
    }
    v13 = 0;
    if ( v11 != 35 )
    {
LABEL_9:
      if ( v11 == 48 )
      {
        do
        {
          copy_tinfo_t();
          --v9;
        }
        while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v9) + 8LL) == 48 );
      }
LABEL_11:
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        v5 = 1;
        if ( !*(_BYTE *)(a1 + 92) )
        {
LABEL_20:
          clear_tinfo_t();
          return v5;
        }
        v27[0] = (_QWORD *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        v14 = (_QWORD **)&word_2;
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v27[0] = (_QWORD *)(&dword_30 + 2);
          v14 = v27;
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v15 = *(_QWORD **)(a1 + 72);
        if ( v15 )
        {
          v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v16 )
          {
LABEL_34:
            v21 = sub_32E340(v16 + 32, v14);
            if ( v21 > (int)sub_32E340(&v25, v14) )
            {
              copy_tinfo_t();
              v5 = 0;
              goto LABEL_20;
            }
            goto LABEL_19;
          }
          while ( (*(_BYTE *)v16 & 2) == 0 )
          {
            v22 = *(_QWORD *)(v16 + 24);
            if ( v13 >= v22 )
            {
              if ( v22 >= v13 )
              {
                if ( v15 == (_QWORD *)v16 )
                  break;
                goto LABEL_34;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            else
            {
              v16 = *(_QWORD *)(v16 + 8);
            }
          }
        }
        v26 = v13;
        v27[0] = &v26;
        sub_25EEA0((__m128i *)(a1 + 72), &v26, v27);
        copy_tinfo_t();
      }
LABEL_19:
      v5 = 0;
      goto LABEL_20;
    }
LABEL_27:
    v17 = *(_QWORD *)(v10 + 24);
    if ( v17 == v4 )
      v17 = *(_QWORD *)(v10 + 32);
    if ( *(_DWORD *)(v17 + 8) != 61 )
      goto LABEL_19;
    v24 = v12;
    v18 = *(_QWORD **)(v17 + 24);
    tinfo_size = get_tinfo_size();
    if ( tinfo_size > 16 )
      tinfo_size = 16;
    v20 = get_tinfo_property();
    --v9;
    v13 = sub_32ABC0(*v18, (unsigned int)tinfo_size, v20 == 1) * v24;
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v9) + 8LL);
    goto LABEL_9;
  }
  return 0;
}
