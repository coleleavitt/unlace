__int64 __fastcall sub_D15A10(__int64 *a1, __int64 a2)
{
  char *v5; // rsi
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  _QWORD *v18; // rax
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  char v28; // al
  unsigned int v29; // eax
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // [rsp+8h] [rbp-70h]
  char v36[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h]

  v5 = "simplifier";
  sub_EE4940(v36, "simplifier", a2);
  *((_DWORD *)a1 + 6) = 0;
  v8 = *(_BYTE *)(a2 + 123);
  if ( (v8 & 0x20) != 0 )
    return sub_EE4A00(v36);
  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 72);
  v37 = 0;
  v39 = 0;
  v38 = v9;
  v40 = v9;
  if ( v10 )
  {
    LODWORD(v9) = *(unsigned __int8 *)(v10 + 3);
    LOBYTE(v9) = (unsigned __int8)v9 >> 6;
    if ( (_BYTE)v9 )
    {
      if ( (_BYTE)v9 != 1 )
      {
LABEL_5:
        if ( (_BYTE)v9 == 2 )
          v11 = *(_DWORD *)(v10 + 4) - 1;
        else
          v11 = *(_DWORD *)(v10 + 4);
LABEL_7:
        if ( v11 )
        {
          v12 = 0;
          v13 = 0;
          while ( 1 )
          {
            if ( (v8 & 0x20) != 0 )
              goto LABEL_22;
            v16 = *(_QWORD *)(a2 + 72);
            v17 = 17;
            while ( 1 )
            {
              if ( *(char *)(v16 + 3) < 0 )
              {
                if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
                {
                  v18 = (_QWORD *)(v12 + *(_QWORD *)(v16 + 16));
                  goto LABEL_19;
                }
                goto LABEL_32;
              }
              if ( v13 == *(_DWORD *)(v16 + 4) )
                break;
LABEL_32:
              v16 = *(_QWORD *)(v16 + 16);
              if ( !--v17 )
              {
                sub_233F80((__int64 *)(*(_QWORD *)a2 + 616LL), (_DWORD *)(a2 + 72));
                v18 = (_QWORD *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL));
                goto LABEL_19;
              }
            }
            v18 = (_QWORD *)(v16 + 8);
LABEL_19:
            sub_14BB8A0(a1 + 1, *v18, &v37, &v39);
            *((_DWORD *)a1 + 6) += sub_14B6440(a1 + 1);
            v19 = *(_BYTE *)(a2 + 123);
            if ( (v19 & 8) == 0 )
              goto LABEL_20;
            v26 = *(_QWORD *)(a2 + 88);
            if ( !v26 )
              goto LABEL_46;
            v27 = *(_QWORD *)(a2 + 88);
            v28 = *(_BYTE *)(v26 + 3) >> 6;
            if ( v28 )
            {
              if ( v28 != 1 )
                goto LABEL_37;
LABEL_54:
              if ( v13 >= *(_DWORD *)(v27 + 4) + 1 )
                goto LABEL_55;
            }
            else
            {
              do
              {
                v27 = *(_QWORD *)(v27 + 16);
                v28 = *(_BYTE *)(v27 + 3) >> 6;
              }
              while ( !v28 );
              if ( v28 == 1 )
                goto LABEL_54;
LABEL_37:
              if ( v28 == 2 )
                v29 = *(_DWORD *)(v27 + 4) - 1;
              else
                v29 = *(_DWORD *)(v27 + 4);
              if ( v13 >= v29 )
              {
LABEL_55:
                v26 = 0;
                goto LABEL_46;
              }
            }
            v30 = 18;
            while ( 2 )
            {
              if ( !--v30 )
              {
                sub_233F80((__int64 *)(*(_QWORD *)a2 + 616LL), (_DWORD *)(a2 + 88));
                v31 = (__int64 *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL));
                goto LABEL_45;
              }
              if ( *(char *)(v26 + 3) < 0 )
              {
                if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
                {
                  v31 = (__int64 *)(v12 + *(_QWORD *)(v26 + 16));
                  goto LABEL_45;
                }
                goto LABEL_57;
              }
              if ( v13 != *(_DWORD *)(v26 + 4) )
              {
LABEL_57:
                v26 = *(_QWORD *)(v26 + 16);
                continue;
              }
              break;
            }
            v31 = (__int64 *)(v26 + 8);
LABEL_45:
            v26 = *v31;
LABEL_46:
            v32 = sub_15DE0E0(*a1, v26, v39);
            if ( v32 )
              ++*(_DWORD *)(v32 + 8);
            v33 = v39;
            if ( v39 )
            {
              v34 = v40;
              v22 = (*(_DWORD *)(v39 + 8))-- == 1;
              if ( v22 )
              {
                v35 = v32;
                sub_15D7BC0(v34, v33);
                v32 = v35;
              }
            }
            v39 = v32;
            v19 = *(_BYTE *)(a2 + 123);
LABEL_20:
            if ( (v19 & 0x10) != 0 )
            {
              v14 = *(_QWORD *)(a2 + 104);
              v15 = 17;
              do
              {
                if ( *(char *)(v14 + 3) >= 0 )
                {
                  if ( *(_DWORD *)(v14 + 4) == v13 )
                    goto LABEL_12;
                }
                else if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
                {
                  goto LABEL_12;
                }
                v14 = *(_QWORD *)(v14 + 16);
                --v15;
              }
              while ( v15 );
              sub_236900((_QWORD *)(*(_QWORD *)a2 + 672LL), (__int64 *)(a2 + 104));
            }
LABEL_12:
            LODWORD(v5) = v13;
            sub_EDBFA0(a2);
            ++v13;
            v12 += 8;
            if ( v13 == v11 )
              goto LABEL_22;
            v8 = *(_BYTE *)(a2 + 123);
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      do
      {
        v10 = *(_QWORD *)(v10 + 16);
        LODWORD(v9) = *(unsigned __int8 *)(v10 + 3);
        LOBYTE(v9) = (unsigned __int8)v9 >> 6;
      }
      while ( !(_BYTE)v9 );
      if ( (_BYTE)v9 != 1 )
        goto LABEL_5;
    }
    v11 = *(_DWORD *)(v10 + 4) + 1;
    goto LABEL_7;
  }
LABEL_22:
  sub_EDC6C0(a2, (_DWORD)v5, v9, v10, v6, v7);
  v20 = v39;
  if ( v39 && (v21 = v40, v22 = *(_DWORD *)(v39 + 8) == 1, --*(_DWORD *)(v39 + 8), v22) )
  {
    sub_15D7BC0(v21, v20);
    v23 = v37;
    if ( !v37 )
      return sub_EE4A00(v36);
  }
  else
  {
    v23 = v37;
    if ( !v37 )
      return sub_EE4A00(v36);
  }
  v24 = v38;
  v22 = (*(_DWORD *)(v23 + 8))-- == 1;
  if ( v22 )
    sub_15D7BC0(v24, v23);
  return sub_EE4A00(v36);
}

