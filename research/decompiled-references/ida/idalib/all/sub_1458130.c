void __fastcall sub_1458130(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // r12
  unsigned __int8 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  int v13; // ebp
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 *v17; // rax
  int v18; // r10d
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int8 *v23[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_14634E0(a2, a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    sub_FC70B0((__int64)v23, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 14);
    sub_AE9DF0(v23, (__int64)"(", 1u);
    sub_AEA040((__int64)v23);
    return;
  }
  v6 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v6 | 0x20;
  sub_14634E0(a2, a4);
  *(_BYTE *)(a2 + 544) = (32 * ((v6 & 0x20) != 0)) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( *(_WORD *)(a4 + 16) == 5 )
  {
    v7 = *(_QWORD *)(a4 + 8);
    if ( (*(_BYTE *)(v7 + 3) & 2) != 0 )
    {
      sub_14634E0(a2, a4);
      if ( *(_WORD *)(a4 + 16) == 23 )
      {
        v12 = *(_DWORD *)(a2 + 2256);
        *(_BYTE *)(v7 + 5) |= 2u;
        v13 = *(_DWORD *)a4;
        v22 = v7;
        if ( v12 )
        {
          v10 = v12 - 1;
          v14 = *(_QWORD *)(a2 + 2240);
          v15 = v10 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
          v8 = (unsigned __int8 *)(v14 + 112LL * v15);
          v16 = *(_QWORD *)v8;
          if ( v7 == *(_QWORD *)v8 )
            goto LABEL_8;
          v18 = 1;
          v11 = 0;
          if ( v16 != -4096 )
          {
            while ( 1 )
            {
              if ( !v11 && v16 == -8192 )
                v11 = (__int64)v8;
              v15 = v10 & (v18 + v15);
              v8 = (unsigned __int8 *)(v14 + 112LL * v15);
              v16 = *(_QWORD *)v8;
              if ( v7 == *(_QWORD *)v8 )
                break;
              if ( v16 == -4096 )
              {
                if ( v11 )
                  v8 = (unsigned __int8 *)v11;
                goto LABEL_14;
              }
              ++v18;
            }
LABEL_8:
            v17 = v8 + 8;
            if ( v8[108] )
            {
LABEL_9:
              *((_DWORD *)v17 + 24) = v13;
              return;
            }
LABEL_19:
            v17[100] = 1;
            goto LABEL_9;
          }
LABEL_14:
          v19 = *(_DWORD *)(a2 + 2248);
          v9 = 3 * v12;
          v23[0] = v8;
          v20 = v19 + 1;
          if ( 4 * v20 < (unsigned int)v9 )
          {
            v9 = v12 - *(_DWORD *)(a2 + 2252) - v20;
            if ( (unsigned int)v9 > v12 >> 3 )
            {
LABEL_16:
              v21 = *(_QWORD *)v8 == -4096;
              *(_DWORD *)(a2 + 2248) = v20;
              if ( !v21 )
                --*(_DWORD *)(a2 + 2252);
              *(_QWORD *)v8 = v7;
              memset(v8 + 8, 0, 0x68u);
              v17 = v8 + 8;
              goto LABEL_19;
            }
LABEL_22:
            sub_1457E90((__int64 **)(a2 + 2240), v12, (__int64)v8, v9, v10, v11);
            sub_1452290((__int64 *)(a2 + 2240), &v22, v23);
            v7 = v22;
            v8 = v23[0];
            v20 = *(_DWORD *)(a2 + 2248) + 1;
            goto LABEL_16;
          }
        }
        else
        {
          v23[0] = nullptr;
        }
        v12 *= 2;
        goto LABEL_22;
      }
      sub_FC70B0((__int64)v23, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 14);
      sub_AE9DF0(v23, (__int64)")", 1u);
      sub_AEA040((__int64)v23);
    }
    else
    {
      sub_FC70B0((__int64)v23, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1180);
      sub_AE9DF0(v23, v7, 5u);
      sub_AEA040((__int64)v23);
    }
  }
  else
  {
    sub_FC70B0((__int64)v23, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 14);
    sub_AE9DF0(v23, 5, 4u);
    sub_AEA040((__int64)v23);
  }
}
