void __fastcall sub_2D4CE0(__int64 a1, const char *a2, int *a3, __int64 a4, __int16 a5)
{
  unsigned __int8 v7; // al
  __int64 view_options; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 hidden_range; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v18; // [rsp+10h] [rbp-108h]
  _BYTE v19[16]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-C8h] BYREF
  int v22; // [rsp+58h] [rbp-C0h]
  const char *v23; // [rsp+60h] [rbp-B8h]
  __int64 v24[4]; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD v25[18]; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+D8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 == (const char *)-1LL || !getseg(a2) )
  {
    sub_2D1400(a1, a2);
  }
  else
  {
    v7 = getinf_flag(2, 128);
    view_options = get_view_options(v7);
    dto_copy_from_inf(view_options);
    dto_init(v19, 0);
    dto_copy_from_inf(v19);
    v9 = get_view_options(0);
    dto_copy_to_inf(v9);
    dto_init(v20, 0);
    dto_copy_from_inf(v20);
    v18 = getinf(48);
    setinf_flag(44, 32, 0);
    v10 = a4;
    setinf(48, v18 & 0xFB);
    setinf(47, a5);
    setinf_flag(2, 128, 0);
    setinf(40, 16);
    if ( a4 == -1 )
      v10 = (__int64)a2;
    v11 = getseg(v10);
    v12 = v11;
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 44) & 4) != 0 )
        set_visible_segm(v11, 1);
      else
        v12 = 0;
    }
    sub_2D2BA0((__int64)v24, v10);
    hidden_range = get_hidden_range(v10);
    v14 = hidden_range;
    if ( hidden_range )
    {
      if ( *(_BYTE *)(hidden_range + 40) )
      {
        v14 = 0;
      }
      else
      {
        *(_BYTE *)(hidden_range + 40) = 1;
        update_hidden_range(hidden_range);
      }
    }
    v23 = a2;
    v22 = 0;
    v21 = &idaplace_t___vtable;
    sub_2D20C0((__int64)v25, (__int64)&v21, (__int64)a2, a4);
    sub_2D42D0(v25, a1, (int)a2, a3, 1);
    dto_copy_to_inf(v20);
    setinf(48, v18);
    if ( v14 )
    {
      v15 = get_hidden_range(v10);
      *(_BYTE *)(v15 + 40) = 0;
      update_hidden_range(v15);
    }
    sub_2D2DA0(v24, v18);
    if ( v12 )
    {
      v16 = getseg(v10);
      set_visible_segm(v16, 0);
    }
    dto_copy_to_inf(v19);
  }
}
