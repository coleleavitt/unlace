__int64 __fastcall sub_208D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // r14
  _BYTE *v9; // rbx
  unsigned __int8 v10; // al
  char *v11; // rdx
  __int128 v12; // kr10_16
  __int64 v13; // rdi
  char *v14; // rdi
  char v15; // al
  char *v16; // rdx
  __int128 v17; // kr20_16
  __int64 v18; // rdi
  char *v19; // rdi
  char *v20; // rdx
  __int128 v21; // kr30_16
  __int64 v22; // rdi
  char *v23; // rdi
  unsigned __int8 v24; // [rsp+1Fh] [rbp-D9h]
  size_t v26; // [rsp+28h] [rbp-D0h]
  size_t v27; // [rsp+28h] [rbp-D0h]
  char v28; // [rsp+28h] [rbp-D0h]
  size_t v29; // [rsp+28h] [rbp-D0h]
  size_t v30; // [rsp+28h] [rbp-D0h]
  size_t v31; // [rsp+28h] [rbp-D0h]
  size_t v32; // [rsp+28h] [rbp-D0h]
  size_t n; // [rsp+30h] [rbp-C8h]
  size_t na; // [rsp+30h] [rbp-C8h]
  size_t nb; // [rsp+30h] [rbp-C8h]
  char *v36; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+38h] [rbp-C0h]
  __int64 v38; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-98h] BYREF
  __int128 v42; // [rsp+68h] [rbp-90h]
  _BYTE *v43; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-70h]
  __int64 v45; // [rsp+90h] [rbp-68h]
  char *v46; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-40h]

  v5 = a1[62] + a3;
  v48 = __readfsqword(0x28u);
  v6 = *a1;
  v42 = 0;
  v38 = 0;
  v41 = 0;
  v24 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v6 + 136))(a1, &v38, v5);
  if ( !v24 || get_strlit_contents() <= 0 )
  {
    v24 = 0;
    goto LABEL_3;
  }
  v8 = 0;
  v45 = 0;
  v9 = 0;
  v40[0] = &off_3C2E0;
  v39 = 0;
  v40[1] = 10;
  while ( 1 )
  {
    v43 = v9;
    v44 = v8;
    v10 = sub_16C40((__int64 *)&v43, &v41, (__int64)v40, &v39);
    v9 = v43;
    v8 = v44;
    if ( !v10 )
    {
LABEL_23:
      if ( !v9 )
        goto LABEL_3;
      goto LABEL_24;
    }
    if ( v44 <= 1 )
      break;
    switch ( *v43 )
    {
      case '&':
        *(_DWORD *)(a2 + 24) |= 4u;
        continue;
      case 'C':
        *(_DWORD *)(a2 + 24) |= 2u;
        continue;
      case 'D':
        *(_DWORD *)(a2 + 24) |= 0x10u;
        continue;
      case 'G':
        v20 = 0;
        v46 = 0;
        v47 = 0;
        v21 = v44 - 2;
        if ( v44 != 2 )
        {
          nb = v44 - 2;
          v32 = v44 - 1;
          v46 = (char *)qvector_reserve();
          *(_QWORD *)&v47 = v32;
          memmove(v46, v9 + 1, nb);
          v46[v8 - 2] = 0;
          v20 = v46;
          v21 = v47;
        }
        v22 = *(_QWORD *)(a2 + 40);
        v46 = 0;
        v47 = 0;
        if ( !v22 )
        {
          *(_QWORD *)(a2 + 40) = v20;
          *(_OWORD *)(a2 + 48) = v21;
          continue;
        }
        *(_QWORD *)(a2 + 48) = 0;
        v29 = (size_t)v20;
        qfree();
        v23 = v46;
        *(_QWORD *)(a2 + 40) = v29;
        *(_OWORD *)(a2 + 48) = v21;
        if ( !v23 )
          continue;
        goto LABEL_37;
      case 'N':
        *(_DWORD *)(a2 + 24) |= 8u;
        continue;
      case 'P':
        *(_DWORD *)(a2 + 24) |= 0x40u;
        continue;
      case 'R':
        *(_DWORD *)(a2 + 24) |= 1u;
        continue;
      case 'S':
        v16 = 0;
        v46 = 0;
        v47 = 0;
        v17 = v44 - 2;
        if ( v44 != 2 )
        {
          na = v44 - 2;
          v31 = v44 - 1;
          v46 = (char *)qvector_reserve();
          *(_QWORD *)&v47 = v31;
          memmove(v46, v9 + 1, na);
          v46[v8 - 2] = 0;
          v16 = v46;
          v17 = v47;
        }
        v18 = *(_QWORD *)(a2 + 64);
        v46 = 0;
        v47 = 0;
        if ( !v18 )
        {
          *(_QWORD *)(a2 + 64) = v16;
          *(_OWORD *)(a2 + 72) = v17;
          continue;
        }
        *(_QWORD *)(a2 + 72) = 0;
        v36 = v16;
        qfree();
        v19 = v46;
        *(_QWORD *)(a2 + 64) = v36;
        *(_OWORD *)(a2 + 72) = v17;
        if ( !v19 )
          continue;
        goto LABEL_37;
      case 'T':
        v46 = 0;
        v47 = 0;
        v27 = v44 - 2;
        if ( v44 != 2 )
        {
          v37 = v44 - 1;
          v46 = (char *)qvector_reserve();
          *(_QWORD *)&v47 = v37;
          memmove(v46, v9 + 1, v27);
          v46[v8 - 2] = 0;
        }
        v15 = sub_1F890(a1[1], a4, (__int64 *)(a2 + 32), (__int64 *)&v46, 0);
        if ( v46 )
        {
          v28 = v15;
          *(_QWORD *)&v47 = 0;
          qfree();
          v15 = v28;
        }
        if ( v15 )
          continue;
        v24 = 0;
        goto LABEL_23;
      case 'V':
        v11 = 0;
        v46 = 0;
        v47 = 0;
        v12 = v44 - 2;
        if ( v44 != 2 )
        {
          n = v44 - 2;
          v30 = v44 - 1;
          v46 = (char *)qvector_reserve();
          *(_QWORD *)&v47 = v30;
          memmove(v46, v9 + 1, n);
          v46[v8 - 2] = 0;
          v11 = v46;
          v12 = v47;
        }
        v13 = *(_QWORD *)(a2 + 88);
        v46 = 0;
        v47 = 0;
        if ( v13 )
        {
          *(_QWORD *)(a2 + 96) = 0;
          v26 = (size_t)v11;
          qfree();
          v14 = v46;
          *(_QWORD *)(a2 + 88) = v26;
          *(_OWORD *)(a2 + 96) = v12;
          if ( v14 )
          {
LABEL_37:
            *(_QWORD *)&v47 = 0;
            qfree();
          }
        }
        else
        {
          *(_QWORD *)(a2 + 88) = v11;
          *(_OWORD *)(a2 + 96) = v12;
        }
        break;
      case 'W':
        *(_DWORD *)(a2 + 24) |= 0x20u;
        continue;
      default:
        continue;
    }
  }
  v24 = v10;
  if ( v43 )
LABEL_24:
    qfree();
LABEL_3:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  return v24;
}
