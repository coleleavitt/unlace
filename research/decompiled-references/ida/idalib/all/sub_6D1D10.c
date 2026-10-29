__int64 __fastcall sub_6D1D10(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v13; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r13
  double v17; // xmm4_8
  double v18; // xmm5_8
  char *v19; // r12
  int v20; // esi
  int v21; // eax
  unsigned int v22; // edx
  const char *v23; // rdi
  char *v24; // rsi
  void *v25; // rdx
  char *v26; // rdi
  size_t v27; // rax
  size_t v28; // r12
  unsigned int v29; // ebx
  int v31; // eax
  int v32; // ecx
  bool v33; // al
  __int64 idati; // rax
  unsigned int v35; // edx
  char *v36; // rdx
  void *v37; // rdx
  char *s2; // [rsp+0h] [rbp-B8h]
  unsigned int s2a; // [rsp+0h] [rbp-B8h]
  void *v40; // [rsp+8h] [rbp-B0h]
  int v41; // [rsp+8h] [rbp-B0h]
  void *v42; // [rsp+8h] [rbp-B0h]
  __int64 v43; // [rsp+18h] [rbp-A0h] BYREF
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  void *v45[2]; // [rsp+28h] [rbp-90h]
  void *v46; // [rsp+40h] [rbp-78h] BYREF
  __int128 v47; // [rsp+48h] [rbp-70h]
  _QWORD v48[2]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v49; // [rsp+70h] [rbp-48h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v13 = *a1;
  v50 = __readfsqword(0x28u);
  v15 = *(_QWORD *)a2;
  *(_OWORD *)v45 = 0;
  v16 = *(_QWORD **)(v13 + 1672);
  s1 = nullptr;
  sub_5301C0(a1, (void **)&s1, v15);
  v19 = (char *)haystack;
  if ( v45[0] )
    v19 = s1;
  v20 = *(_DWORD *)(a2 + 32);
  v21 = *(_DWORD *)(a2 + 28);
  if ( v20 > 0 && (v21 & 0x40) == 0 )
  {
    if ( sub_6C9F40(v16[1], v20) )
    {
      v22 = *(_DWORD *)(a2 + 32);
    }
    else
    {
      v31 = sub_6500C0((__int64)v16, v16[1], v19);
      v32 = v31;
      v22 = v31;
      if ( v31 )
      {
        s2a = v31;
        if ( v31 == *(_DWORD *)(a2 + 32) )
          goto LABEL_29;
        v41 = v31;
        v33 = sub_6C9F40(v16[1], v31);
        v32 = v41;
        v22 = s2a;
        if ( !v33 )
          goto LABEL_29;
      }
      *(_DWORD *)(a2 + 32) = v32;
    }
    s2 = (char *)sub_64DFD0((__int64)v16, v16[1], v22, nullptr);
    v21 = *(_DWORD *)(a2 + 28);
    if ( s2 )
    {
      v46 = nullptr;
      v47 = 0;
      if ( (v21 & 0x1000) != 0 && (v24 = s2, v23 = (const char *)&v46, (unsigned __int8)sub_6CA1E0((__int64 *)&v46, s2)) )
      {
        s2 = (char *)haystack;
        if ( (_QWORD)v47 )
          s2 = (char *)v46;
      }
      else
      {
        v23 = haystack;
        if ( v45[0] )
          v23 = s1;
        v24 = s2;
        v40 = v45[0];
        if ( !strcmp(v23, s2) )
          goto LABEL_22;
        if ( (*(_BYTE *)(a2 + 29) & 0x10) != 0 )
        {
          v25 = v40;
          goto LABEL_14;
        }
      }
      idati = v16[1];
      v35 = *(_DWORD *)(a2 + 32);
      v43 = 0;
      v49 = 257;
      v48[1] = v35;
      if ( !idati )
        idati = get_idati(v23, v24);
      v48[0] = idati;
      if ( (unsigned __int8)create_tinfo(&v43, 61, 189, v48) && (get_tinfo_property(v43, 2) & 0x2F) == 0xD )
      {
        v36 = s2;
        if ( (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
          v36 = v19;
        if ( !(unsigned int)set_tinfo_property4(&v43, 4, v36, 1025, 0, 0) )
        {
          clear_tinfo_t(&v43);
LABEL_53:
          if ( (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
            goto LABEL_22;
          v25 = v45[0];
LABEL_14:
          v26 = (char *)haystack;
          if ( v25 )
            v26 = s1;
          if ( !strcmp(v26, s2) )
            goto LABEL_22;
          if ( (unsigned __int8)sub_52F580(a1, a2, s2) )
          {
            if ( s2 && (v27 = strlen(s2), (v28 = v27) != 0) )
            {
              v37 = (void *)(v27 + 1);
              if ( v45[1] < (void *)(v27 + 1) )
              {
                v42 = (void *)(v27 + 1);
                s1 = (char *)qvector_reserve(&s1, s1, v37, 1);
                v37 = v42;
              }
              v45[0] = v37;
              memmove(s1, s2, v28);
              s1[v28] = 0;
              if ( v45[0] )
              {
                v19 = s1;
                goto LABEL_22;
              }
            }
            else
            {
              v45[0] = nullptr;
            }
            v19 = (char *)haystack;
LABEL_22:
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(v46);
            }
            v21 = *(_DWORD *)(a2 + 28);
            goto LABEL_25;
          }
LABEL_51:
          sub_368890();
        }
        if ( (*(_BYTE *)(a2 + 29) & 0x10) != 0 && !(unsigned int)set_tinfo_property4(&v43, 4, v19, 1025, 0, 0) )
        {
          clear_tinfo_t(&v43);
          s2 = v19;
          goto LABEL_53;
        }
      }
      clear_tinfo_t(&v43);
      goto LABEL_51;
    }
  }
LABEL_25:
  if ( (v21 & 0x1010) != 0 && (unsigned __int8)sub_6CD210(v16, a2, v19, 0, 0.0, a5)
    || (unsigned __int8)sub_6D1A30(a1, a2, v19, a3, 0.0, (__m128i)a5, a6, a7, v17, v18, a10, a11) )
  {
    v29 = 1;
  }
  else
  {
    if ( !a3 )
    {
LABEL_29:
      v29 = 0;
      goto LABEL_30;
    }
    v29 = sub_6CD210(v16, a2, v19, 1u, 0.0, a5);
  }
LABEL_30:
  if ( s1 )
  {
    v45[0] = nullptr;
    qfree(s1);
  }
  return v29;
}
