__int64 __fastcall sub_158ADE0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  bool v20; // [rsp+6h] [rbp-C2h] BYREF
  bool v21; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v23[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  if ( !a2 || (result = sub_1021680(*(_QWORD *)(a1 + 272), a2), (_DWORD)result == 3) || !(_DWORD)result )
  {
    result = *(_QWORD *)(a3 + 56);
    v5 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 4) != 0 )
    {
      if ( !*(_QWORD *)(v5 + 32) )
        return result;
    }
    else if ( !v5 )
    {
      return result;
    }
    v6 = a2;
    v7 = a1 + 8;
    sub_168B9F0(v23, a1 + 8, v6, 7444, 0);
    if ( v26 )
    {
      v7 = a3;
      sub_157E260(&v25, a3);
    }
    else if ( v28 )
    {
      v15 = sub_168B9E0(v23);
      v18 = v24;
      if ( v24 )
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
      v22 = v18;
      v19 = sub_1587BC0(v15, &v22, v13, v14, v16, v17);
      v7 = a3;
      sub_157E260((unsigned __int8 **)(*v19 + 32LL * v27 + 8), a3);
    }
    sub_15F7200(v23);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0
      && ((*(_BYTE *)(a3 + 28) & 0x7F) == 0x24
       || (*(_DWORD *)(a3 + 40) & 7) == 6
       && ((*(_DWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL) - 2) & 0xFFFFFFFD) == 0) )
    {
      v9 = (_QWORD *)(*(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
        v9 = (_QWORD *)v9[4];
      v10 = *(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 26
        || (result = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(result + 16) == 26)
        && (result = sub_F63050(v10, v7, v9, v8), (v10 = result) != 0) )
      {
        sub_168B9F0(v23, a1 + 8, *(unsigned int *)(a3 + 24), 6417, 0);
        v20 = (*(_BYTE *)(a3 + 28) & 0x7F) != 36;
        v11 = sub_1588420((__int64)v23, (unsigned __int8 *)&v20);
        v21 = (*(_BYTE *)(v10 + 19) & 0x1E) == 0;
        v12 = sub_1588420(v11, (unsigned __int8 *)&v21);
        v22 = sub_B77840(a3);
        sub_1587DB0(v12, &v22);
        return sub_15F7200(v23);
      }
    }
    else
    {
      sub_168B9F0(v23, a1 + 8, *(unsigned int *)(a3 + 24), 6418, 0);
      v22 = sub_B77840(a3);
      sub_1587DB0((__int64)v23, &v22);
      return sub_15F7200(v23);
    }
  }
  return result;
}
