void __fastcall sub_99C950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]

  v9 = *(_QWORD *)(a1 + 328);
  if ( *(_BYTE *)(v9 + 68) == 1 && a3 )
  {
    v10 = *(_WORD *)a3 & 0x1FF;
    v22 = v8;
    v21 = v7;
    v20 = v6;
    switch ( ((_WORD)v10 + 492) & 0x1FF )
    {
      case 0:
        sub_99C950(a1, a2, *(_QWORD *)(a3 + 24));
        break;
      case 0xD:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
        if ( (*(_BYTE *)(a3 + 1) & 6) == 0
          && sub_F63270(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          goto LABEL_18;
        }
        break;
      case 0x1C:
        if ( *(_DWORD *)(a2 + 16) == 6 )
        {
          v12 = *(_QWORD *)(a3 + 16);
          if ( (v12 & 4) != 0 )
            v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          v18 = a3;
          v19 = 3;
          goto LABEL_8;
        }
        break;
      case 0x21:
        if ( (unsigned __int8)sub_BFAFB0(a3) )
          sub_99C950(a1, a2, **(_QWORD **)(a3 + 16));
        break;
      case 0x28:
      case 0x42:
        goto LABEL_12;
      case 0x3B:
        if ( ((*(_WORD *)(a3 + 2) >> 3) & 0x7F) == 5 || ((*(_WORD *)(a3 + 2) >> 3) & 0x7F) == 0x14 )
LABEL_12:
          sub_99C950(a1, a2, *(_QWORD *)(a3 + 16));
        break;
      case 0x5D:
      case 0x5E:
        if ( *(_BYTE *)(v9 + 69) && (*(_QWORD *)a3 & 0x80000LL) != 0 )
        {
          v15 = (__int64 *)(a3 + 40);
          if ( (_WORD)v10 == 114 )
            v15 = (__int64 *)(a3 + 48);
          v18 = a3;
          v19 = 6;
          v16 = *v15;
          v17 = sub_9A94C0(*(_QWORD *)(a1 + 8) + 32LL, &v18, a2);
          sub_99C950(a1, v17, v16);
        }
LABEL_18:
        sub_99C770(a1, a2, a3, v10, v9, a6);
        break;
      case 0x60:
        v13 = *(_QWORD *)(a3 + 24);
        v18 = a3;
        v19 = 4;
LABEL_8:
        v14 = sub_9A94C0(*(_QWORD *)(a1 + 8) + 32LL, &v18, a2);
        sub_99C950(a1, v14, v13);
        break;
      case 0x6C:
        if ( *(_DWORD *)(a2 + 16) == 3 )
        {
          sub_99C950(a1, a2, *(_QWORD *)(a3 + 32));
          sub_99C950(a1, a2, *(_QWORD *)(a3 + 40));
        }
        break;
      default:
        return;
    }
  }
}
