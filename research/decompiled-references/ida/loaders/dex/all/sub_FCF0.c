__int64 __fastcall sub_FCF0(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(__int64, _QWORD, const char *),
        const char *a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // r12d
  char *v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  unsigned __int64 v26; // [rsp+10h] [rbp-68h]
  const char *v27; // [rsp+18h] [rbp-60h]
  char *v28; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v25 = a1;
  v27 = a5;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  v28 = nullptr;
  sub_E410((__int64 *)&v28, (__int64)" of '%s' section", a5);
  v11 = 1;
  sub_7150((__int64)a2, 1u, (__int64)"%s", a5);
  v12 = getseg(a2);
  if ( v12 )
    v17 = *(_QWORD *)(v12 + 8);
  else
    v17 = getinf(20, 1, v13, v14);
  v26 = v17;
  v24 = a6 / 0xAuLL;
  v18 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !(v18 % a6) )
      {
        v19 = v28;
        v20 = a6 + v18;
        v11 = (unsigned __int64)"items";
        if ( (unsigned int)v20 > a3 )
          v20 = a3;
        if ( !v28 )
          v19 = "";
        sub_7210((__int64)"Processing %s %5u..%-5u from %5u%s", "items", v18 + 1, v20, a3, v19, v24);
      }
      if ( !(v18 % (unsigned int)v24) && (unsigned __int8)callui(27, v11, &callui, v14, v15, v16, v24, v25, v26, v27) )
        sub_7600();
      v11 = v18;
      v21 = a4(v25, v18, a2);
      if ( v21 == -1 )
      {
        v22 = 0;
        goto LABEL_18;
      }
      if ( v18 == a3 - 1 )
        goto LABEL_17;
      ++v18;
      if ( v26 < v21 )
        break;
      a2 = (const char *)v21;
      if ( a3 == v18 )
        goto LABEL_17;
    }
    sub_5860((__int64)"%a: failed to format '%s'\n", 0.0, a2);
  }
LABEL_17:
  v22 = 1;
LABEL_18:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v22;
}

