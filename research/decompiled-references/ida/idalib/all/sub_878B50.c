__int64 __fastcall sub_878B50(__int64 a1)
{
  int v1; // r10d
  unsigned int *v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *v9; // r13
  char *v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  int v19; // esi
  _QWORD *v20; // r13
  __int64 *i; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  char *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  char *v29; // rax
  char *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  _QWORD *v33; // rax
  __int64 *v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 100);
  v2 = *(unsigned int **)a1;
  v35 = __readfsqword(0x28u);
  v34 = nullptr;
  if ( v1 )
  {
    sub_86B8E0(v2, 32, 3, 0, 13, 0);
    sub_86B8E0(v2, 32, 13, 0, 142, *(int *)(a1 + 100));
  }
  if ( *(_DWORD *)(a1 + 204) || *(int *)(a1 + 216) <= 255 )
  {
    sub_86B8E0(v2, 32, 4, 0, 137, 8);
    v3 = sub_86E080(v2, 5, 2, 0, 4, 0);
    if ( *(_DWORD *)(a1 + 204) == 1 )
      sub_86D900(*(unsigned int **)a1, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
    else
      sub_86D900(v2, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
    v4 = sub_868BC0((__int64)v2);
    *(_QWORD *)(a1 + 304) = v4;
    v5 = v4;
    v6 = *(_DWORD *)(a1 + 204);
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v17 = nullptr;
      sub_876A60(*(unsigned int **)a1);
      v18 = sub_86E080(v2, 3, 2, 0, 13, 0);
      v19 = *(_DWORD *)(a1 + 204);
      v20 = v18;
      if ( (unsigned int)(v19 - 1) <= 1 )
      {
        v31 = sub_86E080(v2, 0, 1, 0, 127, 13);
        v19 = *(_DWORD *)(a1 + 204);
        v17 = v31;
      }
      sub_86E120((const double *)a1, v19, (double *)&v34, 0);
      for ( i = v34; i; i = (__int64 *)i[1] )
      {
        v22 = *i;
        if ( *i && v5 )
        {
          *(_QWORD *)(v22 + 16) &= ~1uLL;
          *(_QWORD *)(v22 + 24) = v5;
        }
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 1 )
        goto LABEL_45;
    }
    else
    {
      if ( v6 != 2 )
      {
        sub_871850(a1, *(_BYTE *)(a1 + 216), *(_BYTE *)(a1 + 216));
        sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        if ( *(_DWORD *)(a1 + 168) == 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 1 )
            goto LABEL_11;
        }
        else
        {
          if ( !*v2 )
          {
            v2[36] = 0;
            v29 = sub_867CC0((__int64)v2, 1u, 2, 0, 13, 0);
            if ( v29 )
              *v29 = 59;
          }
          sub_86B2A0(v2, 4, 2, 13, 0, 2);
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 1 )
          {
LABEL_11:
            v7 = sub_868BC0((__int64)v2);
            if ( !v3 || !v7 )
              goto LABEL_14;
            goto LABEL_13;
          }
        }
        v20 = nullptr;
        v17 = sub_868C70((__int64)v2, 36);
        sub_868BC0((__int64)v2);
        goto LABEL_52;
      }
      v20 = nullptr;
      sub_871850(a1, 0xDu, 0xAu);
      if ( *(_DWORD *)(a1 + 168) != 1 )
        v20 = sub_86E080(v2, 3, 2, 0, 13, 0);
      sub_86B8E0(v2, 33, 1, 0, 130, 0);
      sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
      v24 = sub_86E080(v2, 1, 1, 0, 127, 13);
      v17 = v24;
      if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 1 )
        goto LABEL_45;
      if ( v24 )
      {
LABEL_52:
        v25 = sub_86E080(v2, 3, 2, 0, 13, 0);
        sub_86B8E0(v2, 33, 1, 0, 130, 0);
        if ( !*v2 )
        {
          v2[36] = 0;
          v26 = sub_867CC0((__int64)v2, 0x11u, 127, 10, 1, 0);
          if ( v26 )
            v26[1] |= 0x38u;
        }
        sub_870770((__int64)v2, 32, 1, 0);
        sub_86D900(v2, 0x40u, 2, 0, 2, 0, 1u, 0);
        v27 = sub_868BC0((__int64)v2);
        if ( v27 && v25 )
        {
          v25[2] &= ~1uLL;
          v25[3] = v27;
        }
        v28 = sub_868BC0((__int64)v2);
        if ( v28 && v17 )
        {
          v17[2] &= ~1uLL;
          v17[3] = v28;
        }
LABEL_45:
        if ( v20 )
        {
          v23 = sub_868BC0((__int64)v2);
          if ( v23 )
          {
            v20[2] &= ~1uLL;
            v20[3] = v23;
          }
        }
        goto LABEL_11;
      }
    }
    v32 = sub_868C70((__int64)v2, 36);
    v33 = sub_868BC0((__int64)v2);
    if ( v33 && v17 )
    {
      v17[2] &= ~1uLL;
      v17[3] = v33;
    }
    v17 = v32;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    sub_86B8E0(v2, 32, 4, 0, 137, 8);
    sub_86B8E0(v2, 32, 1, 0, 137, 16);
    v3 = sub_86E080(v2, 5, 2, 0, 4, 0);
    sub_86D900(v2, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
    if ( !*v2 )
    {
      v2[36] = 0;
      v30 = sub_867CC0((__int64)v2, 1u, 2, 0, 1, 0);
      if ( v30 )
        *v30 = 59;
    }
    sub_870770((__int64)v2, 32, 1, 1);
    sub_86D900(v2, 0x42u, 2, 0, 2, 0, 1u, 0);
    sub_8735E0(
      a1,
      1,
      *(_DWORD *)(a1 + 216),
      *(_DWORD *)(a1 + 216),
      0,
      BYTE1(*(_DWORD *)(a1 + 216)),
      BYTE1(*(_DWORD *)(a1 + 216)));
    sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 2);
  }
  else
  {
    v9 = sub_86E080(v2, 3, 2, 0, 13, 0);
    sub_86B8E0(v2, 32, 4, 0, 137, 8);
    sub_86B8E0(v2, 32, 1, 0, 137, 16);
    v3 = sub_86E080(v2, 5, 2, 0, 4, 0);
    sub_86D900(v2, 0x40u, 1, 0, 1, 0, 0x7Fu, 2);
    if ( !*v2 )
    {
      v2[36] = 0;
      v10 = sub_867CC0((__int64)v2, 1u, 2, 0, 1, 0);
      if ( v10 )
        *v10 = 59;
    }
    sub_870770((__int64)v2, 32, 4, 3);
    sub_86D900(v2, 0x42u, 2, 0, 2, 0, 4u, 0);
    v11 = sub_868BC0((__int64)v2);
    sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
    v12 = sub_86E080(v2, 3, 2, 0, 13, 0);
    sub_86B8E0(v2, 33, 1, 0, 130, -2);
    sub_86B8E0(v2, 33, 4, 0, 130, -1);
    v13 = sub_86E080(v2, 1, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
    if ( v13 && v11 )
    {
      v13[2] &= ~1uLL;
      v13[3] = v11;
    }
    v14 = sub_86E080(v2, 1, 4, 0, 127, *(unsigned __int8 *)(a1 + 216));
    if ( v14 && v11 )
    {
      v14[2] &= ~1uLL;
      v14[3] = v11;
    }
    v15 = sub_868BC0((__int64)v2);
    if ( v15 && v12 )
    {
      v12[2] &= ~1uLL;
      v12[3] = v15;
    }
    v16 = sub_868BC0((__int64)v2);
    if ( v9 && v16 )
    {
      v9[2] &= ~1uLL;
      v9[3] = v16;
    }
  }
  v7 = sub_868BC0((__int64)v2);
  if ( v7 && v3 )
  {
LABEL_13:
    v3[2] &= ~1uLL;
    v3[3] = v7;
  }
LABEL_14:
  if ( *(_DWORD *)(a1 + 100) )
    return sub_86B8E0(v2, 32, 13, 0, 3, 0);
  else
    return v35 - __readfsqword(0x28u);
}
