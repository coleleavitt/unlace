_BOOL8 __fastcall sub_117A00(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int aflags; // edx
  __int64 v6; // r9
  _BOOL8 result; // rax
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 item_end; // rax
  __int64 v14; // [rsp+0h] [rbp-198h] BYREF
  __int64 v15; // [rsp+8h] [rbp-190h] BYREF
  __int128 v16; // [rsp+10h] [rbp-188h] BYREF
  __int64 v17; // [rsp+20h] [rbp-178h]
  __int64 v18; // [rsp+28h] [rbp-170h]
  __int64 v19; // [rsp+30h] [rbp-168h]
  char v20; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v21[4]; // [rsp+178h] [rbp-20h] BYREF

  v21[0] = __readfsqword(0x28u);
  v15 = a2;
  if ( a2 == -1
    || *(char *)(*(_QWORD *)(a1 + 8) + 10LL) >= 0
    || (HIWORD(v14) = 257, sub_CB3B0(0x2Du, &v15, (char *)&v14 + 6, (char *)&v14 + 7) != 1) )
  {
    v15 = a2;
    v4 = a2;
  }
  else
  {
    v4 = v15;
  }
  aflags = get_aflags(v4);
  result = 1;
  if ( (aflags & 0x400000) == 0 )
  {
    v17 = -1;
    v8 = &v20;
    v18 = 0;
    v19 = 0;
    v16 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 40;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *((_QWORD *)v8 - 2) = 0;
    }
    while ( v21 != (_QWORD *)v8 );
    if ( (int)((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, _QWORD, _QWORD, __int64, double, __int64, __int64))decode_insn)(
                &v16,
                a2,
                v21,
                0,
                0,
                v6,
                0.0,
                v14,
                v15) > 0
      && (a3
       || (unsigned __int8)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))is_call_insn)(
                             &v16,
                             a2,
                             v9,
                             v10,
                             v11,
                             v12,
                             v14,
                             v15)) )
    {
      item_end = get_item_end(v15);
      return (get_flags_ex(item_end, 4) & 0x10000) == 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
