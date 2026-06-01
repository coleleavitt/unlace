void __fastcall sub_170A1A0(__int64 *a1, __int64 a2, __int64 a3, int *a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-2F0h]
  __int64 v23; // [rsp+10h] [rbp-2E8h] BYREF
  char *v24; // [rsp+18h] [rbp-2E0h]
  __m128i si128; // [rsp+20h] [rbp-2D8h]
  __int64 v26; // [rsp+30h] [rbp-2C8h]
  __int128 v27; // [rsp+38h] [rbp-2C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-2B0h]
  char v29; // [rsp+50h] [rbp-2A8h]
  __int64 v30; // [rsp+58h] [rbp-2A0h]
  __int64 v31; // [rsp+60h] [rbp-298h]
  __int64 v32; // [rsp+68h] [rbp-290h]
  __int64 *v33; // [rsp+70h] [rbp-288h]
  __int64 v34; // [rsp+78h] [rbp-280h]
  int v35; // [rsp+80h] [rbp-278h]
  char v36; // [rsp+84h] [rbp-274h]
  __int64 v37; // [rsp+88h] [rbp-270h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-220h]
  __int64 v40[2]; // [rsp+1B8h] [rbp-140h] BYREF
  __int64 v41; // [rsp+1C8h] [rbp-130h]
  int v42[62]; // [rsp+200h] [rbp-F8h] BYREF

  v9 = (__int64 *)a1[1];
  BYTE4(v23) = 0;
  LOBYTE(v32) = 0;
  LODWORD(v23) = 28;
  v24 = nullptr;
  si128 = 0u;
  v26 = 0;
  v33 = &v37;
  v10 = *v9;
  v34 = 8;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v36 = 1;
  v35 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v21 = v11();
    v9 = (__int64 *)a1[1];
    v12 = v21;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    v22 = v12;
    v20 = v13();
    v12 = v22;
    v14 = v20;
  }
  sub_16FF270((__int64)&v38, *a1, v14, v12, (unsigned int *)&v23, a6, 0);
  sub_17038E0((__int64)&v23);
  v15 = operator new(0x28u);
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v15, (std::__detail::_List_node_base *)v40);
  ++v41;
  v16 = (char *)sub_168B6E0((__int64)a1);
  sub_1709C80(a2, (__int64)&v38, v16);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x10) != 0 )
  {
    v24 = (char *)"noexcept";
    v27 = 0;
    v23 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v29 = v29 & 0x80 | 0x40;
    LODWORD(v26) = 0;
    v28 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    sub_1706C30((__int64)&v38, (__int64)&v23);
    sub_1705410((__int64)&v27);
    if ( *(_DWORD *)(a3 + 96) == 7 && !sub_15AC6D0(a3) && !sub_15AC4A0(a3) )
    {
      if ( !a4 || (v19 = *a4, (*a4 & 0xE) == 0) )
      {
        v24 = "final";
        LODWORD(v26) = 0;
        v27 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        v23 = 0;
        v28 = 0;
        v29 = v29 & 0x80 | 0x40;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        sub_1706C30((__int64)&v38, (__int64)&v23);
        sub_1705410((__int64)&v27);
        if ( !a4 )
        {
LABEL_19:
          v24 = "override";
          LODWORD(v26) = 0;
          v27 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
          v23 = 0;
          v28 = 0;
          v29 = v29 & 0x80 | 0x40;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          sub_1706C30((__int64)&v38, (__int64)&v23);
          sub_1705410((__int64)&v27);
          goto LABEL_6;
        }
        v19 = *a4;
      }
      if ( (v19 & 1) != 0 )
        goto LABEL_6;
      goto LABEL_19;
    }
  }
LABEL_6:
  sub_16FF8C0((__int64)v40, v40[1]);
  v17 = a1[1];
  v18 = 0;
  if ( v38 != v39 )
    v18 = v38;
  if ( v17 )
    sub_1700D50(*a1, v17, v42, v18, -1431655765 * ((v39 - v38) >> 5));
  sub_1700A70((__int64)&v38);
}
