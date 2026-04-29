__int64 __fastcall sub_FCD0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int dword; // r15d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)a2 + 4LL;
  v24 = *(_QWORD *)a2;
  result = 0;
  v23 = 0;
  if ( v4 < v3 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)is_loaded(v4) )
        return v23;
      v10 = v4 + 4;
      dword = get_dword(v4, a2, v7, v8, v9);
      if ( (dword & 0xFFEF0FF0) != 0xE08F0000 )
        goto LABEL_12;
      a2 = dword;
      if ( (((unsigned __int8)dword ^ (unsigned __int8)((unsigned __int64)dword >> 12)) & 0xF) != 0 )
        goto LABEL_12;
      v15 = get_dword(v4 - 4, dword, v11, v12, v13);
      a2 = v15 & 0xFF7F0000;
      if ( (_DWORD)a2 != -450953216 || (((unsigned __int16)v15 ^ (unsigned __int16)dword) & 0xF000) != 0 )
        goto LABEL_12;
      v16 = v15 & 0xFFF;
      if ( (v15 & 0x200000) != 0 )
      {
        v18 = v10 - v16;
        if ( v10 - v16 < v24 )
          goto LABEL_12;
      }
      else
      {
        v17 = v4 + v16;
        if ( v3 < v17 + 8 )
          goto LABEL_12;
        v18 = v17 + 4;
      }
      a2 = *(_QWORD *)(a3 + 8);
      v25 = sub_4A750(a3 + 16, a2, 0);
      if ( v25 )
      {
        v22 = v4 + 8 + (unsigned int)get_dword(v18, a2, v19, v20, v21);
        if ( v22 == v25 )
        {
          v26 = v22;
          put_dword(v4, 3785359360LL);
          sub_42050(a1, v18, v26, v26 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 328LL), 0, 4, 0, 8, 0);
          a2 = v4 - 4;
          sub_40E20(a1, v4 - 4, 0);
          ++v23;
          v4 += 8LL;
          goto LABEL_13;
        }
      }
LABEL_12:
      v4 += 4LL;
LABEL_13:
      if ( v4 >= v3 )
        return v23;
    }
  }
  return result;
}
