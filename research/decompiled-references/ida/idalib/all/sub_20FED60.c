__int64 __fastcall sub_20FED60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int v5; // r12d
  __int64 (*v6)(); // rax
  __int64 v7; // rax
  __int64 (*v8)(); // rax
  __int64 v9; // rdi
  const char *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 (*v18)(); // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-118h] BYREF
  __int64 v21; // [rsp+8h] [rbp-110h] BYREF
  __int128 v22; // [rsp+10h] [rbp-108h] BYREF
  __int64 v23; // [rsp+20h] [rbp-F8h]
  int v24; // [rsp+28h] [rbp-F0h]
  _QWORD v25[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v26; // [rsp+50h] [rbp-C8h]
  _QWORD v27[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v28; // [rsp+80h] [rbp-98h]
  _QWORD v29[4]; // [rsp+90h] [rbp-88h] BYREF
  __int16 v30; // [rsp+B0h] [rbp-68h]
  _QWORD v31[4]; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v32; // [rsp+E0h] [rbp-38h]

  switch ( *(_BYTE *)(a2 + 28) )
  {
    case 0:
    case 1:
    case 4:
    case 7:
    case 8:
    case 0xB:
    case 0xC:
    case 0xD:
      return (unsigned int)(*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 32));
    case 2:
      v4 = *(_QWORD *)(a2 + 8);
      v5 = (-(1 << *(_BYTE *)(a2 + 31)) & ((1LL << *(_BYTE *)(a2 + 31)) + *(_DWORD *)(a2 + 16) - 1))
         - *(_DWORD *)(a2 + 16);
      LODWORD(v31[0]) = v5;
      v6 = *(__int64 (**)())(*(_QWORD *)v4 + 8LL);
      if ( v6 == sub_20FE640 )
        goto LABEL_6;
      if ( !(unsigned __int8)v6() )
        goto LABEL_36;
      if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
      {
        v5 = v31[0];
        if ( !LODWORD(v31[0]) )
          return 0;
        goto LABEL_10;
      }
      v17 = *(__int64 **)(a1 + 8);
      v7 = *v17;
      v18 = *(__int64 (**)())(*v17 + 64);
      if ( v18 == sub_20FDBC0 )
      {
        v5 = v31[0];
        if ( !LODWORD(v31[0]) )
          return 0;
        goto LABEL_9;
      }
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64, _QWORD *))v18)(v17, a2, v31) )
      {
LABEL_36:
        v5 = v31[0];
LABEL_6:
        if ( !v5 )
          return 0;
        if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
        {
          v7 = **(_QWORD **)(a1 + 8);
LABEL_9:
          v8 = *(__int64 (**)())(v7 + 152);
          if ( v8 != sub_20FDBD0 )
          {
            while ( v5 % (unsigned int)v8() )
            {
              v19 = **(_QWORD **)(a1 + 8);
              v5 = LODWORD(v31[0]) + (1LL << *(_BYTE *)(a2 + 31));
              LODWORD(v31[0]) = v5;
              v8 = *(__int64 (**)())(v19 + 152);
              if ( v8 == sub_20FDBD0 )
                goto LABEL_10;
            }
            v5 = v31[0];
          }
        }
LABEL_10:
        result = 0;
        if ( *(_DWORD *)(a2 + 36) < v5 )
          return result;
        return v5;
      }
      return LODWORD(v31[0]);
    case 3:
      v9 = *(_QWORD *)(a2 + 40);
      v29[0] = 0;
      if ( (unsigned __int8)sub_210E2E0(v9, v29, a1) )
      {
        result = v29[0] * *(unsigned __int8 *)(a2 + 30);
        if ( result >= 0 )
          return result;
        v10 = "invalid number of bytes";
      }
      else
      {
        v10 = "expected assembly-time absolute expression";
      }
      v11 = *(_QWORD *)(a2 + 56);
      v31[0] = v10;
      v32 = 259;
      sub_20FEB30(a1, v11, (__int64)v31);
      return 0;
    case 5:
      return *(_QWORD *)(a2 + 32);
    case 6:
      v12 = *(_QWORD *)(a2 + 32);
      v22 = 0;
      v23 = 0;
      v24 = 0;
      if ( (unsigned __int8)sub_210E1E0(v12, &v22, a1) )
      {
        v15 = *(_QWORD *)(a2 + 16);
        v16 = v23;
        v20 = v15;
        v21 = v23;
        if ( (_QWORD)v22 )
        {
          if ( !(unsigned __int8)sub_20FE650(a1, v22, 0, v29, v13, v14) )
          {
            v31[0] = "expected absolute expression";
            v32 = 259;
            goto LABEL_22;
          }
          v16 = v21 + v29[0];
          v21 += v29[0];
          v15 = v20;
        }
        result = v16 - v15;
        if ( (unsigned __int64)result <= 0x3FFFFFFF )
          return result;
        v28 = 770;
        v25[0] = "invalid .org offset '";
        v25[2] = &v21;
        v26 = 3075;
        v27[0] = v25;
        v27[2] = "' (at offset '";
        v29[0] = v27;
        v29[2] = &v20;
        v31[0] = v29;
        v30 = 2818;
        v31[2] = "')";
        v32 = 770;
      }
      else
      {
        v31[0] = "expected assembly-time absolute expression";
        v32 = 259;
      }
LABEL_22:
      sub_20FEB30(a1, *(_QWORD *)(a2 + 40), (__int64)v31);
      return 0;
    case 9:
      return *(_QWORD *)(a2 + 40);
    case 0xA:
      return 4;
  }
}
