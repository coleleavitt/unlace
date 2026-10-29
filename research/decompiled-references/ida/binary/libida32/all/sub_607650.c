unsigned __int64 __fastcall sub_607650(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // r9d
  _BYTE *v6; // r13
  __int64 v7; // r14
  __int64 v9; // rdi
  unsigned int *func; // rdi
  _DWORD v11[2]; // [rsp+0h] [rbp-4C8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-4C0h]
  __int64 v13; // [rsp+10h] [rbp-4B8h]
  __int16 v14; // [rsp+18h] [rbp-4B0h]
  __m128i si128; // [rsp+1Ch] [rbp-4ACh]
  __int64 v16; // [rsp+30h] [rbp-498h]
  int v17; // [rsp+38h] [rbp-490h]
  __int64 v18; // [rsp+40h] [rbp-488h]
  int v19; // [rsp+48h] [rbp-480h]
  __int64 v20; // [rsp+50h] [rbp-478h]
  int v21; // [rsp+58h] [rbp-470h]
  __int64 v22; // [rsp+60h] [rbp-468h]
  int v23; // [rsp+68h] [rbp-460h]
  __int64 v24; // [rsp+70h] [rbp-458h]
  _BYTE v25[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v26; // [rsp+488h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  show_auto(a2, 0);
  v6 = *(_BYTE **)(a3 + 8);
  v7 = *(_QWORD *)(a3 + 24);
  if ( (debug & 0x40) != 0 )
    sub_383DA0();
  if ( (*(_BYTE *)(a3 + 40) & 1) != 0 )
  {
    func = (unsigned int *)get_func(a2);
    if ( func )
      sub_5ACD00(func);
    else
      set_abits(a2, &loc_400000);
  }
  if ( v6 && *v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1480) + 2624LL) & 4) != 0 )
    {
      set_name(a2, v6);
    }
    else if ( v7 )
    {
      qsnprintf((int)v25, 1024, (int)"%s: %s", (int)v6, v7, v5, v11[0]);
    }
    else
    {
      qstrncpy(v25, v6, 1024);
    }
  }
  if ( *(_DWORD *)(a3 + 20) != -1 )
  {
    if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 )
    {
      sub_59DAA0(*(_QWORD **)(a1 + 1480), a2, *(_DWORD *)(a3 + 20), 1);
    }
    else
    {
      v11[0] = a2;
      v11[1] = -1;
      v13 = 0xFFFFFFFFLL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
      v12 = 512;
      v14 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      add_func_ex((int)v11);
      v9 = get_func(a2);
      if ( !v9 )
        sub_383F40(1241, a2);
      *(_DWORD *)(v9 + 28) = *(_DWORD *)(a3 + 20);
      update_func(v9);
    }
  }
  append_cmt();
  return v26 - __readfsqword(0x28u);
}

