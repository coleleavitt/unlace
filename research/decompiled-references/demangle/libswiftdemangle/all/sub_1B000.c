__int64 __fastcall sub_1B000(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  char v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // rdx
  int v7; // r12d
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  char *v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  _QWORD *v17; // r12
  unsigned __int64 v18; // rax
  volatile signed __int32 *v19; // rdi
  int v21; // edx
  int v22; // edx
  char v23; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v25; // [rsp+28h] [rbp-50h] BYREF
  char *v26[9]; // [rsp+30h] [rbp-48h] BYREF

  v26[1] = (char *)__readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_BYTE **)(a1 + 24);
    if ( *v3 == 100 )
    {
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      if ( v2 != 1 )
      {
        v4 = v3[1];
        v5 = v2 - 2;
        v6 = v3 + 2;
        if ( v4 == 95 )
        {
          LODWORD(v10) = 1;
        }
        else
        {
          LOBYTE(v7) = v4 - 48;
          *(_QWORD *)(a1 + 24) = v6;
          *(_QWORD *)(a1 + 32) = v5;
          if ( (unsigned __int8)v7 > 9u )
            return 0;
          v7 = (char)v7;
          if ( !v5 )
            return 0;
          while ( 1 )
          {
            v8 = *v6 - 48;
            if ( v8 > 9u )
              break;
            --v5;
            *(_QWORD *)(a1 + 24) = ++v6;
            v7 = (char)v8 + 10 * v7;
            *(_QWORD *)(a1 + 32) = v5;
            if ( !v5 )
              return 0;
          }
          v9 = *(_QWORD *)(a1 + 32);
          if ( !v9 || *v6 != 95 )
            return 0;
          v5 = v9 - 1;
          ++v6;
          LODWORD(v10) = v7 + 2;
        }
        *(_QWORD *)(a1 + 24) = v6;
        *(_QWORD *)(a1 + 32) = v5;
        if ( (unsigned __int8)sub_1AE90(a1, &v24) )
        {
          v11 = (unsigned int)v24;
          v10 = (unsigned int)v10;
          goto LABEL_15;
        }
      }
      return 0;
    }
    if ( *v3 == 120 )
    {
      v11 = 0;
      v10 = 0;
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v24 = 0;
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_1AE90(a1, &v24) )
    return 0;
  v10 = 0;
  v11 = (unsigned int)++v24;
LABEL_15:
  v25 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
  sub_237A0(v26, v10, v11);
  std::string::append((std::string *)&v25, v26[0], *((_QWORD *)v26[0] - 3));
  v12 = v26[0] - 24;
  if ( (_QWORD *)v26[0] - 3 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v26[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v22 = *((_DWORD *)v26[0] - 2);
      *((_DWORD *)v26[0] - 2) = v22 - 1;
    }
    if ( v22 <= 0 )
      std::string::_Rep::_M_destroy(v12, &v23);
  }
  v13 = sub_C400(*(_QWORD **)(a1 + 40), 35);
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v13;
  v16 = sub_C480(v14, 99, v10);
  sub_C080(v15, v16, v14);
  v17 = *(_QWORD **)(a1 + 40);
  v18 = sub_C480(v17, 99, v11);
  sub_C080(v15, v18, v17);
  v19 = v25 - 6;
  if ( v25 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v21 = _InterlockedExchangeAdd(v25 - 2, 0xFFFFFFFF);
    }
    else
    {
      v21 = *((_DWORD *)v25 - 2);
      *((_DWORD *)v25 - 2) = v21 - 1;
    }
    if ( v21 <= 0 )
      std::string::_Rep::_M_destroy(v19, v26);
  }
  return v15;
}
