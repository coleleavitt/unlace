void __fastcall sub_1E65550(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  size_t v15; // rax
  unsigned __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 *v34; // rax
  __int64 **v35; // rax
  __int64 v36; // rdi
  __int64 **v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rdi
  char *v42; // rax
  __int64 *v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // [rsp+8h] [rbp-100h] BYREF
  unsigned int *v47; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-F0h]
  void *s1; // [rsp+20h] [rbp-E8h] BYREF
  size_t n; // [rsp+28h] [rbp-E0h]
  _BYTE v51[16]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v52[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v54; // [rsp+60h] [rbp-A8h] BYREF
  char v55; // [rsp+B8h] [rbp-50h]
  unsigned int v56; // [rsp+C0h] [rbp-48h]
  char v57; // [rsp+C4h] [rbp-44h]

  v4 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_E3A850(v4) && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
  {
    sub_168B9F0((__int64)v52, (__int64 *)(a3 + 8), *(_DWORD *)(a2 + 24), 0x1251u, 0);
    sub_15F7200(v52);
    *(_BYTE *)(a2 + 58) |= 1u;
    return;
  }
  v5 = sub_F6AC00(v4);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_F5DAC0(v5);
    v51[0] = 0;
    s1 = v51;
    n = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 41 )
    {
      switch ( (*(_WORD *)(v11 + 18) >> 3) & 0x1FF )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          goto LABEL_10;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
          sub_E3D120(&s1, (char *)"write_only");
          break;
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
          sub_E3D120(&s1, (char *)"read_write");
          break;
      }
LABEL_11:
      v13 = *(unsigned int **)(*(_QWORD *)a2 + 16LL);
      v14 = *v13;
      v47 = v13 + 4;
      v48 = v14;
      v15 = j__strlen("_");
      v16 = sub_2246FB0(&v47, "_", v15, 0);
      if ( v16 < v48 )
      {
        if ( n != v48 - v16 || n && memcmp(s1, (char *)v47 + v16, n) )
          goto LABEL_13;
      }
      else if ( n )
      {
LABEL_13:
        v17 = (__int64 *)(a3 + 8);
        sub_168B9F0((__int64)v52, v17, *(_DWORD *)(a2 + 24), 0x1258u, 0);
        sub_15F7200(v52);
LABEL_14:
        sub_168B9F0((__int64)v52, v17, *(_DWORD *)(*(_QWORD *)(v6 + 32) + 56LL), 0x1836u, 0);
        if ( v55 )
        {
          sub_AEC220(&v54, s1, n);
        }
        else if ( v57 )
        {
          v24 = sub_168B9E0(v52);
          v27 = v53;
          if ( v53 )
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
          v46 = v27;
          v28 = sub_1587BC0(v24, &v46, v22, v23, v25, v26);
          sub_AEC220((unsigned __int8 **)(*v28 + 32LL * v56 + 8), s1, n);
        }
        sub_15F7200(v52);
        if ( s1 != v51 )
          operator delete(s1);
        return;
      }
      v17 = (__int64 *)(a3 + 8);
      sub_168B9F0((__int64)v52, v17, *(_DWORD *)(a2 + 24), 0x89u, 0);
      v18 = sub_1682BA0((__int64)v52, (__int64)&v47);
      v46 = *(_QWORD *)(a2 + 24);
      sub_1587DB0(v18, &v46);
      sub_15F7200(v52);
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v12 + 29) & 1) == 0 )
    {
LABEL_10:
      sub_E3D120(&s1, (char *)"read_only");
      goto LABEL_11;
    }
    v29 = sub_B8C3D0(v12, a2, (__int64)v51, v8, v9, v10);
    v32 = *v29;
    v33 = (__int64 *)(*v29 + 8LL * *((unsigned int *)v29 + 2));
    if ( *v29 >= (unsigned __int64)v33 )
    {
      if ( (__int64 *)v32 == v33 )
        goto LABEL_10;
      if ( *(_WORD *)(*v33 + 36) != 434 )
      {
        v35 = (__int64 **)(v33 + 1);
        while ( v35 != (__int64 **)v32 )
        {
          v33 = *v35++;
          if ( *((_WORD *)v33 + 18) == 434 )
            goto LABEL_44;
        }
        goto LABEL_10;
      }
    }
    else
    {
      v34 = (__int64 *)*v29;
      while ( 1 )
      {
        v32 = *v34;
        if ( *(_WORD *)(*v34 + 36) == 434 )
          break;
        if ( v33 == ++v34 )
          goto LABEL_10;
      }
      if ( v33 == v34 )
        goto LABEL_10;
    }
LABEL_44:
    v36 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v36 + 29) & 1) != 0 )
    {
      v37 = (__int64 **)sub_B8C3D0(v36, a2, v32, (__int64)v33, v30, v31);
      v38 = *v37;
      v39 = (unsigned __int64)&(*v37)[*((unsigned int *)v37 + 2)];
      if ( (unsigned __int64)v38 >= v39 )
      {
        if ( v38 != (__int64 *)v39 )
        {
          if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 434 )
          {
LABEL_52:
            v41 = *v38;
            if ( *(_WORD *)(*v38 + 36) != 434 )
            {
              v43 = v38 + 1;
              do
                v41 = *v43++;
              while ( *(_WORD *)(v41 + 36) != 434 );
            }
            goto LABEL_50;
          }
          v44 = (__int64 *)(v39 + 8);
          while ( v38 != v44 )
          {
            v45 = *v44++;
            if ( *(_WORD *)(v45 + 36) == 434 )
              goto LABEL_52;
          }
        }
      }
      else
      {
        v40 = v38;
        while ( *(_WORD *)(*v40 + 36) != 434 )
        {
          if ( (__int64 *)v39 == ++v40 )
            goto LABEL_49;
        }
        if ( (__int64 *)v39 != v40 )
          goto LABEL_52;
      }
    }
LABEL_49:
    v41 = 0;
LABEL_50:
    v42 = (char *)sub_B165E0(v41);
    sub_E3D120(&s1, v42);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41
    && (unsigned int)sub_15D8710(a2) == 2 )
  {
    v21 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 41 )
      v21 = sub_F63050(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v19, v20);
    *a1 = sub_A774E0(*(_QWORD *)(a3 + 248), *(_QWORD *)(v21 + 32));
  }
}
