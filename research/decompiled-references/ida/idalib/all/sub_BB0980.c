void __fastcall sub_BB0980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // r14
  __int64 *i; // r13
  __int64 v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+10h] [rbp-48h] BYREF
  _QWORD *v39; // [rsp+18h] [rbp-40h] BYREF
  __m128 v40[3]; // [rsp+20h] [rbp-38h] BYREF

  v9 = *(_QWORD *)(a1 + 104);
  if ( !v9 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v9 = *(_QWORD *)(a1 + 104);
  }
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10 )
  {
    v38 = *v10;
    if ( v38 )
    {
      if ( (unsigned __int8)sub_BAA140(a3, &v38, &v39) )
      {
        if ( (*(_BYTE *)a3 & 1) != 0 )
        {
          v13 = a3 + 8;
          v14 = 64;
        }
        else
        {
          v13 = *(_QWORD *)(a3 + 8);
          v14 = 8LL * *(unsigned int *)(a3 + 16);
        }
        sub_BAF680(v40, v39, (_QWORD *)(v13 + v14), a3, 1);
        return;
      }
      v15 = v39;
      v16 = *(_DWORD *)a3 >> 1;
      v40[0].m128_u64[0] = (unsigned __int64)v39;
      v17 = v16 + 1;
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
        v19 = 24;
        v18 = 8;
      }
      else
      {
        v18 = *(unsigned int *)(a3 + 16);
        v19 = 3 * v18;
      }
      v20 = (unsigned int)(4 * v17);
      if ( v19 <= (unsigned int)v20 )
      {
        sub_BB05A0(a3, 2 * v18, v18, v20, v11, v12);
      }
      else
      {
        v21 = (unsigned int)v18 >> 3;
        if ( (int)v18 - (v17 + *(_DWORD *)(a3 + 4)) > (unsigned int)v21 )
          goto LABEL_15;
        sub_BB05A0(a3, v18, v18, v21, v11, v12);
      }
      sub_BAA140(a3, &v38, v40);
      v15 = (_QWORD *)v40[0].m128_u64[0];
      v17 = (*(_DWORD *)a3 >> 1) + 1;
LABEL_15:
      *(_DWORD *)a3 = *(_DWORD *)a3 & 1 | (2 * v17);
      if ( *v15 != -4096 )
        --*(_DWORD *)(a3 + 4);
      *v15 = v38;
      v39 = v15;
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
        v22 = a3 + 8;
        v23 = 64;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 8);
        v23 = 8LL * *(unsigned int *)(a3 + 16);
      }
      sub_BAF680(v40, v15, (_QWORD *)(v23 + v22), a3, 1);
      v24 = sub_B8E970(v38 + 48);
      if ( v24 )
      {
        if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x4B )
        {
LABEL_27:
          if ( a2 == v24 )
            goto LABEL_34;
          v26 = *(_QWORD *)(a2 + 40);
          v34 = *(_QWORD *)(v24 + 40);
          if ( (v34 & 7) != 0 )
          {
            if ( (v26 & 7) != 0 )
            {
LABEL_38:
              v36 = *(unsigned int *)(a4 + 8);
              if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
              {
                v37 = v24;
                sub_2237220(a4, a4 + 16, v36 + 1, 8);
                v36 = *(unsigned int *)(a4 + 8);
                v24 = v37;
              }
              *(_QWORD *)(*(_QWORD *)a4 + 8 * v36) = v24;
              ++*(_DWORD *)(a4 + 8);
              return;
            }
            v35 = 0;
          }
          else
          {
            v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
            v15 = nullptr;
            if ( (v26 & 7) != 0 )
            {
LABEL_31:
              if ( v15 == (_QWORD *)v35 )
                goto LABEL_38;
LABEL_34:
              while ( 1 )
              {
                v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v24 = v25;
                if ( !v25 )
                  goto LABEL_24;
                if ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x4B )
                  goto LABEL_27;
              }
            }
          }
          v26 &= 0xFFFFFFFFFFFFFFF8LL;
          v15 = (_QWORD *)v26;
          goto LABEL_31;
        }
        while ( 1 )
        {
          v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v24 = v25;
          if ( !v25 )
            break;
          if ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x4B )
            goto LABEL_27;
        }
      }
LABEL_24:
      v29 = sub_BAA520(v38, (__int64)v15, v25, v26, v27, v28);
      v31 = v30;
      for ( i = (__int64 *)v29; v31 != i; ++i )
      {
        v33 = *i;
        sub_BB0980(v33, a2, a3, a4);
      }
    }
  }
}
