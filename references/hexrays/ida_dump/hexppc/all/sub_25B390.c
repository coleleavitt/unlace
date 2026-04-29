__int64 __fastcall sub_25B390(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // r12
  int tinfo_size; // ebx
  int v21; // eax
  __int64 v22; // rax
  int v23; // ebx
  unsigned __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int64 tinfo_property; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 88);
  v30[1] = (_QWORD *)__readfsqword(0x28u);
  v4 = a2;
  if ( v3 == -1 )
  {
    if ( !sub_255BD0(a2, *(_QWORD *)(a1 + 64), 0) )
      goto LABEL_6;
  }
  else if ( *(_DWORD *)(a2 + 8) == 65 && v3 == *(_DWORD *)(a2 + 32) )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    v28 = 0;
    v9 = v7 - 1;
    v10 = *(_QWORD *)(v8 + 8LL * ((int)v7 - 1));
    v11 = *(_DWORD *)(v10 + 8);
    if ( *(_BYTE *)(a1 + 93) )
    {
      if ( v11 != 48 )
      {
        if ( v11 != 35 )
        {
          v13 = 0;
          goto LABEL_11;
        }
        v12 = 1;
        goto LABEL_27;
      }
      copy_tinfo_t(&v28, v10 + 48);
      tinfo_property = (int)get_tinfo_property(v28, 14);
      if ( (get_tinfo_property(v28, 2) & 0xF) != 0xA )
        goto LABEL_19;
      v12 = tinfo_property;
      if ( tinfo_property == -1 )
        goto LABEL_19;
      v9 = v7 - 2;
      v4 = v10;
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v7 - 2)) + 8LL);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v7 - 2));
    }
    else
    {
      v12 = 1;
    }
    v13 = 0;
    if ( v11 != 35 )
    {
LABEL_9:
      if ( v11 == 48 )
      {
        do
        {
          copy_tinfo_t(&v28, v10 + 48);
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * --v9);
        }
        while ( *(_DWORD *)(v10 + 8) == 48 );
      }
LABEL_11:
      if ( (get_tinfo_property(v28, 2) & 0xF) == 0xA )
      {
        v5 = 1;
        if ( !*(_BYTE *)(a1 + 92) )
        {
LABEL_20:
          clear_tinfo_t(&v28);
          return v5;
        }
        v30[0] = nullptr;
        v30[0] = (_QWORD *)get_tinfo_property(v28, 9);
        copy_tinfo_t(&v28, v30);
        clear_tinfo_t(v30);
        if ( (get_tinfo_property(v28, 2) & 0x3F) == 1 )
        {
          v30[0] = (_QWORD *)(&dword_30 + 2);
          copy_tinfo_t(&v28, v30);
          clear_tinfo_t(v30);
        }
        v14 = *(_QWORD **)(a1 + 72);
        if ( v14 )
        {
          v15 = 24;
          v16 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v16 )
          {
LABEL_34:
            v23 = sub_32A000(v16 + 32);
            if ( v23 > (int)sub_32A000(&v28) )
            {
              copy_tinfo_t(v15 + 8, &v28);
              v5 = 0;
              goto LABEL_20;
            }
            goto LABEL_19;
          }
          while ( (*(_BYTE *)v16 & 2) == 0 )
          {
            v24 = *(_QWORD *)(v16 + 24);
            v15 = v16 + 24;
            if ( v13 >= v24 )
            {
              if ( v24 >= v13 )
              {
                if ( v14 == (_QWORD *)v16 )
                  break;
                goto LABEL_34;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            else
            {
              v16 = *(_QWORD *)(v16 + 8);
            }
          }
        }
        v29 = v13;
        v30[0] = &v29;
        v17 = sub_25B220((__m128i *)(a1 + 72), &v29, v30);
        copy_tinfo_t(v17 + 32, &v28);
      }
LABEL_19:
      v5 = 0;
      goto LABEL_20;
    }
LABEL_27:
    v18 = *(_QWORD *)(v10 + 24);
    if ( v18 == v4 )
      v18 = *(_QWORD *)(v10 + 32);
    if ( *(_DWORD *)(v18 + 8) != 61 )
      goto LABEL_19;
    v27 = v12;
    v25 = v18;
    v19 = *(_QWORD **)(v18 + 24);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v18 + 48), 0);
    if ( tinfo_size > 16 )
      tinfo_size = 16;
    v21 = get_tinfo_property(*(_QWORD *)(v25 + 48), 3);
    v22 = sub_326890(*v19, (unsigned int)tinfo_size, v21 == 1);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * --v9);
    v13 = v22 * v27;
    v11 = *(_DWORD *)(v10 + 8);
    goto LABEL_9;
  }
  return 0;
}
