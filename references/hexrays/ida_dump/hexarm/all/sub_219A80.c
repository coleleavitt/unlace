__int64 __fastcall sub_219A80(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  int v10; // esi
  char v11; // cl
  __int64 v12; // rax
  int *v13; // r8
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r13
  char v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rbp
  bool v32; // al
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // [rsp+8h] [rbp-60h] BYREF
  __int64 v46; // [rsp+10h] [rbp-58h] BYREF
  __int128 v47; // [rsp+18h] [rbp-50h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 1288) )
    return 0;
  v2 = *(_QWORD *)(a1 + 440);
  v46 = 0;
  v47 = 0;
  if ( (_DWORD)v2 )
  {
    v46 = qvector_reserve(&v46, 0, (int)v2, 4);
    memset((void *)(v46 + 4 * v47), 0, 4 * ((int)v2 - (_QWORD)v47));
    *(_QWORD *)&v47 = (int)v2;
    if ( (int)v2 > 0 )
    {
      v43 = 0;
      do
      {
        *(_DWORD *)(v46 + 4 * v43) = v43;
        v44 = v43++;
      }
      while ( (_DWORD)v2 - 1 != v44 );
    }
    v4 = *(_QWORD **)(a1 + 1280);
    if ( !v4 || !*(_QWORD *)(a1 + 1288) )
      goto LABEL_13;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 1280);
    if ( !v4 )
      return 0;
  }
  v5 = (_QWORD *)v4[1];
  if ( v4 != v5 )
  {
    while ( 1 )
    {
LABEL_6:
      v6 = sub_1F0900((__int64 *)(a1 + 432), (__int64)(v5 + 3));
      v7 = sub_1F0900((__int64 *)(a1 + 432), (__int64)(v5 + 6));
      if ( v6 != -1 && v7 != -1 )
        *(_DWORD *)(v46 + 4 * v6) = *(_DWORD *)(v46 + 4 * v7);
      if ( (*v5 & 2) != 0 )
        goto LABEL_12;
      v8 = (_QWORD *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
      {
        v33 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          while ( (_QWORD *)v33[2] == v5 )
          {
            v5 = v33;
            v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) != 0 )
            {
              v5 = (_QWORD *)v35;
              if ( v4 != (_QWORD *)v35 )
                goto LABEL_6;
              goto LABEL_13;
            }
            v33 = (_QWORD *)v35;
          }
        }
        v5 = v33;
        if ( v4 == v33 )
          break;
      }
      else
      {
        do
        {
          v5 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
LABEL_12:
        if ( v4 == v5 )
          break;
      }
    }
  }
LABEL_13:
  v9 = v46;
  if ( (_QWORD)v47 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = (int *)(v9 + 4 * v12);
      v14 = *v13;
      while ( 1 )
      {
        v15 = v14;
        v14 = *(_DWORD *)(v9 + 4LL * v14);
        if ( v14 == v15 )
          break;
        v11 = 1;
      }
      *v13 = v14;
      ++v10;
      v16 = v47;
      v12 = v10;
      v9 = v46;
    }
    while ( v10 < (unsigned __int64)v47 );
    if ( !v11 )
      goto LABEL_20;
    sub_83650((unsigned __int64 **)(a1 + 1280));
    v9 = v46;
    if ( (_QWORD)v47 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = *(int *)(v9 + 4 * v37);
        if ( (_DWORD)v38 != v36 )
        {
          v39 = *(_QWORD *)(a1 + 432);
          v40 = v39 + 104 * v38;
          v45 = v39 + 104 * v37;
          v41 = sub_219900((__m128i *)(a1 + 1280), v45, &v45);
          v42 = v41 + 24;
          copy_argloc(v41 + 48, v40);
          v9 = v46;
          *(_QWORD *)(v42 + 40) = *(_QWORD *)(v40 + 16);
        }
        ++v36;
        v16 = v47;
        v37 = v36;
      }
      while ( v36 < (unsigned __int64)v47 );
LABEL_20:
      if ( v16 )
      {
        v17 = 0;
        v18 = 0;
        while ( *(_DWORD *)(v9 + 4 * v18) == v17 )
        {
          v18 = ++v17;
          if ( v17 >= v16 )
            goto LABEL_46;
        }
        v19 = *(int *)(a1 + 480);
        if ( (_DWORD)v19 != -1 )
        {
          v20 = *(_QWORD *)(a1 + 432) + 104 * v19;
          v21 = *(_DWORD *)(v20 + 24);
          if ( (v21 & 0x80u) == 0 )
          {
            if ( !under_debugger )
              sub_3835A0(50984);
            BUG();
          }
          LOBYTE(v21) = v21 & 0x7F;
          *(_DWORD *)(v20 + 24) = v21;
        }
        sub_2171C0(a1, &v46, 0);
        v22 = *(int *)(a1 + 480);
        if ( (_DWORD)v22 != -1 )
          *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v22 + 24) |= 0x80u;
        v23 = v47;
        if ( (_QWORD)v47 )
        {
          v24 = v46;
          v25 = 0;
          v26 = 0;
          do
          {
            v27 = *(int *)(v24 + 4 * v26);
            if ( (_DWORD)v27 != v25 )
              *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v27 + 24) |= 0x2000u;
            v26 = ++v25;
          }
          while ( v25 < v23 );
        }
        v28 = *(_QWORD *)(a1 + 520);
        v29 = 0;
        if ( v28 )
        {
          do
          {
            v30 = *(_QWORD *)(v28 + 48);
            while ( v30 )
            {
              while ( 1 )
              {
                v31 = v30;
                v30 = *(_QWORD *)(v30 + 8);
                if ( *(_DWORD *)v31 != 4 && (*(_DWORD *)v31 != 67 || *(_DWORD *)(v31 + 36) != *(_DWORD *)(v31 + 68)) )
                  break;
                if ( !sub_1255A0((unsigned __int8 *)(v31 + 32), v31 + 64, 0) )
                  break;
                v32 = sub_A2EC0(v28, v31) == 0;
                *(_DWORD *)(a1 + 4) |= 0x10000u;
                v29 |= v32;
                if ( !v30 )
                  goto LABEL_42;
              }
            }
LABEL_42:
            v28 = *(_QWORD *)(v28 + 8);
          }
          while ( v28 );
          if ( v29 )
            sub_69F40(a1);
        }
        v9 = v46;
      }
    }
  }
LABEL_46:
  if ( v9 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v9);
  }
  return 0;
}
