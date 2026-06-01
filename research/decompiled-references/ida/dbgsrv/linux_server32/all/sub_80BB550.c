/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BB550
// Address: 0x080BB550

//----- (080BB550) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
unsigned int __cdecl sub_80BB550(int a1)
{
  _DWORD *v1; // eax
  unsigned int v2; // eax
  char *v3; // eax
  size_t v4; // edx
  char *v5; // eax
  size_t v6; // edx
  char v7; // dl
  int v8; // eax
  size_t v9; // edx
  void *v10; // ecx
  int *v11; // eax
  char *v12; // edx
  unsigned int v13; // ebx
  _DWORD *v14; // ecx
  unsigned int v15; // edx
  int v16; // ecx
  void *v17; // eax
  __suseconds_t v18; // eax
  time_t v19; // edx
  int *v20; // edx
  int v21; // ecx
  char *v22; // eax
  int v23; // eax
  unsigned int result; // eax
  const void *v25; // ecx
  void *v26; // eax
  const void *v27; // ecx
  void *v28; // eax
  void *v29; // eax
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // edx
  size_t n; // [esp+0h] [ebp-4A4h]
  size_t na; // [esp+0h] [ebp-4A4h]
  size_t nb; // [esp+0h] [ebp-4A4h]
  size_t nf; // [esp+0h] [ebp-4A4h]
  size_t ne; // [esp+0h] [ebp-4A4h]
  size_t nc; // [esp+0h] [ebp-4A4h]
  size_t nd; // [esp+0h] [ebp-4A4h]
  char *src; // [esp+4h] [ebp-4A0h]
  void *srca; // [esp+4h] [ebp-4A0h]
  _BYTE *srcf; // [esp+4h] [ebp-4A0h]
  void *srcb; // [esp+4h] [ebp-4A0h]
  void *srcg; // [esp+4h] [ebp-4A0h]
  void *srce; // [esp+4h] [ebp-4A0h]
  void *srcc; // [esp+4h] [ebp-4A0h]
  void *srcd; // [esp+4h] [ebp-4A0h]
  char *s; // [esp+8h] [ebp-49Ch]
  char *sa; // [esp+8h] [ebp-49Ch]
  char *sb; // [esp+8h] [ebp-49Ch]
  char *sc; // [esp+8h] [ebp-49Ch]
  char *sd; // [esp+8h] [ebp-49Ch]
  char *se; // [esp+8h] [ebp-49Ch]
  char *sg; // [esp+8h] [ebp-49Ch]
  char *sf; // [esp+8h] [ebp-49Ch]
  _DWORD *v56; // [esp+18h] [ebp-48Ch] BYREF
  void *ptr; // [esp+1Ch] [ebp-488h] BYREF
  int v58; // [esp+20h] [ebp-484h]
  unsigned int v59; // [esp+24h] [ebp-480h]
  char *s1; // [esp+2Ch] [ebp-478h] BYREF
  int v61; // [esp+30h] [ebp-474h]
  int v62; // [esp+34h] [ebp-470h]
  int v63; // [esp+3Ch] [ebp-468h]
  void *v64; // [esp+40h] [ebp-464h] BYREF
  char *v65; // [esp+44h] [ebp-460h]
  int v66; // [esp+48h] [ebp-45Ch]
  int v67; // [esp+4Ch] [ebp-458h]
  void *v68; // [esp+50h] [ebp-454h] BYREF
  char *v69; // [esp+54h] [ebp-450h]
  unsigned int v70; // [esp+58h] [ebp-44Ch]
  void *dest; // [esp+5Ch] [ebp-448h] BYREF
  char *v72; // [esp+60h] [ebp-444h]
  unsigned int v73; // [esp+64h] [ebp-440h]
  _BYTE v74[25]; // [esp+6Eh] [ebp-436h] BYREF
  char v75[1001]; // [esp+87h] [ebp-41Dh] BYREF
  char *v76; // [esp+480h] [ebp-24h]
  int v77; // [esp+484h] [ebp-20h]
  unsigned int v78; // [esp+488h] [ebp-1Ch]
  int v79; // [esp+48Ch] [ebp-18h]
  size_t v80; // [esp+490h] [ebp-14h]
  int v81; // [esp+494h] [ebp-10h]

  v78 = __readgsdword(0x14u);
  v1 = sub_80BBEF0(*(_BYTE *)(a1 + 58));
  v63 = 44;
  *(_DWORD *)(a1 + 40) = v1;
  v2 = *(_DWORD *)(a1 + 8);
  v64 = nullptr;
  v65 = nullptr;
  v66 = 0;
  v67 = 0;
  v68 = nullptr;
  v69 = nullptr;
  v70 = 0;
  dest = nullptr;
  v72 = nullptr;
  v73 = 0;
  s = (char *)v2;
  if ( v2 > 1 )
  {
    na = v2 - 1;
    srca = *(void **)(a1 + 4);
    v64 = sub_80CF920((int)&v64, nullptr, v2, 1u);
    v65 = s;
    memmove(v64, srca, na);
    s[(_DWORD)v64 - 1] = 0;
  }
  LOWORD(v67) = *(_WORD *)(a1 + 56);
  v3 = *(char **)(a1 + 20);
  sa = v3;
  if ( v3 && (v4 = (size_t)(v3 - 1), v3 != (char *)1) )
  {
    v27 = *(const void **)(a1 + 16);
    v28 = v68;
    if ( v70 < (unsigned int)sa )
    {
      nd = *(_DWORD *)(a1 + 16);
      srcd = (void *)v4;
      v28 = sub_80CF920((int)&v68, v68, (unsigned int)sa, 1u);
      v27 = (const void *)nd;
      v68 = v28;
      v4 = (size_t)srcd;
    }
    v69 = sa;
    memmove(v28, v27, v4);
    sa[(_DWORD)v68 - 1] = 0;
  }
  else
  {
    v69 = nullptr;
  }
  v5 = *(char **)(a1 + 32);
  sb = v5;
  if ( v5 && (v6 = (size_t)(v5 - 1), v5 != (char *)1) )
  {
    v25 = *(const void **)(a1 + 28);
    v26 = dest;
    if ( v73 < (unsigned int)sb )
    {
      nc = *(_DWORD *)(a1 + 28);
      srcc = (void *)v6;
      v26 = sub_80CF920((int)&dest, dest, (unsigned int)sb, 1u);
      v25 = (const void *)nc;
      dest = v26;
      v6 = (size_t)srcc;
    }
    v72 = sb;
    memmove(v26, v25, v6);
    sb[(_DWORD)dest - 1] = 0;
  }
  else
  {
    v72 = nullptr;
  }
  v7 = sub_80BBF80(*(_DWORD *)(a1 + 40));
  v8 = *(_DWORD *)(a1 + 40);
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 8) <= 1u )
      sf = "0.0.0.0";
    else
      sf = *(char **)(a1 + 4);
    v81 = sub_80BBF50(v8);
    v80 = *(unsigned __int16 *)(a1 + 56);
    sub_80BF890("%s:%u: %s\n", (int)sf);
    sub_80BC010((int *)(a1 + 40), -1);
    exit(1);
  }
  ptr = nullptr;
  v58 = 0;
  v59 = 0;
  s1 = nullptr;
  v61 = 0;
  v62 = 0;
  sub_80BBFD0(v8, (int)&s1, 0);
  if ( sub_80CFB00(v75, 2u) )
  {
    v9 = strlen(v75);
    if ( v9 )
    {
      v29 = ptr;
      v30 = v9 + 1;
      if ( v59 < v9 + 1 )
      {
        ne = v9;
        srce = (void *)(v9 + 1);
        v29 = sub_80CF920((int)&ptr, ptr, v9 + 1, 1u);
        v9 = ne;
        ptr = v29;
        v30 = (int)srce;
      }
      v58 = v30;
      srcf = (_BYTE *)v9;
      memmove(v29, v75, v9);
      srcf[(_DWORD)ptr] = 0;
      v11 = (int *)ptr;
      v12 = (char *)v58;
      sc = (char *)ptr;
      if ( v58 )
      {
        if ( v61 )
        {
          v10 = ptr;
LABEL_15:
          n = (size_t)v10;
          src = v12;
          if ( strcmp(s1, (const char *)v11) )
          {
            v12 = src;
            v13 = v59;
            v14 = (_DWORD *)n;
            if ( !src )
            {
              if ( v59 > 8 )
              {
                v58 = 9;
                sc[8] = 0;
LABEL_19:
                *v14 = 2037196832;
                v14[1] = 544237856;
                sd = (char *)v58;
                if ( v58 )
                {
                  v15 = v58 + 1;
                  v16 = v58;
                  sd = (char *)(v58 - 1);
                }
                else
                {
                  v15 = 2;
                  v16 = 1;
                }
                v17 = ptr;
                if ( v59 < v15 )
                {
                  nb = v16;
                  srcb = (void *)v15;
                  v17 = sub_80CF920((int)&ptr, ptr, v15, 1u);
                  v16 = nb;
                  ptr = v17;
                  v15 = (unsigned int)srcb;
                }
                v58 = v15;
                *((_BYTE *)v17 + v16) = 0;
                sd[(_DWORD)ptr] = 41;
                goto LABEL_24;
              }
              v11 = (int *)sc;
              v32 = 9;
              v31 = 8;
              se = nullptr;
LABEL_66:
              nf = v31;
              srcg = (void *)v32;
              v11 = (int *)sub_80CF920((int)&ptr, v11, v32, 1u);
              v31 = nf;
              ptr = v11;
              v32 = (unsigned int)srcg;
LABEL_63:
              v58 = v32;
              *((_BYTE *)v11 + v31) = 0;
              v14 = ptr;
              if ( se )
              {
                v80 = (size_t)se;
                sg = (char *)ptr;
                memmove((char *)ptr + 8, ptr, v80);
                v14 = sg;
              }
              goto LABEL_19;
            }
            v11 = (int *)sc;
LABEL_62:
            se = v12 - 1;
            v31 = (int)(v12 + 7);
            v32 = (unsigned int)(v12 + 8);
            if ( v13 >= v32 )
              goto LABEL_63;
            goto LABEL_66;
          }
          goto LABEL_47;
        }
        v13 = v59;
        if ( *(_BYTE *)ptr )
          goto LABEL_62;
LABEL_47:
        if ( sc )
        {
          v58 = 0;
          sub_80CF780(sc);
          ptr = nullptr;
          v59 = 0;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v58 = 0;
      sc = (char *)ptr;
    }
    v10 = sc;
    if ( v61 )
    {
      v11 = &dword_80DDFD8;
      v12 = nullptr;
      goto LABEL_15;
    }
    goto LABEL_47;
  }
LABEL_24:
  v18 = sub_80D0330();
  sub_80BC270(v74, 25, v18, v19, 0);
  v20 = &dword_80DDFD8;
  if ( v58 )
    v20 = (int *)ptr;
  v21 = *(unsigned __int16 *)(a1 + 56);
  v22 = (char *)&dword_80DDFD8;
  if ( v61 )
    v22 = s1;
  v78 = (unsigned int)v20;
  v77 = v21;
  v76 = v22;
  sub_80BF890("%s Listening on %s:%u%s...\n", (int)v74);
  while ( *(_DWORD *)(a1 + 40) )
  {
    v56 = sub_80BBEF0(*(_BYTE *)(a1 + 58));
    v79 = *(_DWORD *)(a1 + 40);
    if ( (unsigned __int8)sub_80BBF90((int)v56)
      && (v23 = (*(int (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 12))(a1, v56)) != 0 )
    {
      sub_80BB410(a1, v23);
    }
    else
    {
      sub_80BC010((int *)&v56, -1);
      if ( !*(_DWORD *)(a1 + 40) )
        break;
      sub_80BF890("Rejected client\n", v79);
    }
  }
  if ( s1 )
  {
    v61 = 0;
    sub_80CF780(s1);
  }
  if ( ptr )
  {
    v58 = 0;
    sub_80CF780(ptr);
  }
  if ( dest )
  {
    v72 = nullptr;
    sub_80CF780(dest);
  }
  if ( v68 )
  {
    v69 = nullptr;
    sub_80CF780(v68);
  }
  if ( v64 )
  {
    v65 = nullptr;
    sub_80CF780(v64);
  }
  result = v78 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80BB6C8: bad sp value at call
// 80BB6DE: bad sp value at call
// 80BB6F7: bad sp value at call
// 80BBC67: bad sp value at call
// 80BB811: bad sp value at call
// 80BB85A: bad sp value at call
// 80BB9C5: bad sp value at call
// 80BBCEF: bad sp value at call
// 80BBB86: bad sp value at call
// 80BBCB9: bad sp value at call
// 80BB811: variable 'v19' is possibly undefined
// 80BB410: using guessed type _DWORD __cdecl sub_80BB410(_DWORD, _DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
