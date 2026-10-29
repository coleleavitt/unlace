_QWORD *__fastcall sub_A76050(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r12
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // ebp
  _DWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rbx
  __int64 (__fastcall *v14)(); // r15
  __int64 v15; // r12
  __int64 v16; // r14
  _DWORD *v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // edi
  unsigned int v21; // edx
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // r8
  _QWORD *i; // rax
  _DWORD *v26; // rdx
  void *v27; // r12
  __int64 v29; // rbx
  unsigned int v30; // eax
  _DWORD *v31; // rax
  void *v32; // r13
  int v33; // edx
  __int64 v34; // rdx
  char v35; // cl
  char v36; // si
  __int64 v37; // rax
  char v38; // cl
  int v39; // eax
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  int v43; // ebx
  int v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  unsigned __int8 v49; // r13
  int v50; // eax
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  unsigned __int8 v59; // al
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // [rsp+0h] [rbp-98h]
  __int64 v65; // [rsp+0h] [rbp-98h]
  void *v66; // [rsp+8h] [rbp-90h]
  void *v67; // [rsp+8h] [rbp-90h]
  __int64 v68; // [rsp+8h] [rbp-90h]
  int v69; // [rsp+10h] [rbp-88h]
  int v70; // [rsp+10h] [rbp-88h]
  void *v71; // [rsp+18h] [rbp-80h] BYREF
  void *v72; // [rsp+20h] [rbp-78h] BYREF
  __int64 v73; // [rsp+28h] [rbp-70h]
  int v74; // [rsp+30h] [rbp-68h] BYREF
  char v75; // [rsp+34h] [rbp-64h]
  __int64 v76; // [rsp+38h] [rbp-60h]
  __int64 *v77; // [rsp+40h] [rbp-58h] BYREF
  __int64 v78; // [rsp+48h] [rbp-50h]
  int v79; // [rsp+50h] [rbp-48h] BYREF
  char v80; // [rsp+54h] [rbp-44h]
  __int64 v81; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 64);
  v5 = *(unsigned int *)(*v3 + 8LL);
  v6 = sub_B39350(a2, v5);
  v7 = v3[41];
  v8 = *a2;
  v9 = v6;
  if ( v7 && (unsigned __int8)sub_1021D60(v7, v5) && (unsigned int)sub_FF9FB0(v3[63], v9) != -1 )
  {
    v39 = sub_1021DA0(v3[41]);
    v43 = sub_A87B40((int)v3, v9, v39, v40, v41, v42, v64, v66, v69, v71, v72, v73, v74, v76, (int)v77, v78, v79);
    if ( (unsigned __int8)sub_A72E00(v8)
      && (v44 = sub_1021D80(v3[41]), !(unsigned __int8)sub_17B3C10(v44, v43, v45, v46, v47, v48)) )
    {
      v13 = (_QWORD *)sub_186B270(0x10u);
      v59 = sub_A72E00(v8);
      v63 = sub_27B900((__int64)(v3 + 2), (int)&qword_1C7F2A0, v59, v60, v61, v62);
      *v13 = off_1C559A8;
      v13[1] = v63;
    }
    else
    {
      v13 = (_QWORD *)sub_186B270(0x10u);
      v49 = sub_A72E00(v8);
      v50 = sub_1021DA0(v3[41]);
      v54 = sub_A87B40((int)v3, v9, v50, v51, v52, v53, v65, v67, v70, v71, v72, v73, v74, v76, (int)v77, v78, v79);
      v55 = sub_1021D80(v3[41]);
      v56 = v3[3];
      v57 = v55;
      if ( !v56 )
      {
        v68 = v55;
        sub_16669E0(v3 + 2);
        v56 = v3[3];
        v57 = v68;
      }
      v58 = sub_166B840(v56, v57, v54, v49);
      *v13 = off_1C559A8;
      v13[1] = v58;
    }
  }
  else
  {
    if ( v9 == -1 || !(unsigned __int8)sub_FFAE60(v3[63]) )
    {
      BYTE4(v72) &= 0xFCu;
      v75 &= 0xFCu;
      LODWORD(v72) = 0;
      v73 = 0;
      v74 = 1;
      v76 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v72, &qword_1C7F2A0);
    }
    else
    {
      v29 = v3[63];
      v30 = sub_FF9FB0(v29, v9);
      sub_FFC2C0(&v72, v29, v30);
    }
    v10 = *(_DWORD **)(sub_15D1F10(v8) + 24);
    if ( v10 && *v10 == 5 && v10[1] == 1 && ((v75 & 1) != 0 || v74 != 1) )
    {
      BYTE4(v77) &= 0xFCu;
      v80 &= 0xFCu;
      v32 = qword_1C7F2C0;
      LODWORD(v77) = 0;
      v78 = 0;
      v79 = 1;
      v81 = 0;
      sub_18495B0(qword_1C7F2C0, &v72, &v77);
      sub_182CBA0(v32, &v79);
      v33 = (int)v77;
      LODWORD(v77) = (_DWORD)v72;
      LODWORD(v72) = v33;
      v34 = v78;
      v78 = v73;
      v73 = v34;
      v35 = BYTE4(v77) & 1;
      LOBYTE(v34) = BYTE4(v72) & 0xFC | BYTE4(v77) & 2;
      BYTE4(v77) = BYTE4(v72) & 1 | BYTE4(v77) & 0xFC | BYTE4(v72) & 2;
      BYTE4(v72) = v35 | v34;
      v36 = v75 & 2;
      v79 = v74;
      v37 = v76;
      v76 = v81;
      v81 = v37;
      v74 = 1;
      v38 = v75 & 1;
      v75 = v75 & 0xFC | v80 & 2;
      v80 = v38 | v36 | v80 & 0xFC;
      sub_25A130((char *)&v77);
    }
    v11 = sub_186B270(0x10u);
    v12 = (_QWORD *)v3[62];
    v13 = (_QWORD *)v11;
    v14 = *(__int64 (__fastcall **)())(*v12 + 56LL);
    v15 = sub_15D1F10(v8);
    if ( v14 == sub_A91B90 )
    {
      v16 = sub_A914A0(v12, v15);
      v17 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, void **, __int64))(*v12 + 48LL))(v12, &v72, v15);
      v18 = *(unsigned int *)(v16 + 8);
      v19 = *(_QWORD **)v16;
      v20 = v17[3];
      v21 = v18 - 1;
      v18 *= 8;
      v22 = (_QWORD *)(*(_QWORD *)v16 + v18);
      v23 = 8LL * (v20 & v21);
      v24 = (_QWORD *)(*(_QWORD *)v16 + v23);
      if ( v23 != v18 )
      {
        for ( i = (_QWORD *)(*(_QWORD *)v16 + v23); v22 != i; ++i )
        {
          v26 = (_DWORD *)*i;
          if ( *i > 1u )
          {
            if ( v26[3] == v20 && v17 == v26 )
              goto LABEL_17;
          }
          else if ( !v26 )
          {
            goto LABEL_16;
          }
        }
      }
      for ( ; v24 != v19; ++v19 )
      {
        v31 = (_DWORD *)*v19;
        if ( *v19 > 1u )
        {
          if ( v31[3] == v20 && v17 == v31 )
            goto LABEL_17;
        }
        else if ( !v31 )
        {
          break;
        }
      }
LABEL_16:
      ++v17[2];
      v71 = v17;
      sub_A74DF0(v12 + 7, &v71);
      v77 = (__int64 *)v17;
      sub_4A3CA0(v16, &v77);
    }
    else
    {
      v17 = (_DWORD *)((__int64 (__fastcall *)(_QWORD *, void **, __int64))v14)(v12, &v72, v15);
    }
LABEL_17:
    v13[1] = v17;
    *v13 = off_1C559A8;
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v27, &v74);
  }
  return v13;
}

