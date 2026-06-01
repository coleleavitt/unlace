__int64 __fastcall sub_2A90F0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-4Ch]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int128 v18; // [rsp+38h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 104);
  if ( (*(_BYTE *)(v7 + (int)a3) & 1) != 0 )
  {
    v8 = a1[55];
    v13 = 56;
    v14 = -1;
    v15 = 0;
    v16 = -1;
    v17 = 0;
    v18 = 0;
    if ( v8 )
      v8 = *(_QWORD *)(v8 + 8);
    v9 = *(const char **)(v8 + 72);
    if ( !(unsigned __int8)get_node_info(&v13, v9, a3, v7, a5, a6) )
    {
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17, v9);
      }
      return a4;
    }
    result = (unsigned int)v14;
    if ( v17 )
    {
      v12 = v14;
      *(_QWORD *)&v18 = 0;
      qfree(v17, v9);
      result = v12;
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 736LL))(a1, (unsigned int)a3);
    result = calc_bg_color(v11);
  }
  if ( (_DWORD)result == -1 )
    return a4;
  return result;
}
