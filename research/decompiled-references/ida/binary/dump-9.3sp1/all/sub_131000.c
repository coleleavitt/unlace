__int64 __fastcall sub_131000(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  char v8; // r11
  unsigned __int64 v11; // r15
  const __m128i *v12; // r10
  unsigned int v15; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 *v20; // rcx
  int v21; // edx
  __int64 (__fastcall **v22)(); // rsi
  unsigned __int64 *v23; // r12
  __int64 (__fastcall **v24)(); // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rax
  char v28; // al
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  const __m128i *v37; // r10
  char v38; // r11
  char v39; // al
  char v40; // al
  __int64 v41; // [rsp+0h] [rbp-C8h]
  _DWORD *v42; // [rsp+0h] [rbp-C8h]
  const __m128i *v43; // [rsp+8h] [rbp-C0h]
  unsigned __int8 *v44; // [rsp+10h] [rbp-B8h]
  const __m128i *v45; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+18h] [rbp-B0h]
  char v47; // [rsp+18h] [rbp-B0h]
  char v48; // [rsp+20h] [rbp-A8h]
  char v49[16]; // [rsp+30h] [rbp-98h] BYREF
  char v50[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 *v52; // [rsp+58h] [rbp-70h]
  const __m128i *v53; // [rsp+60h] [rbp-68h]
  __int64 v54; // [rsp+68h] [rbp-60h]
  int v55; // [rsp+70h] [rbp-58h]
  int v56; // [rsp+74h] [rbp-54h]
  unsigned __int8 v57; // [rsp+78h] [rbp-50h]
  unsigned __int64 v58; // [rsp+88h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v8 = a8;
  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 || *(_DWORD *)(a3 + 68) >= a4 )
    return 0;
  v11 = a1[12];
  v12 = a2;
  if ( a6 )
  {
    v17 = sub_30D1C0(a3);
    v12 = a2;
    v8 = a8;
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 4) <= a4 )
      {
        v41 = v17;
        v52 = nullptr;
        sub_123A40((__int64)&v51, (unsigned __int8 *)v17, v18, v19);
        v20 = v52;
        v21 = 8;
        v22 = v51;
        if ( *(_DWORD *)(v41 + 4) == a4 )
          v21 = 4;
        v23 = *(unsigned __int64 **)(a3 + 40);
        v24 = *(__int64 (__fastcall ***)())(a3 + 32);
        *(_DWORD *)a3 = v21;
        *(_QWORD *)(a3 + 32) = v22;
        *(_QWORD *)(a3 + 40) = v20;
        sub_11CDA0(a3 + 48);
        *(_DWORD *)(a3 + 68) = a4;
        v51 = v24;
        v52 = v23;
        sub_11CDA0((__int64)&v51);
        return 1;
      }
    }
  }
  v15 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 <= 0xBu )
  {
    if ( v15 <= 9 )
    {
      if ( v15 == 2 )
      {
        if ( *(_BYTE *)(v11 + 145) != a6 )
          sub_12C760(a3 + 48, a1, *(_QWORD *)(a3 + 24), (unsigned int)(*(_DWORD *)(a3 + 68) - a4));
LABEL_9:
        *(_DWORD *)(a3 + 68) = a4;
        return 1;
      }
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a3 + 36) >= a4 )
    {
      if ( *(_DWORD *)(a3 + 36) == a4 )
        *(_DWORD *)a3 = 4;
      goto LABEL_9;
    }
    return 0;
  }
  if ( v15 == 13 )
  {
    if ( a5 )
    {
      if ( *(_BYTE *)(a3 + 48) == 4 )
      {
        v25 = *(_QWORD *)(a3 + 56);
        if ( *(_DWORD *)v25 == 12 && 2 * *(_DWORD *)(a3 + 68) == a4 )
        {
          if ( *(_BYTE *)(v25 + 32) == 4 )
          {
            v26 = *(_QWORD *)(v25 + 40);
            if ( *(_DWORD *)v26 == 9 )
            {
              v44 = (unsigned __int8 *)(v25 + 48);
              goto LABEL_31;
            }
          }
          if ( *(_BYTE *)(v25 + 48) == 4 )
          {
            v26 = *(_QWORD *)(v25 + 56);
            if ( *(_DWORD *)v26 == 9 )
            {
              v44 = (unsigned __int8 *)(v25 + 32);
LABEL_31:
              if ( v26 )
              {
                if ( *(_BYTE *)(v26 + 32) == 4 )
                {
                  v27 = *(_DWORD **)(v26 + 40);
                  v42 = v27;
                  if ( *v27 == 35 )
                  {
                    v48 = v8;
                    v43 = v12;
                    v46 = (unsigned __int8 *)(a3 + 32);
                    v28 = sub_130BC0(v12, a5, (__int64)(v27 + 8), a5, a3 + 32, 0);
                    v12 = v43;
                    v8 = v48;
                    if ( v28 )
                    {
                      v29 = sub_130BC0(v43, a5, (__int64)(v42 + 12), a5, (__int64)v44, 0);
                      v12 = v43;
                      v8 = v48;
                      if ( v29 )
                      {
                        sub_123A40((__int64)v49, v46, v30, v31);
                        sub_123A40((__int64)v50, v44, v32, v33);
                        sub_123A40((__int64)&v51, (unsigned __int8 *)(a3 + 64), v34, v35);
                        v36 = sub_131920(a1, v43, a5, v49, a6, (unsigned int)a7);
                        v37 = v43;
                        v38 = v48;
                        if ( v36 )
                        {
                          v39 = sub_131920(a1, v43, a5, v50, a6, (unsigned int)a7);
                          v37 = v43;
                          v38 = v48;
                          if ( v39 )
                          {
                            v40 = sub_131920(a1, v43, a5, &v51, a6, (unsigned int)a7);
                            v37 = v43;
                            v38 = v48;
                            if ( v40 )
                            {
                              sub_11CA10((char *)v46, v49);
                              sub_11CA10((char *)(a3 + 48), v50);
                              sub_11CA10((char *)(a3 + 64), (char *)&v51);
                              sub_11CDA0((__int64)&v51);
                              sub_11CDA0((__int64)v50);
                              sub_11CDA0((__int64)v49);
                              return 1;
                            }
                          }
                        }
                        v47 = v38;
                        v45 = v37;
                        sub_11CDA0((__int64)&v51);
                        sub_11CDA0((__int64)v50);
                        sub_11CDA0((__int64)v49);
                        v12 = v45;
                        v8 = v47;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_16:
  v52 = a1;
  v53 = v12;
  v51 = &off_4DD930;
  v54 = a5;
  v55 = a4;
  v56 = a7;
  v57 = a6;
  return sub_122110((_DWORD *)a3, v8, (__int64)&v51);
}
