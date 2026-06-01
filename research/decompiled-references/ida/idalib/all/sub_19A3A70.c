_BOOL8 __fastcall sub_19A3A70(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _BOOL8 result; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  bool v20; // al
  __int64 v21; // [rsp+8h] [rbp-150h]
  bool v22; // [rsp+8h] [rbp-150h]
  unsigned __int64 v23; // [rsp+10h] [rbp-148h] BYREF
  int v24; // [rsp+18h] [rbp-140h]
  _BOOL4 v25; // [rsp+1Ch] [rbp-13Ch]
  int v26; // [rsp+20h] [rbp-138h]
  __m128i v27; // [rsp+30h] [rbp-128h] BYREF
  int v28; // [rsp+58h] [rbp-100h]
  _QWORD v29[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-D8h]
  _OWORD v31[5]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-80h]
  __int64 v33; // [rsp+E0h] [rbp-78h]
  __int64 v34; // [rsp+E8h] [rbp-70h]
  unsigned int v35; // [rsp+F0h] [rbp-68h]
  __int64 v36; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+100h] [rbp-58h]
  __int64 v38; // [rsp+110h] [rbp-48h]

  v5 = a2;
  v6 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  for ( i = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    v9 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned __int8 *)(v9 + 16);
    if ( (unsigned __int8)(v10 - 2) > 4u )
      goto LABEL_7;
    v11 = sub_F63050(i, a2, v9, v10);
    if ( !v11 )
      break;
    i = v11;
  }
  v12 = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)v12;
  LOBYTE(v10) = *(_BYTE *)(*(_QWORD *)v12 + 16LL);
LABEL_7:
  v21 = v9;
  result = 0;
  if ( (_BYTE)v10 == 48 )
  {
    v14 = *(_QWORD *)(a1 + 248);
    v29[0] = 0;
    v31[4] = 0;
    v32 = 0;
    v15 = (v14 + 17656) | 6;
    v29[1] = v31;
    v34 = v15;
    v30 = 0x800000000LL;
    v33 = a1;
    v35 = v5;
    sub_B85890(&v36, v15);
    v37 = 0;
    v38 = 0x101010000LL;
    sub_1A395A0(v29);
    v19 = sub_F60F10(v21, v15, v21, v16, v17, v18);
    if ( v19 )
      v19 += 8;
    sub_1A48440(a1, v29, v19, 0);
    *(_WORD *)((char *)&v38 + 3) = 0;
    if ( !(_DWORD)v30 || LODWORD(v29[0]) == 5 )
      goto LABEL_16;
    v23 = a4;
    v24 = a3;
    v25 = sub_199F840(a1, a4);
    v26 = 0;
    if ( v6 )
      v23 = sub_6D5440(&v23);
    sub_19A34B0(&v27, a1, (__int64)v29, (__int64)&v23, v5, nullptr);
    if ( v27.m128i_i64[1] )
      v20 = v28 == 1;
    else
LABEL_16:
      v20 = 0;
    v22 = v20;
    sub_169D230((__int64)v29);
    return v22;
  }
  return result;
}
