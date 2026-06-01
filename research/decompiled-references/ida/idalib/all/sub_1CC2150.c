__int64 __fastcall sub_1CC2150(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int8 *v18; // r12
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // r13
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-C8h] BYREF
  int v30; // [rsp+18h] [rbp-C0h]
  int v31; // [rsp+1Ch] [rbp-BCh]
  __int64 v32; // [rsp+20h] [rbp-B8h]
  char v33; // [rsp+28h] [rbp-B0h]
  unsigned __int8 *v34; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+78h] [rbp-60h]
  int v37; // [rsp+80h] [rbp-58h]
  char v38; // [rsp+88h] [rbp-50h]
  __int64 v39; // [rsp+90h] [rbp-48h]

  sub_168B9F0((__int64)&v29, (__int64 *)(a3 + 8), a4, 0x13EFu, 0);
  if ( v38 )
  {
    v17 = *(_QWORD *)(a2 + 16);
    v18 = v34;
    if ( !v34 )
    {
      v21 = v35;
      v22 = *(_DWORD *)(v35 + 14976);
      if ( v22 )
      {
        v23 = (unsigned int)(v22 - 1);
        *(_DWORD *)(v35 + 14976) = v23;
        v18 = *(unsigned __int8 **)(v21 + 8 * v23 + 14848);
        v24 = *((unsigned int *)v18 + 134);
        v25 = *((_QWORD *)v18 + 66);
        *v18 = 0;
        *((_DWORD *)v18 + 106) = 0;
        v26 = v25 + (v24 << 6);
        while ( v25 != v26 )
        {
          while ( 1 )
          {
            v26 -= 64;
            v27 = *(void **)(v26 + 24);
            if ( v27 == (void *)(v26 + 40) )
              break;
            operator delete(v27);
            if ( v25 == v26 )
              goto LABEL_17;
          }
        }
LABEL_17:
        *((_DWORD *)v18 + 134) = 0;
      }
      else
      {
        v18 = (unsigned __int8 *)operator new(0x3A0u);
        *v18 = 0;
        *((_QWORD *)v18 + 12) = v18 + 112;
        *((_QWORD *)v18 + 16) = v18 + 144;
        *((_QWORD *)v18 + 20) = v18 + 176;
        *((_QWORD *)v18 + 24) = v18 + 208;
        *((_QWORD *)v18 + 28) = v18 + 240;
        *((_QWORD *)v18 + 32) = v18 + 272;
        *((_QWORD *)v18 + 36) = v18 + 304;
        *((_QWORD *)v18 + 40) = v18 + 336;
        *((_QWORD *)v18 + 44) = v18 + 368;
        *((_QWORD *)v18 + 48) = v18 + 400;
        *((_QWORD *)v18 + 52) = v18 + 432;
        *((_QWORD *)v18 + 13) = 0;
        v18[112] = 0;
        *((_QWORD *)v18 + 17) = 0;
        v18[144] = 0;
        *((_QWORD *)v18 + 21) = 0;
        v18[176] = 0;
        *((_QWORD *)v18 + 25) = 0;
        v18[208] = 0;
        *((_QWORD *)v18 + 29) = 0;
        v18[240] = 0;
        *((_QWORD *)v18 + 33) = 0;
        v18[272] = 0;
        *((_QWORD *)v18 + 37) = 0;
        v18[304] = 0;
        *((_QWORD *)v18 + 41) = 0;
        v18[336] = 0;
        *((_QWORD *)v18 + 45) = 0;
        v18[368] = 0;
        *((_QWORD *)v18 + 49) = 0;
        v18[400] = 0;
        *((_QWORD *)v18 + 53) = 0x800000000LL;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      v34 = v18;
    }
    v18[*v18 + 1] = 8;
    v19 = v34;
    v20 = *v34;
    *v34 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = v17;
    v14 = v38;
  }
  else
  {
    if ( !BYTE4(v39) )
    {
      v5 = v29;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v5;
      *(_DWORD *)(a1 + 8) = v30;
      *(_DWORD *)(a1 + 12) = v31;
      *(_QWORD *)(a1 + 16) = v32;
      *(_BYTE *)(a1 + 24) = v33;
      goto LABEL_4;
    }
    v11 = sub_168B9E0(&v29);
    v12 = v32;
    if ( v32 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
    v28 = v12;
    v13 = sub_1587BC0(v11, &v28, v7, v8, v9, v10);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * (unsigned int)v39 + 8), *(_QWORD *)(a2 + 16), 8u);
    v14 = v38;
  }
  v15 = v29;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v15;
  *(_DWORD *)(a1 + 8) = v30;
  *(_DWORD *)(a1 + 12) = v31;
  *(_QWORD *)(a1 + 16) = v32;
  *(_BYTE *)(a1 + 24) = v33;
  if ( v14 )
  {
    sub_FC70F0(a1 + 32, (__int64)&v34);
    v16 = v36;
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v16;
    *(_DWORD *)(a1 + 112) = v37;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v39;
  sub_15F7200(&v29);
  return a1;
}
