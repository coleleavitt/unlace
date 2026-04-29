unsigned __int64 __fastcall sub_383A0(_QWORD *a1, __int64 a2, int a3)
{
  bool v3; // cc
  int v5; // r8d
  const char *v6; // rcx
  int v8; // r8d
  char *v9; // rax
  char *v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_QWORD *, char); // rax
  __int64 v22; // r13
  unsigned __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(_QWORD *, char); // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 33) <= 0x13u;
  v36 = __readfsqword(0x28u);
  if ( v3 )
  {
    switch ( *(_BYTE *)(a2 + 33) )
    {
      case 0:
      case 1:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
        goto LABEL_4;
      case 2:
        v8 = *(unsigned __int16 *)(a2 + 6);
        if ( a3 || (*(_BYTE *)(a1[77] + 188LL) & 1) == 0 )
          goto LABEL_12;
        v9 = (char *)&unk_73080;
        while ( *(_DWORD *)v9 != v8 )
        {
          v9 += 24;
          if ( v9 == (char *)&unk_732F0 )
            goto LABEL_12;
        }
        goto LABEL_65;
      case 3:
        v8 = *(unsigned __int16 *)(a2 + 6);
        if ( (*(_BYTE *)(a1[77] + 188LL) & 1) != 0 )
        {
          switch ( (__int16)v8 )
          {
            case 0:
              v10 = "FIR";
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
            case 25:
              v10 = "FCCR";
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
            case 26:
              v10 = "FEXR";
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
            case 28:
              v10 = "FENR";
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
            case 31:
              v10 = "FCSR";
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
            default:
              goto LABEL_12;
          }
        }
        goto LABEL_12;
      case 4:
        v10 = *(char **)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6) + 256);
        return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
      case 5:
        v8 = *(unsigned __int16 *)(a2 + 6);
        if ( (*(_BYTE *)(a1[77] + 188LL) & 1) == 0 )
          goto LABEL_12;
        if ( (_WORD)v8 == 2 )
        {
          v10 = "CC";
          return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
        }
        if ( (unsigned __int16)v8 <= 2u )
        {
          v10 = "CPUNum";
          if ( (_WORD)v8 )
            v10 = "SYNCI_Step";
          return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
        }
        v10 = "CCRes";
        if ( (_WORD)v8 == 3 )
          return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
        goto LABEL_12;
      case 6:
        if ( (unsigned int)(*(_DWORD *)(a1[77] + 184LL) - 2) > 1 )
          goto LABEL_4;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 33);
        v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v11 == sub_37DD0 )
        {
          v12 = a1[4];
          if ( v12 )
          {
            v13 = v12 + 1;
            v14 = a1[4];
            --v12;
          }
          else
          {
            v14 = 1;
            v13 = 2;
          }
          v15 = a1[3];
          if ( a1[5] < v13 )
          {
            v31 = qvector_reserve(a1 + 3, v15, v13, 1);
            a1[3] = v31;
            v15 = v31;
          }
          a1[4] = v13;
          *(_BYTE *)(v15 + v12) = 36;
          *(_BYTE *)(a1[3] + v14) = 0;
        }
        else
        {
          v11(a1, 36);
        }
        v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v16 == sub_37DD0 )
        {
          v17 = a1[4];
          if ( v17 )
          {
            v18 = v17 + 1;
            v19 = a1[4];
            --v17;
          }
          else
          {
            v19 = 1;
            v18 = 2;
          }
          v20 = a1[3];
          if ( a1[5] < v18 )
          {
            v32 = qvector_reserve(a1 + 3, v20, v18, 1);
            a1[3] = v32;
            v20 = v32;
          }
          a1[4] = v18;
          *(_BYTE *)(v20 + v17) = 118;
          *(_BYTE *)(a1[3] + v19) = 0;
        }
        else
        {
          v16(a1, 118);
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(unsigned __int16 *)(a2 + 6), 10);
        if ( *(_BYTE *)(a2 + 32) != 0xFF )
        {
          v21 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v21 == sub_37DD0 )
          {
            v22 = a1[4];
            if ( v22 )
            {
              v23 = v22 + 1;
              v24 = a1[4];
              --v22;
            }
            else
            {
              v24 = 1;
              v23 = 2;
            }
            v25 = a1[3];
            if ( a1[5] < v23 )
            {
              v34 = qvector_reserve(a1 + 3, v25, v23, 1);
              a1[3] = v34;
              v25 = v34;
            }
            a1[4] = v23;
            *(_BYTE *)(v25 + v22) = 91;
            *(_BYTE *)(a1[3] + v24) = 0;
          }
          else
          {
            v21(a1, 91);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(char *)(a2 + 32), 10);
          v26 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v26 == sub_37DD0 )
          {
            v27 = a1[4];
            if ( v27 )
            {
              v28 = v27 + 1;
              v29 = a1[4];
              --v27;
            }
            else
            {
              v29 = 1;
              v28 = 2;
            }
            v30 = a1[3];
            if ( a1[5] < v28 )
            {
              v33 = qvector_reserve(a1 + 3, v30, v28, 1);
              a1[3] = v33;
              v30 = v33;
            }
            a1[4] = v28;
            *(_BYTE *)(v30 + v27) = 93;
            *(_BYTE *)(a1[3] + v29) = 0;
          }
          else
          {
            v26(a1, 93);
          }
        }
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 33);
      case 7:
        return sub_38230((__int64)a1, a2);
      case 8:
        v10 = off_71320[*(_WORD *)(a2 + 6) & 0xF];
        return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
      case 0x10:
        v5 = *(unsigned __int16 *)(a2 + 6);
        v6 = "AC";
        goto LABEL_5;
      case 0x11:
        v5 = *(unsigned __int16 *)(a2 + 6);
        v6 = "$ac";
        goto LABEL_5;
      case 0x12:
        v5 = *(unsigned __int16 *)(a2 + 6);
        v6 = "$w";
        goto LABEL_5;
      case 0x13:
        v8 = *(unsigned __int16 *)(a2 + 6);
        if ( (*(_BYTE *)(a1[77] + 188LL) & 1) == 0 )
          goto LABEL_12;
        v9 = (char *)&unk_72FA0;
        break;
    }
    while ( *(_DWORD *)v9 != v8 )
    {
      v9 += 24;
      if ( v9 == (char *)&unk_73078 )
      {
LABEL_12:
        qsnprintf(v35, 20, "%s%u", "$", v8);
        (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v35, 33);
        return v36 - __readfsqword(0x28u);
      }
    }
LABEL_65:
    v10 = *((char **)v9 + 1);
    return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
  }
  else
  {
LABEL_4:
    v5 = *(unsigned __int16 *)(a2 + 6);
    v6 = "$";
LABEL_5:
    qsnprintf(v35, 20, "%s%u", v6, v5);
    (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v35, 33);
    return v36 - __readfsqword(0x28u);
  }
}
