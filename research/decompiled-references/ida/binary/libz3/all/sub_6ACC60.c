__int64 __fastcall sub_6ACC60(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _OWORD *v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // [rsp-8h] [rbp-2C8h]
  int v21; // [rsp+0h] [rbp-2C0h]
  int v22; // [rsp+0h] [rbp-2C0h]
  __int64 *v23; // [rsp+8h] [rbp-2B8h]
  int v24; // [rsp+8h] [rbp-2B8h]
  int v25[2]; // [rsp+10h] [rbp-2B0h]
  int v26; // [rsp+10h] [rbp-2B0h]
  int v27; // [rsp+10h] [rbp-2B0h]
  int v28[2]; // [rsp+18h] [rbp-2A8h]
  int v29; // [rsp+18h] [rbp-2A8h]
  int v30; // [rsp+18h] [rbp-2A8h]
  __int64 v31; // [rsp+20h] [rbp-2A0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-298h]
  void *ptr; // [rsp+30h] [rbp-290h] BYREF
  void *v34; // [rsp+38h] [rbp-288h]
  int v35; // [rsp+40h] [rbp-280h]
  __int128 v36; // [rsp+48h] [rbp-278h]
  int v37; // [rsp+58h] [rbp-268h]
  int v38[2]; // [rsp+60h] [rbp-260h] BYREF
  int v39; // [rsp+68h] [rbp-258h]
  int v40; // [rsp+70h] [rbp-250h]
  int v41; // [rsp+78h] [rbp-248h]
  int v42; // [rsp+80h] [rbp-240h]
  int v43; // [rsp+88h] [rbp-238h]
  int v44; // [rsp+90h] [rbp-230h]
  int v45; // [rsp+98h] [rbp-228h]
  int v46; // [rsp+A0h] [rbp-220h]
  void *v47; // [rsp+A8h] [rbp-218h]
  int v48; // [rsp+B0h] [rbp-210h]
  __int64 v49; // [rsp+B8h] [rbp-208h]
  _BYTE *v50; // [rsp+F0h] [rbp-1D0h]
  int v51; // [rsp+F8h] [rbp-1C8h]
  __int64 v52; // [rsp+100h] [rbp-1C0h]
  _QWORD v53[19]; // [rsp+108h] [rbp-1B8h] BYREF
  int v54; // [rsp+1A0h] [rbp-120h]
  __int64 (__fastcall **v55)(); // [rsp+1A8h] [rbp-118h] BYREF
  int v56; // [rsp+238h] [rbp-88h]
  __int64 v57; // [rsp+240h] [rbp-80h]
  __int64 v58; // [rsp+248h] [rbp-78h]
  __int64 v59; // [rsp+250h] [rbp-70h]
  __int64 v60; // [rsp+258h] [rbp-68h]
  __int64 v61; // [rsp+260h] [rbp-60h]
  __int64 v62; // [rsp+268h] [rbp-58h]
  __int64 v63; // [rsp+270h] [rbp-50h]
  _BYTE v64[72]; // [rsp+278h] [rbp-48h] BYREF

  v5 = (_OWORD *)sub_186B270(0x40u);
  v6 = *a3;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  ptr = v5;
  v34 = &byte_8;
  v35 = 0;
  v36 = 0;
  sub_157E9E0((int)&ptr, v6);
  sub_157CA60(&ptr, *(_QWORD *)(*a1 + 840LL));
  result = v36;
  if ( (_QWORD)v36 )
  {
    v8 = *(_DWORD *)(v36 - 4);
    if ( v8 )
    {
      v23 = &v31;
      v9 = 8LL * (unsigned int)(v8 - 1);
      while ( 1 )
      {
        *(_QWORD *)v28 = *a1;
        *(_QWORD *)v25 = *(_QWORD *)(result + v9);
        sub_180C5A0(v38, "bound");
        v10 = sub_15E3D10(
                v28[0],
                (int)v38,
                (int)&qword_18D6CD0,
                0,
                0,
                v25[0],
                1,
                v20,
                v21,
                (int)v23,
                v25[0],
                v28[0],
                v31,
                v32,
                (char)ptr,
                (int)v34,
                v35,
                v36,
                SDWORD2(v36),
                v37,
                v38[0],
                v39,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
        v13 = sub_15DC610(v29, v10, 0, 0, v11, v12, v22, v24, v26, v29, v31, v32, (int)ptr, (int)v34, v35, (void *)v36);
        v31 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        sub_6ACBA0((_QWORD *)(a2 + 8), v23);
        v9 -= 8;
        if ( v9 == -8 )
          break;
        result = v36;
      }
      v14 = *a1;
      sub_1584DD0(v38, *a1, 0);
      v51 = 0;
      *(_QWORD *)v38 = &off_1C4CA60;
      v50 = v64;
      v52 = 0;
      sub_1584DD0(v53, v14, 0);
      v53[18] = 0;
      v54 = 0;
      v53[0] = &off_1C61DB8;
      sub_1584DD0(&v55, v14, 0);
      v16 = *(_QWORD *)(a2 + 8);
      v58 = v14;
      v60 = v14;
      v62 = v14;
      v55 = &off_1C61DE0;
      v56 = 0;
      v57 = 0;
      v59 = 0;
      v61 = 0;
      v63 = 0;
      *(_QWORD *)v38 = &off_1C4CA80;
      v64[8] = 1;
      if ( v16 )
        v17 = *(_DWORD *)(v16 - 4);
      else
        v17 = 0;
      sub_157BE40((int)v23, (int)v38, *a3, v17, v16, v15, v21, (__int64)v23, v27, v30, v31, v32, (__int64)ptr, v34);
      v18 = *a3;
      v19 = v32;
      *a3 = v31;
      v31 = v18;
      sub_6A99C0(v18, v19);
      *(_QWORD *)v38 = &off_1C4CA80;
      result = sub_267D20(v38);
    }
  }
  if ( *((_QWORD *)&v36 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v36 + 1) - 8LL));
  if ( (_QWORD)v36 )
    result = sub_186B220((void *)(v36 - 8));
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

