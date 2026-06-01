__int64 __fastcall sub_8BB7B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  char v10; // r14
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned int v19; // eax
  char v20; // bl
  unsigned __int64 v21; // rdx
  void *v22; // rdx
  __int64 v23; // r14
  char v24; // al
  char v25; // bl
  void *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int8 v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C8h]
  __int64 v32; // [rsp+0h] [rbp-C8h]
  int v33; // [rsp+Ch] [rbp-BCh]
  __int64 v34; // [rsp+10h] [rbp-B8h] BYREF
  char v35; // [rsp+18h] [rbp-B0h]
  void *v36; // [rsp+20h] [rbp-A8h] BYREF
  size_t v37; // [rsp+28h] [rbp-A0h]
  void *v38; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-80h]

  switch ( ((*(_BYTE *)(a2 + 2) >> 3) + 26) & 0x1F )
  {
    case 0:
    case 6:
      return sub_87BEE0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
    case 1:
      if ( !(unsigned __int8)sub_87BEE0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
        return 0;
      v9 = a1[1];
      if ( *(_DWORD *)v9 != 2 )
        goto LABEL_5;
      v10 = *(_BYTE *)(v9 + 20);
      v11 = v9 + 8;
      if ( v10 )
        goto LABEL_40;
      v12 = *(unsigned int *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 8);
      v14 = v12 - 1;
      if ( (unsigned int)v12 <= 0x40 )
      {
        if ( 1LL << v14 != v13 || (*(_BYTE *)(a2 + 3) & 1) == 0 )
        {
          v39 = *(_DWORD *)(v9 + 16);
          goto LABEL_42;
        }
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8LL * (v14 >> 6)) & (1LL << v14);
        if ( !v15
          || (v33 = *(_DWORD *)(v9 + 16),
              v16 = sub_25875E0(v9 + 8, v15, v12),
              v11 = v9 + 8,
              LODWORD(v12) = v33,
              v16 != v14)
          || (*(_BYTE *)(a2 + 3) & 1) == 0 )
        {
          v39 = v12;
          goto LABEL_17;
        }
      }
      if ( *(_BYTE *)(*a1 + 963) )
      {
        v32 = v11;
        v28 = sub_6BB140(*(_QWORD *)(*a1 + 16));
        sub_C6CF40(&v38, v28, *(unsigned int *)(a2 + 4), 2353);
        sub_83DF30((__int64 *)&v36, v32, 10, *(_BYTE *)(v9 + 20) ^ 1, 0, 1u, 1u);
        sub_838D50((unsigned __int8 **)&v38, v36, v37);
        sub_8356A0((unsigned __int8 **)&v38, *(_QWORD *)(a2 + 8), 8u);
        v35 = 1;
        v34 = sub_AC7B80(a2);
        sub_839C90((__int64 *)&v38, &v34);
        std::string::_M_dispose();
        sub_83BB20((__int64)&v38);
        LODWORD(v12) = *(_DWORD *)(v9 + 16);
        v11 = v32;
      }
      v30 = v11;
      v23 = *(_QWORD *)(a2 + 8);
      sub_831A30((__int64)&v36, v11, (unsigned int)(v12 + 1));
      sub_831B20((__int64)&v38, (__int64)&v36);
      v24 = sub_82CA30(*a1, a2, (__int64)&v38, v23);
      v11 = v30;
      v25 = v24;
      if ( v39 > 0x40 && v38 )
      {
        operator delete[](v38);
        v11 = v30;
      }
      if ( (unsigned int)v37 > 0x40 && v36 )
      {
        v31 = v11;
        operator delete[](v36);
        v11 = v31;
      }
      if ( !v25 )
        return 0;
      v10 = *(_BYTE *)(v9 + 20);
LABEL_40:
      LODWORD(v12) = *(_DWORD *)(v9 + 16);
      v39 = v12;
      if ( (unsigned int)v12 <= 0x40 )
      {
        v13 = *(_QWORD *)(v9 + 8);
        goto LABEL_42;
      }
LABEL_17:
      v17 = v11;
      sub_2585B30(&v38);
      LODWORD(v12) = v39;
      if ( v39 > 0x40 )
      {
        sub_25869C0(&v38, v17);
        goto LABEL_19;
      }
      v13 = (unsigned __int64)v38;
LABEL_42:
      v26 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v12) & ~v13);
      if ( !(_DWORD)v12 )
        v26 = nullptr;
      v38 = v26;
LABEL_19:
      sub_25860D0(&v38);
      v18 = a1[1];
      BYTE4(v37) = v10;
      LODWORD(v37) = v39;
      v36 = v38;
      sub_822A10((__int64)&v36, v18);
      if ( (unsigned int)v37 <= 0x40 )
        return 1;
      goto LABEL_20;
    case 2:
      if ( !(unsigned __int8)sub_87BEE0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
        return 0;
      v8 = a1[1];
      if ( *(_DWORD *)v8 == 2 )
      {
        v19 = *(_DWORD *)(v8 + 16);
        v20 = *(_BYTE *)(v8 + 20);
        v39 = v19;
        if ( v19 > 0x40 )
        {
          v27 = v8 + 8;
          sub_2585B30(&v38);
          v19 = v39;
          if ( v39 > 0x40 )
          {
            sub_25869C0(&v38, v27);
            v8 = a1[1];
            v19 = v39;
            v22 = v38;
LABEL_27:
            LODWORD(v37) = v19;
            v36 = v22;
            BYTE4(v37) = v20;
            sub_822A10((__int64)&v36, v8);
            if ( (unsigned int)v37 > 0x40 )
            {
LABEL_20:
              if ( v36 )
                operator delete[](v36);
            }
            return 1;
          }
          v21 = (unsigned __int64)v38;
          v8 = a1[1];
        }
        else
        {
          v21 = *(_QWORD *)(v8 + 8);
        }
        v22 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v19) & ~v21);
        if ( !v19 )
          v22 = nullptr;
        goto LABEL_27;
      }
LABEL_5:
      sub_828330(*a1, a2, 110);
      return 0;
    case 3:
      result = sub_8571E0(*(_QWORD *)(a2 + 16), &v38, *a1);
      if ( (_BYTE)result )
      {
        v29 = result;
        sub_8236A0(*a1, (void *)((unsigned __int8)v38 ^ 1u), *(_QWORD *)(a2 + 8), a1[1]);
        return v29;
      }
      return result;
    default:
      goto LABEL_5;
  }
}

