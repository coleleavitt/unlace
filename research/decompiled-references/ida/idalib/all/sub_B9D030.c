__int64 __fastcall sub_B9D030(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rbx
  void *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r15
  unsigned __int64 v22; // rax
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  __int64 v26; // r15
  unsigned __int8 *v27; // r14
  __int64 i; // rbx
  char (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // [rsp+0h] [rbp-F8h] BYREF
  int v33; // [rsp+8h] [rbp-F0h]
  void *v34; // [rsp+10h] [rbp-E8h] BYREF
  int v35; // [rsp+18h] [rbp-E0h]
  void *v36; // [rsp+20h] [rbp-D8h] BYREF
  int v37; // [rsp+28h] [rbp-D0h]
  void *v38; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-C0h]
  char v40; // [rsp+3Ch] [rbp-BCh]
  void *v41; // [rsp+40h] [rbp-B8h] BYREF
  char (__fastcall *v42)(__int64, __int64); // [rsp+48h] [rbp-B0h] BYREF
  void **v43; // [rsp+50h] [rbp-A8h]
  int v44; // [rsp+58h] [rbp-A0h]
  _QWORD v45[8]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v46[56]; // [rsp+C0h] [rbp-38h] BYREF

  v2 = a1 + 80;
  if ( !*(_DWORD *)(a1 + 80) )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v6 = (void *)sub_B8C330(a1);
    v39 = 32;
    v38 = v6;
    v36 = v6;
    v34 = v6;
    v32 = v6;
    v41 = v6;
    v43 = &v32;
    v37 = 16;
    v35 = 16;
    v33 = 8;
    v42 = sub_B95D50;
    v44 = 8;
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    v45[3] = &v36;
    v45[0] = sub_B95D50;
    v45[1] = &v38;
    v45[2] = sub_B95D50;
    v45[4] = sub_B95D50;
    v45[5] = &v34;
    v45[6] = sub_B95BC0;
    v45[7] = &v41;
    v9 = sub_F63240(v7, a2, sub_B95D50, &v34, v8);
    if ( v9 )
    {
      v13 = *(unsigned __int8 *)(v9 + 73);
      LOBYTE(v13) = (unsigned __int8)v13 >> 5;
      if ( (_BYTE)v13 != 2 )
      {
        v14 = sub_B7E870(v9, a2, v13, v10, v11, v12);
        v19 = (__int64)v14;
        if ( v14 )
        {
          if ( (*((_BYTE *)v14 + 28) & 0x7Fu) - 59 > 2
            || (a2 = v14[13],
                sub_7052B0((__int64 *)(a2 + 96), a2, v15, v16, v17, v18),
                !*(_DWORD *)(*(_QWORD *)(v19 + 128) + 16LL)) )
          {
            v20 = sub_B7E900(v19, a2, v15, v16, v17, v18);
            if ( v20 )
            {
              v21 = v45;
LABEL_10:
              if ( (*(_BYTE *)(v20 + 68) & 1) != 0 )
              {
                if ( !*(_QWORD *)(v20 + 40) )
                {
LABEL_14:
                  while ( 1 )
                  {
                    v22 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v20 = v22;
                    if ( !v22 )
                      break;
                    if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_10;
                  }
                  if ( v21 == (_QWORD *)v46 )
                  {
                    BYTE4(v41) &= ~1u;
                    LODWORD(v41) = 0;
                    sub_A4F800((__int64)&v42, 0, 4);
                    LODWORD(v41) = 10;
                    sub_A4FD20(v2, (__int64)&v41);
                    if ( (unsigned int)v41 > 1 )
                      sub_A4F8E0((int *)&v41);
                    v23 = (void *)*(unsigned int *)(a1 + 64);
                    v40 = 1;
                    v39 = 32;
                    v38 = v23;
                    sub_B96770((__int64)&v41, (__int64 *)&v38);
                    sub_A4FD20(*(_QWORD *)(a1 + 88) + 56LL * *(unsigned int *)(a1 + 96), (__int64)&v41);
                    if ( (unsigned int)v41 > 1 )
                      sub_A4F8E0((int *)&v41);
                    if ( v39 > 0x40 && v38 )
                      operator delete[](v38);
                    v24 = (void *)*(unsigned __int16 *)(a1 + 68);
                    v40 = 1;
                    v39 = 16;
                    v38 = v24;
                    sub_B96770((__int64)&v41, (__int64 *)&v38);
                    sub_A4FD20(*(_QWORD *)(a1 + 88) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 96) + 1), (__int64)&v41);
                    if ( (unsigned int)v41 > 1 )
                      sub_A4F8E0((int *)&v41);
                    if ( v39 > 0x40 && v38 )
                      operator delete[](v38);
                    v25 = (void *)*(unsigned __int16 *)(a1 + 70);
                    v40 = 1;
                    v39 = 16;
                    v38 = v25;
                    sub_B96770((__int64)&v41, (__int64 *)&v38);
                    sub_A4FD20(*(_QWORD *)(a1 + 88) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 96) + 2), (__int64)&v41);
                    if ( (unsigned int)v41 > 1 )
                      sub_A4F8E0((int *)&v41);
                    if ( v39 > 0x40 && v38 )
                      operator delete[](v38);
                    BYTE4(v41) &= ~1u;
                    LODWORD(v41) = 0;
                    sub_A51400((__int64)&v41, 8, 8);
                    v26 = sub_A4FD20(
                            *(_QWORD *)(a1 + 88) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 96) + 3),
                            (__int64)&v41);
                    if ( (unsigned int)v41 > 1 )
                      sub_A4F8E0((int *)&v41);
                    v27 = (unsigned __int8 *)(a1 + 72);
                    for ( i = 0; i != 448; i += 56 )
                    {
                      while ( 1 )
                      {
                        v29 = (char (__fastcall *)(__int64, __int64))*v27;
                        BYTE4(v41) &= ~1u;
                        LODWORD(v41) = 2;
                        v42 = v29;
                        v30 = *(_QWORD *)(v26 + 8);
                        LODWORD(v43) = 8;
                        BYTE4(v43) = 1;
                        sub_A4FD20(i + v30, (__int64)&v41);
                        if ( (unsigned int)v41 > 1 )
                          break;
                        i += 56;
                        ++v27;
                        if ( i == 448 )
                          goto LABEL_38;
                      }
                      ++v27;
                      sub_A4F8E0((int *)&v41);
                    }
LABEL_38:
                    v31 = sub_B8C330(a1);
                    sub_A5F590(v31, (__int64)sub_B70CC0, v2);
                  }
                }
              }
              else if ( v21 != (_QWORD *)v46
                     && ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))*v21)(v21[1], *(_QWORD *)(v20 + 48)) )
              {
                v21 += 2;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
