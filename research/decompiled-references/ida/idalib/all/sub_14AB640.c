__int64 __fastcall sub_14AB640(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+10h] [rbp-D8h] BYREF
  void *v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+20h] [rbp-C8h]
  _BYTE v21[16]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-B0h] BYREF
  void *v23; // [rsp+40h] [rbp-A8h]
  __int64 v24; // [rsp+48h] [rbp-A0h]
  _BYTE v25[16]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v26; // [rsp+60h] [rbp-88h] BYREF
  void *v27; // [rsp+68h] [rbp-80h]
  __int64 v28; // [rsp+70h] [rbp-78h]
  _BYTE v29[16]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v30; // [rsp+88h] [rbp-60h] BYREF
  void *ptr; // [rsp+90h] [rbp-58h]
  __int64 v32; // [rsp+98h] [rbp-50h]
  _BYTE v33[72]; // [rsp+A0h] [rbp-48h] BYREF

  if ( a3 == *((_DWORD *)a2 + 2) )
  {
LABEL_7:
    v15 = *(unsigned __int16 *)(a1 + 32);
    v16 = (unsigned int)(v15 - 456);
    if ( (unsigned __int16)(v15 - 456) <= 2u )
    {
      while ( !(unsigned __int8)sub_15686D0(a1) )
      {
        LOWORD(v15) = *(_WORD *)(a1 + 32);
        if ( (_WORD)v15 == 25 )
          break;
LABEL_9:
        if ( (_WORD)v15 == 1 )
          return sub_14808E0(a6, a2, v16, a4, a5, a6);
        v18 = 0;
        v19 = v21;
        v20 = 0x200000000LL;
        v22 = a1 + 504;
        v23 = v25;
        v24 = 0x200000000LL;
        if ( (unsigned __int16)(v15 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
          sub_14AB020(a1, (unsigned int *)&v18, a7, a8);
        v30 = a1 + 504;
        v26 = 0;
        v27 = v29;
        v28 = 0x200000000LL;
        ptr = v33;
        v32 = 0x200000000LL;
        sub_156E800(a1, &v18, &v26, 0);
        sub_15DCED0(v30, &v30);
        if ( ptr != v33 )
          free(ptr);
        if ( v27 != v29 )
          free(v27);
        a2 = &v22;
        sub_15DCED0(v22, &v22);
        if ( v23 != v25 )
          free(v23);
        if ( v19 == v21 )
          goto LABEL_7;
        free(v19);
        v15 = *(unsigned __int16 *)(a1 + 32);
        v16 = (unsigned int)(v15 - 456);
        if ( (unsigned __int16)(v15 - 456) > 2u )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (_WORD)v15 != 25 )
        goto LABEL_9;
    }
    return sub_14808E0(a6, a2, v16, a4, a5, a6);
  }
  else
  {
    sub_146B5E0(&v18, a1, 8u, 1, 0);
    v12 = *(_QWORD *)(a1 + 96);
    v26 = 0;
    v13 = sub_187E410(
            v12,
            *(_QWORD *)(v12 + 608),
            *(_DWORD *)(*a2 + 24LL * a3 + 4),
            *(_DWORD *)(*a2 + 24LL * a3),
            *(_DWORD *)(*a2 + 24LL * a3 + 8),
            *(_QWORD *)(*a2 + 24LL * a3 + 16),
            *(_DWORD *)(a6 + 48),
            a5,
            (__int64)&v26,
            1);
    sub_14AB640(a1, a2, a3 + 1, a4, a5, a6);
    if ( v18 )
    {
      sub_1564F70(v18);
      v18 = 0;
    }
    result = sub_183D140(*(_QWORD *)(a1 + 96), v13, *(unsigned int *)(a6 + 52));
    if ( v18 )
      return sub_1564F70(v18);
  }
  return result;
}
