/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92C60
// Address: 0x0000000000092C60

//----- (0000000000092C60) ----------------------------------------------------
__int64 __fastcall sub_92C60(__int64 a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  char **v4; // rbp
  _BYTE *v5; // rax
  char **v6; // r14
  char *v7; // r12
  __int64 v8; // rcx
  char *v9; // rsi
  int v10; // eax
  bool v11; // dl
  __int64 v12; // rax
  unsigned __int8 v13; // r13
  const char *v14; // r13
  const char *v16; // r14
  int v17; // ebx
  int v18; // eax
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rbx
  char *v22; // r8
  void *v23; // rax
  void *v24; // rcx
  char *v25; // rdx
  _BYTE *v26; // rax
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int8 v33; // [rsp+4h] [rbp-94h]
  void *v34; // [rsp+8h] [rbp-90h] BYREF
  __int128 v35; // [rsp+10h] [rbp-88h]
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  char *v37; // [rsp+30h] [rbp-68h]
  char *s[11]; // [rsp+40h] [rbp-58h] BYREF

  s[4] = (char *)__readfsqword(0x28u);
  sub_AB1F0((__int64)ptr, 3);
  v2 = pack_dd(s, (unsigned __int64)s + 5, 0x1Fu);
  sub_56350((__int64)ptr, s, v2 - (_BYTE *)s);
  v3 = pack_dd(s, (unsigned __int64)s + 5, 1u);
  sub_56350((__int64)ptr, s, v3 - (_BYTE *)s);
  v4 = s;
  v5 = pack_dd(s, (unsigned __int64)s + 5, 8u);
  sub_56350((__int64)ptr, s, v5 - (_BYTE *)s);
  v6 = (char **)(a1 + 192);
  v7 = (char *)sub_A4E70(a1 + 192, 3, (__int64 *)ptr, 0);
  if ( v7 )
  {
    v8 = *(unsigned int *)v7;
    s[0] = v7 + 5;
    v9 = &v7[v8 + 5];
    s[1] = v9;
    v10 = unpack_dd((unsigned __int64 *)s, (unsigned __int64)v9);
    v11 = v10 != 0;
    if ( !v10 )
    {
      v13 = 0;
      v9 = "[%d] Incompatible IDA version\n";
      sub_932B0(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
      LODWORD(v4) = 0;
      goto LABEL_25;
    }
    v12 = *(_QWORD *)(a1 + 448);
    LOBYTE(v4) = 1;
    if ( *(_QWORD *)(v12 + 120) < 2u )
    {
      v13 = 1;
      goto LABEL_25;
    }
    v33 = v11;
    v14 = s[0];
    v9 = s[0];
    while ( v9 < s[1] )
    {
      if ( *v9++ == 0 )
      {
        s[0] = v9;
        goto LABEL_12;
      }
    }
    v14 = nullptr;
LABEL_12:
    v4 = (char **)(a1 + 192);
    v16 = *(const char **)(v12 + 112);
    if ( !v14 )
      goto LABEL_23;
    v17 = strlen(v14);
    v18 = strlen(v16);
    v19 = v17 ^ v18;
    if ( v17 > 0 && v18 )
    {
      v20 = (unsigned int)v17;
      v21 = v17 & 1;
      if ( v20 == 1 )
      {
        v9 = nullptr;
        if ( !v21 )
          goto LABEL_22;
LABEL_21:
        v19 |= (char)(v16[(int)v9 % v18] ^ v9[(_QWORD)v14]);
        goto LABEL_22;
      }
      v22 = (char *)(v20 - v21);
      v9 = nullptr;
      do
      {
        v19 |= (char)(v16[(int)v9 % v18] ^ v9[(_QWORD)v14]) | (char)(v16[((int)v9 + 1) % v18] ^ v9[(_QWORD)v14 + 1]);
        v9 += 2;
      }
      while ( v22 != v9 );
      if ( v21 )
        goto LABEL_21;
    }
LABEL_22:
    if ( !v19 )
    {
      v6 = v4;
      v13 = v33;
      LOBYTE(v4) = 1;
LABEL_25:
      *(_BYTE *)(a1 + 261) = v13;
      qfree(v7);
      if ( (_BYTE)v4 )
      {
        sub_AB1F0((__int64)&v34, 0);
        v23 = v34;
        v24 = (void *)v35;
        s[0] = (char *)v34;
        v34 = nullptr;
        v25 = *((char **)&v35 + 1);
        *(_OWORD *)&s[1] = v35;
        v35 = 0;
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          *(_OWORD *)ptr = *(_OWORD *)s;
          v37 = s[2];
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
            v34 = nullptr;
            *((_QWORD *)&v35 + 1) = 0;
          }
        }
        else
        {
          ptr[0] = v23;
          ptr[1] = v24;
          v37 = v25;
        }
        v4 = s;
        v26 = pack_dd(s, (unsigned __int64)s + 5, v13);
        sub_56350((__int64)ptr, s, v26 - (_BYTE *)s);
        v9 = (char *)ptr;
        sub_AA6D0((__int64)v6, (__int64 *)ptr);
        *(_DWORD *)(a1 + 256) = -1;
        *(_BYTE *)(a1 + 261) = 1;
        if ( v13 )
        {
          memset(s, 0, 24);
          v9 = (_BYTE *)(&dword_0 + 3);
          v27 = (void *)(*((__int64 (__fastcall **)(char **, __int64, char **))*v6 + 2))(v6, 3, s);
          if ( v27 )
            qfree(v27);
          if ( s[0] )
          {
            s[1] = nullptr;
            qfree(s[0]);
            s[0] = nullptr;
            s[2] = nullptr;
          }
        }
      }
      goto LABEL_35;
    }
LABEL_23:
    v13 = 0;
    v9 = "[%d] Bad password\n";
    sub_932B0(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
    v6 = v4;
    LOBYTE(v4) = 1;
    goto LABEL_25;
  }
  v9 = "[%d] Could not establish the connection\n";
  sub_932B0(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
LABEL_35:
  *(_BYTE *)(a1 + 200) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) )
    goto LABEL_44;
  v9 = "[%d] Broken connection (mode=%d)\n";
  sub_932B0(a1, "[%d] Broken connection (mode=%d)\n", *(_DWORD *)(a1 + 168), *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v30 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v30 == 2 )
  {
    LODWORD(v4) = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL);
    v9 = "[%d] Debugged process PID: %d\n";
    sub_932B0(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), (_DWORD)v4);
    if ( (int)v4 > 0 )
    {
      v9 = "[%d] Killing debugged process %d\n";
      sub_932B0(
        a1,
        "[%d] Killing debugged process %d\n",
        *(_DWORD *)(a1 + 168),
        *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL));
      v31 = sub_93370(a1);
      v29 = v31;
      if ( v31 )
      {
        v9 = "[%d] Failed to kill process after %d seconds. Giving up\n";
        sub_932B0(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), v31);
      }
    }
    goto LABEL_44;
  }
  if ( v30 != 1 )
  {
LABEL_44:
    (*(void (__fastcall **)(_QWORD, char *, __int64, __int64))(**(_QWORD **)(a1 + 440) + 112LL))(
      *(_QWORD *)(a1 + 440),
      v9,
      v28,
      v29);
    LOBYTE(v4) = 1;
    sub_A7D60(a1);
    goto LABEL_45;
  }
  sub_A7D60(a1);
  sub_932B0(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( (_BYTE)qword_155940 )
  {
    LODWORD(v4) = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 504LL))(*(_QWORD *)(a1 + 440)) )
      sub_926F0(v6, "Error preparing debugger server to handle a broken connection\n");
  }
  else
  {
    LODWORD(v4) = 0;
  }
LABEL_45:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v37 = nullptr;
  }
  return (unsigned int)v4;
}
// 92DEE: conditional instruction was optimized away because rcx.8>=2u
// 9318F: variable 'v28' is possibly undefined
// 9318F: variable 'v29' is possibly undefined
// 0: using guessed type int dword_0;
// 155940: using guessed type __int64 qword_155940;
