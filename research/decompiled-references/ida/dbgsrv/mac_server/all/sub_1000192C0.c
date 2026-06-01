/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000192C0
// Address: 0x00000001000192C0

//----- (00000001000192C0) ----------------------------------------------------
__int64 __fastcall sub_1000192C0(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *v5; // rax
  _QWORD *generic_linput; // rax
  _QWORD *v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 **v10; // r15
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 **v16; // r13
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rsi
  char *v21; // rax
  _QWORD *v22; // rbx
  __int128 v25; // [rsp+10h] [rbp-2A0h] BYREF
  __int64 v26; // [rsp+20h] [rbp-290h]
  __int128 v27; // [rsp+30h] [rbp-280h] BYREF
  __int128 v28; // [rsp+40h] [rbp-270h]
  char v29; // [rsp+50h] [rbp-260h]
  _QWORD v30[3]; // [rsp+58h] [rbp-258h] BYREF
  __int128 v31; // [rsp+70h] [rbp-240h]
  int v32; // [rsp+80h] [rbp-230h]
  char v33; // [rsp+84h] [rbp-22Ch]
  _QWORD *v34; // [rsp+88h] [rbp-228h]
  char v35; // [rsp+90h] [rbp-220h]
  __int128 v36; // [rsp+A0h] [rbp-210h]
  __int128 v37; // [rsp+B0h] [rbp-200h]
  __int64 v38; // [rsp+C0h] [rbp-1F0h]
  char v39; // [rsp+C8h] [rbp-1E8h]
  __int64 v40; // [rsp+D0h] [rbp-1E0h]
  __int128 v41; // [rsp+D8h] [rbp-1D8h]
  __int128 v42; // [rsp+E8h] [rbp-1C8h]
  __int16 v43; // [rsp+F8h] [rbp-1B8h]
  __int128 v44; // [rsp+120h] [rbp-190h]
  __int128 v45; // [rsp+130h] [rbp-180h]
  __int128 v46; // [rsp+140h] [rbp-170h]
  __int128 v47; // [rsp+150h] [rbp-160h]
  __int128 v48; // [rsp+160h] [rbp-150h]
  __int128 v49; // [rsp+170h] [rbp-140h]
  __int128 v50; // [rsp+180h] [rbp-130h]
  __int128 v51; // [rsp+190h] [rbp-120h]
  __int128 v52; // [rsp+1A0h] [rbp-110h]
  __int128 v53; // [rsp+1B0h] [rbp-100h]
  __int128 v54; // [rsp+1C0h] [rbp-F0h]
  __int128 v55; // [rsp+1D0h] [rbp-E0h]
  __int128 v56; // [rsp+1E0h] [rbp-D0h]
  __int128 v57; // [rsp+1F0h] [rbp-C0h]
  _BYTE v58[19]; // [rsp+200h] [rbp-B0h] BYREF
  int v59; // [rsp+214h] [rbp-9Ch]
  __int128 v60; // [rsp+218h] [rbp-98h]
  __int128 v61; // [rsp+228h] [rbp-88h]
  int v62; // [rsp+238h] [rbp-78h]
  __int128 v63; // [rsp+240h] [rbp-70h]
  __int128 v64; // [rsp+250h] [rbp-60h]
  _QWORD v65[3]; // [rsp+260h] [rbp-50h] BYREF
  int v66; // [rsp+278h] [rbp-38h]
  char v67; // [rsp+27Ch] [rbp-34h]

  v5 = operator new(0x28u);
  *v5 = off_1000A80A8;
  v5[3] = a2;
  v5[4] = a1;
  v5[1] = 0xFFFFFFFFLL;
  *((_DWORD *)v5 + 4) = 0;
  generic_linput = create_generic_linput((__int64)v5);
  if ( generic_linput )
  {
    v7 = generic_linput;
    v65[0] = 0xFFFFFFFFLL;
    v65[1] = -1;
    v67 = 1;
    v8 = (unsigned int)sub_100064A90() == 8;
    v9 = -1;
    if ( !v8 )
      v9 = 0xFFFFFFFFLL;
    v65[2] = v9;
    v66 = 4 * v8 + 4;
    LODWORD(v10) = a4 | 1;
    v30[0] = &off_1000A7F20;
    v30[1] = v65;
    v30[2] = 0xFFFFFFFFLL;
    v31 = -1;
    v32 = 8;
    v33 = 1;
    v34 = v7;
    v35 = 1;
    v36 = 0;
    v37 = 0;
    v38 = -1;
    v39 = 0;
    v40 = -1;
    v59 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    memset(v58, 0, sizeof(v58));
    v60 = -1;
    v61 = 0;
    v62 = (int)v10;
    v63 = 0;
    v64 = 0;
    v11 = *(_DWORD *)(a1 + 16);
    if ( v11 == 13 )
    {
      v12 = (*(unsigned __int8 *)(a1 + 24) << 24) | 0xC;
      v13 = (__int64)a3;
    }
    else
    {
      v12 = -1;
      v13 = (__int64)a3;
      if ( !v11 )
        v12 = (*(unsigned __int8 *)(a1 + 24) << 24) | 7;
    }
    if ( (unsigned __int8)sub_1000186D0((__int64)v30, v13, a2, v12) )
    {
      LOBYTE(v10) = 1;
      if ( (*(_BYTE *)(v13 + 8) & 4) == 0 )
        goto LABEL_30;
      v25 = 0;
      v26 = 0;
      *(_QWORD *)&v27 = off_1000A7C78;
      *((_QWORD *)&v27 + 1) = &v25;
      if ( (unsigned __int8)sub_100010C80((__int64)v30, (__int64)&v27) )
      {
        v14 = a2 + sub_100012870((__int64)v30, v26);
        v15 = *(__int64 **)(a1 + 40);
        if ( v15 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v16 = (__int64 **)v15;
              v17 = v15[4];
              if ( v14 >= v17 )
                break;
              v15 = *v16;
              v10 = v16;
              if ( !*v16 )
                goto LABEL_19;
            }
            if ( v14 <= v17 )
              break;
            v15 = v16[1];
            if ( !v15 )
            {
              v10 = v16 + 1;
              goto LABEL_19;
            }
          }
          v22 = a3;
          LOBYTE(v10) = 1;
          if ( !v16[5] )
            goto LABEL_30;
        }
        else
        {
          v10 = (__int64 **)(a1 + 40);
          v16 = (__int64 **)(a1 + 40);
LABEL_19:
          v18 = (__int64 *)operator new(0x30u);
          v18[4] = v14;
          v18[5] = 0;
          *(_OWORD *)v18 = 0;
          v18[2] = (__int64)v16;
          *v10 = v18;
          v19 = **(_QWORD **)(a1 + 32);
          v20 = v18;
          v16 = (__int64 **)v18;
          if ( v19 )
          {
            *(_QWORD *)(a1 + 32) = v19;
            v20 = *v10;
          }
          sub_10000C830(*(__int64 **)(a1 + 40), v20);
          ++*(_QWORD *)(a1 + 48);
          v21 = sub_1000134B0(v30, (__int64)&v25, 1);
          v16[5] = (__int64 *)v21;
          v22 = a3;
          LOBYTE(v10) = 1;
          if ( v21 )
          {
            v21[48] = 1;
            v35 = 0;
          }
          if ( !v16[5] )
            goto LABEL_30;
        }
        v28 = 0;
        v27 = 0;
        v29 = 0;
        sub_100012A90((__int64)v30, (__int64)&v25, (__int64 *)&v27);
        *((_QWORD *)&v28 + 1) = v16[5];
        v29 = 0;
        sub_1000191B0((__int64 *)&v27, v22, v12);
        if ( v29 == 1 && *((_QWORD *)&v28 + 1) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
        if ( (_QWORD)v27 )
        {
          *((_QWORD *)&v27 + 1) = 0;
          qfree((void *)v27);
        }
LABEL_30:
        sub_10001CA40((__int64)v30);
        return (unsigned int)v10;
      }
    }
    LODWORD(v10) = 0;
    goto LABEL_30;
  }
  LODWORD(v10) = 0;
  return (unsigned int)v10;
}
// 1000A7C78: using guessed type __int64 (__fastcall *off_1000A7C78[38])();
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
// 1000A80A8: using guessed type __int64 (__fastcall *off_1000A80A8[3])();
