__int64 __fastcall sub_386FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 item_end; // rax
  unsigned __int64 head; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  __int64 i; // rax
  _QWORD *func; // rax
  __int16 v25; // dx
  char v26; // r13
  int v27; // ebx
  __int64 j; // rax
  __int64 v29; // rdi
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v31; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v32; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v34; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v36; // [rsp+30h] [rbp-48h] BYREF
  __int128 v37; // [rsp+38h] [rbp-40h]
  unsigned __int64 v38; // [rsp+48h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned __int64 *, __int64, __int64))callui)(
                          9,
                          0,
                          &v32,
                          &v33,
                          a5,
                          a6) )
  {
    item_end = v33;
  }
  else
  {
    callui(11, &v36, v7, v8, v9, v10, v30, v31, v32, v33);
    v32 = v36;
    item_end = get_item_end(v36);
    v33 = item_end;
  }
  head = (unsigned __int64)v32;
  v36 = nullptr;
  v37 = 0;
  while ( head < item_end )
  {
    if ( (~((unsigned __int16)get_flags_ex(head, 4) >> 8) & 6) == 0 )
    {
      v13 = v37;
      v14 = v36;
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
      {
        v36 = (_QWORD *)qvector_reserve(&v36, v36, v37 + 1, 8);
        v14 = v36;
        v13 = v37;
      }
      v14[v13] = head;
      *(_QWORD *)&v37 = v37 + 1;
    }
    head = next_head(head, v33);
    item_end = v33;
  }
  if ( (_QWORD)v37 )
  {
    v16 = *(_QWORD *)(a1 + 104);
    v34 = (_QWORD *)*v36;
    v17 = v34;
    if ( (unsigned __int8)netnode_charval(v16, v34, 256) )
    {
      v22 = 0;
      for ( i = 0; v22 < (unsigned __int64)v37; i = v22 )
      {
        v17 = (_QWORD *)v36[i];
        netnode_supdel(*(_QWORD *)(a1 + 104), v17, 256);
        ++v22;
      }
    }
    else
    {
      func = (_QWORD *)get_func(v32);
      v25 = 0;
      if ( func )
        v25 = func[1] - v33 < (unsigned __int64)v32 - *func;
      HIWORD(v31) = v25;
      v17 = &v35;
      v35 = (_QWORD *)v37;
      if ( (unsigned int)sub_337C70(
                           (__int64)"Mark skippable instructions\n"
                                    "\n"
                                    "The marked instructions will be skipped during decompilation.\n"
                                    "%D instructions at %$ will be marked.\n"
                                    "Please select the mark type:\n"
                                    "<~P~rolog:R>\n"
                                    "<~E~pilog:R>\n"
                                    "<~S~witch:R>>\n"
                                    "\n",
                           &v35,
                           &v34,
                           (char *)&v31 + 6) )
      {
        v26 = 3;
        if ( HIWORD(v31) != 2 )
          v26 = (HIWORD(v31) == 1) + 1;
        v27 = 0;
        for ( j = 0; v27 < (unsigned __int64)v37; j = v27 )
        {
          v29 = *(_QWORD *)(a1 + 104);
          BYTE5(v31) = v26;
          netnode_supset(v29, v36[j], (char *)&v31 + 5, 1, 256);
          ++v27;
        }
        v17 = v35;
        sub_68D20((__int64)"%llu instructions will be skipped during decompilation\n", v35);
      }
    }
    callui(10, v17, v18, v19, v20, v21, v30, v31, v32, v33);
  }
  else
  {
    sub_2B0270((__int64)"AUTOHIDE NONE\nPlease select instruction(s)");
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return 1;
}
