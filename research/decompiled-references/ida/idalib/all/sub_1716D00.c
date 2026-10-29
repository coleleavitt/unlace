void __fastcall sub_1716D00(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r13
  __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 (*v26)(void); // rdx
  __int64 v27; // rcx
  __int64 (*v28)(void); // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // al
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  _QWORD *v38; // r15
  _QWORD *v39; // r13
  _QWORD *v40; // rdi
  _QWORD *v41; // r13
  _QWORD *v42; // r15
  _QWORD *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-3B8h]
  unsigned int v49[4]; // [rsp+10h] [rbp-3A8h] BYREF
  int v50; // [rsp+20h] [rbp-398h]
  __int64 v51; // [rsp+24h] [rbp-394h]
  int v52; // [rsp+30h] [rbp-388h]
  void *v53[2]; // [rsp+38h] [rbp-380h]
  __int64 v54; // [rsp+48h] [rbp-370h]
  char v55; // [rsp+50h] [rbp-368h]
  __int64 v56; // [rsp+58h] [rbp-360h]
  __int64 v57; // [rsp+60h] [rbp-358h]
  __int64 v58; // [rsp+68h] [rbp-350h]
  _BYTE v59[40]; // [rsp+70h] [rbp-348h] BYREF
  void *v60; // [rsp+98h] [rbp-320h]
  _QWORD *v61; // [rsp+A0h] [rbp-318h]
  unsigned int v62; // [rsp+D0h] [rbp-2E8h] BYREF
  char v63; // [rsp+D4h] [rbp-2E4h]
  __int64 v64; // [rsp+D8h] [rbp-2E0h]
  unsigned __int64 v65; // [rsp+E0h] [rbp-2D8h]
  __int64 v66; // [rsp+E8h] [rbp-2D0h]
  __int64 v67; // [rsp+F0h] [rbp-2C8h]
  char v68; // [rsp+128h] [rbp-290h]
  char *v69; // [rsp+130h] [rbp-288h]
  __int64 v70; // [rsp+138h] [rbp-280h]
  int v71; // [rsp+140h] [rbp-278h]
  char v72; // [rsp+144h] [rbp-274h]
  char v73; // [rsp+148h] [rbp-270h] BYREF
  __int64 v74; // [rsp+190h] [rbp-228h] BYREF
  __int64 v75; // [rsp+198h] [rbp-220h]
  __int64 v76[9]; // [rsp+278h] [rbp-140h] BYREF
  int v77[62]; // [rsp+2C0h] [rbp-F8h] BYREF

  v7 = a1 + 2;
  v8 = sub_16FFA70(a2, a5, a1 + 2, a4, a5, a6);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v11 = v8;
    v12 = sub_15B8A80(v7, v8, 0, 0, v9, v10);
    v17 = sub_15B7F90(v7, v12, v13, v14, v15, v16);
    v22 = v17;
    if ( v17 )
    {
      if ( (*((_BYTE *)v17 + 28) & 0x7Fu) - 58 <= 3 && sub_B7E900((__int64)v17, v12, v18, v19, v20, v21) )
      {
        v24 = (__int64 *)a1[1];
        v62 = 10;
        v69 = &v73;
        v63 = 0;
        v64 = 0;
        v66 = 0;
        v67 = 0;
        v65 = v11;
        v25 = *v24;
        v68 = 0;
        v26 = *(__int64 (**)(void))(v25 + 48);
        v72 = 1;
        v70 = 8;
        v71 = 0;
        if ( (char *)v26 == (char *)sub_15A1860 )
        {
          v27 = (__int64)(v24 + 3);
        }
        else
        {
          v47 = v26();
          v24 = (__int64 *)a1[1];
          v27 = v47;
          v25 = *v24;
        }
        v28 = *(__int64 (**)(void))(v25 + 40);
        if ( (char *)v28 == (char *)sub_15A1850 )
        {
          v29 = v24[6];
        }
        else
        {
          v48 = v27;
          v46 = v28();
          v27 = v48;
          v29 = v46;
        }
        sub_16FF270((__int64)&v74, *a1, v29, v27, &v62, v23, 0);
        sub_16FF160((__int64)v76, (std::__detail::_List_node_base *)v76);
        v30 = sub_B8E970((__int64)(v22 + 8));
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = *(_BYTE *)(v30 + 28) & 0x7F;
            if ( v31 == 32 )
              break;
            v32 = v30;
            if ( (unsigned int)v31 - 49 <= 2 )
              goto LABEL_13;
LABEL_25:
            v30 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v30 )
              goto LABEL_26;
          }
          v32 = *(_QWORD *)(*(_QWORD *)(v30 + 56) + 8LL * *(unsigned int *)(v30 + 64) - 8);
LABEL_13:
          v50 = sub_16FE9F0((__int64)&v74, v32);
          *(_OWORD *)v53 = 0;
          *(_QWORD *)v49 = v32;
          v51 = 0;
          v55 = v55 & 0x80 | 0x40;
          v52 = 0;
          v54 = 0;
          v56 = 0;
          v57 = 0;
          v58 = 0;
          sub_15A3440(v49, 1, v33, v34, v35, v36);
          v37 = *(_QWORD *)(*a1 + 544);
          sub_17048E0((__int64)v59, (__int64)v49);
          sub_1715C60((__int64)&v74, (__int64)v59, v37, 0, 0, 0);
          v38 = v61;
          v39 = v60;
          if ( v61 != v60 )
          {
            do
            {
              while ( 1 )
              {
                v40 = (_QWORD *)v39[3];
                if ( v40 == v39 + 5 )
                  break;
                operator delete(v40);
                v39 += 8;
                if ( v38 == v39 )
                  goto LABEL_16;
              }
              v39 += 8;
            }
            while ( v38 != v39 );
LABEL_16:
            v39 = v60;
          }
          if ( v39 )
            operator delete(v39);
          v41 = v53[1];
          v42 = v53[0];
          if ( v53[1] != v53[0] )
          {
            do
            {
              while ( 1 )
              {
                v43 = (_QWORD *)v42[3];
                if ( v43 == v42 + 5 )
                  break;
                operator delete(v43);
                v42 += 8;
                if ( v41 == v42 )
                  goto LABEL_22;
              }
              v42 += 8;
            }
            while ( v41 != v42 );
LABEL_22:
            v42 = v53[0];
          }
          if ( v42 )
            operator delete(v42);
          goto LABEL_25;
        }
LABEL_26:
        sub_16FF8C0((__int64)v76, v76[1]);
        v44 = a1[1];
        v45 = 0;
        if ( v74 != v75 )
          v45 = v74;
        if ( v44 )
          sub_1700D50(*a1, v44, v77, v45, -1431655765 * ((v75 - v74) >> 5));
        sub_1700A70((__int64)&v74);
        sub_17038E0((__int64)&v62);
      }
    }
  }
}
