__int64 __fastcall sub_207F0C0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // r11d
  int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int8 v8; // cl
  int v9; // edi
  char v10; // bp
  __int64 v11; // r9
  _BYTE *v12; // r10
  _QWORD *v13; // r8
  __int64 v14; // r12
  __int64 v15; // r12
  int v16; // r8d
  char v17; // r8
  __int64 v18; // rax
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  int v26; // r10d
  _QWORD *v27; // r9
  unsigned __int8 v28; // si
  __int64 v29; // rsi
  __int64 v30; // r11
  _BYTE *v31; // rsi
  unsigned __int8 v32; // bp
  _BYTE *v33; // rbp
  unsigned __int8 v34; // bp
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-90h] BYREF
  __int64 v42; // [rsp+10h] [rbp-88h] BYREF
  int v43; // [rsp+18h] [rbp-80h] BYREF
  _BYTE *v44; // [rsp+20h] [rbp-78h] BYREF
  __int64 v45; // [rsp+28h] [rbp-70h] BYREF
  __int64 v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+38h] [rbp-60h]
  int v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+44h] [rbp-54h]
  int v50; // [rsp+4Ch] [rbp-4Ch]
  char v51; // [rsp+50h] [rbp-48h]
  int v52; // [rsp+54h] [rbp-44h] BYREF
  __int64 v53; // [rsp+58h] [rbp-40h]
  __int64 v54; // [rsp+60h] [rbp-38h]

  v4 = *((_DWORD *)a1 + 4);
  if ( !v4 )
  {
    *a3 = 0;
    return 0;
  }
  v6 = *a2;
  v7 = *a1;
  v8 = *(_BYTE *)(*a2 - 16);
  v9 = *(unsigned __int16 *)(*a2 + 2);
  v10 = v8 & 2;
  if ( (v8 & 2) != 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v6 - 32) + 16LL);
    v41 = v11;
    if ( *(_BYTE *)v6 == 16 )
      v42 = v6;
    else
      v42 = **(_QWORD **)(v6 - 32);
    v43 = *(_DWORD *)(v6 + 16);
    v12 = *(_BYTE **)(*(_QWORD *)(v6 - 32) + 8LL);
    v44 = v12;
    v45 = *(_QWORD *)(*(_QWORD *)(v6 - 32) + 40LL);
    v46 = *(_QWORD *)(*(_QWORD *)(v6 - 32) + 24LL);
    v13 = *(_QWORD **)(v6 - 32);
  }
  else
  {
    v14 = -16 - 8LL * ((v8 >> 2) & 0xF);
    v13 = (_QWORD *)(v6 + v14);
    v11 = *(_QWORD *)(v6 - 8LL * ((v8 >> 2) & 0xF));
    v41 = v11;
    if ( *(_BYTE *)v6 == 16 )
    {
      v42 = v6;
      v43 = *(_DWORD *)(v6 + 16);
    }
    else
    {
      v42 = *(_QWORD *)(v6 + v14);
      v43 = *(_DWORD *)(v6 + 16);
      v8 = *(_BYTE *)(v6 - 16);
      v13 = (_QWORD *)(v6 + -16 - 8LL * ((v8 >> 2) & 0xF));
    }
    v12 = (_BYTE *)v13[1];
    v15 = v13[5];
    v44 = v12;
    v45 = v15;
    v46 = v13[3];
  }
  v47 = v13[4];
  v16 = 0;
  if ( *(_WORD *)(v6 + 2) != 17152 )
    v16 = *(_DWORD *)(v6 + 4);
  v48 = v16;
  v49 = *(_QWORD *)(v6 + 28);
  v17 = 0;
  if ( *(_WORD *)(v6 + 2) == 17152 )
  {
    v3 = *(_DWORD *)(v6 + 4);
    v17 = 1;
  }
  v50 = v3;
  v51 = v17;
  v52 = *(_DWORD *)(v6 + 20);
  if ( v10 )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(v6 - 32) + 48LL);
    v18 = *(_QWORD *)(v6 - 32);
  }
  else
  {
    v37 = v6 - 8LL * ((v8 >> 2) & 0xF);
    v38 = *(_QWORD *)(v37 + 32);
    v18 = v37 - 16;
    v53 = v38;
  }
  v54 = *(_QWORD *)(v18 + 56);
  if ( v11 != 0
    && v9 == 13
    && v12
    && *v12 == 14
    && ((v39 = *(v12 - 16), (v39 & 2) != 0)
      ? (v40 = *((_QWORD *)v12 - 4))
      : (v40 = (__int64)&v12[-8 * ((v39 >> 2) & 0xF) - 16]),
        *(_QWORD *)(v40 + 72)) )
  {
    v20 = sub_2072990(v11, (__int64 *)&v44);
  }
  else
  {
    v20 = sub_2073020(v9, &v41, &v42, &v43, (__int64 *)&v44, &v45, &v52);
  }
  v21 = v4 - 1;
  v22 = *a2;
  v23 = v21 & v20;
  v24 = (_QWORD *)(v7 + 8LL * v23);
  v25 = *v24;
  if ( *v24 == *a2 )
  {
LABEL_41:
    *a3 = v24;
    return 1;
  }
  v26 = 1;
  v27 = nullptr;
  while ( v25 != -4096 && v25 != -8192 )
  {
    v28 = *(_BYTE *)(v22 - 16);
    if ( (v28 & 2) != 0 )
      v29 = *(_QWORD *)(v22 - 32);
    else
      v29 = v22 + -16 - 8LL * ((v28 >> 2) & 0xF);
    v30 = *(_QWORD *)(v29 + 16);
    v31 = *(_BYTE **)(v29 + 8);
    if ( v30 != 0 && v31 != nullptr && *(_WORD *)(v22 + 2) == 13 && *v31 == 14 )
    {
      v32 = *(v31 - 16);
      v33 = (v32 & 2) != 0 ? *((_BYTE **)v31 - 4) : &v31[-16 - 8LL * ((v32 >> 2) & 0xF)];
      if ( *((_QWORD *)v33 + 9) && *(_WORD *)(v25 + 2) == 13 )
      {
        v34 = *(_BYTE *)(v25 - 16);
        v35 = (v34 & 2) != 0 ? *(_QWORD *)(v25 - 32) : -16 - 8LL * ((v34 >> 2) & 0xF) + v25;
        v36 = *(_QWORD *)(v35 + 16);
        if ( v30 == v36 && v36 && v31 == *(_BYTE **)(v35 + 8) )
          goto LABEL_41;
      }
    }
LABEL_32:
    v23 = v21 & (v26 + v23);
    v24 = (_QWORD *)(v7 + 8LL * v23);
    v25 = *v24;
    if ( *v24 == v22 )
      goto LABEL_41;
    ++v26;
  }
  if ( v25 != -4096 )
  {
    if ( !v27 )
      v27 = v24;
    goto LABEL_32;
  }
  if ( !v27 )
    v27 = v24;
  *a3 = v27;
  return 0;
}
