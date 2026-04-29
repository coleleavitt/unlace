__int64 __fastcall sub_A5210(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // r14d
  __int64 v7; // r11
  int *v8; // r10
  __int64 v9; // r15
  int v10; // eax
  char v12; // al
  __int64 v13; // r11
  int *v14; // r10
  char v15; // al
  __int64 v16; // r11
  int *v17; // r10
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r11
  int *v21; // r10
  int v22; // eax
  int *v23; // rdi
  char v24; // al
  bool v25; // zf
  int v26; // eax
  char v27; // al
  __int64 v28; // r11
  int *v29; // r10
  char v30; // al
  __int64 v31; // rdi
  int *v32; // [rsp+8h] [rbp-C8h]
  int *v33; // [rsp+8h] [rbp-C8h]
  int *v34; // [rsp+8h] [rbp-C8h]
  __int64 v35; // [rsp+10h] [rbp-C0h]
  __int64 v36; // [rsp+10h] [rbp-C0h]
  __int64 v37; // [rsp+10h] [rbp-C0h]
  char v38; // [rsp+18h] [rbp-B8h]
  int *v39; // [rsp+20h] [rbp-B0h]
  __int64 v40; // [rsp+20h] [rbp-B0h]
  __int64 v41; // [rsp+20h] [rbp-B0h]
  int *v42; // [rsp+20h] [rbp-B0h]
  __int64 v43; // [rsp+28h] [rbp-A8h]
  char *v44; // [rsp+28h] [rbp-A8h]
  int *v45; // [rsp+28h] [rbp-A8h]
  __int64 v46; // [rsp+28h] [rbp-A8h]
  int *v47; // [rsp+38h] [rbp-98h]
  char tinfo_property; // [rsp+38h] [rbp-98h]
  __int64 v49; // [rsp+40h] [rbp-90h]
  __int64 v50; // [rsp+50h] [rbp-80h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-70h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-60h] BYREF
  char v54[8]; // [rsp+80h] [rbp-50h] BYREF
  char v55[16]; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  LOBYTE(v3) = a3 == 0 || a2 == nullptr;
  if ( (_BYTE)v3 )
    return 0;
  if ( (a2[1] & 0x10) == 0 && (*(_BYTE *)(a3 + 4) & 0x10) == 0 )
  {
    v5 = *a2;
    if ( *a2 == *(_DWORD *)a3 )
    {
      if ( v5 == 2 )
      {
        v7 = a3 + 64;
        v8 = a2 + 16;
        v49 = *(_QWORD *)(a3 + 8);
        v47 = *((int **)a2 + 1);
      }
      else
      {
        v49 = a3;
        v7 = a3 + 32;
        v47 = a2;
        v8 = a2 + 8;
      }
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      v10 = *(_DWORD *)(v9 + 88);
      if ( v8[1] < v10 && *(_DWORD *)(v7 + 4) < v10 )
      {
        v52[1] = 0;
        v52[0] = 0xFFFFFFFF00000000LL;
        v39 = v8;
        v43 = v7;
        v12 = sub_12D180(a1, v49, v7, v47, v8, 0);
        v38 = 0;
        v13 = v43;
        v14 = v39;
        if ( !v12 )
        {
          v23 = v39;
          v41 = v43;
          v45 = v14;
          v24 = sub_11C340(v23, v53, 0);
          v13 = v41;
          v38 = v24;
          v25 = v24 == 0;
          v14 = v45;
          v26 = *(_DWORD *)(v41 + 4);
          if ( v25 || v53[0] )
          {
            if ( v26 != 4
              || !(unsigned __int8)sub_11C340(v41, v54, 0)
              || !(unsigned __int8)sub_11C340(v45, v55, 0)
              || !(unsigned __int8)sub_119920(v52, v9, v54, -8) )
            {
              goto LABEL_22;
            }
            v38 = 0;
            v13 = v41;
            v14 = v45;
          }
          else if ( v45[1] != v26 )
          {
            goto LABEL_22;
          }
        }
        if ( v5 == 2 )
        {
          v42 = v14;
          v46 = v13;
          v27 = sub_122120(a2 + 8, a3 + 32, 0);
          v16 = v46;
          v17 = v42;
          if ( !v27 )
            goto LABEL_22;
          v40 = (__int64)(a2 + 12);
          v44 = (char *)(a3 + 48);
        }
        else
        {
          v32 = v14;
          v35 = v13;
          v15 = sub_122120(a2 + 12, a3 + 48, 0);
          v16 = v35;
          v17 = v32;
          v40 = (__int64)(a2 + 16);
          v44 = (char *)(a3 + 64);
          if ( !v15 )
            goto LABEL_22;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) )
          v18 = (unsigned int)v17[1];
        else
          v18 = *(unsigned int *)(v16 + 4);
        v33 = v17;
        v36 = v16;
        v19 = sub_129070(v9, v44, v40, v18);
        v20 = v36;
        v21 = v33;
        if ( !v19 )
        {
          if ( !(unsigned __int8)sub_12C290(v9, (unsigned int)v53, a1, a3, (_DWORD)v44, (_DWORD)a2, v40) )
            goto LABEL_22;
          v20 = v36;
          v21 = v33;
          v22 = *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) ? -v33[1] : *(_DWORD *)(v36 + 4);
          if ( v53[0] != v22 )
            goto LABEL_22;
        }
        v34 = v21;
        v37 = v20;
        if ( (*(_DWORD *)(a3 + 4) & 0x40010) != 0
          || (*(_BYTE *)(a3 + 65) & 2) != 0
          || sub_9EC10(*(_QWORD *)(a1 + 64), a3) )
        {
          goto LABEL_22;
        }
        v28 = v37;
        v29 = v34;
        if ( v38 )
        {
          sub_11CDA0(v37, v9, 9, *(_QWORD *)(a3 + 24), (unsigned int)(2 * *(_DWORD *)(v37 + 4)));
          goto LABEL_43;
        }
        if ( LOBYTE(v52[0]) )
        {
          v31 = *(_QWORD *)(a1 + 64);
          v50 = 0;
          v51 = 0;
          if ( (unsigned __int8)sub_A4E00(v31, v44, &v50, &v51, 0) )
          {
            v53[0] = 0;
            v53[0] = get_tinfo_property(v50, 9);
            tinfo_property = get_tinfo_property(v53[0], 2);
            clear_tinfo_t(v53);
            if ( (tinfo_property & 0x3F) == 0x19 )
            {
              sub_118FD0(v37, v52);
              *(_DWORD *)(a3 + 4) |= 0x10u;
              clear_tinfo_t(&v50);
              goto LABEL_43;
            }
          }
          clear_tinfo_t(&v50);
        }
        else if ( v5 == 2 || (v30 = sub_153800(a1, v37, v34), v28 = v37, v29 = v34, v30) )
        {
          sub_1537B0(a1, v49, v28, v47, v29, 0);
LABEL_43:
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) )
          {
            sub_120000(v53, v40);
            sub_118FD0(v44, v53);
            sub_119360(v53);
          }
          sub_9D840(v9, a3, a2[1]);
          sub_119B60(a2);
          v3 = 1;
        }
LABEL_22:
        sub_119360(v52);
      }
    }
  }
  return v3;
}
