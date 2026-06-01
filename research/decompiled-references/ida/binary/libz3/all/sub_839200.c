void __fastcall sub_839200(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(); // r15
  __int64 v12; // rdx
  _DWORD *v13; // r11
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rdi
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // eax
  __int64 (__fastcall *v25)(); // rax
  void *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbp
  _QWORD *v29; // rsi
  _QWORD *v30; // rdx
  void *v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-48h]
  unsigned int v34; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a1 + 336);
  if ( !v2 )
    return;
  v3 = *(_DWORD *)(v2 - 4);
  v5 = v3 - 1;
  if ( a2 >= v3 )
    goto LABEL_32;
  v6 = 4 * v5;
  v7 = *(_QWORD *)(a1 + 320);
  v32 = 4 * (v5 - (v3 - a2 - 1));
  while ( 2 )
  {
    v8 = *(unsigned int *)(v2 + v6);
    v9 = *(_QWORD *)(v7 + 8 * v8);
    v10 = 0x7FFFFFFF8LL;
    if ( v9 )
      v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
    v11 = *(__int64 (__fastcall ****)())(v9 + v10);
    v12 = *(unsigned int *)(a1 + 304);
    v13 = *(_DWORD **)(a1 + 296);
    v14 = v12 - 1;
    v15 = 24 * v12;
    v16 = *((_DWORD *)v11 + 2) >> 1;
    v17 = (unsigned __int64)v13 + v15;
    v18 = 24LL * ((unsigned int)v16 & v14);
    v19 = &v13[(unsigned __int64)v18 / 4];
    if ( v18 == v15 )
    {
LABEL_22:
      if ( v13 != v19 )
      {
        v20 = *(_DWORD **)(a1 + 296);
        while ( 1 )
        {
          v15 = (unsigned int)v20[1];
          if ( (_DWORD)v15 == 2 )
          {
            if ( (_DWORD)v16 == *v20 && (_DWORD)v16 == v20[2] )
              goto LABEL_13;
          }
          else if ( !(_DWORD)v15 )
          {
            goto LABEL_18;
          }
          v20 += 6;
          if ( v19 == v20 )
            goto LABEL_18;
        }
      }
      goto LABEL_18;
    }
    v20 = &v13[(unsigned __int64)v18 / 4];
    while ( 1 )
    {
      v15 = (unsigned int)v20[1];
      if ( (_DWORD)v15 != 2 )
      {
        if ( !(_DWORD)v15 )
          goto LABEL_18;
        goto LABEL_9;
      }
      if ( (_DWORD)v16 == *v20 && (_DWORD)v16 == v20[2] )
        break;
LABEL_9:
      v20 += 6;
      if ( (_DWORD *)v17 == v20 )
        goto LABEL_22;
    }
LABEL_13:
    v21 = v20 + 6;
    v22 = *(unsigned int *)(a1 + 308);
    if ( (_DWORD *)v17 == v20 + 6 )
      v21 = *(_DWORD **)(a1 + 296);
    v17 = (unsigned int)(v22 - 1);
    v15 = (unsigned int)v21[1];
    if ( (_DWORD)v15 )
    {
      v20[1] = 1;
      v23 = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(a1 + 308) = v17;
      v24 = v23 + 1;
      *(_DWORD *)(a1 + 312) = v24;
      if ( (unsigned int)v17 < v24 && v24 > 0x40 && !(unsigned __int8)sub_186AF10(v22) )
      {
        v34 = *(_DWORD *)(a1 + 304);
        v27 = sub_186B270(24LL * v34);
        v28 = v27;
        if ( v34 )
        {
          if ( v34 == 1 )
          {
            v30 = (_QWORD *)v27;
LABEL_42:
            *v30 = 0;
          }
          else
          {
            v29 = (_QWORD *)v27;
            do
            {
              *v29 = 0;
              v29 += 6;
              *(v29 - 3) = 0;
            }
            while ( v29 != (_QWORD *)(v27 + 48LL * (v34 >> 1)) );
            if ( (v34 & 1) != 0 )
            {
              v30 = (_QWORD *)(v27 + 24LL * (v34 & 0xFFFFFFFE));
              goto LABEL_42;
            }
          }
        }
        v16 = *(unsigned int *)(a1 + 304);
        sub_83E5A0(*(_QWORD *)(a1 + 296), v16, v27, v16);
        v31 = *(void **)(a1 + 296);
        if ( v31 )
          sub_186B220(v31);
        *(_QWORD *)(a1 + 296) = v28;
        *(_DWORD *)(a1 + 312) = 0;
      }
    }
    else
    {
      v20[1] = 0;
      *(_DWORD *)(a1 + 308) = v17;
    }
LABEL_18:
    v25 = **v11;
    if ( v25 == sub_83AF80 )
    {
      *v11 = &off_1C55220;
      v26 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v11 + 3);
      sub_182CBA0(v26, v11 + 5);
    }
    else
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64, __int64, unsigned __int64))v25)(v11, v16, v15, v17);
    }
    sub_186B220(v11);
    v7 = *(_QWORD *)(a1 + 320);
    --*(_DWORD *)(*(_QWORD *)(v7 + 8 * v8) - 4LL);
    v2 = *(_QWORD *)(a1 + 336);
    if ( v32 != v6 )
    {
      v6 -= 4;
      continue;
    }
    break;
  }
  if ( v2 )
LABEL_32:
    *(_DWORD *)(v2 - 4) = a2;
}

