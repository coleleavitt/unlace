__int64 __fastcall sub_3F9740(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  unsigned __int8 *v7; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v13; // r13d
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // al
  bool v22; // cc
  __int64 v23; // r15
  __int64 v25; // rcx
  char v26; // al
  char v27; // r10
  unsigned int v28; // esi
  char v29; // r10
  char v30; // al
  __int64 v31; // rbp
  __int64 dtype_size; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp-10h] [rbp-68h]
  int v38; // [rsp+8h] [rbp-50h]
  signed int v39; // [rsp+8h] [rbp-50h]
  unsigned __int8 v40; // [rsp+Ch] [rbp-4Ch]
  int v41; // [rsp+10h] [rbp-48h]
  char v42; // [rsp+10h] [rbp-48h]
  char v43; // [rsp+10h] [rbp-48h]
  unsigned int v44; // [rsp+14h] [rbp-44h]

  v7 = (unsigned __int8 *)a2;
  v9 = a1 + 24;
  v41 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  sub_3F89A0(a1, a3);
  v40 = sub_3F0810(a1, a1 + 24, a2, 0, a5);
  v13 = sub_3F8180(a1, a3, v40, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL), a5);
  v14 = *(_DWORD *)(a1 + 52);
  if ( (v14 & 8) != 0 )
  {
    LODWORD(a2) = *(unsigned __int8 *)(a2 + 32);
    if ( (_DWORD)a2 == 147 && (v7[1] != 3 || v7[33] || *((_QWORD *)v7 + 1) || (v14 & 0xB0) != 0) )
    {
      v38 = v7[32];
      sub_3F5420(a1, a5);
      LODWORD(a2) = v38;
    }
    sub_3F89A0(a1, a2);
    v15 = *(_QWORD *)(a1 + 832);
    a2 = (unsigned int)a2;
    v16 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 168LL);
    if ( v16 == sub_3EA010 )
      v39 = sub_3EA010(v15, a2);
    else
      v39 = v16(v15, a2);
    v21 = v7[33];
    v22 = (char)v21 <= 2;
    if ( v21 != 2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v25 = *(_QWORD *)(a2 + 8);
  v26 = *(_BYTE *)(a2 + 33);
  if ( v25 || v26 > 2 )
  {
    if ( v26 == 4 )
    {
      v30 = sub_3EAA70(v9, v40, v10, v25, v11, v12);
      sub_1D7220(a1, v40, v13, a4, v41, a4, v30);
      return a4;
    }
    a2 = 3;
    sub_3F56D0(a1, 3u, v40, v25, 0x3BEA45E214ADDC55LL, (int)a4, *v7);
    v21 = v7[33];
    v20 = v37;
    v39 = a4;
    v22 = (char)v21 <= 2;
    if ( v21 != 2 )
    {
LABEL_8:
      if ( v22 )
      {
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            if ( !(unsigned __int8)sub_3EAA70(v9, a2, v17, v18, v19, v20) )
            {
              v44 = 23;
              v23 = v13;
LABEL_13:
              v13 = a4;
              sub_3F6E70(a1, v44, v40, v23, v39, (int)a4, a5, 0, 0);
              return (unsigned int)v13;
            }
            v44 = 23;
            v27 = 0;
            v28 = 28;
            goto LABEL_27;
          }
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
          {
LABEL_59:
            if ( !under_debugger )
              sub_3835A0(0xC85Bu, a2, a5);
LABEL_61:
            BUG();
          }
LABEL_40:
          if ( !under_debugger )
            sub_3835A0(0xC358u, a2, a5);
          goto LABEL_61;
        }
LABEL_22:
        if ( !(unsigned __int8)sub_3EAA70(v9, a2, v17, v18, v19, v20) )
        {
          v44 = 22;
          v23 = v13;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v21 == 3 )
        {
          v27 = sub_3EAA70(v9, a2, v17, v18, v19, v20);
          if ( !v27 )
          {
LABEL_31:
            sub_3F67C0(a1, v40, v13, v39, a4, a5);
            return a4;
          }
          v28 = 28;
LABEL_27:
          v23 = v13;
          if ( (*(_BYTE *)(a1 + 52) & 8) == 0
            && v7[33] == 2
            && (v31 = *((_QWORD *)v7 + 1), v43 = v27, dtype_size = get_dtype_size(v40), v27 = v43, v31 == 8 * dtype_size) )
          {
            sub_3F56D0(a1, 0x1Du, v40, v13, 0x3BEA45E214ADDC55LL, 0, 0);
            v29 = v43;
          }
          else
          {
            v42 = v27;
            sub_3F6E70(a1, v28, v40, v13, v39, 0, a5, 0, 1);
            v29 = v42;
          }
          if ( !v29 )
            goto LABEL_13;
          goto LABEL_31;
        }
        v17 = *(_QWORD *)(a1 + 832);
        if ( *(_DWORD *)(v17 + 80) != 8 )
          goto LABEL_40;
        switch ( v21 )
        {
          case 6u:
            v20 = 0;
            a2 = 0;
            goto LABEL_50;
          case 7u:
            v20 = 0;
            a2 = 1;
            goto LABEL_50;
          case 8u:
            v20 = 0;
            a2 = 2;
            goto LABEL_50;
          case 9u:
          case 0xDu:
            goto LABEL_22;
          case 0xAu:
            v20 = 1;
            a2 = 0;
            goto LABEL_50;
          case 0xBu:
            v20 = 1;
            a2 = 1;
            goto LABEL_50;
          case 0xCu:
            v20 = 1;
            a2 = 2;
LABEL_50:
            if ( (_BYTE)a2 == v40 )
              goto LABEL_22;
            sub_3F8F20(a1, a2, v40, v13, v41, v20 & 1);
            if ( !(unsigned __int8)sub_3EAA70(v9, a2, v33, v34, v35, v36) )
            {
              v44 = 22;
              v23 = v41;
              goto LABEL_13;
            }
            v13 = v41;
            break;
          default:
            goto LABEL_59;
        }
      }
      v44 = 22;
      v27 = 0;
      v28 = 27;
      goto LABEL_27;
    }
LABEL_18:
    if ( !(unsigned __int8)sub_3EAA70(v9, a2, v17, v18, v19, v20) )
    {
      v44 = 24;
      v23 = v13;
      goto LABEL_13;
    }
    v44 = 24;
    v27 = 0;
    v28 = 28;
    goto LABEL_27;
  }
  return (unsigned int)v13;
}
