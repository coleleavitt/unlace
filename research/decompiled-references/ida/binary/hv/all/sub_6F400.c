__int64 __fastcall sub_6F400(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  bool v15; // zf
  __int16 v16; // cx
  __int16 v17; // ax
  bool v18; // cc
  socklen_t v19; // r12d
  __int64 v20; // rdx
  int v21; // edx
  __int64 result; // rax
  __int64 v23; // r13
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  const char *v27; // rdx
  int (__fastcall *v28)(__int64, int); // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  char v37; // [rsp+0h] [rbp-68h]
  int optval; // [rsp+Ch] [rbp-5Ch] BYREF
  struct sockaddr addr[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  if ( !(unsigned __int8)sub_6F240((__int64)a1, 10, 1, 0, a3, a4, a5, a6, v11, v12, a9, a10)
    && !(unsigned __int8)sub_6F240((__int64)a1, 2, 1, 0, a3, a4, a5, a6, v13, v14, a9, a10) )
  {
    goto LABEL_15;
  }
  v15 = *((_BYTE *)a1 + 100) == 0;
  optval = 0;
  if ( !v15 )
  {
    if ( setsockopt(*((_DWORD *)a1 + 14), 41, 26, &optval, 4u) )
    {
      a1[11] = "setsockopt(IPV6_V6ONLY)";
      if ( (dword_1671A4 & 0x100000) != 0 )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
        sub_2A380((int)"%s", v30, v31, v32, v33, v34, a3, a4, a5, a6, v35, v36, a9, a10, v37);
      }
    }
  }
  v16 = *(_WORD *)(a2 + 32);
  memset(addr, 0, 28);
  v17 = __ROL2__(v16, 8);
  if ( *((_BYTE *)a1 + 100) )
  {
    v18 = *(_QWORD *)(a2 + 16) <= 1u;
    *(_WORD *)addr[0].sa_data = v17;
    v19 = 28;
    strcpy((char *)addr, "\n");
    v20 = 10;
    if ( v18 )
      goto LABEL_5;
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16) <= 1u;
    *(_WORD *)addr[0].sa_data = v17;
    v19 = 16;
    addr[0].sa_family = 2;
    v20 = 2;
    if ( v18 )
      goto LABEL_5;
  }
  v23 = *(_QWORD *)(a2 + 8);
  if ( !(unsigned __int8)sub_96110(addr, v23, v20) )
  {
    v27 = "INADDR_ANY";
    if ( *((_BYTE *)a1 + 100) )
      v27 = "in6addr_any";
    sub_708D0((unsigned int)"Cannot parse IP address \"%s\", falling back to %s\n", v23, (_DWORD)v27, v24, v25, v26);
    if ( *((_BYTE *)a1 + 100) )
      *(__m128i *)&addr[0].sa_data[6] = _mm_loadu_si128((const __m128i *)&in6addr_any);
    else
      *(_DWORD *)&addr[0].sa_data[2] = 0;
  }
LABEL_5:
  if ( bind(*((_DWORD *)a1 + 14), addr, v19) == -1 )
  {
    a1[11] = "bind";
    *((_DWORD *)a1 + 24) = *__errno_location();
  }
  else
  {
    v21 = listen(*((_DWORD *)a1 + 14), 128);
    result = 1;
    if ( v21 != -1 )
      return result;
    a1[11] = "listen";
    *((_DWORD *)a1 + 24) = *__errno_location();
  }
LABEL_15:
  v28 = *(int (__fastcall **)(__int64, int))(*a1 + 72LL);
  if ( v28 == sub_6EA10 )
  {
    v29 = a1[7];
    if ( v29 != -1 )
    {
      close(v29);
      a1[7] = -1;
    }
    return 0;
  }
  else
  {
    v28((__int64)a1, -1);
    return 0;
  }
}

