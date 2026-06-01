/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055D40
// Address: 0x0000000140055D40

//----- (0000000140055D40) ----------------------------------------------------
bool __fastcall sub_140055D40(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  const char *v5; // r15
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // r14
  size_t v9; // rax
  size_t v10; // rax
  void **v11; // rbx
  void ***v12; // rax
  void ***v13; // r14
  volatile signed __int32 *v14; // rbx
  DWORD v16; // r12d
  __int64 v17; // r15
  unsigned __int8 (__fastcall *v18)(__int64); // r14
  int v19; // eax
  void *v20; // rax
  bool v21; // r12
  __int64 v22; // r14
  unsigned int v23; // ebx
  char *v24; // rax
  int v25; // ebx
  const char *v26; // r14
  const char *v27; // r8
  __int64 v28; // r8
  unsigned __int8 *v29; // rdx
  const char *v30; // r8
  __int64 v31; // rbx
  const char *v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // eax
  int v37; // ecx
  const char *v38; // rdx
  int v39; // ecx
  __int8 v40[8]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v41; // [rsp+48h] [rbp-B8h] BYREF
  void *v42; // [rsp+50h] [rbp-B0h] BYREF
  void *v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  void *Block; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  unsigned __int64 v49; // [rsp+88h] [rbp-78h]
  char *v50; // [rsp+90h] [rbp-70h]
  _OWORD *v51; // [rsp+98h] [rbp-68h]
  _BYTE v52[48]; // [rsp+A0h] [rbp-60h] BYREF
  struct __crt_locale_pointers Str[3]; // [rsp+D0h] [rbp-30h] BYREF
  char v54[80]; // [rsp+100h] [rbp+0h] BYREF
  __m128i v55; // [rsp+150h] [rbp+50h] BYREF
  char v56; // [rsp+54Fh] [rbp+44Fh]

  if ( !sub_140056460(a1) )
    return 0;
  v49 = *(_QWORD *)(a2 + 96);
  v4 = 88;
  if ( v49 <= 1 )
    v4 = 8;
  memset(&v52[12], 0, 36);
  *(_QWORD *)v52 = 2;
  *(_DWORD *)&v52[8] = 1;
  sub_14005B0A0(Str, 33, "%d", *(unsigned __int16 *)(v4 + a2 + 24));
  if ( *(_QWORD *)(v4 + a2 + 8) )
    v5 = *(const char **)(v4 + a2);
  else
    v5 = Str1;
  v6 = operator new(0x90u);
  v7 = v6;
  v42 = v6;
  if ( v6 )
  {
    *v6 = 0;
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = off_140099B28;
    v8 = v6 + 1;
    v41 = v6 + 1;
    *((_QWORD *)v6 + 2) = 0;
    v50 = (char *)v6 + 40;
    *((_QWORD *)v6 + 5) = 0;
    *((_QWORD *)v6 + 6) = 0;
    *((_QWORD *)v6 + 7) = 0;
    if ( v5 )
    {
      v9 = strlen(v5);
      sub_140001810((__int64)v7 + 40, v5, v9);
    }
    v50 = (char *)(v7 + 4);
    *((_QWORD *)v7 + 8) = 0;
    *((_QWORD *)v7 + 9) = 0;
    *((_QWORD *)v7 + 10) = 0;
    v10 = strlen((const char *)Str);
    sub_140001810((__int64)(v8 + 3), Str, v10);
    *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)v52;
    *(_OWORD *)((char *)v7 + 104) = *(_OWORD *)&v52[16];
    *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)&v52[32];
    *((_DWORD *)v7 + 34) = 0;
    *((_BYTE *)v7 + 140) = 0;
    *((_QWORD *)v7 + 3) = sub_14005D640();
    *((_QWORD *)v7 + 4) = sub_14005D6F0(nullptr, 0);
  }
  else
  {
    v7 = nullptr;
  }
  v11 = (void **)(v7 + 1);
  v50 = (char *)(v7 + 1);
  v51 = v7;
  v12 = (void ***)operator new(0x10u);
  v13 = v12;
  if ( v12 )
  {
    *v12 = nullptr;
    v12[1] = nullptr;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *v12 = v11;
    v12[1] = (void **)v7;
  }
  else
  {
    v13 = nullptr;
  }
  v42 = sub_14005D830((LPTHREAD_START_ROUTINE)sub_140056710, v13);
  if ( !v42 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = WSAGetLastError();
    if ( v13 )
    {
      v14 = (volatile signed __int32 *)v13[1];
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
      j_j_free(v13);
    }
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(_OWORD *))v7)(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    return 0;
  }
  v16 = *(_DWORD *)(a2 + 184);
  v17 = *(_QWORD *)(a2 + 176);
  v18 = *(unsigned __int8 (__fastcall **)(__int64))(a2 + 168);
  while ( !sub_14005D750(*((void **)v7 + 4), v16) )
  {
    if ( !v18 || v18(v17) )
    {
      sub_14005D6B0(*((struct _RTL_CRITICAL_SECTION **)v7 + 3));
      *((_BYTE *)v7 + 140) = 1;
      sub_14005D6D0(*((struct _RTL_CRITICAL_SECTION **)v7 + 3));
      sub_14005D8F0((void **)v42);
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      v19 = 1223;
      if ( !v18 )
        v19 = 258;
      *(_DWORD *)(a1 + 96) = v19;
LABEL_38:
      if ( v7 )
        sub_140054FC0((volatile signed __int32 *)v7);
      return 0;
    }
  }
  sub_14005D920((HANDLE *)v42);
  *(_DWORD *)(a1 + 96) = *((_DWORD *)v7 + 34);
  v20 = *v11;
  v42 = *v11;
  *v11 = nullptr;
  if ( *(_DWORD *)(a1 + 96) )
  {
    *(_QWORD *)(a1 + 88) = "gai_strerror";
    goto LABEL_38;
  }
  v21 = 0;
  v22 = (__int64)v20;
  if ( !v20 )
  {
LABEL_50:
    sub_140056AC0((__int64)v20);
    goto LABEL_51;
  }
  while ( 1 )
  {
    v23 = *(_DWORD *)(v22 + 16);
    v41 = *(_OWORD **)(v22 + 32);
    v24 = (char *)qword_1400CB5E0;
    if ( !qword_1400CB5E0 )
    {
      v24 = sub_1400571D0(1u);
      qword_1400CB5E0 = (__int64)v24;
    }
    v25 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, char *, __int64, _BYTE *, __int64, int))v24)(
            v41,
            v23,
            v54,
            66,
            v52,
            33,
            10);
    WSASetLastError(v25);
    if ( !v25 )
      break;
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = WSAGetLastError();
LABEL_48:
    v22 = *(_QWORD *)(v22 + 40);
    if ( !v22 )
    {
      v20 = v42;
      goto LABEL_50;
    }
  }
  if ( !sub_140055B20(a1, *(_DWORD *)(v22 + 4), *(_DWORD *)(v22 + 8), *(_DWORD *)(v22 + 12)) )
    goto LABEL_48;
  if ( !sub_140055920(a1, v22, a2 + 168) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_48;
  }
  v21 = 1;
  sub_140056AC0((__int64)v42);
  if ( v49 > 1 )
  {
    v43 = nullptr;
    v44 = 0;
    v45 = 0;
    LODWORD(v41) = 0;
    v26 = Str1;
    v27 = Str1;
    if ( *(_QWORD *)(a2 + 16) )
      v27 = *(const char **)(a2 + 8);
    sub_140002FB0((__int64)&v43, "CONNECT %s:%d HTTP/1.1\n", v27, *(unsigned __int16 *)(a2 + 32));
    if ( *(_QWORD *)(a2 + 128) > 1u )
    {
      sub_140003130(v52, a2 + 120);
      sub_140004830((__int64)v52, 58);
      sub_14000E160((__int64)v52, a2 + 144);
      Block = nullptr;
      v47 = 0;
      v48 = 0;
      v28 = *(_QWORD *)&v52[8] - 1LL;
      if ( !*(_QWORD *)&v52[8] )
        v28 = 0;
      v29 = (unsigned __int8 *)Str1;
      if ( *(_QWORD *)&v52[8] )
        v29 = *(unsigned __int8 **)v52;
      sub_1400696C0((__int64)&Block, v29, v28);
      v30 = Str1;
      if ( v47 )
        v30 = (const char *)Block;
      sub_140024520((__int64)&v43, "Proxy-Authorization: Basic %s\n", v30);
      if ( Block )
      {
        v47 = 0;
        j_free(Block);
        Block = nullptr;
        v48 = 0;
      }
      sub_140001680((__int64)v52);
    }
    v31 = v44 - 1;
    if ( !v44 )
      v31 = 0;
    sub_140002F60((__int64)&v43, v31 + 2);
    *((_BYTE *)v43 + v31) = 10;
    *((_BYTE *)v43 + v31 + 1) = 0;
    if ( (dword_1400CB618 & 0x100000) != 0 )
    {
      v32 = Str1;
      if ( v44 )
        v32 = (const char *)v43;
      if ( *(_QWORD *)(a2 + 96) )
        v26 = *(const char **)(a2 + 88);
      sub_140002CE0(
        (struct __crt_locale_pointers *)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v26,
        *(unsigned __int16 *)(a2 + 112),
        v32);
    }
    v33 = v44 - 1;
    if ( !v44 )
      v33 = 0;
    v34 = sub_140054540(a1, (__int64)v43, v33);
    v21 = v34 == v33;
    if ( v34 == v33 )
    {
      v35 = 0;
      do
      {
        if ( sub_140054430(a1, (__int64)v40, 1, 10000) <= 0 )
        {
          v21 = 0;
          goto LABEL_91;
        }
        v55.m128i_i8[v35++] = v40[0];
        v55.m128i_i8[v35] = 0;
      }
      while ( (unsigned __int64)v35 < 0x3FF && !sub_14006C4B8(&v55, (const __m128i *)"\r\n\r\n") );
      v21 = v35 > 0;
      if ( v35 <= 0 )
        goto LABEL_90;
      v56 = 0;
      if ( (dword_1400CB618 & 0x100000) != 0 )
        sub_140002CE0((struct __crt_locale_pointers *)"Received:\n---\n%s\n---\n", v55.m128i_i8);
      v36 = sub_14005B0C0(v55.m128i_i8, "HTTP/1.%d %d", (unsigned int)&v42, (unsigned int)&v41);
      v37 = (int)v41;
      if ( v36 == 2 && (_DWORD)v41 == 200 )
      {
        v21 = 1;
        goto LABEL_97;
      }
      v21 = 0;
LABEL_92:
      v38 = "connecting to proxy";
      v39 = v37 - 401;
      if ( v39 )
      {
        if ( v39 == 6 )
          v38 = "connecting to proxy (authentication required)";
      }
      else
      {
        v38 = "connecting to proxy (unauthorized)";
      }
      *(_QWORD *)(a1 + 88) = v38;
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
    }
    else
    {
LABEL_90:
      if ( !v21 )
      {
LABEL_91:
        v37 = (int)v41;
        goto LABEL_92;
      }
    }
LABEL_97:
    if ( v43 )
    {
      v44 = 0;
      j_free(v43);
    }
  }
LABEL_51:
  if ( v7 )
    sub_140054FC0((volatile signed __int32 *)v7);
  return v21;
}
// 140099B28: using guessed type __int64 (__fastcall *off_140099B28[4])();
// 1400CB5E0: using guessed type __int64 qword_1400CB5E0;
// 1400CB618: using guessed type int dword_1400CB618;
