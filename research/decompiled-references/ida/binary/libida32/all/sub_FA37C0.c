__int64 __fastcall sub_FA37C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  unsigned __int8 v5; // r13
  unsigned int v6; // r15d
  __int64 v8; // rdi
  unsigned int v9; // eax
  _QWORD v10[6]; // [rsp+0h] [rbp-D8h] BYREF
  char v11; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v12; // [rsp+40h] [rbp-98h]
  _BYTE v13[8]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-80h]
  unsigned int v15; // [rsp+5Ch] [rbp-7Ch]
  void *v16; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+70h] [rbp-68h] BYREF

  sub_FA34F0((__int64)v13, a1, a2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v15;
  v5 = sub_FB0100(*(_QWORD *)(a1 + 32), v15, v14, a1);
  if ( v5 > 3u && (++*(_DWORD *)(a1 + 196), (unsigned __int8)sub_FB0D30(v3, v4)) )
  {
    ++*(_DWORD *)(a1 + 200);
    v6 = v5;
    if ( *(_BYTE *)(a1 + 6) )
      goto LABEL_15;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 6) )
    {
LABEL_15:
      LODWORD(v3) = 0;
      goto LABEL_16;
    }
    v6 = v5;
    if ( v5 == 1 )
    {
      if ( *(_BYTE *)(a1 + 194) || !*(_DWORD *)(a1 + 204) )
        goto LABEL_15;
      if ( v15 != 98 )
      {
        LODWORD(v3) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), 1, v13);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
        goto LABEL_16;
      }
LABEL_26:
      *(_BYTE *)(a1 + 194) = 1;
      goto LABEL_9;
    }
  }
  if ( *(_DWORD *)(a1 + 204) == 5 )
  {
    *(_BYTE *)(a1 + 194) = 1;
    *(_DWORD *)(a1 + 204) = v6;
    goto LABEL_12;
  }
  LODWORD(v3) = *(unsigned __int8 *)(a1 + 194);
  *(_DWORD *)(a1 + 204) = v6;
  if ( (_BYTE)v3 )
  {
LABEL_12:
    if ( v5 > 3u && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48)) )
      ++*(_DWORD *)(a1 + 212);
    goto LABEL_15;
  }
  if ( !v6 )
    goto LABEL_15;
  if ( v5 > 3u )
  {
    if ( (unsigned __int8)sub_FB0D30(*(_QWORD *)(a1 + 32), v4) )
      *(_BYTE *)(a1 + 195) = 1;
    if ( (unsigned __int8)sub_FAF930(*(_QWORD *)(a1 + 32), v4) )
      *(_BYTE *)(a1 + 193) = 1;
    v8 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 192) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
      ++*(_DWORD *)(a1 + 212);
    v9 = *(_DWORD *)(a1 + 20);
    if ( v9 )
    {
      if ( v9 < *(_DWORD *)(a1 + 212) && v6 == 4 )
      {
        v10[0] = 0;
        v10[1] = a1 + 264;
        v10[3] = 0x6200000000LL;
        v10[2] = a1;
        v10[4] = &v11;
        v10[5] = 0;
        v11 = 0;
        v12 = 1;
        sub_AC6300((__int64)v10);
        goto LABEL_16;
      }
    }
  }
  if ( v15 == 98 )
    goto LABEL_26;
LABEL_9:
  (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v6, v13);
  LOBYTE(v3) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48)) & (v6 == 3);
  if ( (_BYTE)v3 )
    ++*(_DWORD *)(a1 + 208);
  else
    LODWORD(v3) = 1;
LABEL_16:
  if ( v16 != &v17 )
    operator delete(v16);
  return (unsigned int)v3;
}

