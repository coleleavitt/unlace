__int64 __fastcall sub_9D2D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  char v11; // r14
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-158h]
  int v15; // [rsp+8h] [rbp-150h]
  int v16; // [rsp+10h] [rbp-148h]
  int v17; // [rsp+10h] [rbp-148h]
  _DWORD *v18; // [rsp+18h] [rbp-140h]
  int v19; // [rsp+18h] [rbp-140h]
  __int64 v20; // [rsp+20h] [rbp-138h]
  __int64 v21; // [rsp+28h] [rbp-130h]
  __int64 v22[2]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v23[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v24; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-F0h]
  __int64 v26; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+78h] [rbp-E0h]
  __int64 v28; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-C0h]
  __int64 v30; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-B0h]
  _BYTE v32[32]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v35[11]; // [rsp+100h] [rbp-58h] BYREF

  v35[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v2 = 0;
  v18 = *(_DWORD **)(a2 + 40);
  if ( *v18 == 13 )
  {
    v16 = *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68);
    sub_124680(v22, a1, v18, 1);
    v33[1] = 0;
    v33[0] = 0xFFFFFFFF00000000LL;
    v34[0] = 0xFFFFFFFF00000000LL;
    v35[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    v35[1] = 0;
    sub_330970(v32, -1);
    v4 = *(_QWORD *)(a2 + 16);
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        sub_127A20(&v28, a1, v4, 1);
        if ( (unsigned __int8)sub_64780(&v28, v22) || (unsigned __int8)sub_318470(&v30, v23) )
          break;
        if ( *(_DWORD *)v4 == 13 && *(_DWORD *)(v4 + 68) == v16 )
        {
          sub_1253A0(v32, v4);
          if ( (unsigned __int8)sub_132040(a1, v4, v32, a2, v18) )
          {
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree(v30);
            }
            v5 = a2;
            qfree(v28);
            v21 = v4;
            goto LABEL_36;
          }
        }
        sub_64280(&v24, &v28);
        sub_316CB0(&v26, &v30);
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
        qfree(v28);
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_10;
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30);
      }
      qfree(v28);
LABEL_10:
      v25 = 0;
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
        v26 = 0;
        *((_QWORD *)&v27 + 1) = 0;
      }
    }
    v5 = *(_QWORD *)(a2 + 8);
    if ( !v5 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_DWORD *)v5 == 13 && *(_DWORD *)(v5 + 68) == v16 )
      {
        sub_1253A0(v32, v5);
        if ( (unsigned __int8)sub_132040(a1, v5, v32, a2, v18) )
          break;
      }
      sub_127A20(&v28, a1, v5, 1);
      if ( (unsigned __int8)sub_64780(&v28, v22) || (unsigned __int8)sub_318470(&v30, v23) )
      {
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
        qfree(v28);
        goto LABEL_19;
      }
      sub_64280(&v24, &v28);
      sub_316CB0(&v26, &v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30);
      }
      qfree(v28);
      v5 = *(_QWORD *)(v5 + 8);
      if ( !v5 )
        goto LABEL_19;
    }
    if ( !a2 )
      goto LABEL_19;
    v21 = v5;
    v4 = a2;
LABEL_36:
    if ( (*(_BYTE *)(v4 + 6) & 0x20) != 0 || (*(_BYTE *)(v5 + 6) & 0x20) != 0 )
    {
LABEL_19:
      v2 = 0;
LABEL_20:
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      qfree(v24);
      sub_11CDA0(v35);
      sub_11CDA0(v34);
      sub_11CDA0(v33);
      if ( v23[0] )
      {
        v23[1] = 0;
        qfree(v23[0]);
      }
      qfree(v22[0]);
      return v2;
    }
    v28 = 0;
    v31 = 0;
    v29 = 0;
    v30 = 0;
    sub_127FE0(a1, (__int64)&v28, v5 + 64, 0, v6, v7, a1, (int)v22, v16, (int)v18, (__int64)v32);
    if ( (unsigned __int8)sub_64780(&v24, &v28) || (unsigned __int8)sub_318470(&v26, &v30) )
    {
      v29 = 0;
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30);
        v30 = 0;
        *((_QWORD *)&v31 + 1) = 0;
      }
      sub_127FE0(v14, (__int64)&v28, v4 + 64, 0, v8, v9, v14, v15, v17, v19, v20);
      if ( (unsigned __int8)sub_64780(&v24, &v28) || (unsigned __int8)sub_318470(&v26, &v30) )
        goto LABEL_42;
      v13 = v4;
      v4 = v5;
      v5 = v13;
    }
    sub_125180(v33);
    sub_125180(v34);
    sub_1571F0(v14, v21, v35, a2, a2 + 64, 1);
    v10 = sub_944B0(v14, v5, v4, v20, 0);
    v11 = v10;
    if ( v10 )
    {
      sub_1253A0(v4, v20);
      if ( (v11 & 2) != 0 )
        sub_11D5A0(v5);
      v12 = *(_DWORD *)(v14 + 24);
      BYTE1(v12) &= ~2u;
      LOBYTE(v12) = v12 | 0x80;
      *(_DWORD *)(v14 + 24) = v12;
      sub_11D5D0(v4, *(_QWORD *)(*(_QWORD *)(v14 + 480) + 112LL));
      sub_992D0(v14, v4);
      v2 = 1;
      goto LABEL_43;
    }
LABEL_42:
    v2 = 0;
LABEL_43:
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
    qfree(v28);
    goto LABEL_20;
  }
  return v2;
}
