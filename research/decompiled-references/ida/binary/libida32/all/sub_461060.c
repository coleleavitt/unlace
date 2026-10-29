__int64 __fastcall sub_461060(
        __int64 a1,
        __int16 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // rbp
  __int64 v9; // r13
  __int64 v10; // r12
  char v13; // al
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // ebx
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rsi
  signed int v31; // ebx
  __int64 v32; // rbx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // r12
  int v38; // [rsp-8h] [rbp-98h]
  int v39; // [rsp+0h] [rbp-90h]
  char v40; // [rsp+4h] [rbp-8Ch]
  int v41[2]; // [rsp+8h] [rbp-88h]
  int v42[2]; // [rsp+8h] [rbp-88h]
  int v43[2]; // [rsp+8h] [rbp-88h]
  int v44[2]; // [rsp+8h] [rbp-88h]
  int v45; // [rsp+10h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-80h]
  void *v47; // [rsp+18h] [rbp-78h] BYREF
  __int128 v48; // [rsp+20h] [rbp-70h]
  void *v49; // [rsp+30h] [rbp-60h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v51; // [rsp+40h] [rbp-50h]
  unsigned __int64 v52; // [rsp+50h] [rbp-40h]
  int v53; // [rsp+58h] [rbp-38h]
  int v54; // [rsp+60h] [rbp-30h]
  __int64 v55; // [rsp+68h] [rbp-28h]

  v9 = (int)a6;
  v10 = (int)a5;
  v55 = v7;
  v40 = a7;
  v52 = __readfsqword(0x28u);
  v48 = 0;
  v47 = nullptr;
  if ( (a3 & 0x600) == 0x400 )
  {
    v25 = (unsigned int)a3 & 0xF0000000;
    switch ( v25 )
    {
      case 1610612736LL:
        if ( !(unsigned __int8)sub_4867E0(a1, a2, a5, a6, 2) )
          goto LABEL_16;
        goto LABEL_48;
      case 1342177280LL:
        v31 = HIBYTE(*(_DWORD *)a2);
        if ( !v31 || v31 == 255 )
          return 1;
        if ( a5 == 2 || a5 == a6 )
          sub_454CE0();
        v33 = *(_QWORD *)(a1 + 8) + 600LL;
        *(_QWORD *)v44 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int8)sub_592290(v33, (unsigned int)v31) )
        {
          v34 = *(_QWORD *)(*(_QWORD *)v44 + 48 * v10 + 640);
          if ( v34 )
          {
            v35 = v33 + 48 * v10 + 32;
            do
            {
              if ( v31 <= *(_DWORD *)(v34 + 32) )
              {
                v35 = v34;
                v34 = *(_QWORD *)(v34 + 16);
              }
              else
              {
                v34 = *(_QWORD *)(v34 + 24);
              }
            }
            while ( v34 );
            if ( v35 != v33 + 48 * v10 + 32 && v31 >= *(_DWORD *)(v35 + 32) )
            {
              v37 = *(_QWORD *)(*(_QWORD *)v44 + 600LL) + 12LL * *(_QWORD *)(v35 + 40);
              if ( (unsigned __int8)sub_592290(v33, *(unsigned int *)(v37 + 4 * v9)) )
              {
                *((_BYTE *)a2 + 3) = *(_BYTE *)(v37 + 4 * v9);
                goto LABEL_48;
              }
            }
          }
        }
        goto LABEL_16;
      case 3489660928LL:
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *a2;
        v28 = v26 + 240;
        if ( (_DWORD)v10 == 2 || (_DWORD)v10 == a6 )
          sub_454CE0();
        *(_QWORD *)v43 = *(_QWORD *)(a1 + 8);
        if ( !sub_3E3CD0(v26 + 240, v27) )
          goto LABEL_16;
        v29 = *(_QWORD *)(*(_QWORD *)v43 + 48 * v10 + 280);
        if ( !v29 )
          goto LABEL_16;
        v30 = v28 + 48 * v10 + 32;
        do
        {
          if ( *(_DWORD *)(v29 + 32) >= v27 )
          {
            v30 = v29;
            v29 = *(_QWORD *)(v29 + 16);
          }
          else
          {
            v29 = *(_QWORD *)(v29 + 24);
          }
        }
        while ( v29 );
        if ( v30 == v28 + 48 * v10 + 32 )
          goto LABEL_16;
        if ( v27 < *(_DWORD *)(v30 + 32) )
          goto LABEL_16;
        v32 = *(_QWORD *)(*(_QWORD *)v43 + 240LL) + 12LL * *(_QWORD *)(v30 + 40);
        if ( !sub_3E3CD0(v28, *(_DWORD *)(v32 + 4 * v9)) )
          goto LABEL_16;
        *a2 = *(_DWORD *)(v32 + 4 * v9);
        goto LABEL_48;
    }
  }
  v13 = is_custfmt(a3, a4);
  if ( a4 <= 7 && v13 )
  {
    v14 = (int)a4;
    v15 = a2[a4 + 1];
    if ( v15 != -1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v15;
      v18 = v16 + 360;
      if ( (_DWORD)v10 == 2 || (_DWORD)v10 == (_DWORD)v9 )
        sub_454CE0();
      v46 = v14;
      *(_QWORD *)v41 = *(_QWORD *)(a1 + 8);
      if ( sub_3E3CD0(v16 + 360, v15) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)v41 + 48 * v10 + 400);
        if ( v19 )
        {
          v20 = v18 + 48 * v10 + 32;
          do
          {
            if ( *(_DWORD *)(v19 + 32) >= v17 )
            {
              v20 = v19;
              v19 = *(_QWORD *)(v19 + 16);
            }
            else
            {
              v19 = *(_QWORD *)(v19 + 24);
            }
          }
          while ( v19 );
          if ( v20 != v18 + 48 * v10 + 32 && v17 >= *(_DWORD *)(v20 + 32) )
          {
            v36 = *(_QWORD *)(*(_QWORD *)v41 + 360LL) + 12LL * *(_QWORD *)(v20 + 40);
            if ( sub_3E3CD0(v18, *(_DWORD *)(v36 + 4 * v9)) )
            {
              a2[v46 + 1] = *(_DWORD *)(v36 + 4 * v9);
              goto LABEL_48;
            }
          }
        }
      }
