void __fastcall sub_83E6A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int *v5; // rbx
  unsigned int *v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rax
  unsigned int *v18; // r15
  unsigned int *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  bool v24; // zf
  char v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // [rsp+10h] [rbp-68h]
  unsigned int v29; // [rsp+18h] [rbp-60h]
  unsigned int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v31[3]; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 56);
  v30 = a2;
  v4 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(v3 + 496)) + 256) + 24LL * a2;
  v5 = *(unsigned int **)v4;
  v6 = *(unsigned int **)(v4 + 8);
  if ( *(unsigned int **)v4 != v6 )
  {
    v7 = -1;
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4 * v8) != 4
          || *(_DWORD *)(sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v8) + 32) )
        {
          break;
        }
        v5 += 10;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      if ( v7 != -1 )
        return;
      v7 = *v5;
      v5 += 10;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( v7 != -1 )
    {
      v9 = (unsigned __int64)v7 << 6;
      v10 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
      v11 = sub_83D5F0(a1 + 72, v9 + *(_QWORD *)(v10 + 48));
      if ( !v11 )
        goto LABEL_11;
      v12 = *(_DWORD *)(v11 + 40);
      v29 = v12;
      v13 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
      if ( -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v13 + 264) - *(_QWORD *)(v13 + 256)) >> 3) <= v12 )
        goto LABEL_11;
      v16 = -1;
      v17 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL)) + 256) + 24LL * v12;
      v18 = *(unsigned int **)v17;
      v19 = *(unsigned int **)(v17 + 8);
      if ( *(unsigned int **)v17 == v19 )
        goto LABEL_11;
      do
      {
        v20 = *v18;
        if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4 * v20) != 4
          || (v28 = v19,
              v21 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v20),
              v19 = v28,
              *(_DWORD *)(v21 + 32)) )
        {
          if ( v16 != -1 )
            goto LABEL_11;
          v16 = *v18;
        }
        v18 += 10;
      }
      while ( v19 != v18 );
      v14 = *(_QWORD *)(a1 + 56);
      if ( v16 == -1 )
        goto LABEL_12;
      v22 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(v14 + 496)) + 48) + ((unsigned __int64)v16 << 6);
      v23 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
      v24 = !sub_3ED680((__int64)qword_1C7F2C0, v9 + *(_QWORD *)(v23 + 48), v22);
      v14 = *(_QWORD *)(a1 + 56);
      if ( v24 )
        goto LABEL_12;
      v25 = sub_FFADC0(*(_QWORD *)(v14 + 496), v7);
      if ( v25 != (unsigned __int8)sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v16) )
      {
LABEL_11:
        v14 = *(_QWORD *)(a1 + 56);
LABEL_12:
        v15 = sub_FF9B20(*(_QWORD *)(v14 + 496));
        sub_83DB40(a1 + 72, (int *)(v9 + *(_QWORD *)(v15 + 48)), (int *)&v30);
        return;
      }
      if ( v7 != v16 )
      {
        v31[0] = 0;
        v26 = (_QWORD *)sub_186B270(0x60u);
        *v26 = 0;
        *(_QWORD *)((char *)v26 + 12) = 0;
        v26[3] = 0;
        *(_QWORD *)((char *)v26 + 36) = 0;
        v26[6] = 0;
        *(_QWORD *)((char *)v26 + 60) = 0;
        v26[9] = 0;
        *(_QWORD *)((char *)v26 + 84) = 0;
        v31[1] = (__int64)v26;
        v31[2] = 8;
        v32 = 0;
        sub_83E250(a1, a2, (__int64)v31);
        sub_83E250(a1, v29, (__int64)v31);
        if ( (unsigned __int8)sub_82F0A0(*(_QWORD *)(a1 + 56), v7, v16, (__int64)v31, 1) )
        {
          v27 = sub_FF9A30(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
          ++*(_DWORD *)(v27 + 120);
        }
        sub_83B4F0(v31);
      }
    }
  }
}

