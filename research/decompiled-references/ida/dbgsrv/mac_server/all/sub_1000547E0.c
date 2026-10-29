/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000547E0
// Address: 0x00000001000547E0

//----- (00000001000547E0) ----------------------------------------------------
__int64 __fastcall sub_1000547E0(__int64 a1)
{
  int v1; // r14d
  char *v3; // r15
  __int64 v4; // rcx
  int v5; // r12d
  __int64 v6; // rax
  const char *v7; // r13
  char *v8; // rdx
  char *v9; // rsi
  const char *v11; // r14
  int v12; // eax
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rdx
  char *v21; // r12
  char *v22; // r15
  void *v23; // r13
  void *v24; // rax
  int v25; // eax
  int v26; // eax
  int v28; // [rsp+8h] [rbp-78h]
  _BYTE *v29; // [rsp+10h] [rbp-70h]
  char *__s[2]; // [rsp+20h] [rbp-60h] BYREF
  void *v31; // [rsp+30h] [rbp-50h]
  __va_list_tag v32; // [rsp+38h] [rbp-48h] BYREF

  sub_10006B790((__int64)&v32, 3);
  sub_100032FE0((void **)&v32, 0x1Fu);
  sub_100032FE0((void **)&v32, 3u);
  sub_100032FE0((void **)&v32, 8u);
  v29 = (_BYTE *)(a1 + 192);
  v3 = (char *)sub_1000658D0(a1 + 192, 3, &v32, 0);
  if ( v3 )
  {
    v4 = *(unsigned int *)v3;
    __s[0] = v3 + 5;
    __s[1] = &v3[v4 + 5];
    v5 = unpack_dd((unsigned __int64 *)__s, (unsigned __int64)__s[1]);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 448);
      LOBYTE(v1) = 1;
      if ( *(_QWORD *)(v6 + 120) >= 2u )
      {
        v7 = __s[0];
        v8 = __s[0];
        do
        {
          if ( v8 >= __s[1] )
            goto LABEL_18;
          v9 = v8 + 1;
        }
        while ( *v8++ != 0 );
        __s[0] = v9;
        if ( !v7 )
          goto LABEL_18;
        v11 = *(const char **)(v6 + 112);
        v28 = strlen(v7);
        v12 = strlen(v11);
        v13 = v28 ^ v12;
        if ( v12 != 0 && v28 > 0 )
        {
          v14 = v28 & 0x7FFFFFFF;
          if ( v14 == 1 )
          {
            v15 = 0;
          }
          else
          {
            v16 = v14 - (v28 & 1);
            v15 = 0;
            do
            {
              v17 = (unsigned int)((int)v15 >> 31);
              LODWORD(v17) = (int)v15 % v12;
              v18 = v13 | (char)(v11[v17] ^ v7[v15]);
              v19 = (unsigned int)(((int)v15 + 1) >> 31);
              LODWORD(v19) = ((int)v15 + 1) % v12;
              v13 = v18 | (char)(v11[v19] ^ v7[v15 + 1]);
              v15 += 2;
            }
            while ( v15 != v16 );
          }
          if ( (v28 & 1) != 0 )
          {
            v20 = (unsigned int)((int)v15 >> 31);
            LODWORD(v20) = (int)v15 % v12;
            v13 |= (char)(v11[v20] ^ v7[v15]);
          }
        }
        v1 = v5 != 0;
        if ( v13 )
        {
LABEL_18:
          v1 = 0;
          sub_100054CC0(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
        }
      }
    }
    else
    {
      v1 = 0;
      sub_100054CC0(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
    }
    *(_BYTE *)(a1 + 261) = v1;
    qfree(v3);
    if ( v5 )
    {
      sub_10006B790((__int64)__s, 0);
      v21 = __s[0];
      v22 = __s[1];
      *(_OWORD *)__s = 0;
      v23 = v31;
      v31 = nullptr;
      if ( *(_QWORD *)&v32.gp_offset )
      {
        v32.overflow_arg_area = nullptr;
        qfree(*(void **)&v32.gp_offset);
        *(_QWORD *)&v32.gp_offset = v21;
        v32.overflow_arg_area = v22;
        v32.reg_save_area = v23;
        if ( __s[0] )
        {
          __s[1] = nullptr;
          qfree(__s[0]);
        }
      }
      else
      {
        *(_QWORD *)&v32.gp_offset = v21;
        v32.overflow_arg_area = v22;
        v32.reg_save_area = v23;
      }
      sub_100032FE0((void **)&v32, (unsigned __int8)v1);
      sub_10006B030((__int64)v29, (__int64 *)&v32);
      *(_DWORD *)(a1 + 256) = -1;
      *(_BYTE *)(a1 + 261) = 1;
      if ( (_BYTE)v1 )
      {
        *(_OWORD *)__s = 0;
        v31 = nullptr;
        v24 = (void *)(*(__int64 (__fastcall **)(_BYTE *, __int64, char **))(*(_QWORD *)v29 + 16LL))(v29, 3, __s);
        if ( v24 )
          qfree(v24);
        if ( __s[0] )
        {
          __s[1] = nullptr;
          qfree(__s[0]);
        }
      }
    }
  }
  else
  {
    sub_100054CC0(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
  }
  *(_BYTE *)(a1 + 200) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) )
    goto LABEL_38;
  sub_100054CC0(
    a1,
    "[%d] Broken connection (mode=%d)\n",
    *(_DWORD *)(a1 + 168),
    *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v25 == 2 )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL);
    sub_100054CC0(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), v1);
    if ( v1 > 0 )
    {
      sub_100054CC0(
        a1,
        "[%d] Killing debugged process %d\n",
        *(_DWORD *)(a1 + 168),
        *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL));
      v26 = sub_100054DD0(a1);
      if ( v26 )
        sub_100054CC0(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), v26);
    }
    goto LABEL_38;
  }
  if ( v25 != 1 )
  {
LABEL_38:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    LOBYTE(v1) = 1;
    sub_100069400(a1);
    goto LABEL_39;
  }
  sub_100069400(a1);
  sub_100054CC0(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( (_BYTE)qword_1000AD110 == 1 )
  {
    v1 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 504LL))(*(_QWORD *)(a1 + 440)) )
      sub_1000542C0(v29, "Error preparing debugger server to handle a broken connection\n");
  }
  else
  {
    v1 = 0;
  }
LABEL_39:
  if ( *(_QWORD *)&v32.gp_offset )
  {
    v32.overflow_arg_area = nullptr;
    qfree(*(void **)&v32.gp_offset);
  }
  return (unsigned int)v1;
}
// 100054C49: variable 'v1' is possibly undefined
// 1000AD110: using guessed type __int64 qword_1000AD110;
