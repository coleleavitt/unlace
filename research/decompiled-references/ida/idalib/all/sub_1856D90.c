__int64 __fastcall sub_1856D90(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6, double a7)
{
  __int16 v8; // ax
  unsigned int v9; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // rax
  size_t v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r8
  char v30; // al
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int *v33; // r13
  unsigned int *v34; // rbx
  unsigned int v35; // edx
  __int64 v36; // rcx
  unsigned __int8 v37; // [rsp+18h] [rbp-400h]
  __int64 v38; // [rsp+20h] [rbp-3F8h]
  unsigned __int64 v39; // [rsp+20h] [rbp-3F8h]
  __int64 v40; // [rsp+20h] [rbp-3F8h]
  __int64 v41; // [rsp+28h] [rbp-3F0h]
  __int64 v42; // [rsp+28h] [rbp-3F0h]
  int v43; // [rsp+34h] [rbp-3E4h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-3E0h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-3D4h] BYREF
  _QWORD *v46; // [rsp+48h] [rbp-3D0h] BYREF
  _QWORD v47[4]; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v48[4]; // [rsp+70h] [rbp-3A8h] BYREF
  __int16 v49; // [rsp+90h] [rbp-388h] BYREF
  unsigned int **v50; // [rsp+98h] [rbp-380h]
  unsigned int v51; // [rsp+A0h] [rbp-378h] BYREF
  char v52; // [rsp+A4h] [rbp-374h]
  int v53[36]; // [rsp+E0h] [rbp-338h] BYREF
  _BYTE v54[168]; // [rsp+170h] [rbp-2A8h] BYREF
  unsigned __int8 v55; // [rsp+218h] [rbp-200h]
  _BYTE v56[168]; // [rsp+220h] [rbp-1F8h] BYREF
  unsigned __int8 v57; // [rsp+2C8h] [rbp-150h]
  unsigned int *v58; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 v59; // [rsp+2D8h] [rbp-140h]
  __int64 v60; // [rsp+2E0h] [rbp-138h] BYREF

  v8 = *(_WORD *)a2;
  v44 = a2;
  v43 = a5;
  if ( (v8 & 0x1FF) == 9 )
  {
    v9 = 1;
    sub_99BDC0(
      a3,
      0,
      a3[1],
      (_BYTE *)(a2 + 4LL * *(unsigned int *)(a2 + 4) + 20),
      *(_DWORD *)(a2 + 16) * ((*(_WORD *)(a2 + 2) >> 6) & 7u));
    return v9;
  }
  v45 = sub_EEB7E0(a2, a2, a7);
  v58 = *(unsigned int **)(a2 + 8);
  v15 = sub_C1BEF0((__int64)&v58, a2, v13, v14);
  v46 = sub_F63270(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a2, v16, v17, v18, v19);
  if ( !v46 )
  {
    v9 = 0;
    sub_168B9F0((__int64)&v58, (__int64 *)(a1 + 8), v45, 0x150Fu, 0);
    sub_18564D0((__int64)&v58, &v43);
    sub_15F7200(&v58);
    return v9;
  }
  v47[0] = a1;
  v47[1] = &v45;
  v47[2] = &v46;
  v20 = j__strlen("size");
  sub_1842760((__int64)v54, v47, "size", v20);
  v21 = j__strlen("data");
  sub_1842760((__int64)v56, v47, "data", v21);
  if ( v55 && (v37 = v57) != 0 )
  {
    v48[0] = a1;
    v48[2] = (__int64)&v45;
    v48[1] = (__int64)&v44;
    v38 = sub_1837CE0(v48, (__int64)v54);
    v24 = sub_1837CE0(v48, (__int64)v56);
    v41 = sub_A63CE0(*(_QWORD **)(a1 + 248));
    v25 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) | 1LL);
    if ( v38 == 1 || (v26 = v38 & 0xFFFFFFFFFFFFFFFELL, v39 = v25, v42 = sub_1C0AE60(a1, v26, v41, 7, 0), v42 == 1) )
    {
      sub_168B9F0((__int64)&v58, (__int64 *)(a1 + 8), v45, 0x1510u, 0);
      v22 = sub_18564D0((__int64)&v58, &v43);
      v53[0] = 0;
    }
    else
    {
      if ( v24 != 1 )
      {
        v27 = sub_1C0AE60(a1, v24 & 0xFFFFFFFFFFFFFFFELL, v39, 8, 0);
        v29 = v27;
        if ( v27 != 1 )
        {
          v9 = a6 ^ 1;
          if ( !(_BYTE)a6
            && (v40 = v27,
                v30 = sub_FD3830(
                        *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                        0x1D78u,
                        v45,
                        *(_QWORD *)(a1 + 264),
                        v27,
                        v28),
                v29 = v40,
                v30 == 1) )
          {
            v9 = v37;
          }
          else
          {
            v49 = 0;
            v58 = (unsigned int *)&v60;
            v52 &= ~1u;
            v51 = 0;
            v59 = 0x800000000LL;
            v50 = &v58;
            v31 = sub_C55F00(v44, a3, v42 & 0xFFFFFFFFFFFFFFFELL, v29 & 0xFFFFFFFFFFFFFFFELL, a4, (__int64)&v49);
            if ( !(_BYTE)v31 || (_DWORD)v59 )
            {
              v32 = sub_EEB7E0(v44, (__int64)a3, a7);
              sub_168B9F0((__int64)v53, (__int64 *)(a1 + 8), v32, (_BYTE)a6 == 0 ? 7544 : 5390, 0);
              sub_18564D0((__int64)v53, &v43);
              sub_15F7200(v53);
              v33 = &v58[8 * (unsigned int)v59];
              if ( v58 != v33 )
              {
                v34 = v58;
                do
                {
                  v35 = *v34;
                  v36 = (__int64)(v34 + 2);
                  v34 += 8;
                  sub_168CDE0((__int64)v53, (__int64 *)(a1 + 8), v35, v36, 0);
                  sub_15F7200(v53);
                }
                while ( v33 != v34 );
              }
            }
            else
            {
              v9 = v31;
            }
            sub_C23820((__int64)&v58);
            if ( v51 > 1 )
              sub_A4F8E0((int *)&v51);
          }
          goto LABEL_13;
        }
      }
      sub_168B9F0((__int64)&v58, (__int64 *)(a1 + 8), v45, 0x1510u, 0);
      v22 = sub_18564D0((__int64)&v58, &v43);
      v53[0] = 1;
    }
  }
  else
  {
    sub_168B9F0((__int64)&v58, (__int64 *)(a1 + 8), v45, 0x1511u, 0);
    v22 = sub_18564D0((__int64)&v58, &v43);
    if ( v55 || (v23 = 2, v57) )
      v23 = v55;
    v53[0] = v23;
  }
  v9 = 0;
  sub_1587D10(v22, v53);
  sub_15F7200(&v58);
LABEL_13:
  if ( v57 )
    sub_169D230((__int64)v56);
  if ( v55 )
    sub_169D230((__int64)v54);
  return v9;
}
