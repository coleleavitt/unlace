__int64 __fastcall sub_156070(__int128 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  char *v4; // r14
  unsigned int v5; // r13d
  __int64 v7; // r9
  int v8; // eax
  __int128 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  __int128 v14; // rdi
  int v15; // r9d
  __int128 v16; // rdi
  __int128 v17; // rdi
  char v18; // al
  __int64 v19; // rdx
  int v20; // r12d
  __int64 v21; // r10
  __int128 v22; // rdi
  int v23; // eax
  __int64 v24; // [rsp+8h] [rbp-138h]
  int v25; // [rsp+14h] [rbp-12Ch]
  __int64 v26; // [rsp+18h] [rbp-128h]
  __int64 v27; // [rsp+20h] [rbp-120h]
  __int64 v28; // [rsp+28h] [rbp-118h]
  __int64 v29; // [rsp+30h] [rbp-110h]
  __int64 v31; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+78h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+88h] [rbp-B8h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v38[2]; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-78h]
  __int64 v41; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-58h]
  __int64 v43; // [rsp+F0h] [rbp-50h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+108h] [rbp-38h]

  v2 = *((_QWORD *)&a1 + 1);
  v3 = a1;
  v45 = __readfsqword(0x28u);
  v4 = (char *)(a2 + 32);
  if ( (unsigned __int8)sub_11CA60((_BYTE *)(a2 + 32)) )
  {
    if ( (unsigned __int8)sub_11CA60((_BYTE *)(a2 + 48)) )
    {
      *((_QWORD *)&a1 + 1) = &v33;
      v33 = v2;
      v27 = sub_14FD30(a1, (__int64)v4, -1, &v31, &v32);
      if ( v27 )
      {
        *((_QWORD *)&a1 + 1) = &v34;
        v34 = v2;
        v7 = sub_14FD30(a1, a2 + 48, 0, nullptr, nullptr);
        if ( v7 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
          v5 = sub_30CFD0(v26, a1, v33, v27, v34, v7);
          if ( (_BYTE)v5 )
          {
            v36[1] = 0;
            v36[0] = 0xFFFFFFFF00000000LL;
            v37[0] = 0xFFFFFFFF00000000LL;
            v8 = *(_DWORD *)(v31 + 36);
            v37[1] = 0;
            v35 = 0;
            v25 = v8;
            if ( *(_DWORD *)(v27 + 4) == v8 )
            {
              sub_125180((__int64)v36, (unsigned __int8 *)v27);
            }
            else
            {
              sub_125180((__int64)v37, (unsigned __int8 *)(v31 + 32));
              if ( !(unsigned __int8)sub_1272B0((unsigned __int64)v37, v26, SHIDWORD(v37[0]) / 2, 0) )
              {
                if ( !under_debugger )
                  sub_383060(50496);
                goto LABEL_71;
              }
              v24 = v32;
              v35 = v32;
              while ( 1 )
              {
                *(_QWORD *)&v9 = v3;
                *((_QWORD *)&v9 + 1) = v37;
                v13 = sub_129440(v9, (__int64)&v35, 0);
                if ( !v13 )
                  goto LABEL_40;
                if ( LOBYTE(v37[0]) == 4 )
                  goto LABEL_21;
                sub_127A20((__int64)v38, v3, v35, 0, v11, v12);
                *(_QWORD *)&v14 = v3;
                *((_QWORD *)&v14 + 1) = &v41;
                v41 = 0;
                v42 = 0;
                v43 = 0;
                v44 = 0;
                sub_123EA0(v14, (__int64)v37, 0, 0xFFFF0000);
                if ( (unsigned __int8)sub_64780(&v41, v38) || (unsigned __int8)sub_318470(&v43, &v39) )
                  break;
                if ( v43 )
                {
                  *(_QWORD *)&v44 = 0;
                  qfree(v43);
                }
                qfree(v41);
                if ( v39 )
                {
                  v40 = 0;
                  qfree(v39);
                }
                qfree(v38[0]);
              }
              if ( !(unsigned __int8)sub_12CF30(*(_QWORD *)(v3 + 64), v13 + 64, (unsigned __int8 *)v37, 0, 0, v15) )
                v13 = 0;
              if ( v43 )
              {
                *(_QWORD *)&v44 = 0;
                qfree(v43);
              }
              qfree(v41);
              if ( v39 )
              {
                v40 = 0;
                qfree(v39);
              }
              qfree(v38[0]);
              if ( v13 )
              {
LABEL_21:
                if ( (unsigned __int8)sub_1205A0((_BYTE *)v13, v26, 0, v10, v11, v12) )
                {
                  if ( *(_DWORD *)v13 != 4 && (*(_DWORD *)v13 != 67 || *(_DWORD *)(v13 + 36) != *(_DWORD *)(v13 + 68)) )
                    goto LABEL_24;
                  sub_125180((__int64)v37, (unsigned __int8 *)(v13 + 64));
                  v35 = *(_QWORD *)(v35 + 8);
                }
                else
                {
                  sub_1262E0((__int64)v37, (unsigned __int8 *)v13);
                }
              }
              else
              {
LABEL_40:
                v35 = v24;
              }
              if ( HIDWORD(v37[0]) == v25 )
              {
                sub_11CA10((char *)v36, (char *)v37);
                *((_QWORD *)&v16 + 1) = v35;
LABEL_28:
                if ( *((_QWORD *)&v16 + 1) != v2 )
                {
                  if ( !*((_QWORD *)&v16 + 1) )
                    goto LABEL_44;
                  if ( !v3 )
                    goto LABEL_24;
                  *(_QWORD *)&v16 = v3;
                  if ( !(unsigned __int8)sub_155D40(v16, (__int64)v36, *((__int64 *)&v16 + 1), v2, 0) )
                    goto LABEL_24;
                }
LABEL_32:
                if ( HIDWORD(v36[0]) == v25 )
                {
                  sub_12AB50((unsigned __int8 *)v36, v26, v25, 2);
                  sub_11CA10(v4, (char *)v36);
                  *(_DWORD *)a2 = 66;
                  *(_DWORD *)(v3 + 24) |= 0x40u;
                  sub_11CDA0((__int64)v37);
                  goto LABEL_25;
                }
                if ( !under_debugger )
                  sub_383060(50497);
LABEL_71:
                BUG();
              }
              if ( v35 != v33 )
              {
                if ( v2 )
                {
LABEL_44:
                  v42 = 0;
                  *(_QWORD *)&v44 = 0;
                  if ( !v3 )
                  {
                    v21 = 0;
                    v20 = 0;
                    goto LABEL_47;
                  }
                  *((_QWORD *)&v17 + 1) = v35;
                  *(_QWORD *)&v17 = v3;
                  LODWORD(v41) = 0;
                  v43 = 0;
                  *((_QWORD *)&v44 + 1) = 0;
                  v18 = sub_155D40(v17, (__int64)v37, v35, v2, (__int64)&v41);
                  v20 = v41;
                  v21 = *((_QWORD *)&v44 + 1);
                  v29 = v43;
                  if ( !v18 )
                  {
LABEL_46:
                    v3 = v29;
LABEL_47:
                    LODWORD(v41) = v20;
                    v43 = v3;
                    *((_QWORD *)&v44 + 1) = v21;
                    sub_155800((unsigned int *)&v41);
LABEL_24:
                    v5 = 0;
                    sub_11CDA0((__int64)v37);
LABEL_25:
                    sub_11CDA0((__int64)v36);
                    return v5;
                  }
                  v28 = *((_QWORD *)&v44 + 1);
                  sub_123A40((__int64)v38, (unsigned __int8 *)v27, v19, v43);
                  *((_QWORD *)&v22 + 1) = v33;
                  *(_QWORD *)&v22 = v3;
                  if ( !(unsigned __int8)sub_155D40(v22, (__int64)v38, v33, v2, 0) )
                  {
                    sub_11CDA0((__int64)v38);
                    v21 = v28;
                    goto LABEL_46;
                  }
                  if ( v20 == 1 )
                  {
                    if ( v28 )
                    {
                      sub_11CDA0(v28);
                      j__qfree(v28);
                    }
                  }
                  else if ( v20 == 2 )
                  {
                    v23 = *(_DWORD *)(v29 + 24);
                    BYTE1(v23) &= ~2u;
                    LOBYTE(v23) = v23 | 0x80;
                    *(_DWORD *)(v29 + 24) = v23;
                  }
                  sub_11CA10((char *)v36, (char *)v37);
                  sub_B1520(v3, v35, (__int64)v36, v35, (__int64)v36, v33, (__int64)v38, 4);
                  sub_11CDA0((__int64)v38);
                  LODWORD(v41) = 0;
                  sub_155800((unsigned int *)&v41);
                  goto LABEL_32;
                }
                goto LABEL_32;
              }
              if ( HIDWORD(v37[0]) != v25 / 2 )
              {
                if ( !under_debugger )
                  sub_383060(52094);
                goto LABEL_71;
              }
              sub_B1520(v3, v35, (__int64)v37, v35, (__int64)v37, v35, v27, 4);
              sub_11CA10((char *)v36, (char *)v37);
            }
            *((_QWORD *)&v16 + 1) = v33;
            goto LABEL_28;
          }
        }
      }
    }
  }
  return 0;
}
