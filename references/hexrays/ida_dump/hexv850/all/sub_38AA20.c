unsigned __int64 __fastcall sub_38AA20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  char tinfo_property; // al
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rsi
  _QWORD v15[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-B8h]
  __int128 v17; // [rsp+18h] [rbp-B0h]
  __int64 v18; // [rsp+28h] [rbp-A0h]
  __int128 v19; // [rsp+30h] [rbp-98h]
  _OWORD v20[3]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+70h] [rbp-58h]
  int v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  char v24; // [rsp+88h] [rbp-40h]
  unsigned __int64 v25; // [rsp+98h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_QWORD *)a1 = &off_4BA4F8;
  *(_QWORD *)(a1 + 40) = 0;
  copy_tinfo_t(a1 + 40, a3);
  *(_QWORD *)(a1 + 48) = 0;
  copy_tinfo_t(a1 + 48, a4);
  *(_DWORD *)(a1 + 56) = a5;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 40), 2);
  v9 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 33) = (tinfo_property & 0x3F) == 29;
  v10 = get_tinfo_property(v9, 2);
  v11 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 32) = (v10 & 0x3F) == 29;
  *(_QWORD *)(a1 + 24) = get_tinfo_size(0, v11, 0);
  v12 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v12 != -1 )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15[1] = 0;
      v16 = 0;
      v18 = 0;
      v21 = 1;
      v22 = -1;
      v23 = 0;
      v24 = 0;
      v15[0] = v12;
      v17 = 0;
      v19 = 0;
      v20[0] = 0;
      find_tinfo_udt_member(v15, v14, 1);
      *(_QWORD *)(a1 + 16) = v15[0] >> 3;
      clear_tinfo_t(v20);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}
