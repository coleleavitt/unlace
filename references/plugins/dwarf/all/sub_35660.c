__int64 __fastcall sub_35660(__int64 a1)
{
  int v1; // ecx
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int8 v5; // di
  __int64 v6; // r15
  __int64 v7; // rbp
  const char **v8; // r12
  const char *v9; // rdi
  char **v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbp
  char **v14; // rbp
  __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  const char *v17; // rdi
  __int64 *v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rsi
  int v25; // eax
  _BYTE *v26; // rcx
  int v27; // edx
  const void *v28; // r13
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 136);
  v33 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(v3 + 144);
    if ( (unsigned __int8)sub_2C6A0(v3, *(_QWORD *)(a1 + 104), 0x3Eu, &v31) )
    {
      v5 = v31;
      *(_BYTE *)(a1 + 144) = v31;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v4 + 88) + 560LL))(v5, a1 + 152);
      if ( *(_DWORD *)(a1 + 136) )
      {
        v6 = *(_QWORD *)(a1 + 24);
        v7 = 0;
        v8 = (const char **)&off_CA740;
        while ( 1 )
        {
          v9 = src;
          if ( v6 )
            v9 = *(const char **)(a1 + 16);
          if ( !strcmp(v9, *v8) )
            break;
          ++v7;
          v8 += 4;
          if ( v7 == 36 )
            goto LABEL_10;
        }
        v10 = &(&off_CA740)[4 * v7];
        if ( *((_DWORD *)v10 + 7) )
        {
          v32 = 0;
          getinf_buf(98, &v32, 16);
          switch ( *((_DWORD *)v10 + 7) )
          {
            case 1:
              v25 = BYTE3(v32);
              v26 = (char *)&v32 + 3;
              break;
            case 2:
              v25 = BYTE6(v32);
              v26 = (char *)&v32 + 6;
              break;
            case 3:
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 152LL) + 124LL) == 8 )
                goto LABEL_34;
              v25 = BYTE2(v32);
              v26 = (char *)&v32 + 2;
              break;
            case 4:
LABEL_34:
              v25 = BYTE7(v32);
              v26 = (char *)&v32 + 7;
              break;
            case 5:
              v25 = BYTE8(v32);
              v26 = (char *)&v32 + 8;
              break;
            default:
              if ( !under_debugger )
                interr(30744);
              BUG();
          }
          v27 = *(_DWORD *)(a1 + 136);
          if ( v25 != v27 )
          {
            *v26 = v27;
            set_compiler(&v32, 1, 0);
          }
        }
      }
LABEL_10:
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = &unk_CA748;
        v13 = 0;
        while ( *v12 != v11 )
        {
          ++v13;
          v12 += 4;
          if ( v13 == 36 )
            goto LABEL_15;
        }
        *(_QWORD *)&v32 = 0;
        sub_348C0(a1, (__int64 *)&v32);
        v14 = &(&off_CA740)[4 * v13];
        v15 = *((unsigned __int8 *)v14 + 24);
        if ( (_BYTE)v15 )
        {
          create_tinfo(a1 + 8, v15, 7, 0);
          if ( *(_DWORD *)(a1 + 136) == get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0) )
          {
            *(_QWORD *)&v32 = v14[2];
            sub_349E0(a1, (__int64 *)&v32);
            return 3;
          }
        }
LABEL_15:
        if ( *(_BYTE *)(a1 + 144) == 3 )
        {
          validate_name(a1 + 40, 8, 1);
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 24);
          if ( v16 > 1 )
          {
            v28 = *(const void **)(a1 + 16);
            v29 = *(void **)(a1 + 40);
            if ( *(_QWORD *)(a1 + 56) < v16 )
            {
              v30 = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24), 1);
              *(_QWORD *)(a1 + 40) = v30;
              v29 = (void *)v30;
            }
            *(_QWORD *)(a1 + 48) = v16;
            memmove(v29, v28, v16 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 40) + v16 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 48) = 0;
          }
        }
        sub_34B90(a1);
        v17 = src;
        if ( *(_QWORD *)(a1 + 48) )
          v17 = *(const char **)(a1 + 40);
        if ( !(unsigned __int8)is_valid_typename(v17) )
        {
          *(_QWORD *)&v32 = 0;
          sub_348C0(a1, (__int64 *)&v32);
        }
      }
      return 0;
    }
    else
    {
      if ( (debug & 0x400000) != 0 )
      {
        v19 = sub_34340(a1);
        v24 = src;
        if ( v19[1] )
          v24 = (const char *)*v19;
        sub_88B80(
          (unsigned int)"Error basic type DIE %s retrieving encoding attribute\n",
          (_DWORD)v24,
          v20,
          v21,
          v22,
          v23);
      }
      return 5;
    }
  }
  else
  {
    create_tinfo(a1 + 8, 1, 7, 0);
    *(_QWORD *)&v32 = 0x4E7B30A9EA4DB41LL;
    sub_349E0(a1, (__int64 *)&v32);
    *(_QWORD *)&v32 = 0;
    sub_348C0(a1, (__int64 *)&v32);
    return 3;
  }
}
