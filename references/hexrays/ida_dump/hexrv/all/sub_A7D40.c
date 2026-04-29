__int64 __fastcall sub_A7D40(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  char v4; // al
  _DWORD *v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 n; // [rsp+8h] [rbp-168h]
  char v25; // [rsp+20h] [rbp-150h]
  signed int v26; // [rsp+34h] [rbp-13Ch]
  char v27; // [rsp+34h] [rbp-13Ch]
  __int64 v28; // [rsp+40h] [rbp-130h]
  _BYTE v29[4]; // [rsp+60h] [rbp-110h] BYREF
  int v30; // [rsp+64h] [rbp-10Ch]
  _BYTE v31[16]; // [rsp+70h] [rbp-100h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+98h] [rbp-D8h]
  __int64 v35[2]; // [rsp+B0h] [rbp-C0h] BYREF
  void *src; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-A8h]
  __int64 v38[2]; // [rsp+E0h] [rbp-90h] BYREF
  void *v39; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-78h]
  __int64 v41; // [rsp+110h] [rbp-60h] BYREF
  __int64 v42; // [rsp+118h] [rbp-58h]
  __int64 v43; // [rsp+120h] [rbp-50h] BYREF
  __int128 v44; // [rsp+128h] [rbp-48h]
  unsigned __int64 v45; // [rsp+138h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  if ( (int)a2[17] > 4 )
    return 0;
  v3 = *a2;
  if ( (_DWORD)v3 == 4 )
    return 0;
  if ( (_DWORD)v3 == 62 )
    return 0;
  if ( !(unsigned __int8)sub_329AB0(v3) )
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
    v17 = a2[10];
    if ( v5[15] == v17 || v17 == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1184LL) )
      return 0;
  }
  if ( !sub_9C9C0((__int64)a2) )
    return 0;
  sub_11F580(v29, a2 + 16);
  v6 = sub_12D270(v5, a1, a2, v29, (unsigned int)(2 * v30), 0, 0);
  if ( (_BYTE)v6 )
  {
    v32[0] = 0;
    v32[1] = 0;
    v33 = 0;
    v34 = 0;
    sub_11F9E0(a1, v32, v29, 1, 4294901760LL);
    v28 = sub_124C90(a1, (unsigned int)v32, *((_QWORD *)a2 + 2), 0, 0, 0, 257);
    if ( !v28 || !sub_9C9C0(v28) || (v26 = sub_119D80(v28), (int)a2[17] >= v26) )
    {
      v6 = 0;
      goto LABEL_38;
    }
    sub_11F580(v31, v28 + 64);
    if ( *(_DWORD *)(v28 + 68) > v26 )
    {
      v6 = sub_123390(v31, v5, (unsigned int)v26, 0);
      if ( !(_BYTE)v6 )
      {
LABEL_37:
        sub_1188E0(v31);
LABEL_38:
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
        }
        qfree(v32[0]);
        goto LABEL_41;
      }
    }
    v35[0] = 0;
    v35[1] = 0;
    src = nullptr;
    v37 = 0;
    sub_11F9E0(a1, v35, v31, 1, 4294901760LL);
    sub_1201C0(&v41, a1, a2, 1);
    sub_602C0(v35, &v41, v7, v8, v9, v10);
    sub_312B60(&src, &v43);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    qfree(v41);
    if ( v30 <= v5[20] || (unsigned __int8)sub_9DE50(v32, v35) )
    {
      sub_5FC80(v38, (__int64)v35);
      v11 = v37;
      v39 = nullptr;
      v40 = 0;
      if ( (_QWORD)v37 )
      {
        n = 16 * v37;
        v39 = (void *)qalloc_or_throw(16 * v37);
        *((_QWORD *)&v40 + 1) = v11;
        memcpy(v39, src, n);
        *(_QWORD *)&v40 = v11;
      }
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      sub_11F9E0(a1, &v41, a2 + 16, 1, 4294901760LL);
      sub_602C0(v38, &v41, v12, v13, v14, v15);
      sub_312B60(&v39, &v43);
      if ( sub_A58D0(a1, v38, *((_QWORD *)a2 + 1), 0, 1u) )
      {
LABEL_24:
        sub_8F680(&v41);
        sub_8F680(v38);
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = 0;
        sub_11F9E0(a1, &v41, a2 + 16, 1, 4294901760LL);
        sub_5FF00(&v41, v35);
        sub_311BB0(&v43, &src);
        v6 = sub_9DE50(&v41, v32);
        if ( !(_BYTE)v6 )
          goto LABEL_32;
        v16 = v5[22];
        if ( v30 == v16 )
          goto LABEL_49;
        v25 = v29[0] == 6;
        if ( v30 < v16 )
        {
          while ( 1 )
          {
            sub_11F580(v38, v29);
            v27 = sub_12D270(v5, a1, a2, v29, (unsigned int)(2 * v30), 0, 0);
            if ( !v27 )
              break;
            sub_11F9E0(a1, v32, v29, 1, 4294901760LL);
            if ( !(unsigned __int8)sub_604A0(v32, &v41) || (v25 = sub_312E40(&v43, &v33)) == 0 )
            {
              sub_120CC0(v29);
              goto LABEL_30;
            }
            sub_1188E0(v38);
            if ( v30 >= v5[22] )
              goto LABEL_49;
          }
          v27 = v25;
LABEL_30:
          sub_1188E0(v38);
          v25 = v27;
        }
        if ( v25 )
        {
LABEL_49:
          sub_127230(a2, v5, 9, 0xFFFFFFFFLL, 1);
          sub_120CC0(a2 + 16);
          *a2 = 9;
          sub_9C950((__int64)(a2 + 16), (__int64)v5);
          sub_9CDC0((__int64)v5, (__int64)a2, *(_DWORD *)(v28 + 4));
          v19 = *(_DWORD *)(a1 + 24);
          BYTE1(v19) &= ~2u;
          LOBYTE(v19) = v19 | 0x80;
          *(_DWORD *)(a1 + 24) = v19;
        }
        else
        {
LABEL_32:
          v6 = 0;
        }
        sub_8F680(&v41);
        goto LABEL_34;
      }
      if ( (!(unsigned __int8)sub_60500(v38) || (_QWORD)v40)
        && *(_DWORD *)(v28 + 68) <= v26
        && !(unsigned __int8)sub_11BCB0(a2 + 16, v5) )
      {
        sub_602C0(v35, &v41, v20, v21, v22, v23);
        sub_312B60(&src, &v43);
        goto LABEL_24;
      }
      sub_8F680(&v41);
      sub_8F680(v38);
    }
    v6 = 0;
LABEL_34:
    if ( src )
    {
      *(_QWORD *)&v37 = 0;
      qfree(src);
    }
    qfree(v35[0]);
    goto LABEL_37;
  }
LABEL_41:
  sub_1188E0(v29);
  return v6;
}
