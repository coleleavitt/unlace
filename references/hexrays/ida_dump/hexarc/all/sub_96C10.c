__int64 __fastcall sub_96C10(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  char v7; // r14
  int v8; // eax
  __int64 v9; // rax
  int v10; // [rsp+10h] [rbp-148h]
  _DWORD *v11; // [rsp+18h] [rbp-140h]
  __int64 v12; // [rsp+28h] [rbp-130h]
  _QWORD v13[2]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v15; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-F0h]
  __int64 v17; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+78h] [rbp-E0h]
  __int64 v19; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+98h] [rbp-C0h]
  __int64 v21; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-B0h]
  _BYTE v23[32]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v24[2]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD v25[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v26[11]; // [rsp+100h] [rbp-58h] BYREF

  v26[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v2 = 0;
  v11 = *(_DWORD **)(a2 + 40);
  if ( *v11 == 13 )
  {
    v10 = *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68);
    sub_11DFC0(v13, a1, v11, 1);
    v24[1] = 0;
    v24[0] = 0xFFFFFFFF00000000LL;
    v25[0] = 0xFFFFFFFF00000000LL;
    v26[0] = 0xFFFFFFFF00000000LL;
    v25[1] = 0;
    v26[1] = 0;
    sub_329320(v23, -1);
    v4 = *(_QWORD *)(a2 + 16);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        sub_121360(&v19, a1, v4, 1);
        if ( (unsigned __int8)sub_5E200(&v19, v13) || (unsigned __int8)sub_3110F0(&v21, v14) )
          break;
        if ( *(_DWORD *)v4 == 13 && *(_DWORD *)(v4 + 68) == v10 )
        {
          sub_11ECE0(v23, v4);
          if ( (unsigned __int8)sub_12B980(a1, v4, v23, a2, v11) )
          {
            if ( v21 )
            {
              *(_QWORD *)&v22 = 0;
              qfree(v21);
            }
            v5 = a2;
            qfree(v19);
            v12 = v4;
            goto LABEL_36;
          }
        }
        sub_5DD00(&v15, &v19);
        sub_30F930(&v17, &v21);
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
        qfree(v19);
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_10;
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21);
      }
      qfree(v19);
LABEL_10:
      v16 = 0;
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
        v17 = 0;
        *((_QWORD *)&v18 + 1) = 0;
      }
    }
    v5 = *(_QWORD *)(a2 + 8);
    if ( !v5 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_DWORD *)v5 == 13 && *(_DWORD *)(v5 + 68) == v10 )
      {
        sub_11ECE0(v23, v5);
        if ( (unsigned __int8)sub_12B980(a1, v5, v23, a2, v11) )
          break;
      }
      sub_121360(&v19, a1, v5, 1);
      if ( (unsigned __int8)sub_5E200(&v19, v13) || (unsigned __int8)sub_3110F0(&v21, v14) )
      {
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
        qfree(v19);
        goto LABEL_19;
      }
      sub_5DD00(&v15, &v19);
      sub_30F930(&v17, &v21);
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21);
      }
      qfree(v19);
      v5 = *(_QWORD *)(v5 + 8);
      if ( !v5 )
        goto LABEL_19;
    }
    if ( !a2 )
      goto LABEL_19;
    v12 = v5;
    v4 = a2;
LABEL_36:
    if ( (*(_BYTE *)(v4 + 6) & 0x20) != 0 || (*(_BYTE *)(v5 + 6) & 0x20) != 0 )
    {
LABEL_19:
      v2 = 0;
LABEL_20:
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      qfree(v15);
      sub_1166E0(v26);
      sub_1166E0(v25);
      sub_1166E0(v24);
      if ( v14[0] )
      {
        v14[1] = 0;
        qfree(v14[0]);
      }
      qfree(v13[0]);
      return v2;
    }
    v19 = 0;
    v22 = 0;
    v20 = 0;
    v21 = 0;
    sub_121920(a1, &v19, v5 + 64, 0);
    if ( (unsigned __int8)sub_5E200(&v15, &v19) || (unsigned __int8)sub_3110F0(&v17, &v21) )
    {
      v20 = 0;
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21);
        v21 = 0;
        *((_QWORD *)&v22 + 1) = 0;
      }
      sub_121920(a1, &v19, v4 + 64, 0);
      if ( (unsigned __int8)sub_5E200(&v15, &v19) || (unsigned __int8)sub_3110F0(&v17, &v21) )
        goto LABEL_42;
      v9 = v4;
      v4 = v5;
      v5 = v9;
    }
    sub_11EAC0(v24);
    sub_11EAC0(v25);
    sub_150B30(a1, v12, v26, a2, a2 + 64, 1);
    v6 = sub_8DDF0(a1, v5, v4, (__int64)v23, 0);
    v7 = v6;
    if ( v6 )
    {
      sub_11ECE0(v4, v23);
      if ( (v7 & 2) != 0 )
        sub_116EE0(v5);
      v8 = *(_DWORD *)(a1 + 24);
      BYTE1(v8) &= ~2u;
      LOBYTE(v8) = v8 | 0x80;
      *(_DWORD *)(a1 + 24) = v8;
      sub_116F10(v4, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
      sub_92C10(a1, v4);
      v2 = 1;
      goto LABEL_43;
    }
LABEL_42:
    v2 = 0;
LABEL_43:
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    qfree(v19);
    goto LABEL_20;
  }
  return v2;
}
