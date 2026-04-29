__int64 __fastcall sub_13BDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  unsigned __int64 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // ebx
  __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v27; // [rsp-8h] [rbp-C8h]
  __int64 v28; // [rsp+0h] [rbp-C0h]
  __int64 v29; // [rsp+8h] [rbp-B8h]
  __int64 v30; // [rsp+10h] [rbp-B0h]
  int v31; // [rsp+18h] [rbp-A8h]
  unsigned int v32; // [rsp+1Ch] [rbp-A4h]
  _QWORD *v33; // [rsp+20h] [rbp-A0h]
  __int64 v34; // [rsp+28h] [rbp-98h]
  __int64 v36; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v38[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v39; // [rsp+70h] [rbp-50h]
  __int128 v40; // [rsp+78h] [rbp-48h]
  unsigned __int64 v41; // [rsp+88h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  sub_1EBDA0(a1);
  v4 = sub_670E0((_QWORD *)a1, a2, v2, v3);
  v5 = nullptr;
  v6 = v4;
  v29 = sub_110340(v4, 0);
  if ( !v29 )
  {
    if ( !under_debugger )
      sub_383060(50446);
LABEL_59:
    BUG();
  }
  v30 = 8;
  v32 = 1;
  ++*(_DWORD *)(v29 + 24);
  v31 = 0;
  if ( *(int *)(a1 + 64) <= 1 )
    goto LABEL_51;
  while ( 2 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v30);
    if ( *(_DWORD *)(v28 + 76) == 6 )
      goto LABEL_22;
    v33 = (_QWORD *)(*(_QWORD *)v29 + 3 * v30);
    v11 = (_QWORD *)*v33;
    if ( !*v33 )
      goto LABEL_20;
    if ( !v33[1] )
      goto LABEL_20;
    v12 = (_QWORD *)v11[1];
    if ( v11 == v12 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        if ( v12[4] <= 1u )
          goto LABEL_13;
        v5 = (__int64 *)*(unsigned int *)v12[3];
        if ( !(_DWORD)v5 )
          goto LABEL_13;
        v38[0] = 0;
        v38[1] = 0;
        v39 = 0;
        v40 = 0;
        sub_103D60((__int64)(v12 + 3), a1, (__int64)v38);
        if ( !v12[4] )
        {
          v34 = 0;
LABEL_46:
          v5 = (__int64 *)(v34 + 32);
          v31 += (unsigned __int8)sub_13B3C0(v28, v34 + 32, v34 + 64, v15, v16, v17);
          goto LABEL_40;
        }
        v34 = 0;
        v18 = 0;
        v19 = 0;
        while ( 1 )
        {
          v22 = *(unsigned int *)(v12[3] + 4 * v19);
          if ( (unsigned int)v22 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(52719);
            goto LABEL_59;
          }
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v22);
          v5 = v38;
          v24 = sub_129150(v23, v38, *(_QWORD *)(v23 + 56), 0, 0, 0, 0x101u);
          v25 = v24;
          v15 = v27;
          if ( !v24 || *(_DWORD *)v24 != 4 )
            goto LABEL_38;
          if ( !v18 )
            break;
          v5 = (__int64 *)(v34 + 32);
          if ( !sub_125B60((unsigned __int8 *)(v24 + 32), v34 + 32, 0) )
            goto LABEL_38;
          v5 = (__int64 *)(v34 + 64);
          if ( !sub_125B60((unsigned __int8 *)(v25 + 64), v34 + 64, 0) )
            goto LABEL_38;
LABEL_31:
          ++v18;
          v21 = v12[4];
          v19 = v18;
          if ( v18 >= v21 )
            goto LABEL_39;
        }
        v5 = &v36;
        if ( !(unsigned __int8)sub_11FD80((char *)(v24 + 32), &v36, 0) )
          goto LABEL_48;
        v37[0] = 0xFFFFFFFF00000000LL;
        v20 = *(_QWORD *)(a1 + 128);
        v37[1] = 0;
        if ( !(unsigned __int8)sub_11D020((__int64)v37, (_QWORD *)a1, v38, v20) )
        {
          if ( !under_debugger )
            sub_383060(50999);
          goto LABEL_59;
        }
        v5 = (__int64 *)(v25 + 64);
        if ( sub_125B60((unsigned __int8 *)v37, v25 + 64, 0) )
        {
          sub_11CDA0((__int64)v37);
          v34 = v25;
          goto LABEL_31;
        }
        sub_11CDA0((__int64)v37);
LABEL_48:
        v19 = 0;
LABEL_38:
        v21 = v12[4];
LABEL_39:
        if ( v21 == v19 )
          goto LABEL_46;
LABEL_40:
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        v6 = v38[0];
        qfree(v38[0]);
LABEL_13:
        if ( (*v12 & 2) == 0 )
          break;
LABEL_10:
        if ( (_QWORD *)*v33 == v12 )
          goto LABEL_20;
      }
      v7 = v12[2];
      if ( (*(_BYTE *)v7 & 2) == 0 )
      {
        v6 = a1;
        do
        {
          v12 = (_QWORD *)v7;
          v7 = *(_QWORD *)(v7 + 8);
        }
        while ( (*(_BYTE *)v7 & 2) == 0 );
        goto LABEL_10;
      }
      v13 = (unsigned __int64 *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = *v13;
      if ( (*v13 & 2) != 0 )
      {
LABEL_43:
        v12 = v13;
        goto LABEL_10;
      }
      v6 = a1;
      while ( 1 )
      {
        if ( (_QWORD *)v13[2] != v12 )
          goto LABEL_43;
        v12 = v13;
        v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v7 & 2) != 0 )
          break;
        v13 = (unsigned __int64 *)v8;
      }
      v12 = (_QWORD *)v8;
    }
    while ( *v33 != v8 );
LABEL_20:
    if ( v32 >= *(_DWORD *)(a1 + 64) )
      sub_1346B0(v6, v5, v7, v8, v9, v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v30) + 24LL) |= 0x20u;
LABEL_22:
    ++v32;
    v14 = *(_DWORD *)(a1 + 64);
    if ( (int)v14 > (int)v32 )
    {
      v30 += 8;
      if ( v32 >= v14 )
        sub_1346B0(v6, v5, v7, v8, v9, v10);
      continue;
    }
    break;
  }
  if ( v31 > 0 )
    sub_66FA0(a1, 1u, (__int64)"gen_chain_assertions");
LABEL_51:
  sub_104E10(v29);
  return (unsigned int)v31;
}
