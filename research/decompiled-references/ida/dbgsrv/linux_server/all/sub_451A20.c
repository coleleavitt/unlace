/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451A20
// Address: 0x0000000000451A20

//----- (0000000000451A20) ----------------------------------------------------
const char *__fastcall sub_451A20(_QWORD *a1, __int64 a2, double a3)
{
  unsigned __int16 v4; // dx
  unsigned __int64 v6; // r12
  const char *v7; // rbp
  void *v8; // rdi
  const char *v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  const char *v13; // rsi
  const char *v14; // rcx
  const char *v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // eax
  char *v18; // rdx
  int v19; // ecx
  size_t v20; // rax
  size_t v21; // rbp
  _BYTE *v22; // rsi
  char *p_s; // rax
  void *v24; // rdi
  size_t v25; // r13
  void *v26; // rax
  _BYTE *v27; // rax
  _DWORD *v28; // rsi
  _BYTE *v29; // rsi
  _DWORD *v30; // rax
  void *v31; // rax
  _BYTE *v32; // rax
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v34; // [rsp+8h] [rbp-460h]
  char v35[9]; // [rsp+27h] [rbp-441h] BYREF
  char s; // [rsp+30h] [rbp-438h] BYREF
  char v37; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int64 v38; // [rsp+438h] [rbp-30h]

  v4 = *(_WORD *)(a2 + 24);
  v38 = __readfsqword(0x28u);
  switch ( v4 )
  {
    case 1u:
      v22 = (_BYTE *)*a1;
      if ( a1[2] <= 5u )
      {
        v27 = sub_481540((__int64)a1, v22, 6u, 1u);
        *a1 = v27;
        v22 = v27;
      }
      a1[1] = 6;
      *(_DWORD *)v22 = 1145980220;
      v22[4] = 62;
      *(_BYTE *)(*a1 + 5LL) = 0;
      goto LABEL_8;
    case 2u:
      goto LABEL_2;
    case 3u:
      sub_4172B0((__int64)a1, "0x%a", a3);
      goto LABEL_8;
    case 4u:
      v11 = *(_QWORD *)(a2 + 8);
      ptr = nullptr;
      v12 = 0;
      v34 = 0;
      v13 = s1;
      if ( v11 )
      {
        v13 = *(const char **)a2;
        v12 = v11 - 1;
      }
      sub_4761E0((__int64)&ptr, v13, v12);
      v14 = s1;
      if ( (_QWORD)v34 )
        v14 = (const char *)ptr;
      v15 = "";
      if ( *(_BYTE *)(a2 + 40) )
        v15 = "L";
      sub_4172B0((__int64)a1, "%s\"%s\"", v15, v14);
      if ( ptr )
      {
        *(_QWORD *)&v34 = 0;
        j__free(ptr);
      }
      goto LABEL_8;
    case 5u:
      v16 = *(_QWORD *)(a2 + 32);
      if ( v16 )
      {
        v17 = 1;
        if ( v16 != (char)v16 )
          v17 = 8;
        v18 = v35;
        v19 = 8 * v17 - 8;
        do
        {
          if ( (unsigned __int8)(v16 >> v19) )
            *v18++ = v16 >> v19;
          v19 -= 8;
        }
        while ( v19 != -8 );
        *v18 = 0;
        sub_476200(&s, v35, 1024);
        sub_4172B0((__int64)a1, "'%s'", &s);
      }
      else
      {
        v28 = (_DWORD *)*a1;
        if ( a1[2] <= 4u )
        {
          v30 = sub_481540((__int64)a1, v28, 5u, 1u);
          *a1 = v30;
          v28 = v30;
        }
        a1[1] = 5;
        *v28 = 657480743;
        *(_BYTE *)(*a1 + 4LL) = 0;
      }
      goto LABEL_8;
    case 6u:
      v10 = s1;
      if ( *(_QWORD *)(a2 + 8) )
        v10 = *(const char **)a2;
      sub_4172B0((__int64)a1, "@type %s", v10);
      goto LABEL_8;
    case 7u:
      sub_47C900(&s, 1024, (__m128i *)(a2 + 48), 50);
      goto LABEL_31;
    case 8u:
      sub_4172B0((__int64)a1, "0x%llxi64", *(_QWORD *)(a2 + 48));
      goto LABEL_8;
    default:
      if ( (unsigned __int16)(v4 - 128) <= 0x37Fu )
      {
LABEL_2:
        if ( (_QWORD *)a2 != a1 )
        {
          v6 = *(_QWORD *)(a2 + 8);
          if ( v6 < 2 )
          {
LABEL_32:
            a1[1] = 0;
            return s1;
          }
          v7 = *(const char **)a2;
          v8 = (void *)*a1;
          if ( a1[2] < v6 )
          {
            v31 = sub_481540((__int64)a1, (void *)*a1, v6, 1u);
            *a1 = v31;
            v8 = v31;
          }
          a1[1] = v6;
          memmove(v8, v7, v6 - 1);
          *(_BYTE *)(*a1 + v6 - 1) = 0;
        }
      }
      else if ( v4 == 11868 )
      {
        v29 = (_BYTE *)*a1;
        if ( a1[2] <= 3u )
        {
          v32 = sub_481540((__int64)a1, v29, 4u, 1u);
          *a1 = v32;
          v29 = v32;
        }
        a1[1] = 4;
        *(_WORD *)v29 = 11822;
        v29[2] = 46;
        *(_BYTE *)(*a1 + 3LL) = 0;
      }
      else
      {
        if ( v4 > 0xFFu )
        {
          s = HIBYTE(v4);
          p_s = &v37;
        }
        else
        {
          p_s = &s;
        }
        *p_s = v4;
        p_s[1] = 0;
LABEL_31:
        v20 = strlen(&s);
        v21 = v20;
        if ( !v20 )
          goto LABEL_32;
        v24 = (void *)*a1;
        v25 = v20 + 1;
        if ( a1[2] < v20 + 1 )
        {
          v26 = sub_481540((__int64)a1, (void *)*a1, v20 + 1, 1u);
          *a1 = v26;
          v24 = v26;
        }
        a1[1] = v25;
        memmove(v24, &s, v21);
        *(_BYTE *)(*a1 + v21) = 0;
      }
LABEL_8:
      if ( a1[1] )
        return (const char *)*a1;
      return s1;
  }
}
