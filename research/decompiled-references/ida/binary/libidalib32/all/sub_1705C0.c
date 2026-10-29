void __fastcall sub_1705C0(
        char **a1,
        int a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(_QWORD, __int64),
        __int64 a5,
        char a6)
{
  unsigned int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // r15d
  char *v11; // rcx
  char *v12; // rsi
  char *v13; // rdx
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // rbp
  __int64 v17; // rax
  __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  unsigned int v25; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v26; // [rsp+40h] [rbp-48h]
  char v27; // [rsp+45h] [rbp-43h]

  v8 = getinf();
  get_eah();
  v9 = ~a2;
  if ( ~a2 > v8 )
    v9 = v8;
  v22 = v9;
  if ( v9 )
  {
    get_flags_ex();
    v21 = 0;
    while ( (a3 & 2) != 0 )
    {
      v10 = v25;
      if ( (unsigned __int8)xrefblk_t_first_to() )
        goto LABEL_7;
LABEL_19:
      if ( ++v21 == v22 || (get_flags_ex() & 0x600) != 0x200 )
        goto LABEL_21;
    }
    v10 = v26;
    if ( !(unsigned __int8)xrefblk_t_first_from() )
      goto LABEL_19;
LABEL_7:
    while ( !a4 )
    {
      while ( 1 )
      {
LABEL_9:
        v11 = a1[1];
        v12 = *a1;
        v13 = v11 + 1;
        if ( a1[2] < v11 + 1 )
        {
          v15 = qvector_reserve();
          v11 = a1[1];
          *a1 = (char *)v15;
          v12 = (char *)v15;
          v13 = v11 + 1;
        }
        v14 = &v12[8 * (_QWORD)v11];
        a1[1] = v13;
        *(_DWORD *)v14 = v10;
        v14[4] = 0;
        v14[5] = v27;
LABEL_12:
        if ( (a3 & 2) == 0 )
          break;
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          goto LABEL_19;
        v10 = v25;
        if ( a4 )
          goto LABEL_8;
      }
      if ( !(unsigned __int8)xrefblk_t_next_from() )
        goto LABEL_19;
      v10 = v26;
    }
LABEL_8:
    if ( !a4(v10, a5) )
      goto LABEL_12;
    goto LABEL_9;
  }
LABEL_21:
  if ( a6 )
  {
    v16 = *a1;
    v17 = 8LL * (_QWORD)a1[1];
    v18 = (__int64 *)&(*a1)[v17];
    if ( *a1 != (char *)v18 )
    {
      v19 = v17 >> 3;
      v20 = -2;
      if ( v19 )
      {
        _BitScanReverse64(&v19, v19);
        v20 = 2LL * (int)v19;
      }
      sub_170300((__int64)v16, v18, v20);
      sub_16FF40(v16, (char *)v18);
    }
  }
}

