__int64 __fastcall sub_21B720(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  char v16; // al
  unsigned int v17; // [rsp+18h] [rbp-138h]
  bool v18; // [rsp+1Eh] [rbp-132h]
  bool v19; // [rsp+1Fh] [rbp-131h]
  _QWORD *v20; // [rsp+28h] [rbp-128h]
  _QWORD *v21; // [rsp+30h] [rbp-120h]
  __int64 v22; // [rsp+40h] [rbp-110h]
  __int64 v23; // [rsp+48h] [rbp-108h]
  _QWORD v24[2]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v25[2]; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+78h] [rbp-D8h]
  _QWORD v28[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-78h]
  _QWORD v34[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+100h] [rbp-50h] BYREF
  __int64 v36; // [rsp+108h] [rbp-48h]
  unsigned __int64 v37; // [rsp+118h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v2 = sub_1D0B30(a1);
  v3 = *(_QWORD *)(a1 + 128);
  v24[1] = 0;
  v4 = v2;
  v24[0] = 0xFFFFFFFF00000000LL;
  v21 = (_QWORD *)(v2 + 160);
  if ( !(unsigned __int8)sub_118B60((__int64)v24, (_QWORD *)a1, (_QWORD *)(v2 + 160), v3)
    || (v24[0] & 0xFB) != 1
    || (v5 = *(_QWORD *)(v4 + 352), (int)v5 <= 0) )
  {
    v17 = 0;
    goto LABEL_34;
  }
  v17 = 0;
  v19 = LOBYTE(v24[0]) != 1;
  v6 = 0;
  while ( 2 )
  {
    v7 = *(unsigned int *)(*(_QWORD *)(v4 + 344) + 4 * v6);
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_37DDE0(52719);
      BUG();
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v7);
    v23 = v8;
    if ( *(_DWORD *)(v8 + 76) != 3 )
      goto LABEL_8;
    v9 = *(_QWORD *)(v8 + 56);
    if ( !v9 )
      goto LABEL_8;
    v27 = 0;
    v25[0] = 0;
    v25[1] = 0;
    v26 = 0;
    v10 = sub_124C90(v8, v21, v9, 0, v25, 0, 0x101u);
    v20 = (_QWORD *)v10;
    if ( !v10 || (v11 = *(_DWORD **)(v10 + 8)) == nullptr || *v11 == 55 || sub_11E770((__int64)v25, (__int64)v21) )
    {
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      goto LABEL_7;
    }
    sub_1201C0((__int64)v28, v8, (__int64)v20, 0x101u);
    v12 = *(_QWORD *)(v8 + 56);
    v13 = v20[1];
    v18 = v30 != 0;
    if ( !v13 )
    {
LABEL_46:
      v22 = v12;
      sub_9EF00(v23, (__int64)v20);
      sub_9ECA0(v23, v20, v22);
      ++v17;
      goto LABEL_28;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)v13 == 55 )
        goto LABEL_45;
      if ( (*(_BYTE *)(v13 + 6) & 8) != 0 && (v19 || v18) )
        goto LABEL_28;
      sub_123560((__int64)v31, v23, v13, 0x101u);
      sub_1201C0((__int64)v34, v23, v13, 0x101u);
      if ( (unsigned __int8)sub_60400(v28, v31)
        || (unsigned __int8)sub_313370(&v29, &v32)
        || (unsigned __int8)sub_60400(v25, v34)
        || (unsigned __int8)sub_313370(&v26, &v35)
        || (unsigned __int8)sub_60400(v25, v31) )
      {
        break;
      }
      v16 = sub_313370(&v26, &v32);
      v14 = v35;
      if ( v16 )
        goto LABEL_23;
      if ( v35 )
      {
        v36 = 0;
        qfree(v35);
      }
      qfree(v34[0]);
      if ( v32 )
      {
        v33 = 0;
        qfree(v32);
      }
      qfree(v31[0]);
      v12 = v13;
LABEL_45:
      v13 = *(_QWORD *)(v13 + 8);
      if ( !v13 )
        goto LABEL_46;
    }
    v14 = v35;
LABEL_23:
    if ( v14 )
    {
      v36 = 0;
      qfree(v14);
    }
    qfree(v34[0]);
    if ( v32 )
    {
      v33 = 0;
      qfree(v32);
    }
    qfree(v31[0]);
LABEL_28:
    if ( v29 )
    {
      v30 = 0;
      qfree(v29);
    }
    qfree(v28[0]);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
LABEL_7:
    qfree(v25[0]);
    v5 = *(_QWORD *)(v4 + 352);
LABEL_8:
    if ( (int)v5 > (int)++v6 )
      continue;
    break;
  }
LABEL_34:
  sub_1188E0((__int64)v24);
  return v17;
}
