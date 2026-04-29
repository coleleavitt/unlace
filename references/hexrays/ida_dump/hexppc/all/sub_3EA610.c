__int64 __fastcall sub_3EA610(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r12d
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rsi
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  int v23; // eax
  __int64 v24; // r12
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r15d
  __int64 v29; // r12
  int v30; // eax
  _DWORD *v32; // rax
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rbx
  int dtype_size; // eax
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rdi
  int v42; // eax
  int v43; // [rsp+0h] [rbp-90h]
  __int64 v44; // [rsp+0h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-88h]
  __int64 v46; // [rsp+8h] [rbp-88h]
  __int64 v47; // [rsp+10h] [rbp-80h]
  int v48; // [rsp+1Ch] [rbp-74h]
  __int64 v49; // [rsp+20h] [rbp-70h] BYREF
  int v50; // [rsp+28h] [rbp-68h]
  _QWORD v51[2]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int8 v52[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-38h]

  v7 = *(unsigned __int16 *)(a1 + 48);
  v53 = __readfsqword(0x28u);
  if ( (unsigned __int16)v7 > 0x150u )
  {
    if ( (_WORD)v7 == 2082 )
    {
      v9 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
      goto LABEL_7;
    }
  }
  else
  {
    if ( (unsigned __int16)v7 > 0x13Fu )
    {
      LOWORD(v7) = v7 - 321;
      switch ( v7 )
      {
        case 0LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 12;
          goto LABEL_8;
        case 1LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 4;
          goto LABEL_8;
        case 2LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 16;
          goto LABEL_8;
        case 3LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 8;
          goto LABEL_8;
        case 4LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 0;
          goto LABEL_8;
        case 5LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 18;
          goto LABEL_8;
        case 6LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 10;
          goto LABEL_8;
        case 7LL:
          v47 = 104;
          v12 = 0;
          v9 = -1;
          v10 = 0;
          v43 = 1;
          v11 = -1;
          LOBYTE(v48) = 2;
          goto LABEL_8;
        case 8LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v11 = 0;
          LOBYTE(v48) = 12;
          v9 = -1;
          v43 = 1;
          goto LABEL_8;
        case 9LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 1;
          LOBYTE(v48) = 4;
          goto LABEL_8;
        case 10LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 2;
          LOBYTE(v48) = 12;
          goto LABEL_8;
        case 11LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v11 = 0;
          LOBYTE(v48) = 4;
          v9 = -1;
          v43 = 1;
          goto LABEL_8;
        case 12LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 1;
          LOBYTE(v48) = 12;
          goto LABEL_8;
        case 13LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 2;
          LOBYTE(v48) = 4;
          goto LABEL_8;
        case 14LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 3;
          LOBYTE(v48) = 12;
          goto LABEL_8;
        case 15LL:
          v47 = 104;
          v12 = 4;
          v10 = 0;
          v9 = -1;
          v43 = 1;
          v11 = 3;
          LOBYTE(v48) = 4;
          goto LABEL_8;
        default:
          v12 = 4;
          v11 = -1;
          v47 = 64;
          v43 = 0;
          LOBYTE(v48) = 20;
          goto LABEL_40;
      }
    }
    if ( (_WORD)v7 == 15 )
    {
      v9 = *(int *)(*(_QWORD *)(a1 + 832) + 460LL);
      goto LABEL_7;
    }
    if ( (_WORD)v7 == 16 )
    {
      v9 = *(int *)(*(_QWORD *)(a1 + 832) + 452LL);
      goto LABEL_7;
    }
    v9 = -1;
    if ( (_WORD)v7 == 14 )
    {
LABEL_7:
      v10 = 1;
      v47 = 144;
      v11 = -1;
      v43 = 2;
      v48 = *(_QWORD *)(a1 + 72);
      v12 = v48 & 4;
LABEL_8:
      v13 = a1 + 40 * v10;
      v14 = *(unsigned __int8 *)(v13 + 65);
      if ( (_BYTE)v14 == 12 )
      {
        if ( (*(_BYTE *)(v13 + 68) & 8) != 0 )
          v11 = *(unsigned __int16 *)(v13 + 70);
      }
      else if ( (_BYTE)v14 == 11 )
      {
        v11 += 4 * *(unsigned __int16 *)(v13 + 70);
      }
      if ( (_DWORD)v9 == -1 )
      {
LABEL_40:
        v38 = *(_DWORD *)(a1 + 52);
        v33 = v38 & 8;
        if ( (v38 & 0x100) != 0 )
        {
          v32 = *(_DWORD **)(a1 + 832);
          v9 = (int)v32[113];
          if ( !(_DWORD)v33 )
            goto LABEL_30;
          goto LABEL_42;
        }
        v9 = -1;
        if ( (v38 & 0x200) != 0 )
          v9 = *(int *)(*(_QWORD *)(a1 + 832) + 460LL);
        if ( (v38 & 8) == 0 )
        {
LABEL_30:
          v34 = is_call_insn(a1 + 24, a2, v33, a5, a6, a7);
          a2 = a1 + v47;
          v45 = a1 + v47;
          if ( v34 != 1 && (_DWORD)v9 == -1 )
          {
            if ( v12 )
            {
              if ( (v48 & 0x10) != 0 )
                goto LABEL_49;
              if ( (unsigned __int8)sub_3EA1F0(a1, a1 + 24, v45) )
                return 1;
              if ( v11 != -1 )
              {
                sub_3E9BF0(a1, ((v48 & 8) == 0) + 32, v11 + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), 0, 1);
                v35 = *(_QWORD *)(a1 + 40LL * v43 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
                if ( v35 != v36 )
                {
                  v36 &= v35;
                  if ( v35 == -1 )
                    v36 = -1;
                }
                dtype_size = get_dtype_size(0);
                sub_1D2710(a1, 0x2Au, dtype_size, 1, 0x3BEA45E214ADDC55LL, v36, 0);
                return 1;
              }
              if ( !under_debugger )
                sub_37EEE0(0xCA42u, a1 + 24, a3);
              goto LABEL_75;
            }
            v9 = -1;
            goto LABEL_15;
          }
LABEL_14:
          if ( v12 )
          {
LABEL_18:
            if ( (v48 & 0x10) != 0 )
            {
LABEL_21:
              if ( (unsigned __int8)sub_3EA440(a1, v45, (unsigned int)v9, v15, v16, v17) )
                return 1;
              if ( (_DWORD)v9 != -1 )
              {
                v27 = *(_QWORD *)(a1 + 832);
                v28 = *(_DWORD *)(v27 + 84);
                v29 = *(int *)(v27 + 64);
                v30 = get_dtype_size(5 * (unsigned int)(v28 == 8) + 2);
                sub_1D2710(a1, 0x36u, v30, 0x3BEA45E214ADDC55LL, v29, v9, v28);
                return 1;
              }
              a2 = v45;
LABEL_49:
              sub_3EA260(a1, a2);
              return 1;
            }
            if ( v11 != -1 )
            {
              sub_3E9BF0(a1, ((v48 & 8) != 0) + 32, v11 + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), 0, 1);
              v24 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
              v25 = get_dtype_size(0);
              sub_1D2710(a1, 0x2Au, v25, 1, 0x3BEA45E214ADDC55LL, v24, 0);
              v26 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              *(_BYTE *)(a1 + 864) = 1;
              *(_QWORD *)(a1 + 16) = v26;
              goto LABEL_21;
            }
            if ( !under_debugger )
              sub_37EEE0(0xC8D2u, a2, a3);
LABEL_75:
            BUG();
          }
LABEL_15:
          v18 = *(_QWORD *)(a1 + 40);
          v19 = *(_QWORD *)(a1 + 832);
          v49 = 1;
          v51[1] = 0;
          v20 = *(_DWORD *)(v19 + 80);
          v50 = *(_DWORD *)(v19 + 460);
          v51[0] = 0xFFFFFFFF00000000LL;
          HIDWORD(v49) = v20;
          sub_11CFD0((__int64)v51, v19, 1, v20, v18, 0);
          sub_120000((__int64)v52, (unsigned __int8 *)&v49);
          sub_1D2850(a1, 13, (unsigned __int8 *)&v49, (unsigned __int8 *)v51, v52);
          v21 = *(_QWORD *)(a1 + 832);
          v22 = 2;
          if ( *(_DWORD *)(v21 + 84) == 8 )
            v22 = 7;
          sub_3E9BF0(a1, ((v48 & 2) == 0) + 32, *(_DWORD *)(v21 + 460), v22, 1);
          v44 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
          v23 = get_dtype_size(0);
          sub_1D2710(a1, 0x2Au, v23, 1, 0x3BEA45E214ADDC55LL, v44, 0);
          a2 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 16) = sub_64590(*(_QWORD *)(a1 + 8), a2, 2);
          *(_BYTE *)(a1 + 864) = 1;
          sub_119360((__int64)v52);
          sub_119360((__int64)v51);
          sub_119360((__int64)&v49);
          goto LABEL_18;
        }
      }
      else if ( (*(_BYTE *)(a1 + 52) & 8) == 0 )
      {
        v45 = a1 + v47;
        is_call_insn(a1 + 24, a2, v14, a5, a6, a7);
        goto LABEL_14;
      }
      v32 = *(_DWORD **)(a1 + 832);
      if ( v32[113] != (_DWORD)v9 )
      {
LABEL_29:
        sub_3EA0C0(a1);
        goto LABEL_30;
      }
LABEL_42:
      v39 = (int)v32[114];
      v40 = (int)v9;
      v41 = 2;
      v9 = v39;
      if ( v32[21] == 8 )
        v41 = 7;
      v46 = v40;
      v42 = get_dtype_size(v41);
      a2 = 4;
      sub_1D2710(a1, 4u, v42, v46, 0x3BEA45E214ADDC55LL, v39, 0);
      goto LABEL_29;
    }
  }
  return 0;
}
