__int64 __fastcall sub_FF1F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rsi
  int v7; // edi
  int v8; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-A0h]
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+20h] [rbp-88h]
  unsigned int v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  int v14; // [rsp+40h] [rbp-68h]
  char v15; // [rsp+48h] [rbp-60h]
  unsigned __int64 v16; // [rsp+4Ch] [rbp-5Ch]
  __int64 v17; // [rsp+58h] [rbp-50h]
  __int128 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp-38h]
  char v20; // [rsp+78h] [rbp-30h]
  unsigned __int64 v21; // [rsp+88h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 12);
  v21 = __readfsqword(0x28u);
  if ( v3 <= 1 )
  {
    v8 = -2;
    v9 = -1;
    v10 = 0;
    if ( v3 )
      v7 = dword_244114;
    else
      v7 = dword_244118;
    if ( (unsigned __int8)sub_CE9B0(v7, (__int64)&v8) )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 704LL))(a3, (unsigned int)v9, 1, 0);
    if ( v8 >= -1 && v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else if ( v3 - 2 <= 1 )
  {
    v11 = 0;
    v16 = 0xFFFFFFFEFFFFFFFFLL;
    v8 = 0;
    v9 = 0;
    v10 = 0xFFFFFFFFFFFFFFFFLL;
    v12 = -1;
    v13 = 0;
    v14 = -1;
    v15 = 0;
    v17 = -1;
    v19 = 0xFFFFFFFFLL;
    v20 = 0;
    v18 = 0;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64))sub_15EC40)(a3, &v8, 2) == 5 )
    {
      v5 = v12;
      if ( *(_DWORD *)(a1 + 12) == 2 )
      {
        if ( v12 == -1 )
          LODWORD(v5) = v16;
        sub_1644F0((unsigned int)v5);
      }
      else
      {
        if ( v12 == -1 )
          v5 = (unsigned int)v16;
        sub_FDED0(a3, v5);
      }
    }
    if ( SHIDWORD(v16) >= -1 && v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( *((_QWORD *)&v10 + 1) )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return 1;
}

