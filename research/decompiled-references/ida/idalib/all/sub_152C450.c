void __fastcall sub_152C450(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbp
  __int16 v10; // ax
  __int64 v11; // r13
  unsigned int *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int16 v15; // ax
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rcx
  char v20; // al
  __int64 v21; // rsi
  char *v22; // rdi
  __int64 v23; // rdx
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  unsigned int *v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  int v32; // [rsp+8h] [rbp-F0h]
  int v33; // [rsp+10h] [rbp-E8h]
  __int32 v34; // [rsp+14h] [rbp-E4h]
  int v35; // [rsp+18h] [rbp-E0h]
  int v36; // [rsp+1Ch] [rbp-DCh]
  void *dest; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v38; // [rsp+28h] [rbp-D0h]
  _BYTE v39[16]; // [rsp+30h] [rbp-C8h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B0h]
  _BYTE v42[32]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v43; // [rsp+70h] [rbp-88h] BYREF
  int v44; // [rsp+80h] [rbp-78h]

  v34 = *(_DWORD *)a4;
  ptr = v42;
  v41 = 0x100000000LL;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 5 )
  {
    sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1862);
    sub_1520C80((unsigned __int8 **)&v43, 1);
    sub_1520A40((unsigned __int8 **)&v43, (__int64)&byte_22F0C30);
    sub_AEA040((__int64)&v43);
    goto LABEL_3;
  }
  v8 = a2[16];
  a2[26] += 40;
  v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2[17] >= (unsigned __int64)(v9 + 40) && v8 )
    a2[16] = v9 + 40;
  else
    v9 = sub_986170((__int64)(a2 + 16), 40, 40, 4, v6, v7);
  v10 = *(_WORD *)(a4 + 16);
  *(_BYTE *)(v9 + 4) = 0;
  *(_BYTE *)(v9 + 12) = 0;
  *(_BYTE *)(v9 + 20) = 0;
  *(_BYTE *)(v9 + 28) = 0;
  *(_BYTE *)(v9 + 36) = 0;
  if ( v10 == 5 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a4 + 8);
      v12 = *(unsigned int **)(v11 + 16);
      v13 = *v12;
      switch ( v13 )
      {
        case 8LL:
          v14 = 0;
          if ( *((_QWORD *)v12 + 2) != 0x74636172746E6F63LL )
            goto LABEL_12;
          break;
        case 11LL:
          if ( *((_QWORD *)v12 + 2) != 0x69636F7373616572LL
            || *((_WORD *)v12 + 12) != 29793
            || (v14 = 1, *((_BYTE *)v12 + 26) != 101) )
          {
            if ( *((_QWORD *)v12 + 2) != 0x74656D5F6C617665LL
              || *((_WORD *)v12 + 12) != 28520
              || *((_BYTE *)v12 + 26) != 100 )
            {
LABEL_12:
              sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1862);
              sub_1520C80((unsigned __int8 **)&v43, 0);
              sub_AE9DF0((unsigned __int8 **)&v43, v11, 5u);
              sub_AEA040((__int64)&v43);
              goto LABEL_3;
            }
            v14 = 4;
          }
          break;
        case 10LL:
          if ( *((_QWORD *)v12 + 2) != 0x6F69747065637865LL || (v14 = 3, *((_WORD *)v12 + 12) != 29550) )
          {
            if ( *((_QWORD *)v12 + 2) != 0x636F727069636572LL || *((_WORD *)v12 + 12) != 27745 )
              goto LABEL_12;
            v14 = 2;
          }
          break;
        default:
          goto LABEL_12;
      }
      sub_14634E0(a2, (int *)a4);
      if ( *(_WORD *)(a4 + 16) != 22 )
      {
        sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 14);
        sub_AE9DF0((unsigned __int8 **)&v43, 22, 4u);
        sub_AEA040((__int64)&v43);
        goto LABEL_3;
      }
      sub_14634E0(a2, (int *)a4);
      v15 = *(_WORD *)(a4 + 16);
      if ( v15 == 84 )
      {
        if ( v14 != 4 )
          goto LABEL_22;
      }
      else if ( v15 != 5 )
      {
        goto LABEL_22;
      }
      v17 = *(_QWORD *)(a4 + 8);
      if ( v14 )
        break;
      v24 = *(unsigned int **)(v17 + 16);
      v25 = *v24;
      if ( v25 == 2 )
      {
        if ( *((_WORD *)v24 + 8) != 28271 )
          goto LABEL_44;
        v32 = 1;
      }
      else if ( v25 == 3 )
      {
        if ( *((_WORD *)v24 + 8) != 26223 || *((_BYTE *)v24 + 18) != 102 )
        {
          *(_BYTE *)(v9 + 4) = 0;
          *(_DWORD *)v9 = v32;
LABEL_45:
          sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1861);
          sub_13D35F0((__int64)&dest, a4, a2[11], a2[7], nullptr);
          sub_AEC220((unsigned __int8 **)&v43, dest, v38);
          sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
          v26 = 0;
LABEL_46:
          sub_1520C80((unsigned __int8 **)&v43, v26);
          v16 = dest;
          if ( dest == v39 )
          {
LABEL_24:
            sub_AEA040((__int64)&v43);
            goto LABEL_3;
          }
LABEL_23:
          operator delete(v16);
          goto LABEL_24;
        }
        v32 = 0;
      }
      else
      {
        if ( v25 != 4 || v24[4] != 1953718630 )
        {
LABEL_44:
          *(_BYTE *)(v9 + 4) = 0;
          *(_DWORD *)v9 = v32;
          goto LABEL_45;
        }
        v32 = 2;
      }
      *(_BYTE *)(v9 + 4) = 1;
      *(_DWORD *)v9 = v32;
