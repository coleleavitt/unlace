__int64 __fastcall sub_42E580(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 v11; // xmm0
  const char *p_dest; // rsi
  __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // r15
  char *v18; // rdx
  char *v19; // r13
  char v20; // al
  __int64 v21; // rdi
  __int64 v22; // rax
  char *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // r12
  char *v30; // rax
  const char *v31; // rdx
  const char *v32; // rcx
  _BOOL4 v33; // edi
  const char *v34; // rdx
  const char *v35; // rcx
  const char *v36; // [rsp-8h] [rbp-98h]
  char *v37; // [rsp+8h] [rbp-88h]
  void *dest; // [rsp+20h] [rbp-70h] BYREF
  __int128 v39; // [rsp+28h] [rbp-68h]
  const char *v40; // [rsp+40h] [rbp-50h] BYREF
  __int128 v41; // [rsp+48h] [rbp-48h]
  unsigned __int64 v42; // [rsp+58h] [rbp-38h]

  v11 = 0;
  v42 = __readfsqword(0x28u);
  p_dest = (const char *)&dest;
  v14 = *a1;
  dest = nullptr;
  v39 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, void **, __int64, __int64))(v14 + 1192))(a1, &dest, a3, 65) )
    goto LABEL_16;
  v17 = v39;
  v18 = (char *)dest;
  v19 = (char *)dest;
  if ( dest < (char *)dest + 48 * (_QWORD)v39 )
  {
    do
    {
      while ( (v19[24] & 0x40) != 0 )
      {
        if ( a2 - 5 > 1 )
        {
          a1 = sub_426230(a1, p_dest);
          v20 = sub_417670((__int64)a1, 0, 2, (__int64)v19, 0, nullptr, a2, 1);
          v18 = (char *)dest;
          p_dest = v36;
          if ( !v20 )
            break;
        }
        v17 = v39;
        v19 += 48;
        if ( v19 >= &v18[48 * (_QWORD)v39] )
          goto LABEL_11;
      }
      v21 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        *((_QWORD *)v19 + 1) = 0;
        *(double *)v11.m128_u64 = qfree(v21, p_dest, v18);
      }
      p_dest = v19 + 48;
      a1 = (__int64 *)v19;
      memmove(v19, v19 + 48, (_BYTE *)dest + 48 * v39 - v19 - 48);
      v18 = (char *)dest;
      v17 = v39 - 1;
      v22 = 3 * (v39 - 1);
      *(_QWORD *)&v39 = v39 - 1;
    }
    while ( v19 < (char *)dest + 16 * v22 );
  }
LABEL_11:
  if ( a2 == 4 )
  {
LABEL_15:
    p_dest = (const char *)a2;
    sub_42B8D0((__int64 *)&dest, (const char *)a2, v11, a5, a6, a7, v15, v16, a10, a11);
    goto LABEL_16;
  }
  switch ( a2 )
  {
    case 1u:
      v37 = "SAFE AUTO MERGE";
      break;
    case 2u:
      v37 = "AUTO MERGE, UPON CONFLICTS USE LOCAL FILE";
      break;
    case 3u:
      v37 = "AUTO MERGE, UPON CONFLICTS USE REMOTE FILE";
      break;
    case 5u:
      v37 = "USE LOCAL FILE, DISCARD REMOTE FILE";
      break;
    case 6u:
      v37 = "DISCARD LOCAL FILE, USE REMOTE FILE";
      break;
    default:
      v37 = "?";
      break;
  }
  v11 = 0;
  v40 = nullptr;
  v41 = 0;
  if ( !v17 )
    goto LABEL_44;
  v29 = 0;
  while ( 1 )
  {
    v30 = &v18[48 * v29];
    v31 = &s1;
    if ( *((_QWORD *)v30 + 1) )
      v31 = *(const char **)v30;
    sub_16FAA0((__int64 *)&v40, (__int64)"%s\n", v31);
    if ( ++v29 >= v17 || v29 == 30 )
      break;
    v18 = (char *)dest;
  }
  if ( v17 > 0x1E )
    sub_16FAA0((__int64 *)&v40, (__int64)"... + %zu more\n", v17 - 30);
  if ( (_QWORD)v41 )
  {
    v32 = v40;
    v33 = a2 == 1;
  }
  else
  {
LABEL_44:
    v32 = &s1;
    v33 = a2 == 1;
  }
  p_dest = "HIDECANCEL\nDo you really want to resolve these files?\nThe resolve method is:\n\n%s\n\n%s";
  if ( (unsigned int)sub_1698A0(
                       v33,
                       (int)"HIDECANCEL\nDo you really want to resolve these files?\nThe resolve method is:\n\n%s\n\n%s",
                       v37,
                       v32) == 1 )
  {
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      *(double *)v11.m128_u64 = qfree(
                                  v40,
                                  "HIDECANCEL\n"
                                  "Do you really want to resolve these files?\n"
                                  "The resolve method is:\n"
                                  "\n"
                                  "%s\n"
                                  "\n"
                                  "%s",
                                  v34,
                                  v35);
    }
    goto LABEL_15;
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, "HIDECANCEL\nDo you really want to resolve these files?\nThe resolve method is:\n\n%s\n\n%s", v34, v35);
  }
LABEL_16:
  v23 = (char *)dest;
  if ( dest )
  {
    v24 = v39;
    if ( (_QWORD)v39 )
    {
      v25 = 0;
      do
      {
        v26 = &v23[48 * v25];
        v27 = *(_QWORD *)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          qfree(v27, p_dest);
          v23 = (char *)dest;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v23, p_dest);
  }
  return 0;
}
