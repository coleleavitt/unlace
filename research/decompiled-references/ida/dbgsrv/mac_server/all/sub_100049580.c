/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049580
// Address: 0x0000000100049580

//----- (0000000100049580) ----------------------------------------------------
__int64 __fastcall sub_100049580(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // edx
  __int64 v9; // r12
  void *v10; // r14
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  int v13; // r14d
  __int64 i; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  bool v18; // cc
  size_t v19; // rax
  void *v20; // rdx
  void *v21; // rax
  void *v22; // r14
  void *v23; // rcx
  void *v24; // rax
  char *v25; // r12
  _QWORD *v26; // rdi
  __int64 v27; // rax
  bool v28; // cf
  __int64 v29; // rax
  __int64 v30; // r13
  void *v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  int *v34; // rcx
  __int64 v35; // rcx
  const char *v36; // rax
  int v37; // eax
  unsigned int v38; // r15d
  unsigned int qerrno; // eax
  __int64 v40; // r14
  __int64 v42; // [rsp+0h] [rbp-E0h]
  size_t __len; // [rsp+8h] [rbp-D8h]
  __int64 *v44; // [rsp+10h] [rbp-D0h]
  __int128 v45; // [rsp+10h] [rbp-D0h]
  char v46; // [rsp+20h] [rbp-C0h]
  __int64 v47; // [rsp+28h] [rbp-B8h]
  void *__src; // [rsp+30h] [rbp-B0h]
  void *v49; // [rsp+38h] [rbp-A8h]
  unsigned int v50; // [rsp+44h] [rbp-9Ch]
  void *__dst[5]; // [rsp+70h] [rbp-70h] BYREF
  char v52; // [rsp+98h] [rbp-48h]
  __int128 v53; // [rsp+A0h] [rbp-40h]

  __dst[4] = nullptr;
  v52 = 0;
  v53 = 0;
  memset(__dst, 0, 26);
  v44 = (__int64 *)(a1 + 56);
  v42 = a1 + 32;
  v46 = 0;
  while ( 2 )
  {
    v3 = *(_BYTE **)(a1 + 8);
LABEL_3:
    switch ( *v3++ )
    {
      case 0:
        v4 = *(_QWORD *)(a1 + 64);
        if ( v4 < 2 )
          goto LABEL_54;
        v5 = *(_QWORD *)(a1 + 56);
        v6 = 56 * v4;
        *(_QWORD *)a1 = *(_QWORD *)(v5 + v6 - 32);
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 + v6 - 24);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v5 + v6 - 8);
        sub_100044BA0(v44);
        continue;
      case 9:
      case 0xA:
      case 0x20:
        *(_QWORD *)(a1 + 8) = v3;
        goto LABEL_3;
      case 0x23:
        if ( *v3 != 35 )
          goto LABEL_54;
        v7 = *(unsigned __int16 *)(a2 + 24);
        if ( v7 > 8 )
        {
          v9 = 0;
          v10 = nullptr;
          v11 = 0;
        }
        else
        {
          v8 = 392;
          v9 = 0;
          v10 = nullptr;
          v11 = 0;
          if ( _bittest(&v8, v7) )
          {
            v10 = *(void **)(a1 + 32);
            v11 = *(_QWORD *)(a1 + 40);
            v9 = *(_QWORD *)(a1 + 48);
            *(_OWORD *)v42 = 0;
            *(_QWORD *)(v42 + 16) = 0;
          }
        }
        v47 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v3 + 1;
        v12 = sub_100048770(a1, (__int64)__dst, *(_DWORD *)(a1 + 64), nullptr);
        v49 = v10;
        if ( v12 )
        {
          v13 = 1;
          v50 = v12;
          goto LABEL_38;
        }
        v13 = 3;
        switch ( LOWORD(__dst[3]) )
        {
          case 1u:
            goto LABEL_38;
          case 0x3Bu:
            if ( (*(_BYTE *)(a1 + 572) & 8) != 0 )
              goto LABEL_21;
            goto LABEL_37;
          case 0x2Fu:
            if ( *(_WORD *)(a2 + 24) != 47 || (*(_BYTE *)(a1 + 572) & 4) == 0 )
            {
LABEL_37:
              *(_QWORD *)(a1 + 16) = v47;
              *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24);
              goto LABEL_38;
            }
LABEL_21:
            for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
            {
              v15 = *(_QWORD *)(a1 + 56);
              v16 = 56 * i;
              *(_QWORD *)a1 = *(_QWORD *)(v15 + v16 - 32);
              *(_QWORD *)(a1 + 8) = *(_QWORD *)(v15 + v16 - 24);
              *(_DWORD *)(a1 + 80) = *(_DWORD *)(v15 + v16 - 8);
              sub_100044BA0(v44);
            }
            *(_WORD *)(a2 + 24) = 1;
            v50 = 0;
LABEL_24:
            v13 = 1;
            goto LABEL_38;
        }
        __src = *(void **)(a1 + 24);
        if ( (unsigned int)LOWORD(__dst[3]) - 6 < 3 )
          goto LABEL_28;
        if ( LOWORD(__dst[3]) != 2 )
        {
          if ( LOWORD(__dst[3]) == 3 )
          {
LABEL_28:
            if ( !__src )
              goto LABEL_37;
            v17 = *(_QWORD *)(a1 + 8);
            v18 = v17 <= (unsigned __int64)__src;
            v19 = v17 - (_QWORD)__src;
            if ( v18 )
              goto LABEL_37;
            __dst[1] = nullptr;
            __len = v19;
            v20 = (void *)(v19 + 1);
            v21 = __dst[0];
            if ( __dst[2] < v20 )
            {
              v22 = v20;
              v21 = qvector_reserve((__int64)__dst, __dst[0], (unsigned __int64)v20, 1u);
              __dst[0] = v21;
              v20 = v22;
            }
            __dst[1] = v20;
            *((_BYTE *)v21 + __len) = 0;
            memmove(__dst[0], __src, __len);
          }
          else if ( LOWORD(__dst[3]) <= 0x7Fu )
          {
            goto LABEL_37;
          }
        }
        if ( *(_WORD *)(a2 + 24) == 2 || *(_WORD *)(a2 + 24) > 0x7Fu )
        {
          v23 = v49;
        }
        else
        {
          if ( v11 <= 1 )
          {
            v50 = set_qerrno();
            goto LABEL_24;
          }
          v24 = *(void **)a2;
          *(_QWORD *)a2 = v49;
          *(_QWORD *)(a2 + 8) = v11;
          *(_QWORD *)(a2 + 16) = v9;
          v23 = v24;
        }
        v25 = nullptr;
        if ( __dst[1] )
          v25 = (char *)__dst[1] - 1;
        v49 = v23;
        if ( __dst[1] > (void *)1 )
        {
          v26 = (_QWORD *)a2;
          v27 = *(_QWORD *)(a2 + 8);
          v28 = v27 == 0;
          v29 = v27 - 1;
          v30 = 0;
          if ( !v28 )
            v30 = v29;
          v31 = *(void **)a2;
          v32 = (unsigned __int64)&v25[v30 + 1];
          if ( *(_QWORD *)(a2 + 16) < v32 )
          {
            v31 = qvector_reserve(a2, *(void **)a2, v32, 1u);
            v26 = (_QWORD *)a2;
            *(_QWORD *)a2 = v31;
            v32 = (unsigned __int64)&v25[v30 + 1];
          }
          v26[1] = v32;
          v25[v30 + (_QWORD)v31] = 0;
          memcpy((void *)(*v26 + v30), __dst[0], (size_t)v25);
        }
        *(_QWORD *)(a1 + 16) = v47;
        v46 = 1;
        v13 = 0;
