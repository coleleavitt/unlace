__int64 __fastcall sub_76BFA0(__int64 a1, __int64 a2)
{
  char v3; // al
  int v4; // ebx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 i; // rbp
  char v10; // al
  char v11; // dl
  unsigned __int16 v12; // ax
  __int64 v13; // rbp
  unsigned __int64 v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 v17; // al
  _DWORD *v18; // rax
  _DWORD *v19; // r12
  unsigned __int64 v20; // rdi
  _QWORD *v22; // rdi
  char v23; // al
  __int64 v24; // rdi
  _QWORD *v25; // rax
  _BYTE v26[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_BYTE *)(a1 + 2);
  v4 = v3 & 8;
  if ( (v3 & 8) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v4 = 0;
    if ( v5 )
    {
      v6 = sub_A7AF30(v5);
      v4 = (2 * v6) & 0x10 | v6 & 3;
      v3 = *(_BYTE *)(a1 + 2);
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v7 = 16LL * ((v3 & 8) != 0) + 8LL * ((v3 & 0x20) != 0);
    if ( *(_DWORD *)(a1 + v7 + 32) )
    {
      v8 = a1 + v7 + 48;
      for ( i = v8 + 32LL * *(unsigned int *)(a1 + v7 + 44); v8 < i; v4 |= (2 * ((v12 >> 1) & 1))
                                                                         | v12 & 0x11
                                                                         | v11 & 0xC )
      {
        v10 = sub_AFD280(v8);
        v11 = -((v10 & 4) != 0);
        v8 += 32LL;
        v12 = (2 * v10) & 0x10 | v10 & 3;
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = v4 | sub_798470(v13) | (16 * ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 0x1Fu) > 0xF));
  if ( (*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 4) != 0 )
  {
    v15 |= 0xEu;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 2) != 0 )
  {
    v15 |= 2u;
  }
  v16 = v15 | (4 * (*(_BYTE *)(a1 + 3) & 1));
  if ( (*(_DWORD *)(v13 + 40) & 7) == 5 )
  {
    v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL)
                   + 17LL);
    if ( (v23 & 4) != 0 )
      goto LABEL_38;
    if ( (v23 & 2) != 0 )
      v16 |= 2u;
  }
  v17 = *(_BYTE *)(v13 + 28) & 0x7F;
  if ( v17 != 45 )
  {
    if ( (unsigned int)v17 - 38 > 6 )
    {
      if ( (unsigned int)v17 - 33 <= 3 && (unsigned __int8)sub_7A4F00(v13) )
      {
        v22 = (_QWORD *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v22 = (_QWORD *)*v22;
        v16 |= -(int)sub_79B8A0(v22) & 0xA;
      }
      return v16;
    }
    v18 = (_DWORD *)sub_77BD20(v13, v26);
    v19 = v18;
    if ( v18 )
    {
      if ( ((*v18 >> 14) & 0x1Fu) > 0xF )
        v16 |= 0x10u;
      if ( (unsigned __int8)sub_7837E0(v13, a2) && (*v19 & 0x20000) != 0 )
        v16 |= 0xAu;
    }
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x29 )
      return v16;
    v20 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
      v20 = *(_QWORD *)v20;
    if ( ((*(_BYTE *)(v20 + 8) + 72) & 0x7Fu) > 3
      || !(unsigned __int8)sub_79B8A0(v20)
      || (unsigned __int8)sub_77B630(*(_QWORD *)(v13 + 80)) )
    {
      return v16;
    }
    v24 = *(_QWORD *)(v13 + 80);
    v25 = (_QWORD *)(*(_QWORD *)(v24 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v24 + 56) & 4) != 0 )
      v25 = (_QWORD *)v25[4];
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 5 )
    {
      if ( !(unsigned __int8)sub_77B630(v24) )
        v16 |= 0xAu;
      return v16;
    }
LABEL_38:
    v16 |= 0xEu;
    return v16;
  }
  return v16 | 0xA;
}

