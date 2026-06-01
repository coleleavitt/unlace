__int64 __fastcall sub_966180(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int8 **v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  char v15; // r13
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned __int8 **v18; // rax
  void *v19; // rdi
  __int64 v20; // rbx
  int v21; // r13d
  unsigned __int8 **v22; // rdi
  unsigned int v23; // esi
  __int16 v24; // si
  int v25; // eax
  int v26; // esi
  unsigned int v27; // eax
  int v28; // r13d
  int v29; // r13d
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int8 **v31; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-60h]
  void *v33; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-50h]
  char v35; // [rsp+3Ch] [rbp-4Ch]
  void *v36; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v33, 0xFu, *(_DWORD *)(a4 + 8));
    v37 = *(_DWORD *)(a4 + 8);
    if ( v37 > 0x40 )
      sub_2585B30(&v36);
    else
      v36 = *(void **)a4;
    sub_8CC340((__int64)&v36, &v33, a4);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
  }
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  if ( v8 > 0x40 )
    v9 = *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6));
  if ( (v9 & (1LL << ((unsigned __int8)v8 - 1))) == 0 )
  {
    v13 = sub_9532F0(a1, a2, a3, (__int64 *)a4, 0x10u);
    if ( !(_BYTE)v13 )
      return v13;
    sub_92DD40((__int64)&v36, 0xFu, *(_DWORD *)(a4 + 8));
    v15 = sub_922490(a4, (__int64)&v36);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    v16 = *a3;
    if ( v15 != 3 )
    {
      if ( (v16 & 0x8000u) != 0 )
      {
        LOWORD(v21) = 0;
        if ( (_WORD)v16 != 0x8000 )
        {
          v28 = -v16;
          v37 = *(_DWORD *)(a4 + 8);
          if ( v37 > 0x40 )
            sub_2585B30(&v36);
          else
            v36 = *(void **)a4;
          v29 = v28 << sub_8CC860((__int64)&v36);
          if ( v37 > 0x40 && v36 )
            operator delete[](v36);
          v21 = -v29;
        }
        goto LABEL_30;
      }
      v17 = *(_DWORD *)(a4 + 8);
      v32 = v17;
      if ( v17 > 0x40 )
      {
        sub_2585B30(&v31);
        v17 = v32;
        v34 = v32;
        if ( v32 > 0x40 )
        {
          sub_2585B30(&v33);
          v17 = v34;
LABEL_21:
          if ( v17 <= 0x10 )
          {
            sub_2587BE0(&v36, &v33, 16);
            v19 = v36;
            if ( v37 > 0x40 )
            {
              v20 = *(_QWORD *)v36;
              if ( !v36 )
                goto LABEL_25;
              goto LABEL_24;
            }
          }
          else
          {
            sub_25877E0(&v36, &v33, 16);
            v19 = v36;
            if ( v37 > 0x40 )
            {
              LOWORD(v20) = *(_WORD *)v36;
LABEL_24:
              operator delete[](v19);
LABEL_25:
              if ( v34 > 0x40 && v33 )
                operator delete[](v33);
              v21 = (unsigned __int16)*a3 << v20;
              if ( v32 <= 0x40 )
                goto LABEL_30;
              v22 = v31;
              if ( !v31 )
                goto LABEL_30;
              goto LABEL_59;
            }
          }
          LOBYTE(v20) = (_BYTE)v19;
          goto LABEL_25;
        }
        v18 = v31;
      }
      else
      {
        v18 = *(unsigned __int8 ***)a4;
        v34 = v17;
        v31 = v18;
      }
      v33 = v18;
      goto LABEL_21;
    }
    LOWORD(v21) = 0;
    if ( (v16 & 0x8000u) != 0 )
    {
LABEL_30:
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v21;
      return v13;
    }
    v23 = 16;
    if ( !(_WORD)v16 )
    {
LABEL_52:
      sub_92DD40((__int64)&v36, v23, *(_DWORD *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      *(_QWORD *)a4 = v36;
      v27 = v37;
      *(_DWORD *)(a4 + 8) = v37;
      if ( v27 > 0x40 )
        sub_2585B30(&v36);
      v21 = (unsigned __int16)*a3 << sub_8CC860((__int64)&v36);
      if ( v37 <= 0x40 )
        goto LABEL_30;
      v22 = (unsigned __int8 **)v36;
      if ( !v36 )
        goto LABEL_30;
LABEL_59:
      operator delete[](v22);
      goto LABEL_30;
    }
    v24 = SBYTE1(v16);
    v25 = (__int16)v16;
    if ( BYTE1(v16) )
    {
      v16 = (__int16)v16 >> 12;
      if ( v25 >> 12 )
      {
        v23 = 0;
        v16 = (unsigned __int16)v16;
        if ( (unsigned int)v25 >> 14 )
          goto LABEL_75;
        goto LABEL_78;
      }
      LOWORD(v16) = v24;
      v26 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v16 >> 4 )
      {
        LOWORD(v16) = (int)(unsigned __int8)v16 >> 4;
        v23 = 8;
LABEL_49:
        v16 = (unsigned __int16)v16;
        if ( (int)(unsigned __int16)v16 >> 2 )
        {
          v16 = (int)(unsigned __int16)v16 >> 2;
          goto LABEL_51;
        }
LABEL_78:
        v23 |= 2u;
LABEL_51:
        if ( v16 >> 1 )
          goto LABEL_52;
LABEL_75:
        v23 |= 1u;
        goto LABEL_52;
      }
      v26 = 8;
    }
    v23 = v26 | 4;
    goto LABEL_49;
  }
  v30 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v10 = (unsigned __int8 **)sub_A2E1B0(a1, &v30, 2242, 0);
  v11 = *(unsigned int *)(a4 + 8);
  v31 = v10;
  sub_2587BE0(&v36, a4, v11);
  v12 = v37;
  v35 = 0;
  v34 = v37;
  v33 = v36;
  if ( v31 )
  {
    sub_8DF340(&v31, (__int64)&v33);
    v12 = v34;
  }
  if ( v12 > 0x40 && v33 )
    operator delete[](v33);
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v13 )
  {
    sub_938B60((__int64)&v36, a4);
    if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
      operator delete[](*(void **)a4);
    *(_QWORD *)a4 = v36;
    *(_DWORD *)(a4 + 8) = v37;
    return (unsigned int)sub_965CB0(a1, a2, a3, a4);
  }
  return v13;
}

