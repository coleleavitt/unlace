__int64 __fastcall sub_97A8A0(void **a1, int a2, void **a3)
{
  void **v3; // rbp
  void **v4; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r13d
  void *v8; // r15
  bool v9; // r13
  int v10; // r13d
  char v11; // r12
  void *v12; // r13
  unsigned __int8 v13; // r12
  unsigned __int8 v14; // al
  int v15; // r13d
  __int16 v16; // r12
  unsigned __int16 v17; // r12
  unsigned __int16 v18; // ax
  int v19; // r13d
  int v20; // r12d
  unsigned int v21; // r12d
  unsigned int v22; // eax
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 *v32; // rbx
  void *v33; // rax
  __int64 v34; // rbp
  __int64 *v35; // rbx
  void *v36; // rax
  void *v37; // [rsp+8h] [rbp-E0h]
  _BYTE v38[32]; // [rsp+10h] [rbp-D8h] BYREF
  void *v39; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-B0h]
  char v41; // [rsp+3Ch] [rbp-ACh]
  int v42; // [rsp+40h] [rbp-A8h]
  void *v43; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-90h]
  void *v45; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-70h]
  char v47; // [rsp+7Ch] [rbp-6Ch]
  int v48; // [rsp+80h] [rbp-68h]
  void *v49; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+98h] [rbp-50h]

  LODWORD(v3) = 1;
  v4 = a1;
  switch ( a2 )
  {
    case 0:
      goto LABEL_12;
    case 1:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v12 = a1[99];
      a1[100] = *a3;
      v13 = sub_915900((__int64)a1[71]);
      v14 = sub_915900((__int64)a1[71]);
      if ( !v13 )
        goto LABEL_39;
      *(_BYTE *)sub_A1A4E0(a1[71], 8) = v14 % v13;
      return (unsigned int)v3;
    case 2:
      if ( *((_DWORD *)a1 + 203) == *((_DWORD *)a1 + 204) )
      {
        v3 = (void **)a1[99];
        a1[100] = *a3;
        v15 = (__int16)sub_915930((__int64)a1[71]);
        v16 = sub_915930((__int64)a1[71]);
        LODWORD(v3) = sub_97A4B0((__int64)(a1 + 48), (__int64)v3, v16, v15);
        if ( (_BYTE)v3 )
          *(_WORD *)sub_A1A4E0(a1[71], 8) = v16 % v15;
      }
      return (unsigned int)v3;
    case 3:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v12 = a1[99];
      a1[100] = *a3;
      v17 = sub_915CE0((__int64)a1[71]);
      v18 = sub_915CE0((__int64)a1[71]);
      if ( !v17 )
        goto LABEL_39;
      *(_WORD *)sub_A1A4E0(a1[71], 8) = v18 % v17;
      return (unsigned int)v3;
    case 4:
      if ( *((_DWORD *)a1 + 203) == *((_DWORD *)a1 + 204) )
      {
        v3 = (void **)a1[99];
        a1[100] = *a3;
        v19 = sub_915D10((__int64)a1[71]);
        v20 = sub_915D10((__int64)a1[71]);
        LODWORD(v3) = sub_97A2C0((__int64)(a1 + 48), (__int64)v3, v20, v19);
        if ( (_BYTE)v3 )
          *(_DWORD *)sub_A1A4E0(a1[71], 8) = v20 % v19;
      }
      return (unsigned int)v3;
    case 5:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v12 = a1[99];
      a1[100] = *a3;
      v21 = sub_9160C0((__int64)a1[71]);
      v22 = sub_9160C0((__int64)a1[71]);
      if ( !v21 )
        goto LABEL_39;
      *(_DWORD *)sub_A1A4E0(a1[71], 8) = v22 % v21;
      return (unsigned int)v3;
    case 6:
      if ( *((_DWORD *)a1 + 203) == *((_DWORD *)a1 + 204) )
      {
        v3 = (void **)a1[99];
        a1[100] = *a3;
        v23 = sub_9160F0((__int64)a1[71]);
        v24 = sub_9160F0((__int64)a1[71]);
        LODWORD(v3) = sub_97A0C0((__int64)(a1 + 48), (__int64)v3, v24, v23);
        if ( (_BYTE)v3 )
          *(_QWORD *)sub_A1A4E0(a1[71], 8) = v24 % v23;
      }
      return (unsigned int)v3;
    case 7:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v12 = a1[99];
      a1[100] = *a3;
      v25 = sub_9164A0((__int64)a1[71]);
      v26 = sub_9164A0((__int64)a1[71]);
      if ( v25 )
      {
        *(_QWORD *)sub_A1A4E0(a1[71], 8) = v26 % v25;
        return (unsigned int)v3;
      }
LABEL_39:
      v31 = sub_A180F0(a1[73], v12);
      v32 = (__int64 *)sub_A2E130(a1 + 48, v31, 2306, 0);
      v33 = (void *)sub_AC7B80(*(_QWORD *)(v31 + 24));
      if ( v32 )
      {
        v49 = v33;
        LOBYTE(v50) = 1;
        sub_839C90(v32, (__int64 *)&v49);
      }
      goto LABEL_41;
    case 8:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v27 = (__int64)a1[99];
      v28 = (__int64)(a1 + 48);
      *(_QWORD *)(v28 + 416) = *a3;
      return sub_90D780(v28, v27);
    case 9:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v29 = (__int64)a1[99];
      v30 = (__int64)(a1 + 48);
      *(_QWORD *)(v30 + 416) = *a3;
      return sub_94A3F0(v30, v29);
    case 10:
    case 11:
      if ( *((_DWORD *)a1 + 203) != *((_DWORD *)a1 + 204) )
        return (unsigned int)v3;
      v6 = (__int64)a1[71];
      v3 = &v45;
      a1[100] = *a3;
      v37 = a1[99];
      sub_8F5730((__int64)&v45, v6);
      sub_8F5730((__int64)&v49, (__int64)a1[71]);
      sub_8DF2E0((__int64)&v43, (__int64 *)&v45);
      v7 = v44;
      v8 = v43;
      if ( v44 <= 0x40 )
      {
        v9 = v43 == nullptr;
      }
      else
      {
        v9 = v7 == (unsigned int)sub_2587400(&v43);
        if ( v8 )
          operator delete[](v8);
      }
      if ( v9 )
      {
        v34 = sub_A180F0(a1[73], v37);
        v35 = (__int64 *)sub_A2E130(a1 + 48, v34, 2306, 0);
        v36 = (void *)sub_AC7B80(*(_QWORD *)(v34 + 24));
        if ( v35 )
        {
          v43 = v36;
          LOBYTE(v44) = 1;
          sub_839C90(v35, (__int64 *)&v43);
        }
        if ( v50 > 0x40 && v49 )
          operator delete[](v49);
        if ( v46 > 0x40 && v45 )
        {
          operator delete[](v45);
          LODWORD(v3) = 0;
        }
        else
        {
LABEL_41:
          LODWORD(v3) = 0;
        }
      }
      else
      {
        sub_8E9690((__int64)v38);
        v40 = v46;
        if ( v46 > 0x40 )
          sub_2585B30(&v39);
        else
          v39 = v45;
        a1 = &v43;
        v41 = v47;
        v42 = v48;
        v44 = v50;
        sub_2585B30(&v43);
LABEL_12:
        if ( *((_DWORD *)a1 + 203) == *((_DWORD *)a1 + 204) )
        {
          v3 = (void **)a1[99];
          a1[100] = *a3;
          v10 = (char)sub_915550((__int64)a1[71]);
          v11 = sub_915550((__int64)v4[71]);
          LODWORD(v3) = sub_97A6B0((__int64)(v4 + 48), (__int64)v3, v11, v10);
          if ( (_BYTE)v3 )
            *(_BYTE *)sub_A1A4E0(v4[71], 8) = v11 % v10;
        }
      }
      return (unsigned int)v3;
  }
}

