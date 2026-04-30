__int64 __fastcall sub_5A0FA8(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // r12d
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // r12
  __int64 v25; // rsi
  unsigned int v27[10]; // [rsp+10h] [rbp-950h] BYREF
  __int64 v28; // [rsp+38h] [rbp-928h]
  char v29[8]; // [rsp+40h] [rbp-920h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-918h]
  _BYTE v31[1272]; // [rsp+370h] [rbp-5F0h] BYREF
  __int64 v32; // [rsp+868h] [rbp-F8h] BYREF
  _BYTE v33[32]; // [rsp+870h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+890h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+898h] [rbp-C8h]
  __int64 v36; // [rsp+8A8h] [rbp-B8h] BYREF
  _BYTE v37[32]; // [rsp+8B0h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+8D0h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+8D8h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+8E0h] [rbp-80h] BYREF
  __int64 v41; // [rsp+8E8h] [rbp-78h]
  __int64 v42; // [rsp+8F0h] [rbp-70h]
  unsigned __int64 *v43; // [rsp+8F8h] [rbp-68h]
  unsigned __int64 v44; // [rsp+900h] [rbp-60h]
  __int64 v45; // [rsp+908h] [rbp-58h]
  unsigned __int64 v46; // [rsp+910h] [rbp-50h]
  __int64 v47; // [rsp+918h] [rbp-48h]
  unsigned int v48; // [rsp+924h] [rbp-3Ch]
  unsigned int v49; // [rsp+928h] [rbp-38h]
  int v50; // [rsp+92Ch] [rbp-34h]
  unsigned int j; // [rsp+930h] [rbp-30h]
  char v52; // [rsp+937h] [rbp-29h]
  unsigned int i; // [rsp+938h] [rbp-28h]
  int v54; // [rsp+93Ch] [rbp-24h]

  v3 = sub_5A40A4(a1[4]);
  v49 = sub_59BDEE(v3);
  sub_5A47A8(v37, a1 + 5);
  if ( (unsigned __int8)sub_5A480C(v37, v49, 48) != 1 )
  {
    v2 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 3;
    *(_QWORD *)(a2 + 4) = sub_5A4152(v37);
    v4 = v49;
    *(_DWORD *)sub_5A4884(v37) = v4;
    v54 = -1;
    if ( (__int64)a1[8] >= 0 )
    {
      v48 = v49 << 13;
      v5 = sub_5A40EE(a1 + 5);
      v47 = v5 + v48 + 0x10000;
      if ( v47 > a1[8] )
        v54 = 2048;
    }
    for ( i = 0; i < v49; ++i )
    {
      sub_5ADF07(v27, 0, 48);
      v6 = sub_5A40A4(a1[4]);
      v27[0] = *(_DWORD *)sub_5A4402(v6, i);
      v7 = v27[0];
      if ( v7 == (unsigned int)sub_5A3080(a1)
        && a1[2]
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)a1[4] + 32LL))(a1[4]) != 1 )
      {
        v46 = sub_5AEEA4(a1[2]);
        v9 = sub_5AEEBA(a1[2]);
        if ( (unsigned __int8)sub_5A0CB6((__int64)a1, v27, v46, v9, -1, &v36) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        v45 = 256;
        v44 = sub_5AEEBA(a1[2]);
        v52 = 0;
        for ( j = 0; ; ++j )
        {
          v10 = j;
          v11 = sub_598368(a1[4]);
          if ( v10 >= sub_5986F2(v11) )
            break;
          v12 = sub_598368(a1[4]);
          v43 = *(unsigned __int64 **)sub_59871A(v12, j);
          if ( v44 >= *v43 && v44 < *v43 + v43[1] )
          {
            v52 = 1;
            v38 = v44 - 128;
            v34 = *sub_5956EE(v43, &v38);
            v39 = *v43 + v43[1];
            v40 = v44 + 128;
            v42 = *sub_598413(&v40, &v39);
            LODWORD(v35) = v42 - v34;
            break;
          }
        }
        if ( v52 )
        {
          sub_5A4100(v33, a1 + 5);
          if ( (unsigned __int8)sub_5A8344(v33, (unsigned int)v35) != 1 )
          {
            v2 = 0;
            goto LABEL_47;
          }
          v41 = sub_5A304E(a1, (unsigned int)v35);
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1[4] + 64LL))(
            a1[4],
            v41,
            v27[0],
            v34,
            (unsigned int)v35);
          sub_5A4176(v33, v41, (unsigned int)v35);
          v35 = sub_5A4152(v33);
          sub_5A472C(a1 + 10, &v34);
        }
        sub_5A4896(v31, a1 + 5);
        if ( (unsigned __int8)sub_5A490C(v31) != 1 )
        {
          v2 = 0;
          v13 = 0;
        }
        else
        {
          v14 = sub_5A4942(v31);
          sub_5ADF07(v14, 0, 1232);
          v15 = a1[3];
          v16 = a1[2];
          v17 = sub_5A4942(v31);
          sub_5AEED0(v17, v16, v15);
          v28 = sub_5A4152(v31);
          a1[9] = sub_5A4152(v31);
          v13 = 1;
        }
        sub_5A48E2(v31);
        if ( v13 != 1 )
          goto LABEL_47;
      }
      else
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)a1[4] + 56LL))(a1[4], i, v29) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        v50 = -1;
        if ( (__int64)a1[8] >= 0 && i > 0x13 )
          v50 = v54;
        v18 = sub_5AEA34(v29);
        if ( (unsigned __int8)sub_5A0CB6((__int64)a1, v27, v30, v18, v50, &v32) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        sub_5A4896(v31, a1 + 5);
        if ( (unsigned __int8)sub_5A490C(v31) != 1 )
        {
          v2 = 0;
          v19 = 0;
        }
        else
        {
          v20 = sub_5A4942(v31);
          sub_5ADF07(v20, 0, 1232);
          v21 = sub_5A4942(v31);
          sub_5AEA4A(v29, v21);
          v28 = sub_5A4152(v31);
          v22 = sub_5A40A4(a1[4]);
          v23 = *(_DWORD *)sub_5A4402(v22, i);
          if ( v23 == (unsigned int)sub_5A3080(a1) )
          {
            a1[9] = sub_5A4152(v31);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)a1[4] + 32LL))(a1[4]) != 1 )
            {
              v24 = a1[4];
              v25 = sub_5AEA34(v29);
              sub_59BA9E(v24, v25);
            }
          }
          v19 = 1;
        }
        sub_5A48E2(v31);
        if ( v19 != 1 )
          goto LABEL_47;
      }
      sub_5A4954(v37, i, v27, 48);
    }
    v2 = 1;
  }
LABEL_47:
  sub_5A47E4(v37);
  return v2;
}
