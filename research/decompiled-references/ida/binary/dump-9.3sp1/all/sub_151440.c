__int64 __fastcall sub_151440(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  _BYTE *v11; // rdi
  _BYTE *v12; // rbp
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _QWORD *v17; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+8h] [rbp-B0h]
  _BYTE v19[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v20; // [rsp+28h] [rbp-90h]
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[11]; // [rsp+60h] [rbp-58h] BYREF

  v23[3] = __readfsqword(0x28u);
  if ( (a4 & 8) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(a3 + 68) < *(_DWORD *)(v4 + 84) && *(int *)(a3 + 36) <= 16 )
    return 0;
  v7 = *(_QWORD *)(a3 + 40);
  if ( (*(_BYTE *)(v7 + 4) & 0x10) != 0 || !a2 && (*(_BYTE *)(a1 + 605) & 0x40) != 0 )
    return 0;
  v8 = *(_QWORD *)(a3 + 40);
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  v23[1] = 0;
  v20 = 0;
  sub_1253A0((__int64)v19, v8);
  v9 = 11 - *(unsigned __int8 *)(a1 + 145);
  v10 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a1 + 605) & 0x40) != 0 )
  {
    if ( v10 == v9 )
    {
      v11 = (_BYTE *)v7;
      v12 = v19;
      if ( !v7 )
        goto LABEL_11;
    }
    else
    {
      v12 = v19;
      v11 = v19;
    }
  }
  else if ( v10 == v9 )
  {
    v11 = (_BYTE *)v7;
    v12 = nullptr;
    if ( !v7 )
      goto LABEL_14;
  }
  else
  {
    v12 = nullptr;
    v11 = v19;
  }
  if ( !(unsigned __int8)sub_12CBA0((__int64)v11, (unsigned __int64 *)v4, *(_DWORD *)(a3 + 36) - *(_DWORD *)(a3 + 68)) )
    goto LABEL_24;
  if ( v12 )
  {
LABEL_11:
    v13 = *(_DWORD *)(a3 + 68);
    v18 = 0;
    *((_DWORD *)v12 + 17) = v13;
    v17 = nullptr;
    v17 = (_QWORD *)qvector_reserve((__int64)&v17, 0, 1, 8);
    v17[(_QWORD)v18] = v12;
    *(_QWORD *)&v18 = v18 + 1;
    if ( !sub_A4C00(a2, a3, (const void **)&v17, v14) )
    {
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree((__int64)v17);
      }
      goto LABEL_14;
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree((__int64)v17);
    }
LABEL_24:
    v15 = 0;
    goto LABEL_15;
  }
LABEL_14:
  *(_DWORD *)(v7 + 68) = *(_DWORD *)(a3 + 68);
  *(_DWORD *)a3 = 4;
  v15 = 1;
LABEL_15:
  sub_11CDA0((__int64)v23);
  sub_11CDA0((__int64)v22);
  sub_11CDA0((__int64)v21);
  return v15;
}
