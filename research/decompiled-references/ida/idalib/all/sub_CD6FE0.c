__int64 __fastcall sub_CD6FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // r14
  unsigned int v12; // ebp
  __int64 v14; // r12
  __int64 v15; // r14
  _QWORD *v16; // r13
  _QWORD *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 *v20; // r13
  unsigned __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  char v29; // al
  unsigned int v30; // r13d
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // [rsp+0h] [rbp-68h]
  unsigned __int64 v36; // [rsp+0h] [rbp-68h]
  int i; // [rsp+0h] [rbp-68h]
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v6 != 48 )
  {
    if ( (unsigned __int8)(v6 - 2) <= 4u )
    {
      v7 = sub_A72040(**(_QWORD ***)(a1 + 1264), v5);
      if ( v7 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 2 <= 1 )
        {
          v8 = *(_QWORD *)(v7 + 40);
          v38 = (_QWORD *)v8;
          if ( (*(_BYTE *)(v7 + 19) & 2) != 0 )
          {
            v19 = *(_QWORD **)v8;
            if ( *(_DWORD *)(v8 + 8) > 0x40u )
              v19 = (_QWORD *)*v19;
            v38 = v19;
          }
          v39 = sub_CB4B10(a1);
          if ( v39 )
          {
            if ( v38 )
            {
              v35 = 0;
              while ( 1 )
              {
                v40[0] = a2 | 4;
                if ( !(unsigned __int8)sub_D00A60(a1, v35, v40) )
                  return 0;
                v40[0] = a2 | 4;
                if ( !(unsigned __int8)sub_D2D780(a1, v40) )
                  return 0;
                v9 = (_QWORD *)(a2 + 40);
                if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
                  v9 = (_QWORD *)(a2 + 48);
                v10 = &v9[*(unsigned int *)(a2 + 32)];
                v11 = v9;
                if ( v9 != v10 )
                {
                  while ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *v11) )
                  {
                    if ( v10 == ++v11 )
                      goto LABEL_31;
                  }
                  return 0;
                }
LABEL_31:
                v40[0] = a2 | 4;
                if ( !(unsigned __int8)sub_CFFC60(a1, v39, 0, v40) )
                  return 0;
                if ( (_QWORD *)++v35 == v38 )
                  return 1;
              }
            }
            return 1;
          }
        }
      }
    }
    return 0;
  }
  v14 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v14 + 83) & 2) == 0
    || !(unsigned __int8)sub_B990E0(*(_QWORD *)(a2 + 16), v40, a3, a4)
    || *(char *)(v14 + 82) >= 0 )
  {
    goto LABEL_20;
  }
  v20 = (unsigned __int64 *)(a2 + 40);
  v21 = (unsigned __int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v21 = (unsigned __int64 *)(a2 + 40);
  v36 = *v21;
  v22 = sub_F63270(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  if ( sub_BFE060(v36, **(_QWORD **)(a1 + 1264), v22, *(_QWORD *)(a1 + 1264), v23, v24) )
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v20 = (unsigned __int64 *)(a2 + 48);
    return (unsigned int)sub_CD6B90(a1, *v20, v25, v26, v27);
  }
  else
  {
LABEL_20:
    v12 = *(unsigned __int8 *)(a1 + 1360);
    if ( (_BYTE)v12 )
    {
      if ( *(char *)(v14 + 82) < 0 )
        return v12;
      v40[0] = a2 | 2;
      v18 = sub_CBCD40(a1, v40, 0, 0, 1, 0);
      if ( !BYTE4(v18) )
        return 0;
      v40[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CFF720(a1, (unsigned int)v18, v40) )
        return 0;
    }
    if ( *(char *)(a2 + 2) < 0 )
    {
      v28 = sub_CB4AE0(a1, *(_QWORD *)(a2 + 8));
      if ( !(unsigned __int8)sub_CB6A10(a1, v28, a2) )
        return 0;
      if ( *(char *)(v14 + 82) < 0 )
        return 1;
    }
    v15 = sub_CB4B10(a1);
    if ( !v15 )
      return 0;
    v40[0] = a2 | 4;
    if ( !(unsigned __int8)sub_D00AF0(a1, v40) )
      return 0;
    v16 = (_QWORD *)(a2 + 40);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v16 = (_QWORD *)(a2 + 48);
    v17 = &v16[*(unsigned int *)(a2 + 32)];
    if ( v16 != v17 )
    {
      while ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *v16) )
      {
        if ( v17 == ++v16 )
          goto LABEL_52;
      }
      return 0;
    }
LABEL_52:
    v29 = *(_BYTE *)(v15 + 504);
    if ( (v29 & 0x40) != 0 )
    {
      v30 = 0;
      v31 = *(_DWORD *)(v15 + 392) - (((v29 & 4) != 0) + ((v29 & 8) != 0));
      for ( i = *(_DWORD *)(a2 + 32); v31 != i; v30 += (sub_E29180((unsigned int)v33) + 7) & 0xFFFFFFF8 )
      {
        while ( 1 )
        {
          v32 = a2 + 40;
          if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
            v32 = a2 + 48;
          v33 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(*(_QWORD *)(v32 + 8LL * v31) + 8LL));
          if ( BYTE4(v33) )
            break;
          ++v31;
          v30 += (sub_E29180(13) + 7) & 0xFFFFFFF8;
          if ( i == v31 )
            goto LABEL_58;
        }
        ++v31;
      }
LABEL_58:
      v40[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CFFD20(a1, v15, v30, v40) )
        return 0;
    }
    else
    {
      v40[0] = a2 | 4;
      v12 = sub_CFFC60(a1, v15, 0, v40);
      if ( !(_BYTE)v12 )
      {
        if ( *(_BYTE *)(a1 + 1360) )
        {
          v40[0] = a2 | 4;
          sub_D07CE0(a1, v40);
          return v12;
        }
        return 0;
      }
    }
    v34 = *(_BYTE *)(a1 + 1360) == 0;
    v40[0] = a2 | 4;
    if ( v34 )
      return (unsigned int)sub_D00E60(a1, v40);
    else
      return (unsigned int)sub_D07CE0(a1, v40);
  }
}
