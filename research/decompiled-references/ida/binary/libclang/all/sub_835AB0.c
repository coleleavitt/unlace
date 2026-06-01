__int64 __fastcall sub_835AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // r14
  unsigned int v15; // r15d
  bool v16; // al
  void *v17; // rdi
  void *v18; // rax
  void *v19; // rax
  char v20; // bl
  unsigned int v22; // edx
  void *v23; // rbx
  void *v24; // rax
  int v25; // ecx
  char v26; // dl
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  char *v31; // rbx
  unsigned __int8 **v32; // rax
  __int64 v33; // rdx
  unsigned __int8 **v34; // rbx
  unsigned __int8 **v35; // rbx
  __int64 v36; // [rsp+0h] [rbp-78h]
  char v37; // [rsp+0h] [rbp-78h]
  void *v38; // [rsp+8h] [rbp-70h]
  unsigned int v39; // [rsp+8h] [rbp-70h]
  void *v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  int v43; // [rsp+10h] [rbp-68h]
  int v44; // [rsp+1Ch] [rbp-5Ch]
  void *v45; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+28h] [rbp-50h]
  char v47; // [rsp+2Ch] [rbp-4Ch]
  void *v48; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-40h]
  char v50; // [rsp+3Ch] [rbp-3Ch]

  v10 = (unsigned int)sub_8124E0(a2);
  v11 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(v12 + 16);
  if ( v13 == 13 )
  {
    if ( ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1B2 )
    {
      v14 = 1;
LABEL_6:
      v15 = *(_DWORD *)(a5 + 8);
      if ( v15 > 0x40 )
      {
LABEL_7:
        v16 = v15 == (unsigned int)sub_2587400(a5);
        goto LABEL_8;
      }
LABEL_23:
      v16 = *(_QWORD *)a5 == 0;
LABEL_8:
      if ( v16 )
        return 1;
      v36 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(a5 + 12) )
        sub_2587E20(&v48, a5, 64);
      else
        sub_2587E80(&v48, a5, 64);
      v17 = v48;
      if ( v49 > 0x40 )
      {
        v18 = *(void **)v48;
        if ( v48 )
        {
          v38 = *(void **)v48;
          operator delete[](v48);
          v18 = v38;
        }
        v17 = v18;
      }
      *(_QWORD *)(a3 + 16) = v36 + v14 * (_QWORD)v17;
      if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
      {
LABEL_19:
        *(_BYTE *)(a3 + 128) &= ~1u;
        return 1;
      }
      v37 = *(_BYTE *)(a3 + 128) & 1;
      if ( v37 )
      {
        v32 = (unsigned __int8 **)sub_A2E240(a1, a2, 2259, 0);
        if ( v32 )
          sub_823450(v32, 4);
        *(_BYTE *)(a3 + 24) |= 1u;
        *(_DWORD *)(a3 + 56) = 0;
        goto LABEL_19;
      }
      v46 = *(_DWORD *)(a5 + 8);
      if ( v46 > 0x40 )
      {
        sub_2585B30(&v45);
        v20 = *(_BYTE *)(a5 + 12);
        v22 = v46;
        v47 = v20;
        if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
          goto LABEL_49;
        if ( v46 <= 0x40 )
        {
          if ( !v45 )
            goto LABEL_19;
        }
        else
        {
          v39 = v46;
          if ( v39 == (unsigned int)sub_2587400(&v45) )
            goto LABEL_50;
        }
      }
      else
      {
        v19 = *(void **)a5;
        v20 = *(_BYTE *)(a5 + 12);
        v45 = v19;
        v47 = v20;
        if ( !v19 )
          goto LABEL_19;
      }
      if ( v20 )
        sub_2587E20(&v48, &v45, 64);
      else
        sub_2587E80(&v48, &v45, 64);
      v23 = v48;
      if ( v49 > 0x40 )
      {
        v24 = *(void **)v48;
        if ( v48 )
        {
          v40 = *(void **)v48;
          operator delete[](v48);
          v24 = v40;
        }
        v23 = v24;
      }
      v25 = *(_DWORD *)(a3 + 56);
      v26 = *(_BYTE *)(a3 + 24);
      if ( v25 == 1 && (v26 & 4) != 0 )
      {
        sub_A2E240(a1, a2, 2292, 0);
        *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * *(unsigned int *)(a3 + 56) - 8) += v23;
        v22 = v46;
      }
      else
      {
        v27 = *(_DWORD *)(a3 + 24) >> 4;
        if ( v27 == v25 && (v26 & 8) != 0 )
        {
          v37 = 1;
          v41 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * v27 - 8);
          v42 = *(_QWORD *)(a3 + 32);
          v28 = v41;
        }
        else
        {
          v42 = 1;
          v28 = (v26 & 2) != 0;
          v41 = v28;
        }
        v50 = 0;
        v49 = 64;
        v48 = (void *)-v28;
        v29 = sub_804370((__int64 *)&v45, (__int64 *)&v48);
        if ( v49 > 0x40 && v48 )
        {
          v44 = v29;
          operator delete[](v48);
          v29 = v44;
        }
        if ( v29 < 0 )
          goto LABEL_56;
        v49 = 64;
        v50 = 0;
        v48 = (void *)(v42 - v41);
        v30 = sub_804370((__int64 *)&v45, (__int64 *)&v48);
        if ( v49 > 0x40 && v48 )
        {
          v43 = v30;
          operator delete[](v48);
          v30 = v43;
        }
        if ( v30 > 0 )
        {
LABEL_56:
          v33 = v46 + 1;
          if ( (unsigned int)v33 < 0x41 )
            v33 = 65;
          sub_831A30((__int64)&v48, (__int64)&v45, v33);
          if ( v46 > 0x40 && v45 )
            operator delete[](v45);
          v45 = v48;
          v46 = v49;
          v47 = v50;
          sub_2586300(&v45, v41);
          if ( *(_DWORD *)(a3 + 56) == *(_DWORD *)(a3 + 24) >> 4 && (*(_BYTE *)(a3 + 24) & 8) != 0 )
          {
            v48 = (void *)sub_A2E240(a1, a2, 2179, 0);
            v35 = (unsigned __int8 **)v48;
            if ( v48 )
            {
              sub_829A30((unsigned __int8 ***)&v48, (__int64)&v45);
              sub_823450(v35, 0);
              sub_8356A0(v35, *(unsigned int *)(a3 + 32), 3u);
            }
          }
          else
          {
            v48 = (void *)sub_A2E240(a1, a2, 2179, 0);
            v34 = (unsigned __int8 **)v48;
            if ( v48 )
            {
              sub_829A30((unsigned __int8 ***)&v48, (__int64)&v45);
              sub_823450(v34, 1);
            }
          }
          *(_BYTE *)(a3 + 24) |= 1u;
          v22 = v46;
          *(_DWORD *)(a3 + 56) = 0;
        }
        else
        {
          v31 = (char *)v23 + v41;
          if ( v37 )
          {
            *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * *(unsigned int *)(a3 + 56) - 8) = v31;
            v22 = v46;
          }
          else
          {
            v22 = v46;
            *(_BYTE *)(a3 + 24) = (2 * (v31 != nullptr)) | *(_BYTE *)(a3 + 24) & 0xFD;
          }
        }
      }
LABEL_49:
      if ( v22 <= 0x40 )
        goto LABEL_19;
LABEL_50:
      if ( v45 )
        operator delete[](v45);
      goto LABEL_19;
    }
  }
  else
  {
    v14 = 1;
    if ( (unsigned __int8)(v13 - 25) <= 1u )
    {
      v15 = *(_DWORD *)(a5 + 8);
      if ( v15 > 0x40 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
  if ( (*(_BYTE *)(v11 + 17) & 4) == 0 )
  {
    v10 = (unsigned int)v10;
    if ( (unsigned __int8)sub_B08470() )
    {
      v14 = sub_70E2F0(*(_QWORD *)(a1 + 16), a4);
      goto LABEL_6;
    }
  }
  sub_A2E1A0(a1, v10, 110, 0);
  return 0;
}

