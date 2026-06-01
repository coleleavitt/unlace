__int64 __fastcall sub_38C260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 item_end; // rax
  unsigned __int64 head; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 i; // rax
  _QWORD *func; // rax
  __int16 v23; // dx
  char v24; // r13
  int j; // ebx
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v28; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-48h] BYREF
  __int128 v33; // [rsp+38h] [rbp-40h]
  unsigned __int64 v34; // [rsp+48h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned __int64 *, __int64, __int64))callui)(
                          9,
                          0,
                          &v28,
                          &v29,
                          a5,
                          a6) )
  {
    item_end = v29;
  }
  else
  {
    callui(11, &v32, v6, v7, v8, v9, v26, v27, v28, v29);
    v28 = v32;
    item_end = get_item_end();
    v29 = item_end;
  }
  head = (unsigned __int64)v28;
  v32 = nullptr;
  v33 = 0;
  while ( head < item_end )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      v12 = v33;
      v13 = v32;
      if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v32 = (_QWORD *)qvector_reserve((__int64)&v32, (__int64)v32, v33 + 1, 8);
        v13 = v32;
        v12 = v33;
      }
      v13[v12] = head;
      *(_QWORD *)&v33 = v33 + 1;
    }
    head = next_head();
    item_end = v29;
  }
  if ( (_QWORD)v33 )
  {
    v15 = (_QWORD *)*v32;
    v30 = *v32;
    if ( (unsigned __int8)netnode_charval() )
    {
      v20 = 0;
      for ( i = 0; v20 < (unsigned __int64)v33; i = v20 )
      {
        v15 = (_QWORD *)v32[i];
        netnode_supdel();
        ++v20;
      }
    }
    else
    {
      func = (_QWORD *)get_func();
      v23 = 0;
      if ( func )
        v23 = func[1] - v29 < (unsigned __int64)v28 - *func;
      HIWORD(v27) = v23;
      v15 = &v31;
      v31 = (_QWORD *)v33;
      if ( (unsigned int)sub_33CF00(
                           (__int64)"Mark skippable instructions\n"
                                    "\n"
                                    "The marked instructions will be skipped during decompilation.\n"
                                    "%D instructions at %$ will be marked.\n"
                                    "Please select the mark type:\n"
                                    "<~P~rolog:R>\n"
                                    "<~E~pilog:R>\n"
                                    "<~S~witch:R>>\n"
                                    "\n",
                           &v31,
                           &v30,
                           (char *)&v27 + 6) )
      {
        v24 = 3;
        if ( HIWORD(v27) != 2 )
          v24 = (HIWORD(v27) == 1) + 1;
        for ( j = 0; j < (unsigned __int64)v33; ++j )
        {
          BYTE5(v27) = v24;
          netnode_supset();
        }
        v15 = v31;
        sub_6D0A0((__int64)"%llu instructions will be skipped during decompilation\n", v31);
      }
    }
    callui(10, v15, v16, v17, v18, v19, v26, v27, v28, v29);
  }
  else
  {
    sub_2B4E70((__int64)"AUTOHIDE NONE\nPlease select instruction(s)");
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)v32);
  }
  return 1;
}
