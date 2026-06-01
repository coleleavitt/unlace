unsigned __int64 __fastcall sub_1ACF130(__int64 *a1, __int64 a2, __int64 a3, __m128i *a4)
{
  __int64 v4; // rdx
  __int64 *v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // r15
  __int64 v16; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-E0h]
  char v38; // [rsp+26h] [rbp-D2h] BYREF
  char v39; // [rsp+27h] [rbp-D1h] BYREF
  _QWORD *v40; // [rsp+28h] [rbp-D0h] BYREF
  __int64 *v41; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+38h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v44; // [rsp+50h] [rbp-A8h] BYREF
  char v45; // [rsp+A8h] [rbp-50h]
  unsigned int v46; // [rsp+B0h] [rbp-48h]
  char v47; // [rsp+B4h] [rbp-44h]

  v37 = a3;
  v4 = a4->m128i_u8[1];
  v36 = a2;
  if ( (_BYTE)v4 == 51 || (unsigned __int8)sub_1AD4AB0(a1, a4->m128i_u8[0], v4, a4->m128i_u32[1]) )
    return 0;
  v6 = sub_1AC1650((__int64)&v36);
  v7 = v36;
  v8 = v37;
  if ( v6 != (__int64 *)(v36 + 8 * v37) )
  {
    v9 = a4->m128i_u8[1];
    if ( (unsigned __int8)(v9 - 25) > 1u )
    {
      v10 = a4->m128i_i8[0];
      if ( a4->m128i_i8[0] > 2u )
      {
        if ( v10 == 7 )
        {
          if ( (unsigned __int8)v9 > 0x31u )
            goto LABEL_8;
          v33 = 0x2580220000014LL;
          if ( !_bittest64(&v33, v9) )
            goto LABEL_8;
        }
        else if ( (unsigned __int8)(v10 - 9) <= 2u )
        {
          if ( (unsigned __int8)v9 > 0x31u )
            goto LABEL_8;
          v34 = 0x3D86220000015LL;
          if ( !_bittest64(&v34, v9) )
            goto LABEL_8;
        }
        else
        {
          if ( v10 == 3 )
            goto LABEL_38;
          if ( (unsigned __int8)(v10 - 14) <= 2u )
            goto LABEL_22;
          if ( v10 == 17 )
          {
LABEL_38:
            if ( (_BYTE)v9 && (_BYTE)v9 != 48 )
              goto LABEL_8;
          }
          else
          {
            if ( (unsigned __int8)v9 > 0x31u )
              goto LABEL_8;
            if ( v10 != 19 )
              goto LABEL_8;
            v18 = 0x2480020000008LL;
            if ( !_bittest64(&v18, v9) )
              goto LABEL_8;
          }
        }
      }
      else if ( (unsigned __int8)v9 > 0x30u || (v11 = 0x1806000000001LL, !_bittest64(&v11, v9)) )
      {
LABEL_8:
        v12 = *v6;
        sub_168B9F0((__int64)&v41, a1, a4->m128i_u32[1], 0xB3Au, 0);
        v39 = a4->m128i_i8[1];
        v13 = sub_1AA5620((__int64)&v41, &v39);
        v38 = *(_BYTE *)(v12 + 8);
        v14 = sub_1AA5620(v13, &v38);
        v15 = a4->m128i_i8[0];
        v16 = v14;
        if ( *(_BYTE *)(v14 + 120) )
        {
          sub_1AA2FB0((unsigned __int8 **)(v14 + 32), a4->m128i_i8[0]);
        }
        else if ( *(_BYTE *)(v14 + 132) )
        {
          v19 = sub_168B9E0((_QWORD *)v14);
          v23 = *(_QWORD **)(v16 + 16);
          if ( v23 )
          {
            v24 = *v23;
            v35 = v19;
            v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v24 + 32))(v23);
            v19 = v35;
          }
          v40 = v23;
          v25 = sub_1587BC0(v19, (__int64 *)&v40, v19, v20, v21, v22);
          sub_1AA2FB0((unsigned __int8 **)(*v25 + 32LL * *(unsigned int *)(v16 + 128) + 8), v15);
        }
        sub_15F7200(&v41);
        sub_168B9F0((__int64)&v41, a1, *(_DWORD *)(v12 + 12), 0x1665u, 0);
        if ( v45 )
        {
          sub_AE9DF0(&v44, 0, 2u);
        }
        else if ( v47 )
        {
          v28 = sub_168B9E0(&v41);
          v31 = *((_QWORD *)&v42 + 1);
          if ( *((_QWORD *)&v42 + 1) )
            v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 32LL))(*((_QWORD *)&v42 + 1));
          v40 = (_QWORD *)v31;
          v32 = sub_1587BC0(v28, (__int64 *)&v40, v26, v27, v29, v30);
          sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v46 + 8), 0, 2u);
        }
        LOBYTE(v40) = *(_BYTE *)(v12 + 8);
        sub_1AA5620((__int64)&v41, (char *)&v40);
        sub_15F7200(&v41);
        return 0;
      }
    }
  }
LABEL_22:
  v41 = a1;
  sub_168B6C0((__int64)a1);
  v43 = v8;
  v35 = v7;
  return sub_1ACD6A0((void **)&v41, a4, *(double *)_mm_loadh_ps((const double *)&v35).m128_u64);
}
