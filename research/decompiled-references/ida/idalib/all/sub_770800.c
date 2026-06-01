unsigned __int64 __fastcall sub_770800(__int16 *a1, char a2)
{
  unsigned __int8 v2; // r12
  int v3; // ecx
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  __int16 v7; // si
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int16 v11; // ax
  __int16 v12; // r8
  _BYTE *v13; // rdx
  __int16 v14; // si
  _BYTE *v15; // rdx
  int v16; // r12d
  __int64 v17; // r12
  __int64 v18; // rax
  _BYTE *v19; // r8
  int v20; // edx
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r11
  __int16 v26; // r8
  _BYTE *v27; // rsi
  __int64 v28; // rsi
  int v29; // ecx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  int v34; // edx
  _DWORD *v35; // rsi
  int v36; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-20h]

  v37 = __readfsqword(0x28u);
  v2 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
    return v37 - __readfsqword(0x28u);
  if ( (a2 & 0x20) != 0 )
  {
    sub_76FD20(a1, 0x75u);
    if ( (dword_2CD44CC & 0x200000) == 0 || v2 > 0xAu )
    {
      sub_770730(a1, 0x736Eu);
      goto LABEL_12;
    }
  }
  if ( (a2 & 0x40) != 0 )
  {
    sub_76FD20(a1, 0x73u);
    if ( (dword_2CD44CC & 0x100000) == 0 )
    {
LABEL_12:
      sub_76FA20(&v36, (__int64)"igned ", 6u);
      v11 = v36;
      v3 = dword_2CD43F0;
      if ( (_WORD)v36 )
      {
        v12 = *a1;
        v13 = &byte_2CCCDE0[(unsigned __int16)v36];
        if ( *a1 )
        {
          v34 = dword_2CD43F0 - 1;
          if ( dword_2CD43F0 - 1 < 0 )
          {
            --dword_2CD43F0;
            goto LABEL_39;
          }
          v3 = dword_2CD43F0 - 2;
          dword_2CD43F0 = v3;
          v13 = &byte_2CCCDE0[16 * v34 + 2000];
          if ( v3 == -1 )
            goto LABEL_39;
          v35 = &byte_2CCCDE0[16 * v3 + 2000];
          *v35 = 0;
          *(_WORD *)v35 = v12;
          *(_QWORD *)v13 = v35;
          *((_WORD *)v13 + 5) = 0;
          *((_WORD *)v13 + 4) = v11;
        }
        *a1 = v13 - byte_2CCCDE0;
      }
      goto LABEL_5;
    }
  }
  v3 = dword_2CD43F0;
LABEL_5:
  v4 = (unsigned int)(v3 - 1);
  v5 = v2 - 1;
  if ( v5 <= 7 )
  {
    dword_2CD43F0 = v3 - 1;
    v6 = dword_23B8C60[v5];
    v7 = (v5 > 1) + 3;
    if ( (int)v4 < 0 )
      goto LABEL_39;
    v8 = 16 * (v4 + 125);
    v9 = &byte_2CCCDE0[v8];
    *(_DWORD *)v9 = v6;
    *((_WORD *)v9 + 4) = 0;
    *((_WORD *)v9 + 5) = v7;
    if ( !(_WORD)v8 )
      return v37 - __readfsqword(0x28u);
    v14 = *a1;
    if ( !*a1 )
    {
      v15 = &byte_2CCCDE0[(unsigned __int16)v8];
LABEL_17:
      *a1 = v15 - byte_2CCCDE0;
      return v37 - __readfsqword(0x28u);
    }
    v31 = (unsigned int)(v3 - 2);
    if ( v3 != 1 )
    {
      v32 = (unsigned int)(v3 - 3);
      dword_2CD43F0 = v32;
      v15 = &byte_2CCCDE0[16 * v31 + 2000];
      if ( (_DWORD)v32 != -1 )
      {
        v33 = &byte_2CCCDE0[16 * v32 + 2000];
        *v33 = 0;
        *(_WORD *)v33 = v14;
        *(_QWORD *)v15 = v33;
        *((_WORD *)v15 + 5) = 0;
        *((_WORD *)v15 + 4) = v8;
        goto LABEL_17;
      }
LABEL_39:
      __longjmp_chk(env, 4294967288LL);
    }
LABEL_38:
    dword_2CD43F0 = -1;
    goto LABEL_39;
  }
  dword_2CD43F0 = v3 - 1;
  v16 = v2 - 9;
  if ( (int)v4 < 0 )
    goto LABEL_39;
  v17 = 16LL * v16;
  v18 = 16 * (v4 + 125);
  v19 = &byte_2CCCDE0[v18];
  v20 = *((unsigned __int8 *)&off_2B392E0 + v17 + 8);
  v21 = *(__int64 *)((char *)&off_2B392E0 + v17);
  *((_WORD *)v19 + 4) = 0;
  *(_QWORD *)v19 = v21;
  *((_WORD *)v19 + 5) = (unsigned __int8)v20;
  if ( (unsigned __int8)v20 <= 8u )
  {
    v22 = v20 - 1;
    v23 = (unsigned int)(v20 - 1);
    v24 = v22 - 1;
    v25 = v22 - 1 - v23;
    while ( 1 )
    {
      v19[v22] = *(_BYTE *)(v21 + v22);
      v22 = v24;
      if ( v25 == v24 )
        break;
      --v24;
    }
  }
  if ( (_WORD)v18 )
  {
    v26 = *a1;
    if ( *a1 )
    {
      v28 = (unsigned int)(v3 - 2);
      if ( v3 == 1 )
        goto LABEL_38;
      v29 = v3 - 3;
      dword_2CD43F0 = v29;
      v27 = &byte_2CCCDE0[16 * v28 + 2000];
      if ( v29 == -1 )
        goto LABEL_39;
      v30 = &byte_2CCCDE0[16 * v29 + 2000];
      *v30 = 0;
      *(_WORD *)v30 = v26;
      *(_QWORD *)v27 = v30;
      *((_WORD *)v27 + 5) = 0;
      *((_WORD *)v27 + 4) = v18;
    }
    else
    {
      v27 = &byte_2CCCDE0[(unsigned __int16)v18];
    }
    *a1 = v27 - byte_2CCCDE0;
  }
  return v37 - __readfsqword(0x28u);
}
