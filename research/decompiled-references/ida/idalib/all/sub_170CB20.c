void __fastcall sub_170CB20(__int64 *a1, __int64 a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 (*v7)(void); // rdx
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edi
  _DWORD *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // r10
  _DWORD *v22; // rax
  _DWORD *v23; // r8
  __int64 v24; // r11
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-2E8h] BYREF
  __int64 v29; // [rsp+10h] [rbp-2D8h] BYREF
  char *v30; // [rsp+18h] [rbp-2D0h]
  __m128i si128; // [rsp+20h] [rbp-2C8h]
  __int64 v32; // [rsp+30h] [rbp-2B8h]
  __int128 v33; // [rsp+38h] [rbp-2B0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-2A0h]
  char v35; // [rsp+50h] [rbp-298h]
  __int64 v36; // [rsp+58h] [rbp-290h]
  __int64 v37; // [rsp+60h] [rbp-288h]
  __int64 v38; // [rsp+68h] [rbp-280h]
  __int64 *v39; // [rsp+70h] [rbp-278h]
  __int64 v40; // [rsp+78h] [rbp-270h]
  int v41; // [rsp+80h] [rbp-268h]
  char v42; // [rsp+84h] [rbp-264h]
  __int64 v43; // [rsp+88h] [rbp-260h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-210h]
  __int64 v46[2]; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v47; // [rsp+1C8h] [rbp-120h]
  int v48[58]; // [rsp+200h] [rbp-E8h] BYREF

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x10) == 0 )
    return;
  v5 = (_QWORD *)a1[1];
  LODWORD(v29) = 0;
  BYTE4(v29) = 0;
  v30 = nullptr;
  si128 = 0u;
  v32 = 0;
  v39 = &v43;
  v6 = *v5;
  LOBYTE(v38) = 0;
  v7 = *(__int64 (**)(void))(v6 + 48);
  v42 = 1;
  v40 = 8;
  v41 = 0;
  if ( (char *)v7 != (char *)sub_15A1860 )
  {
    v26 = v7();
    v5 = (_QWORD *)a1[1];
    v9 = v26;
    v8 = *(__int64 (__fastcall **)(__int64))(*v5 + 40LL);
    if ( v8 == sub_15A1850 )
      goto LABEL_4;
LABEL_38:
    v28.m128i_i64[0] = v9;
    v27 = ((__int64 (*)(void))v8)();
    v9 = v28.m128i_i64[0];
    v10 = v27;
    goto LABEL_5;
  }
  v8 = *(__int64 (__fastcall **)(__int64))(v6 + 40);
  v9 = (__int64)(v5 + 3);
  if ( v8 != sub_15A1850 )
    goto LABEL_38;
LABEL_4:
  v10 = v5[6];
LABEL_5:
  sub_16FF270((__int64)&v44, *a1, v10, v9, (unsigned int *)&v29, v4, 0);
  sub_17038E0((__int64)&v29);
  v11 = operator new(0x28u);
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v11, (std::__detail::_List_node_base *)v46);
  v12 = *(_DWORD *)(a2 + 136);
  ++v47;
  if ( v12 )
  {
    v13 = *(_DWORD **)(a2 + 128);
    v14 = 1LL << *v13;
    if ( (v14 & 0xB7) == 0 )
    {
      v15 = v14 & 0x40;
      if ( v15 )
      {
        v20 = *(_DWORD **)(a2 + 128);
        while ( v20 != &v13[36 * (v12 - 1)] )
        {
          v21 = 1LL << v20[36];
          if ( (v21 & 0xB7) != 0 )
            break;
          v20 += 36;
          if ( (v21 & 0x40) == 0 )
          {
            v16 = *(_DWORD *)(a2 + 56);
            if ( v16 != 6 )
              goto LABEL_9;
            goto LABEL_31;
          }
        }
      }
      else
      {
        v16 = *(_DWORD *)(a2 + 56);
        if ( v16 == 6 )
        {
LABEL_31:
          v30 = "default";
          v33 = 0;
          v29 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
          v28 = si128;
          v35 = v35 & 0x80 | 0x40;
          LODWORD(v32) = 0;
          v34 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          sub_1706C30((__int64)&v44, (__int64)&v29);
          sub_1705410((__int64)&v33);
          v17 = _mm_load_si128(&v28);
          goto LABEL_12;
        }
LABEL_9:
        if ( v16 == 4 )
        {
          if ( v15 )
          {
            v22 = v13 + 36;
            while ( &v13[36 * (v12 - 1) + 36] != v22 )
            {
              v23 = v22;
              v24 = 1LL << *v22;
              if ( (v24 & 0xB7) != 0 )
                break;
              v22 += 36;
              if ( (v24 & 0x40) == 0 )
              {
                v13 = v23;
                break;
              }
            }
          }
          if ( v13[18] <= 1u )
            goto LABEL_31;
        }
        else if ( v16 == 1 )
        {
          v25 = *(_DWORD *)(a2 + 64);
          if ( v25 == 15
            || *(char *)(sub_168B6E0((__int64)a1) + 1) < 0
            && ((unsigned int)(v25 - 16) <= 1 || (unsigned int)(v25 - 30) <= 4) )
          {
            goto LABEL_31;
          }
        }
      }
    }
  }
  v17 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
LABEL_12:
  si128 = v17;
  v30 = "delete";
  v33 = 0;
  v29 = 0;
  LODWORD(v32) = 0;
  v35 = v35 & 0x80 | 0x40;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  sub_1706C30((__int64)&v44, (__int64)&v29);
  sub_1705410((__int64)&v33);
  sub_16FF8C0((__int64)v46, v46[1]);
  v18 = a1[1];
  v19 = 0;
  if ( v44 != v45 )
    v19 = v44;
  if ( v18 )
    sub_1700D50(*a1, v18, v48, v19, -1431655765 * ((v45 - v44) >> 5));
  sub_1700A70((__int64)&v44);
}
