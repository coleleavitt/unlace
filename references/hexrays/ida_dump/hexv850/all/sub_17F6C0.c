__int64 __fastcall sub_17F6C0(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v6; // rdi
  unsigned int v7; // eax
  _DWORD *v9; // rbp
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax
  __int64 v20; // rax
  int v21; // [rsp+4h] [rbp-64h]
  char v22[4]; // [rsp+10h] [rbp-58h] BYREF
  int v23; // [rsp+14h] [rbp-54h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)a3;
  v24 = __readfsqword(0x28u);
  v9 = *(_DWORD **)(v6 + 112);
  if ( v7 > 9 )
  {
    if ( v7 != 56 )
      return 0;
    v16 = sub_17F280(v6, a3, a5);
    if ( v16 < 0 )
      return 0;
    v17 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 24LL);
    if ( *(_BYTE *)v17 == 10 )
    {
      sub_1205C0(a1, *(unsigned __int8 **)(v17 + 8));
    }
    else if ( *(_BYTE *)v17 == 2 )
    {
      sub_17EC10((__int64)v9, a1, 2, *(_DWORD *)(v17 + 4), *(_QWORD *)(v17 + 8));
    }
    else
    {
      sub_17ED00(a1, (__int64)v9, *(_QWORD *)(a3 + 24), nullptr, v17, v16);
    }
    *(_DWORD *)(a1 + 4) = v16;
  }
  else
  {
    if ( v7 > 7 )
    {
      if ( !a5 )
        return 0;
    }
    else if ( ((v7 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( v7 != 1 )
        return 0;
      if ( a4 )
      {
        if ( *(_BYTE *)(a3 + 48) != 1 )
          return 0;
        v18 = *(unsigned int *)(a3 + 56);
        v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v9 + 256LL);
        if ( v19 != sub_17E790 )
          LODWORD(v18) = v19(*(_QWORD *)(v6 + 112), v18);
        if ( (_DWORD)v18 != v9[13] && (_DWORD)v18 != v9[14] && (_DWORD)v18 != v9[16] )
          return 0;
      }
      v21 = *(_DWORD *)(a3 + 36);
      sub_11EE80((__int64)v22, (unsigned __int8 *)(a3 + 64));
      sub_17EA50(*(_QWORD *)(a2 + 480), (__int64)v22);
      if ( (unsigned __int8)sub_137C20(a2, a1, (int *)a3, a3 + 48, (__int64)v22, 0xFFFFFFFF) )
      {
        *(_DWORD *)(a1 + 4) = v21;
        sub_1181E0((__int64)v22);
        if ( *(_BYTE *)a1 == 2 )
          sub_17EC10((__int64)v9, a1, 2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 8));
        return 1;
      }
      sub_1181E0((__int64)v22);
      sub_17ED00(a1, (__int64)v9, *(_QWORD *)(a3 + 24), (unsigned __int8 *)(a3 + 48), a3 + 64, *(_DWORD *)(a3 + 36));
      goto LABEL_13;
    }
    if ( a4 )
    {
      v12 = *(_BYTE *)(a3 + 64);
      if ( v12 > 6u )
      {
        if ( v12 != 9 )
          return 0;
      }
      else if ( v12 <= 3u )
      {
        return 0;
      }
    }
    sub_1205C0(a1, (unsigned __int8 *)(a3 + 64));
  }
LABEL_13:
  if ( *(_BYTE *)a1 == 4 )
  {
    if ( !(unsigned __int8)sub_11B9E0(*(_BYTE **)(a1 + 8), (__int64)v9, 0, v13, v14, v15) )
    {
      if ( *(_BYTE *)a1 == 4 )
      {
        if ( (unsigned int)sub_1570B0(*(_QWORD *)(a1 + 8), (_DWORD)v9, 0, 0, 0, 0, 1) )
        {
          v20 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)v20 == 2 && *(_BYTE *)(v20 + 48) == 10 )
          {
            sub_11EE80((__int64)v22, *(unsigned __int8 **)(v20 + 56));
            v23 = *(_DWORD *)(a1 + 4);
            sub_117E50((char *)a1, v22);
            sub_1181E0((__int64)v22);
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
