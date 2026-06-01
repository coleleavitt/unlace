__int64 __fastcall sub_153CF0(__int128 a1, __int64 a2)
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
  int v19; // r12d
  __int64 v20; // r10
  __int128 v21; // rdi
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-138h]
  int v24; // [rsp+14h] [rbp-12Ch]
  __int64 v25; // [rsp+18h] [rbp-128h]
  __int64 v26; // [rsp+20h] [rbp-120h]
  __int64 v27; // [rsp+28h] [rbp-118h]
  __int64 v28; // [rsp+30h] [rbp-110h]
  __int64 v30; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+88h] [rbp-B8h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+A0h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-78h]
  __int64 v40; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-58h]
  __int64 v42; // [rsp+F0h] [rbp-50h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+108h] [rbp-38h]

  v2 = *((_QWORD *)&a1 + 1);
  v3 = a1;
  v44 = __readfsqword(0x28u);
  v4 = (char *)(a2 + 32);
  if ( (unsigned __int8)sub_11A620((_BYTE *)(a2 + 32)) )
  {
    if ( (unsigned __int8)sub_11A620((_BYTE *)(a2 + 48)) )
    {
      *((_QWORD *)&a1 + 1) = &v32;
      v32 = v2;
      v26 = sub_14D9B0(a1, (__int64)v4, -1, &v30, &v31);
      if ( v26 )
      {
        *((_QWORD *)&a1 + 1) = &v33;
        v33 = v2;
        v7 = sub_14D9B0(a1, a2 + 48, 0, 0, 0);
        if ( v7 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
          v5 = sub_309ED0(v25, a1, v32, v26, v33, v7);
          if ( (_BYTE)v5 )
          {
            v35[1] = 0;
            v35[0] = 0xFFFFFFFF00000000LL;
            v36[0] = 0xFFFFFFFF00000000LL;
            v8 = *(_DWORD *)(v30 + 36);
            v36[1] = 0;
            v34 = 0;
            v24 = v8;
            if ( *(_DWORD *)(v26 + 4) == v8 )
            {
              sub_122C80((__int64)v35, (unsigned __int8 *)v26);
            }
            else
            {
              sub_122C80((__int64)v36, (unsigned __int8 *)(v30 + 32));
              if ( !(unsigned __int8)sub_124DA0((unsigned __int64)v36, v25, SHIDWORD(v36[0]) / 2) )
              {
                if ( !under_debugger )
                  sub_37EA20(50496);
                goto LABEL_71;
              }
              v23 = v31;
              v34 = v31;
              while ( 1 )
              {
                *(_QWORD *)&v9 = v3;
                *((_QWORD *)&v9 + 1) = v36;
                v13 = sub_126F20(v9, (__int64)&v34, 0);
                if ( !v13 )
                  goto LABEL_40;
                if ( LOBYTE(v36[0]) == 4 )
                  goto LABEL_21;
                sub_125510((__int64)v37, v3, v34, 0);
                *(_QWORD *)&v14 = v3;
                *((_QWORD *)&v14 + 1) = &v40;
                v40 = 0;
                v41 = 0;
                v42 = 0;
                v43 = 0;
                sub_1219A0(v14, (__int64)v36, 0, 0xFFFF0000);
                if ( (unsigned __int8)sub_63E80(&v40, v37) || (unsigned __int8)sub_314F20(&v42, &v38) )
                  break;
                if ( v42 )
                {
                  *(_QWORD *)&v43 = 0;
                  qfree();
                }
                qfree();
                if ( v38 )
                {
                  v39 = 0;
                  qfree();
                }
                qfree();
              }
              if ( !(unsigned __int8)sub_12AA10(*(_QWORD *)(v3 + 64), v13 + 64, (__int64)v36, 0, 0, v15) )
                v13 = 0;
              if ( v42 )
              {
                *(_QWORD *)&v43 = 0;
                qfree();
              }
              qfree();
              if ( v38 )
              {
                v39 = 0;
                qfree();
              }
              qfree();
              if ( v13 )
              {
LABEL_21:
                if ( (unsigned __int8)sub_11E160((_BYTE *)v13, v25, 0, v10, v11, v12) )
                {
                  if ( *(_DWORD *)v13 != 4 && (*(_DWORD *)v13 != 67 || *(_DWORD *)(v13 + 36) != *(_DWORD *)(v13 + 68)) )
                    goto LABEL_24;
                  sub_122C80((__int64)v36, (unsigned __int8 *)(v13 + 64));
                  v34 = *(_QWORD *)(v34 + 8);
                }
                else
                {
                  sub_123DE0((__int64)v36, (unsigned __int8 *)v13);
                }
              }
              else
              {
LABEL_40:
                v34 = v23;
              }
              if ( HIDWORD(v36[0]) == v24 )
              {
                sub_11A5D0((char *)v35, (char *)v36);
                *((_QWORD *)&v16 + 1) = v34;
LABEL_28:
                if ( *((_QWORD *)&v16 + 1) != v2 )
                {
                  if ( !*((_QWORD *)&v16 + 1) )
                    goto LABEL_44;
                  if ( !v3 )
                    goto LABEL_24;
                  *(_QWORD *)&v16 = v3;
                  if ( !(unsigned __int8)sub_1539C0(v16, (__int64)v35, *((__int64 *)&v16 + 1), v2, 0) )
                    goto LABEL_24;
                }
LABEL_32:
                if ( HIDWORD(v35[0]) == v24 )
                {
                  sub_128630((unsigned __int64)v35, v25, v24, 2);
                  sub_11A5D0(v4, (char *)v35);
                  *(_DWORD *)a2 = 66;
                  *(_DWORD *)(v3 + 24) |= 0x40u;
                  sub_11A960((__int64)v36);
                  goto LABEL_25;
                }
                if ( !under_debugger )
                  sub_37EA20(50497);
LABEL_71:
                BUG();
              }
              if ( v34 != v32 )
              {
                if ( v2 )
                {
LABEL_44:
                  v41 = 0;
                  *(_QWORD *)&v43 = 0;
                  if ( !v3 )
                  {
                    v20 = 0;
                    v19 = 0;
                    goto LABEL_47;
                  }
                  *((_QWORD *)&v17 + 1) = v34;
                  *(_QWORD *)&v17 = v3;
                  LODWORD(v40) = 0;
                  v42 = 0;
                  *((_QWORD *)&v43 + 1) = 0;
                  v18 = sub_1539C0(v17, (__int64)v36, v34, v2, (__int64)&v40);
                  v19 = v40;
                  v20 = *((_QWORD *)&v43 + 1);
                  v28 = v42;
                  if ( !v18 )
                  {
LABEL_46:
                    v3 = v28;
LABEL_47:
                    LODWORD(v40) = v19;
                    v42 = v3;
                    *((_QWORD *)&v43 + 1) = v20;
                    sub_153480((unsigned int *)&v40);
LABEL_24:
                    v5 = 0;
                    sub_11A960((__int64)v36);
LABEL_25:
                    sub_11A960((__int64)v35);
                    return v5;
                  }
                  v27 = *((_QWORD *)&v43 + 1);
                  sub_121540((__int64)v37, (unsigned __int8 *)v26);
                  *((_QWORD *)&v21 + 1) = v32;
                  *(_QWORD *)&v21 = v3;
                  if ( !(unsigned __int8)sub_1539C0(v21, (__int64)v37, v32, v2, 0) )
                  {
                    sub_11A960((__int64)v37);
                    v20 = v27;
                    goto LABEL_46;
                  }
                  if ( v19 == 1 )
                  {
                    if ( v27 )
                    {
                      sub_11A960(v27);
                      j__qfree();
                    }
                  }
                  else if ( v19 == 2 )
                  {
                    v22 = *(_DWORD *)(v28 + 24);
                    BYTE1(v22) &= ~2u;
                    LOBYTE(v22) = v22 | 0x80;
                    *(_DWORD *)(v28 + 24) = v22;
                  }
                  sub_11A5D0((char *)v35, (char *)v36);
                  sub_B0740(v3, v34, (__int64)v35, v34, (__int64)v35, v32, (__int64)v37, 4);
                  sub_11A960((__int64)v37);
                  LODWORD(v40) = 0;
                  sub_153480((unsigned int *)&v40);
                  goto LABEL_32;
                }
                goto LABEL_32;
              }
              if ( HIDWORD(v36[0]) != v24 / 2 )
              {
                if ( !under_debugger )
                  sub_37EA20(52094);
                goto LABEL_71;
              }
              sub_B0740(v3, v34, (__int64)v36, v34, (__int64)v36, v34, v26, 4);
              sub_11A5D0((char *)v35, (char *)v36);
            }
            *((_QWORD *)&v16 + 1) = v32;
            goto LABEL_28;
          }
        }
      }
    }
  }
  return 0;
}
