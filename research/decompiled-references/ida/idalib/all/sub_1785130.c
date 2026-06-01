__int64 __fastcall sub_1785130(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  void *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r12
  _BYTE *v12; // r15
  signed __int64 v13; // r14
  unsigned __int8 *v14; // r12
  _QWORD *v15; // rax
  unsigned __int8 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  void **v20; // r13
  unsigned __int8 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  void *v28; // rax
  _QWORD *v29; // rax
  size_t v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r13
  void *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-F0h]
  void *src; // [rsp+10h] [rbp-E8h] BYREF
  size_t n; // [rsp+18h] [rbp-E0h]
  _QWORD v41[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v42[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *v43; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v44; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A0h]
  char v46; // [rsp+A8h] [rbp-50h]
  unsigned int v47; // [rsp+B0h] [rbp-48h]
  char v48; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v42, (__int64 *)(*(_QWORD *)a1 + 8LL), **(_DWORD **)(a1 + 8), 0xDC2u, 0);
  if ( v46 )
  {
    sub_AE9DF0(&v44, a2, 2u);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v46 )
      goto LABEL_7;
  }
  else
  {
    if ( !v48 )
      goto LABEL_3;
    v8 = sub_168B9E0(v42);
    v9 = v43;
    if ( v43 )
      v9 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v43 + 32LL))(v43);
    src = v9;
    v10 = sub_1587BC0(v8, (__int64 *)&src, v4, v5, v6, v7);
    sub_AE9DF0((unsigned __int8 **)(*v10 + 32LL * v47 + 8), a2, 2u);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v46 )
    {
LABEL_7:
      v12 = *(_BYTE **)v11;
      v13 = *(_QWORD *)(v11 + 8);
      v14 = v44;
      if ( !v44 )
      {
        v31 = v45;
        v32 = *(_DWORD *)(v45 + 14976);
        if ( v32 )
        {
          v33 = (unsigned int)(v32 - 1);
          *(_DWORD *)(v45 + 14976) = v33;
          v14 = *(unsigned __int8 **)(v31 + 8 * v33 + 14848);
          v34 = *((unsigned int *)v14 + 134);
          v35 = *((_QWORD *)v14 + 66);
          *v14 = 0;
          *((_DWORD *)v14 + 106) = 0;
          v36 = v35 + (v34 << 6);
          while ( v35 != v36 )
          {
            while ( 1 )
            {
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              v38 = v35;
              operator delete(v37);
              v35 = v38;
              if ( v38 == v36 )
                goto LABEL_41;
            }
          }
LABEL_41:
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
        v44 = v14;
      }
      v14[*v14 + 1] = 0;
      src = v41;
      if ( &v12[v13] && !v12 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
      {
        if ( v13 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v15 = (_QWORD *)operator new(v13 + 1);
        v41[0] = v13;
        src = v15;
      }
      else
      {
        if ( v13 == 1 )
        {
          LOBYTE(v41[0]) = *v12;
          v15 = v41;
          goto LABEL_13;
        }
        v15 = v41;
        if ( !v13 )
        {
LABEL_13:
          n = v13;
          *((_BYTE *)v15 + v13) = 0;
          v16 = v44;
          v17 = *v44;
          *v44 = v17 + 1;
          v18 = (unsigned __int8)v17;
          v19 = 32 * (v17 + 3);
          v20 = (void **)&v16[v19];
          v21 = *(unsigned __int8 **)&v16[v19];
          if ( src == v41 )
          {
            v30 = n;
            if ( n )
            {
              if ( n == 1 )
                *v21 = v41[0];
              else
                memcpy(v21, src, n);
              v30 = n;
              v21 = (unsigned __int8 *)*v20;
            }
            v20[1] = (void *)v30;
            v21[v30] = 0;
            v21 = (unsigned __int8 *)src;
            goto LABEL_17;
          }
          if ( v21 == &v16[v19 + 16] )
          {
            *v20 = src;
            v20[1] = (void *)n;
            v20[2] = (void *)v41[0];
          }
          else
          {
            v22 = *(_QWORD *)&v16[32 * v18 + 112];
            *v20 = src;
            v20[1] = (void *)n;
            v20[2] = (void *)v41[0];
            if ( v21 )
            {
              src = v21;
              v41[0] = v22;
              goto LABEL_17;
            }
          }
          v21 = (unsigned __int8 *)v41;
          src = v41;
LABEL_17:
          n = 0;
          *v21 = 0;
          if ( src != v41 )
            operator delete(src);
          goto LABEL_3;
        }
      }
      memcpy(v15, v12, v13);
      v15 = src;
      goto LABEL_13;
    }
  }
  if ( v48 )
  {
    v27 = sub_168B9E0(v42);
    v28 = v43;
    if ( v43 )
      v28 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v43 + 32LL))(v43);
    src = v28;
    v29 = sub_1587BC0(v27, (__int64 *)&src, v23, v24, v25, v26);
    sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v47 + 8), *(_BYTE **)v11, *(_QWORD *)(v11 + 8));
  }
LABEL_3:
  sub_15F7200(v42);
  **(_BYTE **)(a1 + 24) = 1;
  return 0;
}
