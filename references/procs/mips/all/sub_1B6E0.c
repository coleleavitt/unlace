void __fastcall sub_1B6E0(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int8 v12; // si
  int v14; // eax
  int v15; // esi
  __int64 **v16; // rdi
  int v17; // ebx
  __int64 **v18; // rdi
  __int64 **v19; // rdi
  __int64 flags; // rax
  char v21; // al
  __int16 v22; // ax
  __int64 func; // rax
  int v24; // eax
  __int64 v25; // rax
  __int16 v26; // ax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+8h] [rbp-40h]
  int v32; // [rsp+8h] [rbp-40h]
  int v33; // [rsp+Ch] [rbp-3Ch]
  int v34; // [rsp+Ch] [rbp-3Ch]

  if ( !*(_QWORD *)(a1 + 616) )
    return;
  if ( (~*(_BYTE *)(a2 + 33) & 3) != 0 )
  {
    v12 = a4[1];
    switch ( v12 )
    {
      case 4u:
        v22 = *((_WORD *)a4 + 3);
        if ( v22 == 29 )
          goto LABEL_17;
        if ( v22 == 30 )
        {
          v34 = a6;
          v32 = a5;
          func = get_func(*(_QWORD *)(a2 + 16));
          a5 = v32;
          a6 = v34;
          if ( func )
          {
            if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
              goto LABEL_17;
          }
        }
        break;
      case 5u:
        if ( a3 != 33 )
        {
          if ( a3 == 135 )
            break;
          if ( a3 != 31 )
            goto LABEL_17;
        }
        v24 = *a4;
        if ( !(_BYTE)v24 )
          goto LABEL_17;
        v25 = a2 + 40LL * (v24 - 1);
        if ( *(_BYTE *)(v25 + 41) == 1 )
        {
          v26 = *(_WORD *)(v25 + 46);
          if ( v26 == 29 || !v26 )
            goto LABEL_17;
        }
        break;
      case 2u:
        break;
      default:
LABEL_17:
        v33 = a6;
        v31 = a5;
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        v21 = is_off(flags, *a4);
        a5 = v31;
        a6 = v33;
        if ( !v21 )
          *(_BYTE *)(*(_QWORD *)(a1 + 616) + 24LL) = 1;
        break;
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 26);
  v15 = v14 - 2;
  if ( (((_WORD)v14 - 2) & 0xFFFD) != 0 )
  {
    if ( under_debugger )
      BUG();
    interr(10361);
    sub_1B910(10361, v15, v27, v28, v29, v30, a7);
  }
  else
  {
    *(_BYTE *)(a2 + 33) |= 2u;
    v16 = *(__int64 ***)(a1 + 616);
    if ( v16 )
    {
      v17 = 8 * (unsigned __int16)v14;
      sub_1B520(v16, v17, a5, a6);
      if ( a8 != -1 )
      {
        v18 = *(__int64 ***)(a1 + 616);
        if ( v18 )
        {
          sub_1B520(v18, v17, a7, a8);
          if ( a10 != -1 )
          {
            v19 = *(__int64 ***)(a1 + 616);
            if ( v19 )
              sub_1B520(v19, v17, a9, a10);
          }
        }
      }
    }
  }
}
