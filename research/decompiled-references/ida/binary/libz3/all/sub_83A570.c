__int64 __fastcall sub_83A570(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  char *v4; // rdi
  int v5; // esi
  __int64 v6; // r8
  char *v7; // rax
  char *v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  char *v14; // rdi
  int v15; // esi
  __int64 v16; // r8
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r13
  _QWORD *v25; // rbp
  _QWORD *v26; // rbx
  void (__fastcall *v27)(_QWORD *, _QWORD *, __int64); // rax
  void *v28; // r14
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rbx
  __int64 v37; // rbp
  char *v38; // rsi
  int v39; // [rsp+0h] [rbp-58h]
  void *v40; // [rsp+8h] [rbp-50h]
  void *v41; // [rsp+10h] [rbp-48h]
  _QWORD *v42; // [rsp+18h] [rbp-40h]
  void *v43; // [rsp+20h] [rbp-38h]
  int v44; // [rsp+28h] [rbp-30h]
  void *v45; // [rsp+30h] [rbp-28h]
  void *v46; // [rsp+38h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 392);
  result = sub_7E4EB0(a1);
  if ( v2 >= *(_DWORD *)(result + 344) )
    return result;
  result = sub_7E4EB0(a1);
  if ( !*(_DWORD *)(result + 268) )
    return result;
  v41 = (void *)(a1 + 560);
  if ( *(_DWORD *)(a1 + 604) || *(_DWORD *)(a1 + 608) )
  {
    v4 = *(char **)(a1 + 592);
    v5 = 0;
    v6 = *(unsigned int *)(a1 + 600);
    v7 = v4;
    v8 = &v4[16 * v6];
    if ( v4 == v8 )
      goto LABEL_22;
    do
    {
      while ( *((_DWORD *)v7 + 1) )
      {
        *((_DWORD *)v7 + 1) = 0;
        v7 += 16;
        if ( v8 == v7 )
          goto LABEL_11;
      }
      v7 += 16;
      ++v5;
    }
    while ( v8 != v7 );
LABEL_11:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v5) )
      goto LABEL_22;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 600);
      *(_QWORD *)(a1 + 592) = 0;
      v10 = v9 >> 1;
      *(_DWORD *)(a1 + 600) = v10;
      v11 = sub_186B270(16LL * v10);
      if ( !v10 )
      {
LABEL_21:
        *(_QWORD *)(a1 + 592) = v11;
LABEL_22:
        *(_QWORD *)(a1 + 604) = 0;
        goto LABEL_23;
      }
      if ( v10 == 1 )
      {
        v13 = (_QWORD *)v11;
LABEL_20:
        *v13 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 592) = 0;
      v10 = (unsigned int)v6 >> 1;
      *(_DWORD *)(a1 + 600) = (unsigned int)v6 >> 1;
      v11 = sub_186B270(16LL * ((unsigned int)v6 >> 1));
    }
    v12 = (_QWORD *)v11;
    do
    {
      *v12 = 0;
      v12 += 4;
      *(v12 - 2) = 0;
    }
    while ( (_QWORD *)(v11 + 32LL * (v10 >> 1)) != v12 );
    if ( (v10 & 1) == 0 )
      goto LABEL_21;
    v13 = (_QWORD *)(v11 + 16LL * (v10 & 0x7FFFFFFE));
    goto LABEL_20;
  }
LABEL_23:
  if ( !*(_DWORD *)(a1 + 580) && !*(_DWORD *)(a1 + 584) )
    goto LABEL_42;
  v14 = *(char **)(a1 + 568);
  v15 = 0;
  v16 = *(unsigned int *)(a1 + 576);
  v17 = v14;
  v18 = &v14[16 * v16];
  if ( v14 != v18 )
  {
    do
    {
      while ( *((_DWORD *)v17 + 1) )
      {
        *((_DWORD *)v17 + 1) = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_30;
      }
      v17 += 16;
      ++v15;
    }
    while ( v18 != v17 );
LABEL_30:
    if ( (unsigned int)v16 > 0x10 && 3 * (int)v16 < (unsigned int)(4 * v15) )
    {
      if ( v14 )
      {
        sub_186B220(v14);
        v19 = *(_DWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 568) = 0;
        v20 = v19 >> 1;
        *(_DWORD *)(a1 + 576) = v20;
        v21 = sub_186B270(16LL * v20);
        if ( !v20 )
        {
LABEL_40:
          *(_QWORD *)(a1 + 568) = v21;
          goto LABEL_41;
        }
        if ( v20 == 1 )
        {
          v23 = (_QWORD *)v21;
LABEL_39:
          *v23 = 0;
          goto LABEL_40;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 568) = 0;
        v20 = (unsigned int)v16 >> 1;
        *(_DWORD *)(a1 + 576) = (unsigned int)v16 >> 1;
        v21 = sub_186B270(16LL * ((unsigned int)v16 >> 1));
      }
      v22 = (_QWORD *)v21;
      do
      {
        *v22 = 0;
        v22 += 4;
        *(v22 - 2) = 0;
      }
      while ( v22 != (_QWORD *)(v21 + 32LL * (v20 >> 1)) );
      if ( (v20 & 1) == 0 )
        goto LABEL_40;
      v23 = (_QWORD *)(v21 + 16LL * (v20 & 0x7FFFFFFE));
      goto LABEL_39;
    }
  }
LABEL_41:
  *(_QWORD *)(a1 + 580) = 0;
LABEL_42:
  v24 = *(_QWORD *)(a1 + 624);
  v25 = *(_QWORD **)(v24 + 8);
  v42 = *(_QWORD **)v24;
  if ( *(_QWORD **)v24 != v25 )
  {
    v26 = *(_QWORD **)v24;
    do
    {
      while ( 1 )
      {
        v27 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v26[7];
        if ( !v27 )
          break;
        v27(v26 + 5, v26 + 5, 3);
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v29 = (char *)(v26 + 2);
        v26 += 9;
        sub_182CBA0(v28, v29);
        if ( v25 == v26 )
          goto LABEL_46;
      }
      v40 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v26);
      v38 = (char *)(v26 + 2);
      v26 += 9;
      sub_182CBA0(v40, v38);
    }
    while ( v25 != v26 );
LABEL_46:
    *(_QWORD *)(v24 + 8) = v42;
  }
  v30 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 496LL));
  v31 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 704) = v30 + 88;
  sub_841330(v31, (int)v41, v32, v33, v34, v35, v39, (int)v40, v41, v42, v43, v44, v45, v46);
  result = sub_18290A0(*(_QWORD *)(a1 + 72));
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_FF9DB0(*(_QWORD *)(a1 + 496)) == 1 )
    {
      return sub_82FEE0(a1);
    }
    else
    {
      result = *(_QWORD *)(a1 + 624);
      v36 = *(_QWORD *)result;
      v37 = *(_QWORD *)(result + 8);
      if ( *(_QWORD *)result != v37 )
      {
        do
        {
          result = sub_18290A0(*(_QWORD *)(a1 + 72));
          if ( (_BYTE)result )
          {
            result = *(_QWORD *)(a1 + 24);
            if ( !*(_BYTE *)(result + 3184) )
              result = (__int64)sub_82EC80(a1, v36);
          }
          v36 += 72;
        }
        while ( v37 != v36 );
      }
    }
  }
  return result;
}

