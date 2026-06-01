__int64 __fastcall sub_AC200(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  char v4; // al
  _DWORD *v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 n; // [rsp+8h] [rbp-168h]
  char v26; // [rsp+20h] [rbp-150h]
  signed int v27; // [rsp+34h] [rbp-13Ch]
  char v28; // [rsp+34h] [rbp-13Ch]
  __int64 v29; // [rsp+40h] [rbp-130h]
  _BYTE v30[4]; // [rsp+60h] [rbp-110h] BYREF
  int v31; // [rsp+64h] [rbp-10Ch]
  _BYTE v32[16]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v33[2]; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+98h] [rbp-D8h]
  __int64 v36[2]; // [rsp+B0h] [rbp-C0h] BYREF
  void *src; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-A8h]
  __int64 v39[2]; // [rsp+E0h] [rbp-90h] BYREF
  void *v40; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v41; // [rsp+F8h] [rbp-78h]
  __int64 v42; // [rsp+110h] [rbp-60h] BYREF
  __int64 v43; // [rsp+118h] [rbp-58h]
  __int64 v44; // [rsp+120h] [rbp-50h] BYREF
  __int128 v45; // [rsp+128h] [rbp-48h]
  unsigned __int64 v46; // [rsp+138h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  if ( (int)a2[17] > 4 )
    return 0;
  v3 = *a2;
  if ( (_DWORD)v3 == 4 )
    return 0;
  if ( (_DWORD)v3 == 62 )
    return 0;
  if ( !(unsigned __int8)sub_32ED70(v3) )
    return 0;
  if ( *((_BYTE *)a2 + 64) == 8 || *((_BYTE *)a2 + 64) == 14 )
    return 0;
  if ( !*((_QWORD *)a2 + 2) )
    return 0;
  v4 = *((_BYTE *)a2 + 32);
  if ( v4 == 10 )
    return 0;
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v4 == 1 )
  {
    v18 = a2[10];
    if ( v5[15] == v18 || v18 == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1184LL) )
      return 0;
  }
  if ( !sub_A0E80(a2) )
    return 0;
  sub_123A40(v30);
  v6 = sub_131730(v5, a1, a2, v30, (unsigned int)(2 * v31), 0, 0);
  if ( (_BYTE)v6 )
  {
    v33[0] = 0;
    v33[1] = 0;
    v34 = 0;
    v35 = 0;
    sub_123EA0(a1, v33, v30, 1, 4294901760LL);
    v29 = sub_129150(a1, (unsigned int)v33, *((_QWORD *)a2 + 2), 0, 0, 0, 257);
    if ( !v29 || !sub_A0E80((_BYTE *)v29) || (v27 = sub_11E240(v29), (int)a2[17] >= v27) )
    {
      v6 = 0;
      goto LABEL_38;
    }
    sub_123A40(v32);
    if ( *(_DWORD *)(v29 + 68) > v27 )
    {
      v6 = sub_127850(v32, v5, (unsigned int)v27, 0);
      if ( !(_BYTE)v6 )
      {
LABEL_37:
        sub_11CDA0(v32);
LABEL_38:
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        qfree(v33[0]);
        goto LABEL_41;
      }
    }
    v36[0] = 0;
    v36[1] = 0;
    src = nullptr;
    v38 = 0;
    sub_123EA0(a1, v36, v32, 1, 4294901760LL);
    sub_124680(&v42, a1, a2, 1);
    sub_64640(v36, &v42, v7, v8, v9, v10);
    sub_317C60(&src, &v44);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    qfree(v42);
    if ( v31 <= v5[20] || (unsigned __int8)sub_A2310(v33, v36) )
    {
      sub_64000(v39, (__int64)v36);
      v12 = v38;
      v40 = nullptr;
      v41 = 0;
      if ( (_QWORD)v38 )
      {
        n = 16 * v38;
        v40 = (void *)qalloc_or_throw(16 * v38, (__int64)v36, 16 * v38, v11);
        *((_QWORD *)&v41 + 1) = v12;
        memcpy(v40, src, n);
        *(_QWORD *)&v41 = v12;
      }
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      sub_123EA0(a1, &v42, a2 + 16, 1, 4294901760LL);
      sub_64640(v39, &v42, v13, v14, v15, v16);
      sub_317C60(&v40, &v44);
      if ( sub_A9D90(a1, v39, *((_QWORD *)a2 + 1), 0, 1u) )
      {
LABEL_24:
        sub_93B40(&v42);
        sub_93B40(v39);
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        sub_123EA0(a1, &v42, a2 + 16, 1, 4294901760LL);
        sub_64280(&v42, v36);
        sub_316CB0(&v44, &src);
        v6 = sub_A2310(&v42, v33);
        if ( !(_BYTE)v6 )
          goto LABEL_32;
        v17 = v5[22];
        if ( v31 == v17 )
          goto LABEL_49;
        v26 = v30[0] == 6;
        if ( v31 < v17 )
        {
          while ( 1 )
          {
            sub_123A40(v39);
            v28 = sub_131730(v5, a1, a2, v30, (unsigned int)(2 * v31), 0, 0);
            if ( !v28 )
              break;
            sub_123EA0(a1, v33, v30, 1, 4294901760LL);
            if ( !(unsigned __int8)sub_64820(v33, &v42) || (v26 = sub_317F40(&v44, &v34)) == 0 )
            {
              sub_125180(v30);
              goto LABEL_30;
            }
            sub_11CDA0(v39);
            if ( v31 >= v5[22] )
              goto LABEL_49;
          }
          v28 = v26;
LABEL_30:
          sub_11CDA0(v39);
          v26 = v28;
        }
        if ( v26 )
        {
LABEL_49:
          sub_12B6F0(a2, v5, 9, 0xFFFFFFFFLL, 1);
          sub_125180(a2 + 16);
          *a2 = 9;
          sub_A0E10((__int64)(a2 + 16), (__int64)v5);
          sub_A1280((__int64)v5, (__int64)a2, *(_DWORD *)(v29 + 4));
          v20 = *(_DWORD *)(a1 + 24);
          BYTE1(v20) &= ~2u;
          LOBYTE(v20) = v20 | 0x80;
          *(_DWORD *)(a1 + 24) = v20;
        }
        else
        {
LABEL_32:
          v6 = 0;
        }
        sub_93B40(&v42);
        goto LABEL_34;
      }
      if ( (!(unsigned __int8)sub_64880(v39) || (_QWORD)v41)
        && *(_DWORD *)(v29 + 68) <= v27
        && !(unsigned __int8)sub_120170(a2 + 16, v5) )
      {
        sub_64640(v36, &v42, v21, v22, v23, v24);
        sub_317C60(&src, &v44);
        goto LABEL_24;
      }
      sub_93B40(&v42);
      sub_93B40(v39);
    }
    v6 = 0;
LABEL_34:
    if ( src )
    {
      *(_QWORD *)&v38 = 0;
      qfree((__int64)src);
    }
    qfree(v36[0]);
    goto LABEL_37;
  }
LABEL_41:
  sub_11CDA0(v30);
  return v6;
}
