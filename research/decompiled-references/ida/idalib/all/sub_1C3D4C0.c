__int64 __fastcall sub_1C3D4C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int8 *v19; // r12
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r14
  void *v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-C8h] BYREF
  int v31; // [rsp+18h] [rbp-C0h]
  int v32; // [rsp+1Ch] [rbp-BCh]
  __int64 v33; // [rsp+20h] [rbp-B8h]
  char v34; // [rsp+28h] [rbp-B0h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-A0h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  int v38; // [rsp+80h] [rbp-58h]
  char v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]

  sub_168B9F0((__int64)&v30, (__int64 *)(a3 + 8), a4, 0x13C3u, 0);
  if ( v39 )
  {
    v19 = v35;
    if ( !v35 )
    {
      v22 = v36;
      v23 = *(_DWORD *)(v36 + 14976);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        *(_DWORD *)(v36 + 14976) = v24;
        v19 = *(unsigned __int8 **)(v22 + 8 * v24 + 14848);
        v25 = *((unsigned int *)v19 + 134);
        v26 = *((_QWORD *)v19 + 66);
        *v19 = 0;
        *((_DWORD *)v19 + 106) = 0;
        v27 = v26 + (v25 << 6);
        while ( v26 != v27 )
        {
          while ( 1 )
          {
            v27 -= 64;
            v28 = *(void **)(v27 + 24);
            if ( v28 == (void *)(v27 + 40) )
              break;
            operator delete(v28);
            if ( v26 == v27 )
              goto LABEL_17;
          }
        }
LABEL_17:
        *((_DWORD *)v19 + 134) = 0;
      }
      else
      {
        v19 = (unsigned __int8 *)operator new(0x3A0u);
        *v19 = 0;
        *((_QWORD *)v19 + 12) = v19 + 112;
        *((_QWORD *)v19 + 16) = v19 + 144;
        *((_QWORD *)v19 + 20) = v19 + 176;
        *((_QWORD *)v19 + 24) = v19 + 208;
        *((_QWORD *)v19 + 28) = v19 + 240;
        *((_QWORD *)v19 + 32) = v19 + 272;
        *((_QWORD *)v19 + 36) = v19 + 304;
        *((_QWORD *)v19 + 40) = v19 + 336;
        *((_QWORD *)v19 + 44) = v19 + 368;
        *((_QWORD *)v19 + 48) = v19 + 400;
        *((_QWORD *)v19 + 52) = v19 + 432;
        *((_QWORD *)v19 + 13) = 0;
        v19[112] = 0;
        *((_QWORD *)v19 + 17) = 0;
        v19[144] = 0;
        *((_QWORD *)v19 + 21) = 0;
        v19[176] = 0;
        *((_QWORD *)v19 + 25) = 0;
        v19[208] = 0;
        *((_QWORD *)v19 + 29) = 0;
        v19[240] = 0;
        *((_QWORD *)v19 + 33) = 0;
        v19[272] = 0;
        *((_QWORD *)v19 + 37) = 0;
        v19[304] = 0;
        *((_QWORD *)v19 + 41) = 0;
        v19[336] = 0;
        *((_QWORD *)v19 + 45) = 0;
        v19[368] = 0;
        *((_QWORD *)v19 + 49) = 0;
        v19[400] = 0;
        *((_QWORD *)v19 + 53) = 0x800000000LL;
        *((_QWORD *)v19 + 66) = v19 + 544;
        *((_QWORD *)v19 + 67) = 0x600000000LL;
      }
      v35 = v19;
    }
    v19[*v19 + 1] = 8;
    v20 = v35;
    v21 = *v35;
    *v35 = v21 + 1;
    *(_QWORD *)&v20[8 * v21 + 16] = a5;
    v16 = v39;
  }
  else
  {
    if ( !BYTE4(v40) )
    {
      v7 = v30;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v31;
      *(_DWORD *)(a1 + 12) = v32;
      *(_QWORD *)(a1 + 16) = v33;
      *(_BYTE *)(a1 + 24) = v34;
      goto LABEL_4;
    }
    v13 = sub_168B9E0(&v30);
    v14 = v33;
    if ( v33 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
    v29 = v14;
    v15 = sub_1587BC0(v13, &v29, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * (unsigned int)v40 + 8), a5, 8u);
    v16 = v39;
  }
  v17 = v30;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v17;
  *(_DWORD *)(a1 + 8) = v31;
  *(_DWORD *)(a1 + 12) = v32;
  *(_QWORD *)(a1 + 16) = v33;
  *(_BYTE *)(a1 + 24) = v34;
  if ( v16 )
  {
    sub_FC70F0(a1 + 32, (__int64)&v35);
    v18 = v37;
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v18;
    *(_DWORD *)(a1 + 112) = v38;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v40;
  sub_15F7200(&v30);
  return a1;
}
