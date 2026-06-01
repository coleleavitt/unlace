void __fastcall sub_1CC50F0(__int64 a1, __int64 a2, double a3)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 *v8; // r12
  unsigned __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r12
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v31; // [rsp+30h] [rbp-98h]
  __int64 v32; // [rsp+38h] [rbp-90h]
  char v33; // [rsp+88h] [rbp-40h]
  unsigned int v34; // [rsp+90h] [rbp-38h]
  char v35; // [rsp+94h] [rbp-34h]

  v4 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL);
  v5 = **(_QWORD **)a1;
  if ( v5 )
    v6 = sub_EEB7E0(v5, a2, a3);
  else
    v6 = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 8LL);
  v7 = (__int64)v4;
  sub_168B9F0((__int64)v29, v4, v6, 0x13FCu, 0);
  sub_15F7200(v29);
  v8 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL);
  v9 = **(_QWORD **)(a1 + 24);
  if ( v9 )
    v10 = sub_EEB7E0(v9, v7, a3);
  else
    v10 = *(_DWORD *)(**(_QWORD **)(a1 + 32) + 8LL);
  sub_168B9F0((__int64)v29, v8, v10, 0x1908u, 0);
  if ( v33 )
  {
    v18 = v31;
    if ( !v31 )
    {
      v21 = v32;
      v22 = *(_DWORD *)(v32 + 14976);
      if ( v22 )
      {
        v23 = (unsigned int)(v22 - 1);
        *(_DWORD *)(v32 + 14976) = v23;
        v18 = *(unsigned __int8 **)(v21 + 8 * v23 + 14848);
        v24 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v25 = *((_QWORD *)v18 + 66);
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
              goto LABEL_20;
          }
        }
LABEL_20:
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
      v31 = v18;
    }
    v18[*v18 + 1] = 2;
    v19 = v31;
    v20 = *v31;
    *v31 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = 0;
  }
  else if ( v35 )
  {
    v13 = sub_168B9E0(v29);
    v16 = v30;
    if ( v30 )
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    v28 = v16;
    v17 = sub_1587BC0(v13, &v28, v11, v12, v14, v15);
    sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v34 + 8), 0, 2u);
  }
  sub_15F7200(v29);
}
