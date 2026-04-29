__int64 __fastcall sub_12C440(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  char v8; // r11
  __int64 v11; // r15
  const __m128i *v12; // r10
  unsigned int v15; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  __int64 (__fastcall **v20)(); // rsi
  __int64 v21; // r12
  __int64 (__fastcall **v22)(); // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rax
  char v26; // al
  char v27; // al
  char v28; // al
  const __m128i *v29; // r10
  char v30; // r11
  char v31; // al
  char v32; // al
  __int64 v33; // [rsp+0h] [rbp-C8h]
  _DWORD *v34; // [rsp+0h] [rbp-C8h]
  const __m128i *v35; // [rsp+8h] [rbp-C0h]
  unsigned __int8 *v36; // [rsp+10h] [rbp-B8h]
  const __m128i *v37; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v38; // [rsp+18h] [rbp-B0h]
  char v39; // [rsp+18h] [rbp-B0h]
  char v40; // [rsp+20h] [rbp-A8h]
  char v41[16]; // [rsp+30h] [rbp-98h] BYREF
  char v42[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall **v43)(); // [rsp+50h] [rbp-78h] BYREF
  __int64 v44; // [rsp+58h] [rbp-70h]
  const __m128i *v45; // [rsp+60h] [rbp-68h]
  __int64 v46; // [rsp+68h] [rbp-60h]
  int v47; // [rsp+70h] [rbp-58h]
  int v48; // [rsp+74h] [rbp-54h]
  unsigned __int8 v49; // [rsp+78h] [rbp-50h]
  unsigned __int64 v50; // [rsp+88h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v8 = a8;
  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 || *(_DWORD *)(a3 + 68) >= a4 )
    return 0;
  v11 = *(_QWORD *)(a1 + 96);
  v12 = a2;
  if ( a6 )
  {
    v17 = sub_307E00(a3);
    v12 = a2;
    v8 = a8;
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 4) <= a4 )
      {
        v33 = v17;
        v44 = 0;
        sub_11EE80((__int64)&v43, (unsigned __int8 *)v17);
        v18 = v44;
        v19 = 8;
        v20 = v43;
        if ( *(_DWORD *)(v33 + 4) == a4 )
          v19 = 4;
        v21 = *(_QWORD *)(a3 + 40);
        v22 = *(__int64 (__fastcall ***)())(a3 + 32);
        *(_DWORD *)a3 = v19;
        *(_QWORD *)(a3 + 32) = v20;
        *(_QWORD *)(a3 + 40) = v18;
        sub_1181E0(a3 + 48);
        *(_DWORD *)(a3 + 68) = a4;
        v43 = v22;
        v44 = v21;
        sub_1181E0((__int64)&v43);
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
          sub_127BA0(a3 + 48, a1, *(_QWORD *)(a3 + 24), *(_DWORD *)(a3 + 68) - a4);
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
        v23 = *(_QWORD *)(a3 + 56);
        if ( *(_DWORD *)v23 == 12 && 2 * *(_DWORD *)(a3 + 68) == a4 )
        {
          if ( *(_BYTE *)(v23 + 32) == 4 )
          {
            v24 = *(_QWORD *)(v23 + 40);
            if ( *(_DWORD *)v24 == 9 )
            {
              v36 = (unsigned __int8 *)(v23 + 48);
              goto LABEL_31;
            }
          }
          if ( *(_BYTE *)(v23 + 48) == 4 )
          {
            v24 = *(_QWORD *)(v23 + 56);
            if ( *(_DWORD *)v24 == 9 )
            {
              v36 = (unsigned __int8 *)(v23 + 32);
LABEL_31:
              if ( v24 )
              {
                if ( *(_BYTE *)(v24 + 32) == 4 )
                {
                  v25 = *(_DWORD **)(v24 + 40);
                  v34 = v25;
                  if ( *v25 == 35 )
                  {
                    v40 = v8;
                    v35 = v12;
                    v38 = (unsigned __int8 *)(a3 + 32);
                    v26 = sub_12C000(v12, a5, (__int64)(v25 + 8), a5, a3 + 32, 0);
                    v12 = v35;
                    v8 = v40;
                    if ( v26 )
                    {
                      v27 = sub_12C000(v35, a5, (__int64)(v34 + 12), a5, (__int64)v36, 0);
                      v12 = v35;
                      v8 = v40;
                      if ( v27 )
                      {
                        sub_11EE80((__int64)v41, v38);
                        sub_11EE80((__int64)v42, v36);
                        sub_11EE80((__int64)&v43, (unsigned __int8 *)(a3 + 64));
                        v28 = sub_12CD60(a1, v35, a5, v41, a6, (unsigned int)a7);
                        v29 = v35;
                        v30 = v40;
                        if ( v28 )
                        {
                          v31 = sub_12CD60(a1, v35, a5, v42, a6, (unsigned int)a7);
                          v29 = v35;
                          v30 = v40;
                          if ( v31 )
                          {
                            v32 = sub_12CD60(a1, v35, a5, &v43, a6, (unsigned int)a7);
                            v29 = v35;
                            v30 = v40;
                            if ( v32 )
                            {
                              sub_117E50((char *)v38, v41);
                              sub_117E50((char *)(a3 + 48), v42);
                              sub_117E50((char *)(a3 + 64), (char *)&v43);
                              sub_1181E0((__int64)&v43);
                              sub_1181E0((__int64)v42);
                              sub_1181E0((__int64)v41);
                              return 1;
                            }
                          }
                        }
                        v39 = v30;
                        v37 = v29;
                        sub_1181E0((__int64)&v43);
                        sub_1181E0((__int64)v42);
                        sub_1181E0((__int64)v41);
                        v12 = v37;
                        v8 = v39;
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
  v44 = a1;
  v45 = v12;
  v43 = &off_4B1310;
  v46 = a5;
  v47 = a4;
  v48 = a7;
  v49 = a6;
  return sub_11D550((_DWORD *)a3, v8, (__int64)&v43);
}