LABEL_16:
      sub_3573A0((char **)&v47);
      if ( v40 )
      {
        ptr = nullptr;
        v51 = 0;
        sub_3573A0((char **)&ptr);
        sub_365330();
      }
      v21 = 0;
      goto LABEL_19;
    }
  }
  else
  {
    if ( !(unsigned __int8)is_enum(a3, a4) )
    {
      if ( !(unsigned __int8)is_off(a3, a4) && (unsigned __int8)is_stroff(a3, a4) && *(int *)a2 > 0 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 )
          {
            v24 = sub_47D490(
                    a1,
                    *(_DWORD *)&a2[2 * v23 + 2],
                    v10,
                    v9,
                    0,
                    0,
                    v38,
                    v39,
                    v23,
                    v45,
                    (int)v47,
                    v48,
                    SDWORD2(v48),
                    v49,
                    (__int64)ptr,
                    v51,
                    SDWORD2(v51),
                    v52,
                    v53,
                    v54,
                    v55);
            if ( v24 == -1 )
              goto LABEL_16;
            *(_DWORD *)&a2[2 * *(_QWORD *)v42 + 2] = v24;
          }
          else if ( !(unsigned __int8)sub_4867E0(a1, a2 + 2, (unsigned int)v10, (unsigned int)v9, 2) )
          {
            goto LABEL_16;
          }
          if ( *(_DWORD *)a2 <= ++v23 )
            goto LABEL_48;
        }
      }
      goto LABEL_48;
    }
    if ( !(unsigned __int8)sub_4867E0(a1, a2, (unsigned int)v10, (unsigned int)v9, 1) )
      goto LABEL_16;
  }
LABEL_48:
  v21 = 1;
LABEL_19:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  return v21;
}

