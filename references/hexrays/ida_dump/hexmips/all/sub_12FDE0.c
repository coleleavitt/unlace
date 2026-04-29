__int64 __fastcall sub_12FDE0(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  bool v5; // zf
  unsigned int v7; // r12d
  __int128 v9; // rdi
  _QWORD *v11; // r12
  __int64 v12; // r13
  __int64 (__fastcall *v13)(__int64); // rax
  char v14; // al
  _QWORD v15[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-50h] BYREF
  __int128 v17; // [rsp+18h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v5 = *a2 == 10;
  v18 = __readfsqword(0x28u);
  if ( v5 )
    *(_BYTE *)(a1 + 40) = 1;
  v7 = 0;
  if ( !a4 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v9 + 1) = v15;
    v15[0] = 0;
    v15[1] = 0;
    v16 = 0;
    v17 = 0;
    sub_11FCA0(v9, (__int64)a2, 1u, 0xFFFF0000);
    v11 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( !(unsigned __int8)sub_60580(v11, v15) )
    {
      v14 = sub_3136F0(v11 + 2, &v16);
      v7 = 0;
      if ( !v14 )
      {
LABEL_10:
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
        return v7;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 40LL) = 0;
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL);
    if ( v13 == sub_12FD70 )
    {
      v7 = 0;
      if ( *(_BYTE *)(v12 + 24) )
        goto LABEL_8;
      v7 = sub_12C280(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 480LL) + 112LL),
             *(const __m128i **)(v12 + 48),
             *(_QWORD *)(v12 + 56),
             *(_DWORD **)(v12 + 16),
             *(_QWORD *)(v12 + 56),
             *(_QWORD *)(v12 + 64) + 32LL,
             *(_QWORD *)(v12 + 64) + 48LL,
             *(_DWORD *)(v12 + 80));
      if ( v7 )
      {
        sub_12FB30(v12);
        v12 = *(_QWORD *)(a1 + 48);
        v7 = 0;
LABEL_8:
        if ( *(_BYTE *)(v12 + 40) )
          *(_BYTE *)(a1 + 40) = 1;
        goto LABEL_10;
      }
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, _BYTE *))v13)(*(_QWORD *)(a1 + 48), a2);
    }
    v12 = *(_QWORD *)(a1 + 48);
    goto LABEL_8;
  }
  return v7;
}
