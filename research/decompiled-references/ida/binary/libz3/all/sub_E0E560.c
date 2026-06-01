__int64 __fastcall sub_E0E560(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r11
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // edi
  __int64 *v13; // rcx
  unsigned int v14; // r9d
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-60h]
  unsigned __int64 v30; // [rsp+10h] [rbp-58h] BYREF
  __int64 v31; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(v4 + 624);
  v6 = *(_DWORD *)(v4 + 632);
  v30 = *(_QWORD *)(a2 + 16);
  v32[0] = v30;
  v7 = sub_DF6190(v5, v6, v32);
  if ( !v7 || (v31 = *(_QWORD *)(v7 + 16), !(unsigned __int8)sub_DF6930((unsigned __int64 *)&v31, a2)) )
  {
    v11 = *(unsigned int *)(v4 + 656);
    v12 = *(_DWORD *)(a2 + 12);
    v13 = *(__int64 **)(v4 + 648);
    v14 = v11 - 1;
    v11 *= 16;
    v15 = (__int64 *)((char *)v13 + v11);
    v16 = 16LL * (v12 & v14);
    v17 = &v13[(unsigned __int64)v16 / 8];
    v18 = &v13[(unsigned __int64)v16 / 8];
    if ( v16 == v11 )
    {
LABEL_28:
      if ( v13 != v17 )
      {
        while ( 1 )
        {
          v28 = *v13;
          if ( (unsigned __int64)*v13 > 1 )
          {
            if ( *(_DWORD *)(v28 + 12) == v12 && a2 == v28 )
            {
              v18 = v13;
              goto LABEL_13;
            }
          }
          else if ( !v28 )
          {
            return sub_1609D60(a1, a2, v8);
          }
          v13 += 2;
          if ( v17 == v13 )
            return sub_1609D60(a1, a2, v8);
        }
      }
      return sub_1609D60(a1, a2, v8);
    }
    while ( 1 )
    {
      v19 = *v18;
      if ( (unsigned __int64)*v18 > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v12 && a2 == v19 )
        {
LABEL_13:
          v30 = v18[1];
          v32[0] = v30;
          v22 = sub_DF6190(v9, v6, v32);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 16);
            v31 = v23;
            if ( (unsigned __int8)sub_DF6930((unsigned __int64 *)&v31, a2) )
            {
              v24 = *(_QWORD *)(a2 + 24);
              v25 = 0;
              if ( v24 )
                v25 = *(_BYTE *)(v24 + 18) & 1;
              v20 = sub_1606410(a1, &v30, v8, v25);
              if ( !v23 || (v23 & 7) == 0 || *(_DWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 12) <= 1u )
                return v20;
LABEL_26:
              if ( (unsigned __int8)sub_DF6DD0(&v31, a2) )
                return sub_1609CF0(a1, v20, *(_QWORD *)(a2 + 40));
              return v20;
            }
          }
          return sub_1609D60(a1, a2, v8);
        }
      }
      else if ( !v19 )
      {
        return sub_1609D60(a1, a2, v8);
      }
      v18 += 2;
      if ( v15 == v18 )
        goto LABEL_28;
    }
  }
  v26 = *(_QWORD *)(a2 + 24);
  v27 = 0;
  if ( v26 )
    v27 = *(_BYTE *)(v26 + 18) & 1;
  v29 = v10;
  v20 = sub_1606410(a1, &v30, v8, v27);
  if ( v29 && (v29 & 7) != 0 && *(_DWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 12) > 1u )
    goto LABEL_26;
  return v20;
}

