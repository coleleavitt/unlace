__int64 __fastcall sub_EC28E0(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5, double a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-70h]
  _DWORD v35[22]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 64) == 23
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
  {
    return 0;
  }
  v13 = sub_F44710(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(_BYTE *)(v16 + 16);
  if ( v17 == 47 )
  {
    v18 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12, v13);
    if ( (*(_BYTE *)(v18 + 74) & 1) == 0 && (*(_QWORD *)(v18 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return 0;
    v14 = nullptr;
    v22 = *(_QWORD *)(sub_F3D1D0(v16, a2, v19, v20, v21) + 128);
    v13 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v22 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_12;
    if ( (v22 & 4) != 0 )
    {
      v27 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !(*(_QWORD *)(*(_QWORD *)v27 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v27 + 8LL) >> 3) & 1) )
      {
        v13 = *(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      }
      v22 = sub_F411C0(*(_QWORD *)v13);
    }
    v13 = v22 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_11:
    v14 = (_QWORD *)v13;
LABEL_12:
    v15 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)(*v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_BYTE *)(v16 + 16);
  }
  v33 = v13;
  if ( v17 != 13 )
    return 0;
  v6 = sub_F342B0(v15, a6);
  if ( (_BYTE)v6 )
  {
    *(_DWORD *)(a1 + 64) = 21;
    *(_DWORD *)(a1 + 8) = 4 * ((unsigned __int8)sub_F341E0(*v14, a2, v23, v24, v33) != 0);
    v31 = sub_A4E300((_QWORD *)a5, a3);
    if ( v31 && (unsigned int)*(unsigned __int8 *)(v31 + 16) - 2 <= 1 && (*(_WORD *)(v31 + 18) & 0x1C0) == 0 )
    {
      v32 = *(_QWORD **)(v31 + 40);
      if ( (*(_BYTE *)(v31 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v32 + 2) <= 0x40u )
          v32 = (_QWORD *)*v32;
        else
          v32 = *(_QWORD **)*v32;
      }
      *(_WORD *)(a1 + 36) &= 0xFEu;
      *(_QWORD *)(a1 + 16) = &byte_22CD811;
      *(_QWORD *)(a1 + 24) = 0x100000000LL;
      *(_DWORD *)(a1 + 32) = (_DWORD)v32 - 1;
    }
  }
  else
  {
    v25 = *(unsigned __int16 *)(v16 + 18);
    LOWORD(v25) = (unsigned __int16)v25 >> 3;
    v26 = (unsigned int)(v25 + 75);
    LOWORD(v26) = v26 & 0x1FF;
    switch ( v26 )
    {
      case 0LL:
      case 1LL:
      case 11LL:
      case 12LL:
        *(_DWORD *)(a1 + 8) = 1;
        goto LABEL_19;
      case 6LL:
      case 14LL:
        *(_DWORD *)(a1 + 8) = 2;
        goto LABEL_19;
      case 7LL:
      case 15LL:
      case 44LL:
        *(_DWORD *)(a1 + 8) = 0;
        goto LABEL_19;
      case 8LL:
      case 16LL:
      case 45LL:
        *(_DWORD *)(a1 + 8) = 4;
        goto LABEL_19;
      case 9LL:
      case 17LL:
        *(_DWORD *)(a1 + 8) = 5;
        goto LABEL_19;
      case 46LL:
        *(_DWORD *)(a1 + 8) = 13;
LABEL_19:
        if ( (*a4 & 0x1001) != 0 )
          sub_C7A580(v33, a1);
        LOBYTE(v28) = sub_C7A1F0((_DWORD *)a1, *(_DWORD **)(a5 + 17448), (__int64)a4);
        v6 = v28;
        if ( !(_BYTE)v28
          || (sub_EC2220((__int64)v35, a1, (_QWORD *)a5), v35[0] == 1)
          || !(unsigned int)sub_C78D30((__int64)v35, (__int64 *)a5, a2, v29, v30) )
        {
          v6 = sub_F343C0(*v14);
          if ( (_BYTE)v6 )
          {
            *(_DWORD *)(a1 + 64) = 13;
          }
          else
          {
            v6 = sub_F41400(*v14);
            if ( (_BYTE)v6 )
            {
              *(_DWORD *)(a1 + 64) = 2;
            }
            else
            {
              v6 = 1;
              sub_F41620(*v14);
              *(_DWORD *)(a1 + 64) = 9;
            }
          }
        }
        break;
      default:
        return v6;
    }
  }
  return v6;
}

