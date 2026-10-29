__int64 __fastcall sub_1533740(__int64 a1, unsigned int a2)
{
  bool v2; // r12
  __int64 v3; // rbx
  char v4; // dl
  char v5; // al
  __int64 v6; // rbp
  bool v7; // r13
  char v8; // dl
  char v9; // al
  __int64 v10; // r15
  bool v11; // r14
  char v12; // dl
  char v13; // al
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  char v18; // dl
  char v19; // dl
  char v20; // dl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdx
  void *v34; // rdi
  __int64 v35; // [rsp+0h] [rbp-A8h]
  unsigned __int8 *v36; // [rsp+8h] [rbp-A0h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v38; // [rsp+20h] [rbp-88h] BYREF
  __int64 v39; // [rsp+28h] [rbp-80h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 312);
  if ( v3 )
  {
    v4 = *(_BYTE *)(v3 + 3);
    v2 = (v4 & 0x20) != 0;
    *(_BYTE *)(v3 + 3) = v4 & 0xDF;
    v5 = 1;
    if ( (v4 & 0x1A) == 0 )
      v5 = (*(_BYTE *)(v3 + 4) & 0x30) != 0;
    *(_BYTE *)(v3 + 3) = (v5 << 7) | *(_BYTE *)(v3 + 3) & 0x7F;
  }
  v6 = *(_QWORD *)(a1 + 320);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_BYTE *)(v6 + 3);
    v7 = (v8 & 0x20) != 0;
    *(_BYTE *)(v6 + 3) = v8 & 0xDF;
    v9 = 1;
    if ( (v8 & 0x1A) == 0 )
      v9 = (*(_BYTE *)(v6 + 4) & 0x30) != 0;
    *(_BYTE *)(v6 + 3) = (v9 << 7) | *(_BYTE *)(v6 + 3) & 0x7F;
  }
  v10 = *(_QWORD *)(a1 + 328);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_BYTE *)(v10 + 3);
    v11 = (v12 & 0x20) != 0;
    *(_BYTE *)(v10 + 3) = v12 & 0xDF;
    v13 = 1;
    if ( (v12 & 0x1A) == 0 )
      v13 = (*(_BYTE *)(v10 + 4) & 0x30) != 0;
    *(_BYTE *)(v10 + 3) = (v13 << 7) | *(_BYTE *)(v10 + 3) & 0x7F;
  }
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    sub_146B5E0((__int64 *)&v38, a1, 0, 1, 0);
    sub_1C37680(*(_QWORD *)(a1 + 96));
    v24 = sub_1533380(a1, 0, 0x400008u);
    if ( v24 == 1 )
    {
      sub_1C376E0(*(_QWORD *)(a1 + 96), 0, v25, v26, v27, a2);
      result = 1;
    }
    else
    {
      result = sub_1C376F0(*(_QWORD *)(a1 + 96), a2, v24 & 0xFFFFFFFFFFFFFFFELL);
    }
    if ( v38 )
    {
      v35 = result;
      sub_1564F70(v38);
      result = v35;
    }
  }
  else
  {
    sub_1564840(&v38, a1, a1 + 16, 14);
    v14 = v38;
    if ( !v38 )
    {
      v28 = v39;
      v29 = *(_DWORD *)(v39 + 14976);
      if ( v29 )
      {
        v30 = (unsigned int)(v29 - 1);
        *(_DWORD *)(v39 + 14976) = v30;
        v14 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
        v31 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v32 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v33 = v32 + (v31 << 6);
        while ( v32 != v33 )
        {
          while ( 1 )
          {
            v33 -= 64;
            v34 = *(void **)(v33 + 24);
            if ( v34 == (void *)(v33 + 40) )
              break;
            v37 = v33;
            v36 = v14;
            operator delete(v34);
            v33 = v37;
            v14 = v36;
            if ( v32 == v37 )
              goto LABEL_47;
          }
        }
LABEL_47:
        *((_DWORD *)v14 + 134) = 0;
      }
      else
      {
        v14 = (unsigned __int8 *)operator new(0x3A0u);
        *v14 = 0;
        *((_QWORD *)v14 + 12) = v14 + 112;
        *((_QWORD *)v14 + 16) = v14 + 144;
        *((_QWORD *)v14 + 20) = v14 + 176;
        *((_QWORD *)v14 + 24) = v14 + 208;
        *((_QWORD *)v14 + 28) = v14 + 240;
        *((_QWORD *)v14 + 32) = v14 + 272;
        *((_QWORD *)v14 + 36) = v14 + 304;
        *((_QWORD *)v14 + 40) = v14 + 336;
        *((_QWORD *)v14 + 44) = v14 + 368;
        *((_QWORD *)v14 + 48) = v14 + 400;
        *((_QWORD *)v14 + 52) = v14 + 432;
        *((_QWORD *)v14 + 13) = 0;
        v14[112] = 0;
        *((_QWORD *)v14 + 17) = 0;
        v14[144] = 0;
        *((_QWORD *)v14 + 21) = 0;
        v14[176] = 0;
        *((_QWORD *)v14 + 25) = 0;
        v14[208] = 0;
        *((_QWORD *)v14 + 29) = 0;
        v14[240] = 0;
        *((_QWORD *)v14 + 33) = 0;
        v14[272] = 0;
        *((_QWORD *)v14 + 37) = 0;
        v14[304] = 0;
        *((_QWORD *)v14 + 41) = 0;
        v14[336] = 0;
        *((_QWORD *)v14 + 45) = 0;
        v14[368] = 0;
        *((_QWORD *)v14 + 49) = 0;
        v14[400] = 0;
        *((_QWORD *)v14 + 53) = 0x800000000LL;
        *((_QWORD *)v14 + 66) = v14 + 544;
        *((_QWORD *)v14 + 67) = 0x600000000LL;
      }
      v38 = v14;
    }
    v14[*v14 + 1] = 4;
    v15 = v38;
    v16 = *v38;
    *v38 = v16 + 1;
    *(_QWORD *)&v15[8 * v16 + 16] = 24;
    sub_AEA040((__int64)&v38);
    result = 1;
  }
  if ( v10 )
  {
    v18 = (32 * v11) | *(_BYTE *)(v10 + 3) & 0xDF;
    *(_BYTE *)(v10 + 3) = v18;
    if ( v11 )
    {
      *(_BYTE *)(v10 + 3) = v18 | 0x80;
    }
    else
    {
      v22 = 1;
      if ( (v18 & 0x3A) == 0 )
        v22 = (*(_BYTE *)(v10 + 4) & 0x30) != 0;
      *(_BYTE *)(v10 + 3) = (v22 << 7) | *(_BYTE *)(v10 + 3) & 0x7F;
    }
  }
  if ( v6 )
  {
    v19 = (32 * v7) | *(_BYTE *)(v6 + 3) & 0xDF;
    *(_BYTE *)(v6 + 3) = v19;
    if ( v7 )
    {
      *(_BYTE *)(v6 + 3) = v19 | 0x80;
    }
    else
    {
      v21 = 1;
      if ( (v19 & 0x3A) == 0 )
        v21 = (*(_BYTE *)(v6 + 4) & 0x30) != 0;
      *(_BYTE *)(v6 + 3) = (v21 << 7) | *(_BYTE *)(v6 + 3) & 0x7F;
    }
  }
  if ( v3 )
  {
    v20 = (32 * v2) | *(_BYTE *)(v3 + 3) & 0xDF;
    *(_BYTE *)(v3 + 3) = v20;
    if ( v2 )
    {
      *(_BYTE *)(v3 + 3) = v20 | 0x80;
    }
    else
    {
      v23 = 1;
      if ( (v20 & 0x3A) == 0 )
        v23 = (*(_BYTE *)(v3 + 4) & 0x30) != 0;
      *(_BYTE *)(v3 + 3) = (v23 << 7) | *(_BYTE *)(v3 + 3) & 0x7F;
    }
  }
  return result;
}
