__int64 __fastcall sub_220320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  char v21; // al
  unsigned int v22; // [rsp+18h] [rbp-138h]
  bool v23; // [rsp+1Eh] [rbp-132h]
  bool v24; // [rsp+1Fh] [rbp-131h]
  _QWORD *v25; // [rsp+28h] [rbp-128h]
  _QWORD *v26; // [rsp+30h] [rbp-120h]
  __int64 v27; // [rsp+40h] [rbp-110h]
  __int64 v28; // [rsp+48h] [rbp-108h]
  _QWORD v29[2]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v30[2]; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-D8h]
  __int64 v33[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-A8h]
  __int64 v36[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-78h]
  __int64 v39[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+100h] [rbp-50h] BYREF
  __int64 v41; // [rsp+108h] [rbp-48h]
  unsigned __int64 v42; // [rsp+118h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v5 = sub_1D5170(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 128);
  v29[1] = 0;
  v7 = v5;
  v29[0] = 0xFFFFFFFF00000000LL;
  v26 = (_QWORD *)(v5 + 160);
  if ( !(unsigned __int8)sub_11D020((__int64)v29, (_QWORD *)a1, (_QWORD *)(v5 + 160), v6)
    || (v29[0] & 0xFB) != 1
    || (v8 = *(_QWORD *)(v7 + 352), (int)v8 <= 0) )
  {
    v22 = 0;
    goto LABEL_34;
  }
  v22 = 0;
  v24 = LOBYTE(v29[0]) != 1;
  v9 = 0;
  while ( 2 )
  {
    v10 = *(unsigned int *)(*(_QWORD *)(v7 + 344) + 4 * v9);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
      BUG();
    }
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v10);
    v28 = v11;
    if ( *(_DWORD *)(v11 + 76) != 3 )
      goto LABEL_8;
    v12 = *(_QWORD *)(v11 + 56);
    if ( !v12 )
      goto LABEL_8;
    v32 = 0;
    v30[0] = 0;
    v30[1] = 0;
    v31 = 0;
    v13 = sub_129150(v11, v26, v12, 0, (__int64)v30, 0, 0x101u);
    v25 = (_QWORD *)v13;
    if ( !v13 || (v14 = *(_DWORD **)(v13 + 8)) == nullptr || *v14 == 55 || sub_122C30((__int64)v30, (__int64)v26) )
    {
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      goto LABEL_7;
    }
    sub_124680((__int64)v33, v11, (__int64)v25, 0x101u);
    v17 = *(_QWORD *)(v11 + 56);
    v18 = v25[1];
    v23 = v35 != 0;
    if ( !v18 )
    {
LABEL_46:
      v27 = v17;
      sub_A33C0(v28, (__int64)v25);
      sub_A3160(v28, v25, v27);
      ++v22;
      goto LABEL_28;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)v18 == 55 )
        goto LABEL_45;
      if ( (*(_BYTE *)(v18 + 6) & 8) != 0 && (v24 || v23) )
        goto LABEL_28;
      sub_127A20((__int64)v36, v28, v18, 257, v15, v16);
      sub_124680((__int64)v39, v28, v18, 0x101u);
      if ( (unsigned __int8)sub_64780(v33, v36)
        || (unsigned __int8)sub_318470(&v34, &v37)
        || (unsigned __int8)sub_64780(v30, v39)
        || (unsigned __int8)sub_318470(&v31, &v40)
        || (unsigned __int8)sub_64780(v30, v36) )
      {
        break;
      }
      v21 = sub_318470(&v31, &v37);
      v19 = v40;
      if ( v21 )
        goto LABEL_23;
      if ( v40 )
      {
        v41 = 0;
        qfree(v40);
      }
      qfree(v39[0]);
      if ( v37 )
      {
        v38 = 0;
        qfree(v37);
      }
      qfree(v36[0]);
      v17 = v18;
LABEL_45:
      v18 = *(_QWORD *)(v18 + 8);
      if ( !v18 )
        goto LABEL_46;
    }
    v19 = v40;
LABEL_23:
    if ( v19 )
    {
      v41 = 0;
      qfree(v19);
    }
    qfree(v39[0]);
    if ( v37 )
    {
      v38 = 0;
      qfree(v37);
    }
    qfree(v36[0]);
LABEL_28:
    if ( v34 )
    {
      v35 = 0;
      qfree(v34);
    }
    qfree(v33[0]);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
LABEL_7:
    qfree(v30[0]);
    v8 = *(_QWORD *)(v7 + 352);
LABEL_8:
    if ( (int)v8 > (int)++v9 )
      continue;
    break;
  }
LABEL_34:
  sub_11CDA0((__int64)v29);
  return v22;
}
