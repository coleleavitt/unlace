__int64 __fastcall sub_145F790(__int64 a1, int a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  char v12; // dl
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __int64 **v17; // rsi
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _WORD *v26; // rdx
  __int64 v27; // rsi
  __int16 v28; // di
  __int64 v29; // rcx
  int v30; // r9d
  char v31; // al
  int v33; // [rsp+8h] [rbp-70h]
  unsigned __int64 v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  unsigned __int64 v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  __m128 v39[4]; // [rsp+30h] [rbp-48h] BYREF

  v7 = sub_145EC70(a1, 1);
  v8 = *(_QWORD *)(a1 + 120);
  v10 = v9;
  v11 = (_QWORD *)v7;
  if ( v8 )
  {
    v12 = *(_BYTE *)(a1 + 544);
    if ( v12 >= 0 )
    {
      v34 = v7;
      *(_BYTE *)(a1 + 544) = v12 | 0x80;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v34;
    }
  }
  v36 = v7;
  v13 = *(_QWORD *)(a1 + 1704);
  v14 = (_QWORD *)(*(_QWORD *)v13 + 16LL * *(unsigned int *)(v13 + 16));
  sub_13C4310(v39, v14, v14, v13, 1);
  v15 = v39[0].m128_u64[0];
  v35 = 0;
  v33 = 0;
  v38 = 8 * a4;
  if ( v36 != v39[0].m128_u64[0] )
  {
    while ( 1 )
    {
      v16 = v11[1];
      v17 = (__int64 **)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      v18 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v16 || (v16 & 4) == 0 )
        goto LABEL_9;
      if ( v17 )
        break;
LABEL_14:
      v21 = v11 + 2;
      if ( v11 + 2 == v10 )
      {
LABEL_32:
        v11 = v10;
        if ( (_QWORD *)v15 == v10 )
          return v35;
      }
      else
      {
LABEL_15:
        v22 = v11[2];
        if ( v22 == -4096 || v22 == -8192 )
        {
          v23 = v11 + 4;
          do
          {
            v11 = v23;
            if ( v10 == v23 )
              break;
            v24 = *v23;
            v23 += 2;
          }
          while ( v24 == -8192 || v24 == -4096 );
          if ( (_QWORD *)v15 == v11 )
            return v35;
        }
        else
        {
          v11 = v21;
          if ( (_QWORD *)v15 == v21 )
            return v35;
        }
      }
    }
    v18 = *v17;
LABEL_9:
    if ( v18 )
    {
      v19 = sub_13F1CD0(v18, a2, *(_QWORD *)(a1 + 88));
      if ( v19 )
      {
        v20 = v19[2];
        if ( v20 )
        {
          if ( (*(_BYTE *)(v20 + 36) & 2) == 0 && *(_DWORD *)(v20 + 28) == a4 )
          {
            v26 = a3;
            v27 = *(_QWORD *)(v20 + 16);
            if ( &a3[v38] == a3 )
            {
LABEL_34:
              v30 = *((_DWORD *)v19 + 2);
              if ( !v33
                || v30
                && (v37 = *((_DWORD *)v19 + 2), v31 = sub_10246C0(*(_QWORD *)(a1 + 88), v33, v30), v30 = v37, v31) )
              {
                v33 = v30;
                v35 = *(_QWORD *)(*v11 + 16LL) + 16LL;
              }
            }
            else
            {
              v28 = *(_WORD *)(v27 + 16);
              if ( v28 == *a3 )
              {
                while ( 1 )
                {
                  v29 = *((_QWORD *)v26 + 1);
                  if ( v29 )
                  {
                    if ( (unsigned __int16)(v28 - 7) <= 0xCu || v28 == 1 || v29 != *(_QWORD *)(v27 + 8) )
                      break;
                  }
                  v26 += 8;
                  v27 += 24;
                  if ( &a3[v38] == v26 )
                    goto LABEL_34;
                  v28 = *(_WORD *)(v27 + 16);
                  if ( *v26 != v28 )
                  {
                    v21 = v11 + 2;
                    if ( v11 + 2 != v10 )
                      goto LABEL_15;
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
  return v35;
}
