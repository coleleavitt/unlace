__int64 __fastcall sub_F0A20(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // [rsp+18h] [rbp-90h] BYREF
  __int64 v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v31; // [rsp+40h] [rbp-68h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  int v33; // [rsp+58h] [rbp-50h]
  __int16 v34; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8) == 52;
  v35 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v6 + 8) != 65 )
      goto LABEL_25;
    v7 = *(_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v7 + 432) + 104LL * *(int *)(v6 + 32);
    if ( *(_DWORD *)v8 != 1 )
      goto LABEL_25;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD **)(a1 + 96);
    v11 = &v10[*(_QWORD *)(a1 + 104)];
    if ( v10 == v11 )
      goto LABEL_25;
    v12 = v10;
    while ( v9 != *v12 )
    {
      if ( v11 == ++v12 )
        goto LABEL_25;
    }
    if ( v11 == v12 )
      goto LABEL_25;
    v13 = v12 - v10;
    if ( (_DWORD)v13 != *(_DWORD *)(a1 + 120) )
    {
      v14 = *(_QWORD *)(a1 + 24);
      v15 = v14 - 1;
      if ( (int)v14 - 1 >= 0 )
      {
        v16 = *(_QWORD *)(a1 + 16);
        v17 = 8LL * v15;
        v18 = 8 * ((int)v14 - 2 - (unsigned __int64)v15);
        while ( 1 )
        {
          v19 = *(_QWORD *)(v16 + v17);
          v20 = *(_DWORD *)(v19 + 8);
          if ( v20 == 51 )
            break;
          if ( !v17 )
            goto LABEL_19;
          if ( *(_DWORD *)(*(_QWORD *)(v16 + v18 + v17) + 8LL) == 51 && v20 == 35 )
          {
            v25 = *(_QWORD *)(v19 + 32);
            if ( *(_DWORD *)(v25 + 8) != 61 )
              goto LABEL_19;
            v26 = sub_255DF0(*(_QWORD *)(v25 + 24), v25 + 48, v19, v16, 0);
            v7 = *(_QWORD *)(v6 + 24);
            if ( v26 < *(int *)(*(_QWORD *)(v7 + 432) + 104LL * *(int *)(v6 + 32) + 88) )
              break;
            v16 = *(_QWORD *)(a1 + 16);
            v20 = *(_DWORD *)(*(_QWORD *)(v16 + v17) + 8LL);
          }
          v17 -= 8;
          if ( v20 != 48 )
            goto LABEL_19;
        }
        v6 = *(_QWORD *)(a2 + 24);
LABEL_25:
        if ( !(unsigned __int8)sub_F0570(a1, v6, 0) )
          return 0;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL) != 48 )
          sub_246F00(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2 + 48);
        sub_255C10(a2, *(_QWORD *)(a2 + 24));
        goto LABEL_23;
      }
    }
LABEL_19:
    v21 = *(int *)(**(_QWORD **)(a1 + 88) + 4LL * (int)v13);
    *(_DWORD *)(v6 + 32) = v21;
    copy_tinfo_t(v6 + 48, *(_QWORD *)(v7 + 432) + 104 * v21 + 80);
    v27 = 0;
    copy_tinfo_t(&v27, a2 + 48);
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (get_tinfo_property(**(_QWORD **)(a1 + 80), 2) & 0xF) != 0xA
      && (*(_DWORD *)(v22 + 8) != 48
       || !(unsigned __int8)sub_32A840(*(_QWORD *)(a1 + 72), v22 + 48, *(_QWORD *)(a1 + 80))) )
    {
      sub_244580(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 1);
      sub_246F00(a2, *(_QWORD *)(a1 + 72), &v27);
      goto LABEL_22;
    }
    sub_255C10(a2, *(_QWORD *)(a2 + 24));
    copy_tinfo_t(a2 + 48, *(_QWORD *)(a1 + 80));
    v23 = *(_DWORD *)(v22 + 8);
    if ( (unsigned int)(v23 - 2) <= 0xD )
    {
      if ( a2 != *(_QWORD *)(v22 + 32) )
      {
LABEL_32:
        if ( *(_QWORD *)(v22 + 24) == a2 && ((unsigned int)(v23 - 6) <= 1 || v23 == 58) )
          goto LABEL_35;
LABEL_22:
        clear_tinfo_t(&v27);
        goto LABEL_23;
      }
      if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 48LL), 2) & 0xF) == 0xA
        && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) - 10) > 1u )
      {
        sub_246F00(a2, *(_QWORD *)(a1 + 72), *(_QWORD *)(v22 + 24) + 48LL);
      }
      v23 = *(_DWORD *)(v22 + 8);
    }
    if ( (unsigned int)(v23 - 35) <= 1 )
    {
LABEL_35:
      v30[0] = 0;
      v30[1] = 0;
      if ( (unsigned __int8)get_tinfo_details(v27, 11, v30) )
      {
        v28 = 0;
        v29 = 0;
        v31 = 0;
        copy_tinfo_t((char *)&v31 + 8, &v29);
        v32 = 0;
        copy_tinfo_t(&v32, &v28);
        v33 = 0;
        v34 = 0;
        clear_tinfo_t(&v29);
        clear_tinfo_t(&v28);
        v24 = v31;
        *(_QWORD *)&v31 = v30[0];
        v30[0] = v24;
        create_tinfo(&v27, 10, 10, &v31);
        clear_tinfo_t(&v32);
        clear_tinfo_t((char *)&v31 + 8);
        clear_tinfo_t(&v31);
      }
      clear_tinfo_t(v30);
      sub_246F00(a2, *(_QWORD *)(a1 + 72), &v27);
      goto LABEL_22;
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)sub_F0570(a1, a2, 1) )
LABEL_23:
    *(_DWORD *)(a1 + 8) |= 1u;
  return 0;
}
