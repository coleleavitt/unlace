__int64 *__fastcall sub_185BD0(__int128 a1, __int64 a2, char a3, int a4, int a5)
{
  __int64 v6; // r13
  bool v7; // zf
  __int64 *i; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  char v13; // al
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-138h]
  __int64 *v18; // [rsp+8h] [rbp-130h]
  int v19; // [rsp+10h] [rbp-128h]
  int v20; // [rsp+10h] [rbp-128h]
  char v21; // [rsp+17h] [rbp-121h]
  int v22; // [rsp+18h] [rbp-120h]
  __int64 v23; // [rsp+18h] [rbp-120h]
  __int64 v24; // [rsp+20h] [rbp-118h]
  __int64 v25; // [rsp+28h] [rbp-110h]
  _QWORD v26[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-E0h]
  __int64 v30[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+88h] [rbp-B0h]
  __int64 v33[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-80h]
  __int64 v36; // [rsp+D0h] [rbp-68h] BYREF
  int v37; // [rsp+D8h] [rbp-60h]
  __int64 v38; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+F8h] [rbp-40h]

  v24 = *((_QWORD *)&a1 + 1);
  v6 = a1;
  v21 = a3;
  v40 = __readfsqword(0x28u);
  v7 = *(_BYTE *)a2 == 4;
  v29 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  if ( v7 )
  {
    *((_QWORD *)&a1 + 1) = v27;
    v18 = v27;
    sub_123EA0(a1, *(_QWORD *)(a2 + 8) + 48LL, 0, 0xFFFF0000);
  }
  else
  {
    sub_127FE0(a1, (__int64)v27, a2, 0, a4, a5, v17, (int)v27, v19, v22, *((__int64 *)&a1 + 1));
  }
  v25 = *(_QWORD *)(a1 + 64);
  v23 = *(_QWORD *)(v25 + 1504);
  v20 = 0;
  for ( i = (__int64 *)sub_1229A0(*(_QWORD *)(v24 + 8)); ; i = (__int64 *)sub_1229D0(*(_QWORD *)(v24 + 16)) )
  {
    v30[0] = 0;
    v30[1] = 0;
    v31 = 0;
    v32 = 0;
    if ( i )
      break;
LABEL_24:
    qfree((__int64)i);
    if ( v20 == 1 )
    {
      i = nullptr;
      goto LABEL_26;
    }
    v20 = 1;
  }
  while ( 1 )
  {
    v26[1] = 0;
    v26[0] = 0xFFFFFFFF00000000LL;
    sub_127A20((__int64)v33, v6, (__int64)i, 1, v9, v10);
    if ( (unsigned __int8)sub_184280((__int64)v26, v6, (__int64)i, 0, v21, (__m128i)0LL) )
      break;
    if ( *(_BYTE *)a2 != 4 )
      goto LABEL_12;
    sub_124680((__int64)&v36, v6, (__int64)i, 1u);
    if ( (unsigned __int8)sub_64780(&v36, v18) )
    {
      v14 = v38;
      if ( !v38 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v15 = sub_318470(&v38, &v28);
    v14 = v38;
    if ( v15 )
    {
      if ( !v38 )
      {
LABEL_35:
        qfree(v36);
LABEL_18:
        if ( v34 )
        {
          v35 = 0;
          qfree(v34);
        }
        qfree(v33[0]);
        sub_11CDA0((__int64)v26);
LABEL_21:
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        i = (__int64 *)v30[0];
        goto LABEL_24;
      }
LABEL_34:
      v39 = 0;
      qfree(v14);
      goto LABEL_35;
    }
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    qfree(v36);
LABEL_16:
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( (unsigned __int8)sub_64780(v33, v18) )
        goto LABEL_18;
      v13 = sub_318470(&v34, &v28);
LABEL_30:
      if ( v13 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_12:
    sub_64280(v30, v33);
    sub_316CB0(&v31, &v34);
    if ( (unsigned __int8)sub_64820(v18, v30) )
    {
      v13 = sub_317F40(&v31, &v28);
      goto LABEL_30;
    }
LABEL_13:
    if ( v20 )
      v11 = sub_1229D0(i[2]);
    else
      v11 = sub_1229A0(i[1]);
    i = (__int64 *)v11;
    if ( v34 )
    {
      v35 = 0;
      qfree(v34);
    }
    qfree(v33[0]);
    sub_11CDA0((__int64)v26);
    if ( !i )
      goto LABEL_21;
  }
  if ( (unsigned int)sub_183400(v23, a2, (__int64)v26) == -1 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_64780(v33, v30) )
    goto LABEL_18;
  if ( (unsigned __int8)sub_318470(&v34, &v31) )
    goto LABEL_18;
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 1344) + 8LL) )
  {
    v16 = i[3];
    v37 = 0;
    v36 = v16;
    if ( (sub_137670(v25, (__int64)&v36) & 7) != 0 )
      goto LABEL_18;
  }
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
  }
  qfree(v33[0]);
  sub_11CDA0((__int64)v26);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  qfree(v30[0]);
LABEL_26:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  qfree(v27[0]);
  return i;
}
