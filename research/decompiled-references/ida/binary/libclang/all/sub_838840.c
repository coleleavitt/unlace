__int64 __fastcall sub_838840(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rax
  __int64 v36; // rsi
  void *v37; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v38; // [rsp+8h] [rbp-E0h]
  char v39; // [rsp+Ch] [rbp-DCh]
  __int64 v40[3]; // [rsp+20h] [rbp-C8h] BYREF
  char v41; // [rsp+38h] [rbp-B0h]
  __int64 v42; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h]
  __int64 v44; // [rsp+58h] [rbp-90h]
  _BYTE v45[136]; // [rsp+60h] [rbp-88h] BYREF

  v6 = a1[3];
  if ( v6 )
  {
    sub_6A63E0(v6, a2);
    a1[3] = 0;
  }
  switch ( *(_DWORD *)a2 )
  {
    case 2:
      v16 = a2 + 8;
      v17 = a3;
      return sub_82D190((__int64)a1, v16, v17);
    case 3:
      if ( (a3 & 1) != 0 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
        v34 = (unsigned __int8 **)sub_A2E130(*a1, a1[1], 2240, 0);
        if ( v34 )
          goto LABEL_45;
        return 0;
      }
      v19 = sub_2575D20(v6, a2, a3);
      v20 = *(_QWORD *)(a2 + 8);
      v21 = v19;
      if ( v20 == v19 )
        sub_257CEA0(v40, v19, 1);
      else
        sub_25785E0(v40, v20, 1);
      v22 = a2 + 8;
      v23 = ((unsigned int)sub_8175F0(a1[1], *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2160LL)) >> 3) & 7;
      if ( (_BYTE)v23 == 7 )
        v23 = 1;
      v24 = *(_QWORD *)(a2 + 8);
      if ( *((_DWORD *)a1 + 4) == 3 )
        goto LABEL_55;
      goto LABEL_25;
    case 5:
      v26 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v26 + 16) != 14 )
        v26 = sub_B0D320(v26);
      v16 = a2 + 8;
      v17 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF8LL
          | (*(_DWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)*(_QWORD *)(v26 + 32) | (unsigned int)a3) & 7;
      return sub_82D190((__int64)a1, v16, v17);
    case 6:
      v27 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v27 + 16) != 14 )
        v27 = sub_B0D320(v27);
      v28 = *(_QWORD *)(v27 + 32);
      v29 = (*(_DWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v28 | (unsigned int)a3) & 7;
      v30 = v29 | v28 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = v30;
      if ( (v29 & 1) != 0 || (byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
        v35 = (unsigned __int8 **)sub_A2E130(*a1, a1[1], 2240, 0);
        if ( !v35 )
          return 0;
        v15 = 0;
        sub_8356A0(v35, v31, 8u);
      }
      else
      {
        v32 = sub_2575D20(v27, a2, a3);
        v21 = v32;
        if ( a1[3] )
        {
          v33 = a2 + 8;
          if ( v32 == *(_QWORD *)(a2 + 8) )
            sub_257CF50(&v37, v33);
          else
            sub_25768A0(&v37, v33);
          sub_835390((__int64)v40, (__int64 *)&v37);
          sub_6A01B0(a1[3], (__int64)v40);
          if ( LODWORD(v40[0]) > 1 )
            sub_69F740((__int64)v40);
          sub_5FF3B0((__int64 *)&v37);
        }
        v36 = *(_QWORD *)(a2 + 8);
        if ( v36 == v21 )
          sub_257CEA0(v40, v21, 1);
        else
          sub_25785E0(v40, v36, 1);
        v22 = a2 + 8;
        v23 = ((unsigned int)sub_8175F0(a1[1], *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2160LL)) >> 3) & 7;
        if ( (_BYTE)v23 == 7 )
          v23 = 1;
        v24 = *(_QWORD *)(a2 + 8);
        if ( *((_DWORD *)a1 + 4) == 3 )
        {
LABEL_55:
          if ( v21 == v24 )
            v25 = sub_257DC20(v22, v40, v23);
          else
            v25 = sub_257BF20(v22, v40, v23);
        }
        else
        {
LABEL_25:
          if ( v21 == v24 )
            v25 = sub_257DC40(v22, v40, v23);
          else
            v25 = sub_257BF10(v22, v40, v23);
        }
        v15 = sub_81FBE0(*a1, a1[1], v25);
        sub_5FF3B0(v40);
      }
      return v15;
    case 7:
      v7 = *a1;
      v8 = a1[1];
      if ( (a3 & 1) == 0 )
      {
        v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
        {
          v10 = *(_QWORD *)v9;
          if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) == 41 )
          {
LABEL_7:
            v11 = *(_QWORD *)(v10 + 32);
            v41 |= 1u;
            v44 = 0x800000000LL;
            memset(v40, 0, sizeof(v40));
            v42 = 0;
            ptr = v45;
            v45[65] = 0;
            sub_824D00((__int64)v40, *(_QWORD **)(v7 + 16), a2);
            v12 = -1;
            if ( *((_DWORD *)a1 + 4) == 3 )
              v12 = 1;
            v13 = a1[1];
            v14 = *a1;
            v38 = 64;
            v37 = (void *)v12;
            v39 = 0;
            v15 = sub_835AB0(v14, v13, (__int64)v40, v11, (__int64)&v37);
            if ( v38 > 0x40 && v37 )
              operator delete[](v37);
            if ( (_BYTE)v15 )
              sub_81F730((__int64)v40, a2);
            if ( ptr != v45 )
              free(ptr);
            return v15;
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
          {
            v10 = sub_B0D320(v10);
            v7 = *a1;
            if ( v10 )
              goto LABEL_7;
            v8 = a1[1];
          }
          v15 = 0;
          sub_A2E130(v7, v8, 110, 0);
          return v15;
        }
      }
      v34 = (unsigned __int8 **)sub_A2E130(*a1, v8, 2240, 0);
      if ( v34 )
      {
LABEL_45:
        v15 = 0;
        sub_8356A0(v34, a3, 8u);
      }
      else
      {
        return 0;
      }
      return v15;
    default:
      sub_A2E130(*a1, a1[1], 110, 0);
      return 0;
  }
}

