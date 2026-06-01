void __fastcall sub_8FA130(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *i; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r15
  unsigned int v18; // eax
  void *v19; // rsi
  char v20; // cl
  int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-128h]
  __int64 v32; // [rsp+10h] [rbp-118h]
  __int64 v33; // [rsp+20h] [rbp-108h]
  __int64 v34[4]; // [rsp+30h] [rbp-F8h] BYREF
  void *v35; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-D0h]
  char v37; // [rsp+5Ch] [rbp-CCh]
  int v38; // [rsp+60h] [rbp-C8h]
  __int64 v39[8]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-70h] BYREF
  int v42; // [rsp+C0h] [rbp-68h]
  char v43; // [rsp+C4h] [rbp-64h]
  int v44; // [rsp+C8h] [rbp-60h]
  char v45; // [rsp+E8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 608);
  for ( i = &v1[2 * *(unsigned int *)(a1 + 616)]; i != v1; v1 += 2 )
  {
    while ( 1 )
    {
      v33 = sub_A25570(*(_QWORD *)(a1 + 376), *v1);
      if ( BYTE4(v33) )
        break;
      v1 += 2;
      if ( i == v1 )
        goto LABEL_11;
    }
    sub_A25550(v39, *(_QWORD *)(a1 + 376), (unsigned int)v33);
    v31 = sub_7A7530(v1[1], 1);
    v3 = sub_8CA760(*(__int64 **)(a1 + 368), *(_QWORD *)(*v1 + 8LL));
    if ( BYTE4(v3) )
    {
      switch ( (int)v3 )
      {
        case 0:
          v6 = *(unsigned __int8 *)sub_8F63E0(v39);
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 2;
          v41 = v6;
          v42 = 8;
          v43 = 0;
          break;
        case 1:
          v7 = (void *)*(unsigned __int8 *)sub_8F6BD0(v39);
          v36 = 8;
          goto LABEL_20;
        case 2:
          v8 = *(unsigned __int16 *)sub_8F6C20(v39);
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 2;
          v41 = v8;
          v42 = 16;
          v43 = 0;
          break;
        case 3:
          v7 = (void *)*(unsigned __int16 *)sub_8F7430(v39);
          v36 = 16;
          goto LABEL_20;
        case 4:
          v9 = *(unsigned int *)sub_8F7480(v39);
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 2;
          v41 = v9;
          v42 = 32;
          v43 = 0;
          break;
        case 5:
          v7 = (void *)*(unsigned int *)sub_8F7C70(v39);
          v36 = 32;
          goto LABEL_20;
        case 6:
          v10 = *(_QWORD *)sub_8F7CC0(v39);
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 2;
          v41 = v10;
          v42 = 64;
          v43 = 0;
          break;
        case 7:
          v7 = *(void **)sub_8F84D0(v39);
          v36 = 64;
          goto LABEL_20;
        case 8:
          v11 = sub_8F8520(v39);
          sub_2587D60(&v40, v11);
          v12 = v40;
          v13 = v41;
          v43 = 1;
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 2;
          v41 = v12;
          v42 = v13;
          break;
        case 9:
          v14 = sub_8F8D30(v39);
          sub_2587BE0(&v40, v14, *(unsigned int *)(v14 + 8));
          v15 = v40;
          v16 = v41;
          LODWORD(v40) = 2;
          BYTE4(v40) &= ~1u;
          v41 = v15;
          v42 = v16;
          v43 = 0;
          break;
        case 10:
          v7 = (void *)*(unsigned __int8 *)sub_8F9850(v39);
          v36 = 1;
LABEL_20:
          v35 = v7;
          v37 = 1;
          sub_835320((__int64)&v40, (__int64 *)&v35);
          if ( v36 > 0x40 && v35 )
            operator delete[](v35);
          break;
        case 11:
          v17 = sub_8FA0E0(v39);
          v18 = *(_DWORD *)(v17 + 8);
          v36 = v18;
          if ( v18 > 0x40 )
          {
            sub_2585B30(&v35);
            v18 = v36;
            v19 = v35;
          }
          else
          {
            v19 = *(void **)v17;
          }
          v20 = *(_BYTE *)(v17 + 12);
          v21 = *(_DWORD *)(v17 + 16);
          v42 = v18;
          BYTE4(v40) &= ~1u;
          v38 = v21;
          v41 = (__int64)v19;
          v43 = v20;
          v44 = v21;
          LODWORD(v40) = 4;
          break;
        case 12:
          v22 = (__int64 *)sub_8F8D80(v39);
          sub_835150((__int64)v34, v22, v23);
          BYTE4(v40) &= ~1u;
          LODWORD(v40) = 0;
          v32 = sub_2575D00(v34, v22, v24);
          sub_2580BE0(&v35, 0.0);
          sub_257EDC0(&v41, &v35, v32);
          sub_25769A0(&v35);
          LODWORD(v40) = 3;
          v26 = sub_2575D20(&v35, &v35, v25);
          if ( v34[0] == v26 )
            sub_257D000(&v35, v34, v27, v28);
          else
            sub_2576960(&v35, v34);
          sub_8DBA70(&v41, (__int64 *)&v35, v29);
          sub_5FF3B0((__int64 *)&v35);
          sub_5FF3B0(v34);
          break;
        case 13:
          v30 = sub_8F9CB0(v39);
          sub_A1E120(&v40, v30, **(_QWORD **)(a1 + 368));
          break;
        case 14:
          v4 = sub_8FA040(v39);
          sub_97DB00(&v40, v4, **(_QWORD **)(a1 + 368));
          break;
        case 15:
          v5 = sub_8FA090(v39);
          sub_A2E5F0(&v40, v5, **(_QWORD **)(a1 + 368));
          break;
        default:
          goto LABEL_9;
      }
      sub_6A01B0(v31, (__int64)&v40);
      if ( (unsigned int)v40 > 1 )
      {
LABEL_15:
        sub_69F740((__int64)&v40);
        sub_A1C0C0(v39);
        continue;
      }
    }
    else
    {
      sub_A24290(&v40, v39, *(_QWORD *)(a1 + 368), *(_QWORD *)(*(_QWORD *)(v1[1] + 40LL) + 8LL));
      if ( v45 )
      {
        sub_6A63E0(v31, (__int64)&v40);
        if ( v45 )
        {
          v45 = 0;
          if ( (unsigned int)v40 > 1 )
            goto LABEL_15;
        }
      }
    }
LABEL_9:
    sub_A1C0C0(v39);
  }
LABEL_11:
  *(_DWORD *)(a1 + 616) = 0;
}

