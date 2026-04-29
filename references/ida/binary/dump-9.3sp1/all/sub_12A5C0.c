__int64 __fastcall sub_12A5C0(__int128 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned __int8 v6; // cl
  __int64 v8; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v6 = **((_BYTE **)&a1 + 1);
  v26 = __readfsqword(0x28u);
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  if ( v6 == 10 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v13 = *(_DWORD *)(v12 + 20);
    if ( (a4 & 2) == 0 )
      v13 = *(_DWORD *)(v12 + 16);
    if ( v13 <= 0 )
      goto LABEL_16;
    if ( (_QWORD *)v12 == v21 )
    {
      HIDWORD(v21[0]) = v13;
      goto LABEL_16;
    }
    sub_11CDA0((__int64)v21);
    sub_123A40((__int64)v21, (unsigned __int8 *)v12, v14, v15);
    HIDWORD(v21[0]) = v13;
    v6 = v21[0];
    *((_QWORD *)&a1 + 1) = v21;
  }
  if ( v6 > 0xFu )
  {
    if ( !under_debugger )
      sub_383060(50298);
    BUG();
  }
  if ( ((1LL << v6) & 0x3F8D) != 0 )
    goto LABEL_16;
  if ( ((1LL << v6) & 0xC062) != 0 )
  {
    v10 = (a4 & 4) == 0;
    if ( (a4 & 2) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v22 = *a2;
        v11 = sub_129440(a1, (__int64)&v22, 0);
        v8 = v11;
        if ( !v11 )
          goto LABEL_6;
        if ( !a3 || *a2 == v11 )
        {
LABEL_44:
          *a2 = v22;
          goto LABEL_6;
        }
        while ( a3 != v11 )
        {
          v11 = *(_QWORD *)(v11 + 8);
          if ( *a2 == v11 || !v11 )
            goto LABEL_44;
        }
LABEL_16:
        v8 = 0;
        goto LABEL_6;
      }
      v16 = *((_QWORD *)&a1 + 1);
      *((_QWORD *)&a1 + 1) = &v22;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      sub_123EA0(a1, v16, 0, 0xFFFF0000);
      v17 = sub_A9AA0(a1, &v22, *(_QWORD *)(*a2 + 8), a3, v10);
      v8 = v17;
      if ( v17 )
        *a2 = v17;
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
LABEL_26:
      qfree(v22);
      goto LABEL_6;
    }
    v18 = *((_QWORD *)&a1 + 1);
    *((_QWORD *)&a1 + 1) = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    sub_123EA0(a1, v18, 0, 0xFFFF0000);
    v19 = *a2;
    if ( (a4 & 1) != 0 )
    {
      v8 = sub_A9D90(a1, &v22, *(_QWORD *)(v19 + 8), a3, v10);
    }
    else
    {
      v20 = sub_124CC0(a1, &v22, v19, 0, 0, v10);
      v8 = v20;
      if ( !v20 )
        goto LABEL_41;
      if ( a3 && *a2 != v20 )
      {
        while ( a3 != v20 )
        {
          v20 = *(_QWORD *)(v20 + 8);
          if ( *a2 == v20 || !v20 )
            goto LABEL_40;
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree(v24);
        }
        qfree(v22);
        goto LABEL_16;
      }
    }
LABEL_40:
    *a2 = v8;
LABEL_41:
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    goto LABEL_26;
  }
  v8 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
LABEL_6:
  sub_11CDA0((__int64)v21);
  return v8;
}
