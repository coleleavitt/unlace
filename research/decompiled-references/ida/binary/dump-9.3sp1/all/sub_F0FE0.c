__int64 __fastcall sub_F0FE0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v23; // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+38h] [rbp-70h]
  __int128 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  int v27; // [rsp+58h] [rbp-50h]
  __int16 v28; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8) == 52;
  v29 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v5 + 8) != 65 )
      goto LABEL_25;
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 432LL) + 104LL * *(int *)(v5 + 32);
    if ( *(_DWORD *)v6 != 1 )
      goto LABEL_25;
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD **)(a1 + 96);
    v9 = &v8[*(_QWORD *)(a1 + 104)];
    if ( v8 == v9 )
      goto LABEL_25;
    v10 = v8;
    while ( v7 != *v10 )
    {
      if ( v9 == ++v10 )
        goto LABEL_25;
    }
    if ( v9 == v10 )
      goto LABEL_25;
    v11 = v10 - v8;
    if ( (_DWORD)v11 != *(_DWORD *)(a1 + 120) )
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = v12 - 1;
      if ( (int)v12 - 1 >= 0 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        v15 = 8LL * v13;
        v16 = 8 * ((int)v12 - 2 - (unsigned __int64)v13);
        while ( 1 )
        {
          v17 = *(_QWORD *)(v14 + v15);
          v18 = *(_DWORD *)(v17 + 8);
          if ( v18 == 51 )
            break;
          if ( !v15 )
            goto LABEL_19;
          if ( *(_DWORD *)(*(_QWORD *)(v14 + v16 + v15) + 8LL) == 51 && v18 == 35 )
          {
            v21 = *(_QWORD *)(v17 + 32);
            if ( *(_DWORD *)(v21 + 8) != 61 )
              goto LABEL_19;
            if ( sub_255A30(*(_QWORD *)(v21 + 24), v21 + 48, v17, v14, 0) < (unsigned __int64)*(int *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 432LL) + 104LL * *(int *)(v5 + 32) + 88) )
              break;
            v14 = *(_QWORD *)(a1 + 16);
            v18 = *(_DWORD *)(*(_QWORD *)(v14 + v15) + 8LL);
          }
          v15 -= 8;
          if ( v18 != 48 )
            goto LABEL_19;
        }
        v5 = *(_QWORD *)(a2 + 24);
LABEL_25:
        if ( !(unsigned __int8)sub_F0B30(a1, v5, 0) )
          return 0;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL) != 48 )
          sub_246B40(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2 + 48);
        sub_255850(a2, *(_QWORD *)(a2 + 24));
        goto LABEL_23;
      }
    }
LABEL_19:
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(**(_QWORD **)(a1 + 88) + 4LL * (int)v11);
    copy_tinfo_t();
    v22[0] = 0;
    copy_tinfo_t();
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (get_tinfo_property() & 0xF) != 0xA
      && (*(_DWORD *)(v19 + 8) != 48
       || !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v19 + 48, *(_QWORD *)(a1 + 80))) )
    {
      sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 1);
      sub_246B40(a2, *(_QWORD *)(a1 + 72), v22);
      goto LABEL_22;
    }
    sub_255850(a2, *(_QWORD *)(a2 + 24));
    copy_tinfo_t();
    v20 = *(_DWORD *)(v19 + 8);
    if ( (unsigned int)(v20 - 2) <= 0xD )
    {
      if ( a2 != *(_QWORD *)(v19 + 32) )
      {
LABEL_32:
        if ( *(_QWORD *)(v19 + 24) == a2 && ((unsigned int)(v20 - 6) <= 1 || v20 == 58) )
          goto LABEL_35;
LABEL_22:
        clear_tinfo_t();
        goto LABEL_23;
      }
      if ( (get_tinfo_property() & 0xF) == 0xA && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        sub_246B40(a2, *(_QWORD *)(a1 + 72), *(_QWORD *)(v19 + 24) + 48LL);
      v20 = *(_DWORD *)(v19 + 8);
    }
    if ( (unsigned int)(v20 - 35) <= 1 )
    {
LABEL_35:
      v23 = 0;
      v24 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v22[1] = 0;
        v22[2] = 0;
        v25 = 0;
        copy_tinfo_t();
        v26 = 0;
        copy_tinfo_t();
        v27 = 0;
        v28 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        *(_QWORD *)&v25 = v23;
        v23 = 0;
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      clear_tinfo_t();
      sub_246B40(a2, *(_QWORD *)(a1 + 72), v22);
      goto LABEL_22;
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)sub_F0B30(a1, a2, 1) )
LABEL_23:
    *(_DWORD *)(a1 + 8) |= 1u;
  return 0;
}
