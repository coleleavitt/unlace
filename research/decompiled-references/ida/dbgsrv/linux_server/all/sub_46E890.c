/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E890
// Address: 0x000000000046E890

//----- (000000000046E890) ----------------------------------------------------
unsigned __int64 __fastcall sub_46E890(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdi
  size_t v8; // rax
  size_t v9; // r12
  _BYTE *v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  _BYTE *v17; // rsi
  __time_t v18; // rax
  const char *v19; // r8
  char *v20; // rdx
  __int64 *v21; // rsi
  const void *v23; // r13
  const void *v24; // r13
  void *v25; // rdi
  const void *v26; // r13
  void *v27; // rdi
  void *v28; // rdi
  unsigned __int64 v29; // r13
  void *v30; // rsi
  size_t v31; // rbp
  __int64 v32; // r13
  unsigned __int64 v33; // r12
  const char *v34; // rbp
  const char *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-500h] BYREF
  void *ptr; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v38; // [rsp+18h] [rbp-4F0h]
  char *s1; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-4D0h]
  __int64 v41; // [rsp+50h] [rbp-4B8h]
  void *v42; // [rsp+58h] [rbp-4B0h] BYREF
  __int128 v43; // [rsp+60h] [rbp-4A8h]
  __int64 v44; // [rsp+70h] [rbp-498h]
  void *dest; // [rsp+78h] [rbp-490h] BYREF
  __int128 v46; // [rsp+80h] [rbp-488h]
  void *v47; // [rsp+90h] [rbp-478h] BYREF
  __int128 v48; // [rsp+98h] [rbp-470h]
  char v49[32]; // [rsp+B0h] [rbp-458h] BYREF
  char s[1032]; // [rsp+D0h] [rbp-438h] BYREF
  unsigned __int64 v51; // [rsp+4D8h] [rbp-30h]

  v51 = __readfsqword(0x28u);
  v2 = sub_46EFB0(*(_BYTE *)(a1 + 106));
  v41 = 88;
  v42 = nullptr;
  v44 = 0;
  dest = nullptr;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 80) = v2;
  v47 = nullptr;
  v43 = 0;
  v46 = 0;
  v48 = 0;
  if ( v3 >= 2 )
  {
    v23 = *(const void **)(a1 + 8);
    v42 = sub_481540((__int64)&v42, nullptr, v3, 1u);
    *(_QWORD *)&v43 = v3;
    memmove(v42, v23, v3 - 1);
    *((char *)v42 + v3 - 1) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  LOWORD(v44) = *(_WORD *)(a1 + 104);
  if ( v4 > 1 )
  {
    v24 = *(const void **)(a1 + 32);
    v25 = dest;
    if ( *((_QWORD *)&v46 + 1) < v4 )
    {
      dest = sub_481540((__int64)&dest, dest, v4, 1u);
      v25 = dest;
    }
    *(_QWORD *)&v46 = v4;
    memmove(v25, v24, v4 - 1);
    *((char *)dest + v4 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v46 = 0;
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 > 1 )
  {
    v26 = *(const void **)(a1 + 56);
    v27 = v47;
    if ( *((_QWORD *)&v48 + 1) < v5 )
    {
      v47 = sub_481540((__int64)&v47, v47, *(_QWORD *)(a1 + 64), 1u);
      v27 = v47;
    }
    *(_QWORD *)&v48 = v5;
    memmove(v27, v26, v5 - 1);
    *((char *)v47 + v5 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v48 = 0;
  }
  v6 = sub_46F030(*(_QWORD *)(a1 + 80));
  v7 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
  {
    v34 = "0.0.0.0";
    if ( *(_QWORD *)(a1 + 16) > 1u )
      v34 = *(const char **)(a1 + 8);
    v35 = (const char *)sub_46F000(v7);
    sub_4724D0("%s:%u: %s\n", v34, *(unsigned __int16 *)(a1 + 104), v35);
    sub_46F0A0((_QWORD *)(a1 + 80));
    exit(1);
  }
  ptr = nullptr;
  s1 = nullptr;
  v38 = 0;
  v40 = 0;
  sub_46F070(v7, (__int64)&s1, 0);
  if ( (unsigned __int8)sub_481710(s, 2u) )
  {
    v8 = strlen(s);
    v9 = v8;
    if ( v8 )
    {
      v28 = ptr;
      v29 = v8 + 1;
      if ( *((_QWORD *)&v38 + 1) < v8 + 1 )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v29, 1u);
        v28 = ptr;
      }
      *(_QWORD *)&v38 = v29;
      memmove(v28, s, v9);
      *((_BYTE *)ptr + v9) = 0;
      v10 = ptr;
      v11 = v38;
      v30 = ptr;
      if ( (_QWORD)v38 )
      {
        if ( (_QWORD)v40 )
        {
          v12 = ptr;
          if ( strcmp(s1, (const char *)ptr) )
          {
LABEL_13:
            v13 = *((_QWORD *)&v38 + 1);
            if ( !v11 )
            {
              if ( *((_QWORD *)&v38 + 1) > 8u )
              {
                *(_QWORD *)&v38 = 9;
                v10[8] = 0;
LABEL_16:
                *v12 = 0x20706920796D2820LL;
                v14 = v38;
                if ( (_QWORD)v38 )
                {
                  v15 = v38 + 1;
                  v16 = v38;
                  v14 = v38 - 1;
                }
                else
                {
                  v15 = 2;
                  v16 = 1;
                }
                v17 = ptr;
                if ( *((_QWORD *)&v38 + 1) < v15 )
                {
                  ptr = sub_481540((__int64)&ptr, ptr, v15, 1u);
                  v17 = ptr;
                }
                *(_QWORD *)&v38 = v15;
                v17[v16] = 0;
                *((_BYTE *)ptr + v14) = 41;
                goto LABEL_21;
              }
              v30 = v10;
              v33 = 9;
              v31 = 0;
              v32 = 8;
LABEL_63:
              ptr = sub_481540((__int64)&ptr, v30, v33, 1u);
              v30 = ptr;
LABEL_60:
              *(_QWORD *)&v38 = v33;
              *((_BYTE *)v30 + v32) = 0;
              v12 = ptr;
              if ( v31 )
                memmove((char *)ptr + 8, ptr, v31);
              goto LABEL_16;
            }
            v30 = v10;
LABEL_59:
            v31 = v11 - 1;
            v32 = v11 + 7;
            v33 = v11 + 8;
            if ( v13 >= v33 )
              goto LABEL_60;
            goto LABEL_63;
          }
        }
        else
        {
          v13 = *((_QWORD *)&v38 + 1);
          if ( *(_BYTE *)ptr )
            goto LABEL_59;
        }
        goto LABEL_43;
      }
    }
    else
    {
      *(_QWORD *)&v38 = 0;
      v10 = ptr;
    }
    v11 = 0;
    v12 = v10;
    if ( (_QWORD)v40 && strcmp(s1, ::s1) )
      goto LABEL_13;
LABEL_43:
    if ( v10 )
    {
      *(_QWORD *)&v38 = 0;
      j__free(v10);
      ptr = nullptr;
      *((_QWORD *)&v38 + 1) = 0;
    }
  }
LABEL_21:
  v18 = sub_481E10();
  sub_46F290(v49, 25, v18, 0);
  v19 = ::s1;
  if ( (_QWORD)v38 )
    v19 = (const char *)ptr;
  v20 = (char *)::s1;
  if ( (_QWORD)v40 )
    v20 = s1;
  sub_4724D0("%s Listening on %s:%u%s...\n", v49, v20, *(unsigned __int16 *)(a1 + 104), v19);
  while ( *(_QWORD *)(a1 + 80) )
  {
    v36 = sub_46EFB0(*(_BYTE *)(a1 + 106));
    if ( (unsigned __int8)sub_46F040(v36)
      && (v21 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v36)) != nullptr )
    {
      sub_46E790(a1, v21);
    }
    else
    {
      sub_46F0A0(&v36);
      if ( !*(_QWORD *)(a1 + 80) )
        break;
      sub_4724D0("Rejected client\n", 0xFFFFFFFFLL);
    }
  }
  if ( s1 )
  {
    *(_QWORD *)&v40 = 0;
    j__free(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v38 = 0;
    j__free(ptr);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  if ( dest )
  {
    *(_QWORD *)&v46 = 0;
    j__free(dest);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    j__free(v42);
  }
  return v51 - __readfsqword(0x28u);
}