LABEL_33:
      sub_14634E0(a2, (int *)a4);
      if ( *(_WORD *)(a4 + 16) != 23 )
      {
        sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 14);
        sub_AE9DF0((unsigned __int8 **)&v43, 23, 4u);
        sub_AEA040((__int64)&v43);
        goto LABEL_3;
      }
      sub_14634E0(a2, (int *)a4);
      v10 = *(_WORD *)(a4 + 16);
      if ( v10 != 5 )
        goto LABEL_35;
    }
    if ( v14 - 1 > 1 )
    {
      if ( v14 != 3 )
      {
        v27 = *(unsigned int **)(v17 + 16);
        v28 = *v27;
        if ( v28 == 6 )
        {
          if ( v27[4] == 1920298867 && *((_WORD *)v27 + 10) == 25955 )
          {
            v36 = 0;
          }
          else
          {
            if ( v27[4] != 1651863396 || *((_WORD *)v27 + 10) != 25964 )
              goto LABEL_54;
            v36 = 1;
          }
        }
        else
        {
          if ( v28 != 8 || *((_QWORD *)v27 + 2) != 0x6465646E65747865LL )
          {
LABEL_54:
            *(_BYTE *)(v9 + 36) = 0;
            *(_DWORD *)(v9 + 32) = v36;
            sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1861);
            sub_13D35F0((__int64)&dest, a4, a2[11], a2[7], nullptr);
            sub_AEC220((unsigned __int8 **)&v43, dest, v38);
            sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
            v26 = 4;
            goto LABEL_46;
          }
          v36 = 2;
        }
        *(_BYTE *)(v9 + 36) = 1;
        *(_DWORD *)(v9 + 32) = v36;
        goto LABEL_33;
      }
      v29 = *(unsigned int **)(v17 + 16);
      v30 = *v29;
      if ( v30 == 6 )
      {
        if ( v29[4] == 1869506409 && *((_WORD *)v29 + 10) == 25970 )
        {
          v35 = 0;
          goto LABEL_96;
        }
        if ( v29[4] == 1769108595 && *((_WORD *)v29 + 10) == 29795 )
        {
          v35 = 2;
LABEL_96:
          v31 = 1;
LABEL_76:
          *(_BYTE *)(v9 + 28) = v31;
          *(_DWORD *)(v9 + 24) = v35;
          if ( !v31 )
          {
            sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1861);
            sub_13D35F0((__int64)&dest, a4, a2[11], a2[7], nullptr);
            sub_AEC220((unsigned __int8 **)&v43, dest, v38);
            sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
            v26 = 3;
            goto LABEL_46;
          }
          goto LABEL_33;
        }
      }
      else
      {
        v31 = 0;
        if ( v30 != 7 )
          goto LABEL_76;
        if ( v29[4] == 1954111853 && *((_WORD *)v29 + 10) == 24946 && *((_BYTE *)v29 + 22) == 112 )
        {
          v35 = 1;
          goto LABEL_96;
        }
      }
      v31 = 0;
      goto LABEL_76;
    }
    v18 = v9 + 16;
    if ( v14 == 1 )
      v18 = v9 + 8;
    v19 = *(unsigned int **)(v17 + 16);
    v20 = 0;
    v21 = *v19;
    if ( v21 == 2 )
    {
      if ( *((_WORD *)v19 + 8) != 28271 )
        goto LABEL_32;
      v33 = 1;
      goto LABEL_41;
    }
    if ( v21 == 3 )
    {
      if ( *((_WORD *)v19 + 8) == 26223 && *((_BYTE *)v19 + 18) == 102 )
      {
        v33 = 0;
LABEL_41:
        v20 = 1;
        goto LABEL_32;
      }
      v20 = 0;
    }
LABEL_32:
    *(_BYTE *)(v18 + 4) = v20;
    *(_DWORD *)v18 = v33;
    if ( !v20 )
    {
LABEL_22:
      sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 1861);
      sub_13D35F0((__int64)&dest, a4, a2[11], a2[7], nullptr);
      sub_AEC220((unsigned __int8 **)&v43, dest, v38);
      sub_AEC220((unsigned __int8 **)&v43, (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
      sub_1520C80((unsigned __int8 **)&v43, v14);
      v16 = dest;
      if ( dest == v39 )
        goto LABEL_24;
      goto LABEL_23;
    }
    goto LABEL_33;
  }
LABEL_35:
  if ( v10 == 2 )
  {
    v44 = 453;
    v43.m128i_i64[1] = v9;
    v43.m128i_i32[0] = v34;
    v43.m128i_i32[1] = v34;
    sub_141B840((__int64)&ptr, &v43);
    sub_1528200(&dest, (unsigned int)v41);
    v22 = (char *)dest;
    v23 = (unsigned int)v41;
    if ( 24LL * (unsigned int)v41 )
    {
      memmove(dest, ptr, 24LL * (unsigned int)v41);
      v23 = (unsigned int)v41;
      v22 = (char *)dest;
    }
    dest = nullptr;
    sub_14368B0((__int64)a2, v22, v23, 0, 1u, 0);
    if ( dest )
      operator delete[](dest);
  }
  else
  {
    sub_FC70B0((__int64)&v43, a2[6], *(_DWORD *)a4, 2202);
    sub_1520A40((unsigned __int8 **)&v43, (__int64)"clang fp");
    sub_AEA040((__int64)&v43);
  }
LABEL_3:
  if ( ptr != v42 )
    free(ptr);
}
