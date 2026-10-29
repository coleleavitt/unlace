__int64 __fastcall sub_7AA2F0(__int64 a1, _BYTE *a2, unsigned __int8 a3)
{
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int16 v13; // dx
  __int64 result; // rax
  _QWORD *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx

  if ( (a2[28] & 0x7F) != 0x22 )
    goto LABEL_10;
  v6 = sub_789AD0((__int64)a2, 1);
  if ( !v6 )
    v6 = a2;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6) + 82) & 0x40) == 0
    && (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6) + 83) & 2) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
  }
  v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
  v8 = v7;
  if ( (*(_BYTE *)(v7 + 82) & 0xC) != 0 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x24 )
  {
    v17 = sub_798D40(v7);
    if ( (unsigned int)sub_6BE4E0(v17, v8) )
    {
LABEL_8:
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
      goto LABEL_9;
    }
    if ( (unsigned __int8)sub_77E3E0((__int64)a2) )
      goto LABEL_23;
LABEL_10:
    if ( (a2[29] & 2) != 0 )
      goto LABEL_11;
    goto LABEL_24;
  }
LABEL_9:
  if ( !(unsigned __int8)sub_77E3E0((__int64)a2) )
    goto LABEL_10;
LABEL_23:
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
  if ( (a2[29] & 2) != 0 )
  {
LABEL_11:
    v9 = *(_QWORD *)(a1 + 104);
    if ( (char)a2[82] < 0 )
    {
      sub_6E77B0((unsigned __int64 *)(v9 + 96), v9);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) = (((a3 | (unsigned __int8)(*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7))
                                                & 0x3F) << 7)
                                              | *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0xE07F;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v19 = *(_QWORD *)(a1 + 128);
      v20 = *(_DWORD *)(v19 + 4);
      v21 = v20 & 0xFFF81FFF;
      result = (unsigned __int8)((a3 | (v20 >> 13)) & 0x3F) << 13;
      *(_DWORD *)(v19 + 4) = result | v21;
    }
    else
    {
      v10 = (unsigned __int64 *)(v9 + 96);
      if ( (a2[83] & 1) != 0 )
      {
        sub_6E77B0(v10, v9);
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) = (((a3
                                                    | (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 13))
                                                   & 0x3F) << 13)
                                                 | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0xFFF81FFF;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v11 = *(_QWORD *)(a1 + 128);
        v12 = *(_WORD *)(v11 + 6);
        v13 = v12 & 0xFE07;
        result = 8 * ((a3 | (unsigned __int8)(v12 >> 3)) & 0x3Fu);
        *(_WORD *)(v11 + 6) = result | v13;
      }
      else
      {
        sub_6E77B0(v10, v9);
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 6LL) = (8
                                                 * ((a3 | (unsigned __int8)(*(_WORD *)(*(_QWORD *)(a1 + 128) + 6LL) >> 3))
                                                  & 0x3F))
                                                | *(_WORD *)(*(_QWORD *)(a1 + 128) + 6LL) & 0xFE07;
        v15 = sub_789AD0((__int64)a2, 1);
        if ( !v15 )
          v15 = a2;
        if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v15 + 32LL))(v15) + 82) & 0x40) != 0
          || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 32LL))(v15), (*(_BYTE *)(result + 83) & 2) != 0) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v16 = *(_QWORD *)(a1 + 128);
          result = 2 * ((a3 | (*(_BYTE *)(v16 + 7) >> 1)) & 0x3Fu);
          *(_BYTE *)(v16 + 7) = (2 * ((a3 | (*(_BYTE *)(v16 + 7) >> 1)) & 0x3F)) | *(_BYTE *)(v16 + 7) & 0x81;
        }
      }
    }
    return result;
  }
LABEL_24:
  v18 = sub_789AD0((__int64)a2, 1);
  if ( !v18 )
    v18 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 32LL))(v18);
  if ( (*(_BYTE *)(result + 82) & 0x40) == 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 32LL))(v18);
    if ( (*(_BYTE *)(result + 83) & 2) == 0 )
      goto LABEL_11;
  }
  return result;
}

