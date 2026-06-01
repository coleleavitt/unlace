__int64 __fastcall sub_174DEF0(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        char a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // r9d
  unsigned __int16 v13; // ax
  int v14; // eax
  __int64 v15; // r12
  __int64 result; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rax
  char v31; // [rsp+Ch] [rbp-FCh] BYREF
  _BYTE *v32; // [rsp+10h] [rbp-F8h] BYREF
  _WORD *v33; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v36[6]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v39; // [rsp+80h] [rbp-88h] BYREF
  char v40; // [rsp+D8h] [rbp-30h]
  unsigned int v41; // [rsp+E0h] [rbp-28h]
  char v42; // [rsp+E4h] [rbp-24h]

  v32 = a3;
  v31 = a4;
  v10 = sub_BFBAE0(a2);
  v33 = (_WORD *)v10;
  v13 = *(_WORD *)v10 & 0x1FF;
  if ( v13 <= 0x75u )
  {
    if ( v13 != 91 )
    {
LABEL_13:
      if ( v13 == 60 )
        return sub_174DEF0(a1, *(_QWORD *)(v10 + 16), (_DWORD)v32, 0, v11, v12, a8, a9, a10);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v10 + 16) == 2 )
    {
      v21 = 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL);
      a2 = *(_QWORD *)(v10 + v21 + 32);
      v15 = *(_QWORD *)(v10 + v21 + 40);
      if ( ((*(_BYTE *)(v10 + 3) >> 1) & 0x3Fu) - 35 <= 1 )
        goto LABEL_4;
    }
  }
  else if ( v13 <= 0x77u )
  {
    v14 = sub_BFAD70((*(_WORD *)(v10 + 2) >> 3) & 0x3F);
    a2 = *(_QWORD *)(v10 + 16);
    v15 = *(_QWORD *)(v10 + 24);
    if ( (unsigned int)(v14 - 35) <= 1 )
    {
LABEL_4:
      result = sub_174DEF0(a1, a2, (_DWORD)v32, 0, v11, v12, a8, a9, a10);
      if ( (_BYTE)result )
        return sub_174DEF0(a1, v15, (_DWORD)v32, 0, v17, v18, a8, a9, a10);
      return result;
    }
    v10 = (unsigned __int64)v33;
    v13 = *v33 & 0x1FF;
    goto LABEL_13;
  }
LABEL_8:
  v19 = *(_QWORD *)(v10 + 8);
  v36[5] = a1;
  v36[0] = &v32;
  v36[2] = &v31;
  v36[3] = &v34;
  v34 = v19;
  v36[1] = &a8;
  v36[4] = &v33;
  if ( (*(_DWORD *)v10 & 0x10000) != 0 )
  {
    sub_17407B0((__int64)v36);
    return 1;
  }
  else
  {
    v20 = (_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *v20 == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL) & 0xFFFFFFFFFFFFFFF0LL]
                           & 0xFFFFFFFFFFFFFFF0LL) )
    {
      result = 1;
      if ( v32 )
        *v32 = 0;
    }
    else
    {
      v22 = sub_C00A40(v10, a2, (__int64)v20, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL), v11);
      v23 = a1 + 8;
      sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v22, 0x10C2u, 0);
      if ( v40 )
      {
        v23 = v34;
        sub_AE9DF0(&v39, v34, 8u);
      }
      else if ( v42 )
      {
        v28 = sub_168B9E0(v37);
        v29 = v38;
        if ( v38 )
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        v35 = v29;
        v30 = sub_1587BC0(v28, &v35, v24, v25, v26, v27);
        v23 = v34;
        sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v41 + 8), v34, 8u);
      }
      v35 = sub_EEC8C0((unsigned __int64)v33, v23, a5);
      sub_1587DB0((__int64)v37, &v35);
      sub_15F7200(v37);
      sub_17407B0((__int64)v36);
      return 0;
    }
  }
  return result;
}
