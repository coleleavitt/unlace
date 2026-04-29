__int64 __fastcall sub_1383B0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 *v9; // rax
  unsigned int v10; // eax
  int v11; // ebx
  __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v20; // [rsp+0h] [rbp-C0h]
  __int64 v21; // [rsp+8h] [rbp-B8h]
  __int64 v22; // [rsp+10h] [rbp-B0h]
  int v23; // [rsp+18h] [rbp-A8h]
  unsigned int v24; // [rsp+1Ch] [rbp-A4h]
  _QWORD *v25; // [rsp+20h] [rbp-A0h]
  __int64 v26; // [rsp+28h] [rbp-98h]
  __int64 v28; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v31; // [rsp+70h] [rbp-50h]
  __int128 v32; // [rsp+78h] [rbp-48h]
  unsigned __int64 v33; // [rsp+88h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  sub_1E8120(a1);
  v1 = 0;
  v2 = sub_636A0((_QWORD *)a1);
  v21 = sub_10C900(v2, 0);
  if ( !v21 )
  {
    if ( !under_debugger )
      sub_37EEE0(50446);
LABEL_59:
    BUG();
  }
  v22 = 8;
  v24 = 1;
  ++*(_DWORD *)(v21 + 24);
  v23 = 0;
  if ( *(int *)(a1 + 64) <= 1 )
    goto LABEL_51;
  while ( 2 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v22);
    if ( *(_DWORD *)(v20 + 76) == 6 )
      goto LABEL_22;
    v25 = (_QWORD *)(*(_QWORD *)v21 + 3 * v22);
    v7 = (_QWORD *)*v25;
    if ( !*v25 )
      goto LABEL_20;
    if ( !v25[1] )
      goto LABEL_20;
    v8 = (_QWORD *)v7[1];
    if ( v7 == v8 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        if ( v8[4] <= 1u )
          goto LABEL_13;
        v1 = *(unsigned int *)v8[3];
        if ( !(_DWORD)v1 )
          goto LABEL_13;
        v30[0] = 0;
        v30[1] = 0;
        v31 = 0;
        v32 = 0;
        sub_100320((__int64)(v8 + 3), a1, (__int64)v30);
        if ( !v8[4] )
        {
          v26 = 0;
LABEL_46:
          v1 = v26 + 32;
          v23 += (unsigned __int8)sub_137980(v20, v26 + 32, v26 + 64);
          goto LABEL_40;
        }
        v26 = 0;
        v11 = 0;
        v12 = 0;
        while ( 1 )
        {
          v15 = *(unsigned int *)(v8[3] + 4 * v12);
          if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_37EEE0(52719);
            goto LABEL_59;
          }
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v15);
          v1 = (__int64)v30;
          v17 = sub_125710(v16, v30, *(_QWORD *)(v16 + 56), 0, nullptr, 0, 0x101u);
          v18 = v17;
          if ( !v17 || *(_DWORD *)v17 != 4 )
            goto LABEL_38;
          if ( !v11 )
            break;
          v1 = v26 + 32;
          if ( !sub_122120((unsigned __int8 *)(v17 + 32), v26 + 32, 0) )
            goto LABEL_38;
          v1 = v26 + 64;
          if ( !sub_122120((unsigned __int8 *)(v18 + 64), v26 + 64, 0) )
            goto LABEL_38;
LABEL_31:
          ++v11;
          v14 = v8[4];
          v12 = v11;
          if ( v11 >= v14 )
            goto LABEL_39;
        }
        v1 = (__int64)&v28;
        if ( !(unsigned __int8)sub_11C340((char *)(v17 + 32), &v28, 0) )
          goto LABEL_48;
        v29[0] = 0xFFFFFFFF00000000LL;
        v13 = *(_QWORD *)(a1 + 128);
        v29[1] = 0;
        if ( !(unsigned __int8)sub_1195E0((__int64)v29, (_QWORD *)a1, v30, v13) )
        {
          if ( !under_debugger )
            sub_37EEE0(50999);
          goto LABEL_59;
        }
        v1 = v18 + 64;
        if ( sub_122120((unsigned __int8 *)v29, v18 + 64, 0) )
        {
          sub_119360((__int64)v29);
          v26 = v18;
          goto LABEL_31;
        }
        sub_119360((__int64)v29);
LABEL_48:
        v12 = 0;
LABEL_38:
        v14 = v8[4];
LABEL_39:
        if ( v14 == v12 )
          goto LABEL_46;
LABEL_40:
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        v2 = v30[0];
        qfree(v30[0]);
LABEL_13:
        if ( (*v8 & 2) == 0 )
          break;
LABEL_10:
        if ( (_QWORD *)*v25 == v8 )
          goto LABEL_20;
      }
      v3 = v8[2];
      if ( (*(_BYTE *)v3 & 2) == 0 )
      {
        v2 = a1;
        do
        {
          v8 = (_QWORD *)v3;
          v3 = *(_QWORD *)(v3 + 8);
        }
        while ( (*(_BYTE *)v3 & 2) == 0 );
        goto LABEL_10;
      }
      v9 = (unsigned __int64 *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = *v9;
      if ( (*v9 & 2) != 0 )
      {
LABEL_43:
        v8 = v9;
        goto LABEL_10;
      }
      v2 = a1;
      while ( 1 )
      {
        if ( (_QWORD *)v9[2] != v8 )
          goto LABEL_43;
        v8 = v9;
        v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
        v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v3 & 2) != 0 )
          break;
        v9 = (unsigned __int64 *)v4;
      }
      v8 = (_QWORD *)v4;
    }
    while ( *v25 != v4 );
LABEL_20:
    if ( v24 >= *(_DWORD *)(a1 + 64) )
      sub_130C70(v2, v1, v3, v4, v5, v6);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v22) + 24LL) |= 0x20u;
LABEL_22:
    ++v24;
    v10 = *(_DWORD *)(a1 + 64);
    if ( (int)v10 > (int)v24 )
    {
      v22 += 8;
      if ( v24 >= v10 )
        sub_130C70(v2, v1, v3, v4, v5, v6);
      continue;
    }
    break;
  }
  if ( v23 > 0 )
    sub_63560(a1, 1u, (__int64)"gen_chain_assertions");
LABEL_51:
  sub_1013D0(v21);
  return (unsigned int)v23;
}
