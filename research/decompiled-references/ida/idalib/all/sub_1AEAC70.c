char __fastcall sub_1AEAC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  char result; // al
  unsigned int v13; // edx
  void *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // esi
  _QWORD *v25; // rdx
  char v26; // [rsp+1h] [rbp-89h]
  char v27; // [rsp+1h] [rbp-89h]
  char v28; // [rsp+1h] [rbp-89h]
  void *v29; // [rsp+2h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+Ah] [rbp-80h]
  char v31; // [rsp+Eh] [rbp-7Ch]
  _WORD v32[4]; // [rsp+12h] [rbp-78h] BYREF
  __int64 v33; // [rsp+1Ah] [rbp-70h]
  unsigned int v34; // [rsp+22h] [rbp-68h] BYREF
  char v35; // [rsp+26h] [rbp-64h]
  void *v36; // [rsp+2Ah] [rbp-60h]
  unsigned int v37; // [rsp+32h] [rbp-58h]
  char v38; // [rsp+36h] [rbp-54h]

  v6 = *(_WORD *)a2 & 0x1FF;
  if ( v6 == 124 )
  {
    if ( *(_DWORD *)(a2 + 56) )
    {
      v9 = *(_QWORD *)(a2 + 40);
      v10 = *(_QWORD *)(a2 + 32);
      if ( v9 )
      {
        if ( !v10 )
        {
LABEL_13:
          v15 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
            && (unsigned int)*(unsigned __int8 *)(v15 + 16) - 2 <= 1 )
          {
            v16 = *(_QWORD *)(a1 + 248);
            v35 &= ~1u;
            v32[0] = 0;
            v33 = 0;
            v34 = 0;
            result = sub_C3F220(v9, (__int64)v32, v16, 0, 0, a6);
            if ( !result )
              goto LABEL_26;
            v17 = v37;
            v30 = v37;
            if ( v37 > 0x40 )
            {
              sub_2205510(&v29);
              v17 = v30;
            }
            else
            {
              v29 = v36;
            }
            v31 = v38;
            v18 = *(_QWORD *)(v15 + 40);
            if ( (*(_BYTE *)(v15 + 19) & 2) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 8);
              v20 = *(__int64 **)v18;
              if ( v19 > 0x40 )
              {
                v18 = *v20;
              }
              else
              {
                v18 = 0;
                if ( v19 )
                  v18 = (__int64)((_QWORD)v20 << (64 - (unsigned __int8)v19)) >> (64 - (unsigned __int8)v19);
              }
            }
            v14 = v29;
            if ( v17 <= 0x40 )
            {
              v21 = 0;
              if ( v17 )
                v21 = (__int64)((_QWORD)v29 << (64 - (unsigned __int8)v17)) >> (64 - (unsigned __int8)v17);
              result = v18 != v21;
              goto LABEL_26;
            }
            result = *(_QWORD *)v29 != v18;
LABEL_45:
            v28 = result;
            operator delete[](v14);
            result = v28;
LABEL_26:
            if ( v34 > 1 )
            {
              v26 = result;
              sub_A4F8E0((int *)&v34);
              return v26;
            }
            return result;
          }
          return 0;
        }
      }
      else if ( !v10 )
      {
        return 0;
      }
      v32[0] = 0;
      v11 = *(_QWORD *)(a1 + 248);
      v35 &= ~1u;
      v33 = 0;
      v34 = 0;
      result = sub_C3F220(v10, (__int64)v32, v11, 0, 0, a6);
      if ( !result )
        goto LABEL_26;
      v13 = v37;
      v30 = v37;
      if ( v37 > 0x40 )
      {
        v27 = result;
        sub_2205510(&v29);
        v13 = v30;
        v14 = v29;
        result = v27;
        v31 = v38;
        if ( v30 > 0x40 )
        {
          if ( *(_QWORD *)v29 )
            goto LABEL_45;
          operator delete[](v29);
LABEL_10:
          if ( v34 > 1 )
            sub_A4F8E0((int *)&v34);
          if ( !v9 )
            return 0;
          goto LABEL_13;
        }
      }
      else
      {
        v14 = v36;
        v29 = v36;
        v31 = v38;
      }
      if ( v13 && (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13) )
        goto LABEL_26;
      goto LABEL_10;
    }
  }
  else if ( v6 != 123 )
  {
    BUG();
  }
  v22 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 2 > 1 )
    return 0;
  v23 = *(_QWORD *)(v22 + 40);
  if ( (*(_BYTE *)(v22 + 19) & 2) == 0 )
    return v23 != 1;
  v24 = *(_DWORD *)(v23 + 8);
  v25 = *(_QWORD **)v23;
  if ( v24 > 0x40 )
    return *v25 != 1;
  result = 1;
  if ( v24 )
    return (__int64)((_QWORD)v25 << (64 - (unsigned __int8)v24)) >> (64 - (unsigned __int8)v24) != 1;
  return result;
}
