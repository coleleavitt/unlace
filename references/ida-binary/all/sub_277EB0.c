void __fastcall sub_277EB0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  char v11; // bl
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi

  if ( *(_QWORD *)(a1 + 8) > 1u )
    return;
  v5 = sub_277DF0();
  v6 = *(_QWORD *)(v5 + 112);
  if ( !v6 )
    goto LABEL_9;
  v7 = *(_QWORD *)(v6 + 104);
  if ( !v7 )
    goto LABEL_9;
  v8 = *(unsigned __int64 **)(v6 + 96);
  v9 = 0;
  while ( a3 < *v8 || a3 >= v8[1] )
  {
    ++v9;
    v8 += 4;
    if ( v7 == v9 )
      goto LABEL_9;
  }
  if ( !v8 || *(_QWORD *)(v5 + 120) != v9 )
  {
LABEL_9:
    v10 = *(_QWORD *)(a1 + 8);
    v11 = 0;
    if ( v10 )
      goto LABEL_10;
LABEL_28:
    v10 = 0;
    sub_5399F0(a2, unk_8CA628, 1, "Pick all changes");
    v12 = v5 + 32;
    if ( *(_BYTE *)(v5 + 72) )
      return;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v11 = 1;
    sub_5399F0(a2, unk_8CA658, 1, "Pick this");
    goto LABEL_28;
  }
  v11 = 1;
  sub_5399F0(a2, unk_8CA660, 1, "Pick this");
LABEL_10:
  sub_5399F0(a2, unk_8CA638, 1, "Pick all changes");
  v12 = v5;
  if ( *(_BYTE *)(v5 + 40) )
    return;
LABEL_11:
  v13 = *(_QWORD *)(v12 + 32);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 40);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v5 + 112);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v5 + 120);
        if ( v16 < *(_QWORD *)(v15 + 104) )
        {
          v17 = (__int64 *)(*(_QWORD *)(v15 + 96) + 32 * v16);
          if ( v17 )
          {
            if ( v11 )
            {
              v18 = *(_QWORD **)(v14 + 24);
              v19 = &v18[4 * *(_QWORD *)(v14 + 32)];
              if ( v18 == v19 )
                goto LABEL_21;
              v20 = *v17;
              while ( v20 != *v18 )
              {
                v18 += 4;
                if ( v19 == v18 )
                  goto LABEL_21;
              }
              if ( v19 == v18 )
              {
LABEL_21:
                v21 = unk_8CA660;
                if ( v10 )
                  v21 = unk_8CA658;
                sub_5399F0(a2, v21, 1, "Pick other (removal)");
              }
            }
          }
        }
      }
    }
  }
}