LABEL_38:
        if ( v49 )
          qfree(v49);
        if ( !v13 )
          continue;
        if ( v13 != 3 )
        {
          v38 = v50;
          goto LABEL_72;
        }
LABEL_54:
        if ( (v46 & 1) == 0 )
          goto LABEL_71;
        v33 = *(_QWORD *)(a2 + 8);
        if ( v33 )
          v34 = *(int **)a2;
        else
          v34 = &dword_1000AC1CC;
        v35 = *(char *)v34;
        if ( v35 >= 0 && (_DefaultRuneLocale.__runetype[v35] & 0x400) != 0 )
        {
LABEL_62:
          if ( v33 )
            v36 = *(const char **)a2;
          else
            v36 = _s1;
          v45 = *(_OWORD *)a1;
          v40 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v36;
          *(_QWORD *)a1 = v36;
          v38 = sub_100048770(a1, a2, 0, nullptr);
          *(_OWORD *)a1 = v45;
          *(_QWORD *)(a1 + 16) = v40;
          if ( v38 )
            goto LABEL_72;
          goto LABEL_71;
        }
        if ( !v33 )
        {
          if ( (_BYTE)dword_1000AC1CC != 46 )
            goto LABEL_65;
          goto LABEL_62;
        }
        if ( **(_BYTE **)a2 == 46 )
          goto LABEL_62;
LABEL_65:
        v37 = sub_1000484B0(a1, 1, a2);
        if ( v37 != -1 )
        {
          if ( v37 == 1 )
          {
            v38 = sub_100048770(a1, a2, 0, nullptr);
            if ( *(_QWORD *)(a1 + 64) != 0 && v38 == 0 )
            {
              qerrno = sub_100049580(a1, a2);
              goto LABEL_76;
            }
            goto LABEL_72;
          }
LABEL_71:
          v38 = 0;
          goto LABEL_72;
        }
        qerrno = get_qerrno();
LABEL_76:
        v38 = qerrno;
LABEL_72:
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        return v38;
      default:
        goto LABEL_54;
    }
  }
}
// 100049B26: variable 'v50' is possibly undefined
// 1000AC1CC: using guessed type int dword_1000AC1CC;
